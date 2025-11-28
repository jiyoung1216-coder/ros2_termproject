#!/usr/bin/env python3
import math
import time

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.action import ActionServer, ActionClient, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle

from ramen_interfaces.msg import CookedRamen
from ramen_interfaces.action import ServeRamen


class RobotNode(Node):

    # 테이블 좌표 (예시)
    TABLE_COORDS = {
        1: (1.0, 1.0), 2: (2.0, 1.0), 3: (3.0, 1.0),
        4: (1.0, 2.0), 5: (2.0, 2.0), 6: (3.0, 2.0),
        7: (1.0, 3.0), 8: (2.0, 3.0), 9: (3.0, 3.0),
    }

    ORIGIN = (0.0, 0.0)          # 원점(주방 위치)
    MOVE_SPEED_PER_SEC = 0.5     # 1초에 이동하는 거리(m)

    def __init__(self):
        super().__init__('robot_node')

        # 현재 로봇 위치
        self.current_pos = list(self.ORIGIN)

        # 현재 배달 중인지 여부
        self.busy = False

        # 대기 중인 음식(재조리 등)을 저장하는 큐
        self.pending_food = []

        # 콜백 그룹
        self.callback_group = ReentrantCallbackGroup()

        # 주방 → 조리 완료 음식 구독
        self.food_subscription = self.create_subscription(
            CookedRamen,
            'food_ready',
            self.food_ready_callback,
            10,
            callback_group=self.callback_group
        )

        # 테이블로 배달 완료되었을 때 알림 발행
        self.delivery_publisher = self.create_publisher(
            CookedRamen,
            'delivery_arrived',
            10
        )

        # 서빙 액션 서버 (로봇이 실제로 움직이는 쪽)
        self.serve_action_server = ActionServer(
            self,
            ServeRamen,
            'serve_ramen',
            execute_callback=self.serve_execute_callback,
            goal_callback=self.serve_goal_callback,
            cancel_callback=self.serve_cancel_callback,
            callback_group=self.callback_group
        )

        # 서빙 액션 클라이언트 (자기 자신 서버로 goal 보내서 feedback/result 받는 용도)
        self.serve_action_client = ActionClient(
            self,
            ServeRamen,
            'serve_ramen',
            callback_group=self.callback_group
        )

        self.get_logger().info(
            f'서빙 로봇(RobotNode) 대기 중... 현재 위치: {self.current_pos}'
        )

    # ------------------------------------------------------------------
    # 액션 서버: goal 수락/취소 콜백
    # ------------------------------------------------------------------
    def serve_goal_callback(self, goal_request: ServeRamen.Goal):
        # 여기서는 무조건 수락, 실제 동시성 제어는 busy + 큐로 처리
        self.get_logger().info('새 ServeRamen goal 수락.')
        return GoalResponse.ACCEPT

    def serve_cancel_callback(self, cancel_request):
        self.get_logger().info('ServeRamen 취소 요청 수락.')
        return CancelResponse.ACCEPT

    # ------------------------------------------------------------------
    # food_ready 토픽 콜백: 주방에서 조리 완료 음식 수신
    # ------------------------------------------------------------------
    def food_ready_callback(self, msg: CookedRamen):
        table_num = msg.order.table_number
        self.get_logger().info(
            f'주방에서 음식 수령: 테이블 {table_num} 배달 요청 도착'
        )

        if self.busy:
            # 현재 배달 중이면 큐에 저장
            self.get_logger().warn(
                '현재 배달 중 → 이번 주문은 큐에 저장합니다.'
            )
            self.pending_food.append(msg)
            return

        # 바로 배달 가능하면 goal 전송
        self.send_serve_goal(msg)

    def send_serve_goal(self, food_msg: CookedRamen):
        """ServeRamen 액션 서버에 goal을 비동기 전송."""
        if not self.serve_action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error('ServeRamen 액션 서버를 찾을 수 없습니다.')
            return

        goal_msg = ServeRamen.Goal()
        goal_msg.food_to_serve = food_msg

        self.serve_action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.serve_feedback_callback
        ).add_done_callback(self.serve_goal_response_callback)

    # ------------------------------------------------------------------
    # 액션 클라이언트 콜백들
    # ------------------------------------------------------------------
    def serve_goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warn('ServeRamen goal이 거부되었습니다.')
            return

        self.get_logger().info('ServeRamen goal 수락됨. 결과 대기 중...')
        goal_handle.get_result_async().add_done_callback(
            self.serve_result_callback
        )

    def serve_feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(
            f'[피드백] 상태: {feedback.status}, '
            f'위치: ({feedback.current_x:.1f}, {feedback.current_y:.1f})'
        )

    def serve_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(
            f'서빙 임무 완료! 성공 여부: {result.delivery_success}'
        )
        self.get_logger().info(
            f'로봇 대기 중... 현재 위치: {self.current_pos}'
        )

    # ------------------------------------------------------------------
    # 액션 서버 실제 실행 콜백 (배달 + 복귀 전체 로직)
    # ------------------------------------------------------------------
    def serve_execute_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info('ServeRamen 액션 실행 시작!')
        self.busy = True  # 배달 시작

        try:
            food_to_serve = goal_handle.request.food_to_serve
            table_number = food_to_serve.order.table_number
            target_pos = self.TABLE_COORDS.get(int(table_number))

            if not target_pos:
                self.get_logger().error(
                    f'잘못된 테이블 번호입니다: {table_number}'
                )
                goal_handle.abort()
                return ServeRamen.Result(delivery_success=False)

            # 1) 배달 (현재 위치 → 테이블)
            self.get_logger().info(
                f'배달 시작: {self.current_pos} → {target_pos}'
            )
            self.move_to_target(goal_handle, target_pos, "delivering")

            # 도착 좌표 강제 세팅
            self.current_pos = list(target_pos)
            self.get_logger().info(
                f'테이블 {table_number} 도착! 현재 위치: {self.current_pos}'
            )

            # 테이블에 음식 도착 알림
            self.delivery_publisher.publish(food_to_serve)

            # 도착 피드백
            feedback = ServeRamen.Feedback()
            feedback.current_x = float(self.current_pos[0])
            feedback.current_y = float(self.current_pos[1])
            feedback.status = "arrived"
            goal_handle.publish_feedback(feedback)

            # 테이블에서 잠깐 대기
            time.sleep(2)

            # 2) 복귀 (테이블 → 원점)
            self.get_logger().info(
                f'복귀 시작: {self.current_pos} → {self.ORIGIN}'
            )
            self.move_to_target(goal_handle, self.ORIGIN, "returning")

            # 원점 도착
            self.current_pos = list(self.ORIGIN)
            self.get_logger().info('원점 복귀 완료.')

            goal_handle.succeed()
            return ServeRamen.Result(delivery_success=True)

        finally:
            self.busy = False  # 배달 끝
            # 대기 중인 주문이 있으면 바로 다음 배달 시작
            if self.pending_food:
                next_food = self.pending_food.pop(0)
                self.get_logger().info(
                    f'대기 중이던 주문 발견 → 다음 배달 시작 '
                    f'(테이블 {next_food.order.table_number})'
                )
                # 새 goal 전송 (새 액션 실행은 별도 콜백/스레드에서 돌아감)
                self.send_serve_goal(next_food)
            else:
                self.get_logger().info('대기 중인 주문 없음. 로봇 대기 상태.')

    # ------------------------------------------------------------------
    # 이동 함수: 목표 근처에서 튀지 않고 딱 도착하도록 개선
    # ------------------------------------------------------------------
    def move_to_target(self, goal_handle: ServerGoalHandle, target_pos, status: str):
        """
        현재 위치 self.current_pos 에서 target_pos 까지
        1초에 MOVE_SPEED_PER_SEC 만큼 이동하면서 피드백을 발행.
        목표점에 가까워지면 step을 줄여서 정확히 도착.
        """
        feedback_msg = ServeRamen.Feedback()

        while rclpy.ok():
            if goal_handle.is_cancel_requested:
                self.get_logger().warn('이동 취소됨.')
                goal_handle.canceled()
                return

            dx = target_pos[0] - self.current_pos[0]
            dy = target_pos[1] - self.current_pos[1]
            distance = math.sqrt(dx ** 2 + dy ** 2)

            # 목표 거의 도착 (5cm 이내)
            if distance < 0.05:
                self.current_pos = list(target_pos)
                feedback_msg.current_x = float(self.current_pos[0])
                feedback_msg.current_y = float(self.current_pos[1])
                feedback_msg.status = status
                goal_handle.publish_feedback(feedback_msg)
                break

            # 이번 스텝에서 이동할 거리: 속도 vs 남은 거리 중 작은 값
            step = min(self.MOVE_SPEED_PER_SEC, distance)

            # 방향 단위 벡터
            dir_x = dx / distance
            dir_y = dy / distance

            # 실제 이동
            self.current_pos[0] += dir_x * step
            self.current_pos[1] += dir_y * step

            # 피드백 발행
            feedback_msg.current_x = float(self.current_pos[0])
            feedback_msg.current_y = float(self.current_pos[1])
            feedback_msg.status = status
            goal_handle.publish_feedback(feedback_msg)

            # 1초마다 이동
            time.sleep(1)


def main(args=None):
    rclpy.init(args=args)
    node = RobotNode()

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)

    try:
        executor.spin()
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
