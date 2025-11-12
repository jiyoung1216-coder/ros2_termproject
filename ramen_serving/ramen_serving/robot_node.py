# 이 노드는 /food_ready를 구독하여 배달할 음식을 받습니다.
# /serve_ramen 액션 서버를 운영하며, 스스로 이 액션을 호출하여 배달/복귀를 시뮬레이션합니다.
# 배달/복귀는 좌표 기반으로 1초마다 0.5씩 이동하는 것을 시뮬레이션합니다.

import rclpy
import time
import math
from rclpy.node import Node
from rclpy.action import ActionServer, ActionClient, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle

from ramen_interfaces.msg import CookedRamen
from ramen_interfaces.action import ServeRamen

class RobotNode(Node):
    
    TABLE_COORDS = {
        1: (1.0, 1.0), 2: (2.0, 1.0), 3: (3.0, 1.0),
        4: (1.0, 2.0), 5: (2.0, 2.0), 6: (3.0, 2.0),
        7: (1.0, 3.0), 8: (2.0, 3.0), 9: (3.0, 3.0),
    }
    ORIGIN = (0.0, 0.0)
    MOVE_SPEED_PER_SEC = 0.5 # 초당 x, y 각각 0.5씩 이동

    def __init__(self):
        super().__init__('robot_node')
        
        self.current_pos = list(self.ORIGIN) # 로봇의 현재 위치
        
        # 주방으로부터 조리 완료된 음식을 받음
        self.food_subscription = self.create_subscription(
            CookedRamen,
            'food_ready',
            self.food_ready_callback,
            10)
        
        # 테이블에 배달 도착 알림 발행
        self.delivery_publisher = self.create_publisher(CookedRamen, 'delivery_arrived', 10)
        
        # 서빙 액션 서버 (실제 이동 로직)
        self.serve_action_server = ActionServer(
            self,
            ServeRamen,
            'serve_ramen',
            execute_callback=self.serve_execute_callback,
            goal_callback=lambda req: GoalResponse.ACCEPT, # 모든 요청 수락
            cancel_callback=lambda req: CancelResponse.ACCEPT # 모든 취소 수락
        )
        
        # 서빙 액션 클라이언트 (서버를 호출하기 위함)
        self.serve_action_client = ActionClient(self, ServeRamen, 'serve_ramen')

        self.get_logger().info(f'서빙 로봇(RobotNode) 대기 중... 현재 위치: {self.current_pos}')

    def food_ready_callback(self, msg: CookedRamen):
        self.get_logger().info(f'주방에서 음식 수령: 테이블 {msg.order.table_number}로 배달 시작')
        
        if not self.serve_action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error('ServeRamen 액션 서버를 찾을 수 없습니다.')
            return

        goal_msg = ServeRamen.Goal()
        goal_msg.food_to_serve = msg
        
        self.serve_action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.serve_feedback_callback
        ).add_done_callback(self.serve_goal_response_callback)

    # --- 액션 클라이언트 콜백 ---
    def serve_goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error('서빙 Goal이 거부되었습니다.')
            return
        
        self.get_logger().info('서빙 Goal이 수락되었습니다. 배달/복귀 완료 대기 중...')
        goal_handle.get_result_async().add_done_callback(self.serve_result_callback)

    def serve_feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'[피드백] 상태: {feedback.status}, 위치: ({feedback.current_x:.1f}, {feedback.current_y:.1f})')

    def serve_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'서빙 임무 완료! 성공: {result.delivery_success}')
        self.get_logger().info(f'서빙 로봇(RobotNode) 대기 중... 현재 위치: {self.current_pos}')

    # --- 액션 서버 실행 로직 ---
    def serve_execute_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info('ServeRamen 액션 실행...')
        
        food_to_serve = goal_handle.request.food_to_serve
        table_number = food_to_serve.order.table_number
        target_pos = self.TABLE_COORDS.get(int(table_number))
        
        if not target_pos:
            self.get_logger().error(f'잘못된 테이블 번호입니다: {table_number}')
            goal_handle.abort() # Goal 실패 처리
            return ServeRamen.Result(delivery_success=False)

        # 1. 배달 (원점 -> 테이블)
        self.get_logger().info(f'배달 시작: {self.current_pos} -> {target_pos}')
        self.move_to_target(goal_handle, target_pos, "delivering")
        
        # 도착
        self.get_logger().info(f'테이블 {table_number} 도착! 음식 전달.')
        self.delivery_publisher.publish(food_to_serve) # 테이블 노드에 도착 알림
        
        feedback = ServeRamen.Feedback()
        feedback.current_x, feedback.current_y = float(self.current_pos[0]), float(self.current_pos[1])
        feedback.status = "arrived"
        goal_handle.publish_feedback(feedback)
        
        time.sleep(2) # 음식 내리는 시간 시뮬레이션

        # 2. 복귀 (테이블 -> 원점)
        self.get_logger().info(f'복귀 시작: {self.current_pos} -> {self.ORIGIN}')
        self.move_to_target(goal_handle, self.ORIGIN, "returning")
        
        # 복귀 완료
        self.get_logger().info('원점 복귀 완료.')
        
        goal_handle.succeed() # Goal 성공 처리
        return ServeRamen.Result(delivery_success=True)

    def move_to_target(self, goal_handle: ServerGoalHandle, target_pos, status: str):
        """
        현재 위치(self.current_pos)에서 target_pos까지 1초에 0.5씩 이동 시뮬레이션
        """
        feedback_msg = ServeRamen.Feedback()
        
        while rclpy.ok():
            if goal_handle.is_cancel_requested:
                self.get_logger().warn('이동 취소됨.')
                goal_handle.canceled()
                return

            dx = target_pos[0] - self.current_pos[0]
            dy = target_pos[1] - self.current_pos[1]
            distance = math.sqrt(dx**2 + dy**2)
            
            if distance < 0.1: # 도착
                self.current_pos = list(target_pos)
                break
                
            # 이동 방향 벡터 (정규화)
            move_x = (dx / distance) * self.MOVE_SPEED_PER_SEC
            move_y = (dy / distance) * self.MOVE_SPEED_PER_SEC
            
            # 1초 이동
            self.current_pos[0] += move_x
            self.current_pos[1] += move_y
            
            # 거리가 1초 이동량보다 작으면 그냥 도착시킴 (오버슈팅 방지)
            if distance < self.MOVE_SPEED_PER_SEC:
                self.current_pos = list(target_pos)

            # 피드백 전송
            feedback_msg.current_x = float(self.current_pos[0])
            feedback_msg.current_y = float(self.current_pos[1])
            feedback_msg.status = status
            goal_handle.publish_feedback(feedback_msg)
            
            time.sleep(1) # 1초 대기


def main(args=None):
    rclpy.init(args=args)
    robot_node = RobotNode()
    rclpy.spin(robot_node)
    robot_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()