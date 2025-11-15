#!/usr/bin/env python3
"""
주문 노드 (Order Node)
- 터미널에서 주문 입력
- ProcessPayment 서비스 호출하여 결제 검증
- 결제 성공 시 /new_order 발행
"""

import rclpy
from rclpy.node import Node
from ramen_interfaces.msg import RamenOrder
from ramen_interfaces.srv import ProcessPayment

class OrderNode(Node):
    def __init__(self):
        super().__init__('order_node')
        
        # /new_order 퍼블리셔 (주방으로 주문 전송)
        self.publisher_ = self.create_publisher(RamenOrder, 'new_order', 10)
        
        # ProcessPayment 서비스 클라이언트
        self.payment_client = self.create_client(ProcessPayment, 'process_payment')
        
        self.get_logger().info('🍜 라면 주문 시스템 시작')
        
        # 서비스 서버 대기
        while not self.payment_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('계산 노드(calculator_node)를 기다리는 중...')
        
        self.get_logger().info('✅ 계산 노드 연결 완료!')
        
        # 주문 시작
        self.start_ordering()

    def start_ordering(self):
        """주문 루프 (결제 성공할 때까지 반복)"""
        while rclpy.ok():
            print('\n' + '=' * 50)
            print('🍜 라면 주문 시스템')
            print('=' * 50)
            
            # 1. 주문 입력
            order = self.get_order_input()
            
            # 2. 결제 정보 입력
            payment_method, card_balance = self.get_payment_input()
            
            # 3. 결제 처리 (Service 호출)
            payment_success = self.process_payment(order, payment_method, card_balance)
            
            # 4. 결제 성공 시 주문 전송 및 종료
            if payment_success:
                self.publisher_.publish(order)
                self.get_logger().info(f'✅ 테이블 {order.table_number} 주문이 주방으로 전송되었습니다!')
                print('\n주문이 완료되었습니다. 잠시만 기다려주세요...\n')
                break  # 주문 완료 후 종료
            else:
                print('\n❌ 결제 실패! 주문을 다시 입력해주세요.\n')
                # 루프를 계속하여 다시 주문 입력으로

    def get_order_input(self):
        """주문 정보 입력"""
        order = RamenOrder()
        
        # 테이블 번호
        while True:
            try:
                table_num = int(input("📍 테이블 번호 (1-9): ") or "1")
                if 1 <= table_num <= 9:
                    order.table_number = table_num
                    break
                else:
                    print("⚠️  1~9 사이의 숫자를 입력하세요.")
            except ValueError:
                print("⚠️  숫자를 입력하세요.")
        
        # 라면 종류
        print("\n🍜 라면 메뉴 (3000원):")
        print("   신라면, 진라면, 짜파게티, 안성탕면, 삼양라면, 너구리, 불닭")
        order.ramen_type = input("라면 종류: ") or "신라면"
        
        # 토핑
        print("\n🧀 토핑 옵션:")
        print("   선택안함(0원), 치즈(500원), 떡(500원), 만두(1000원)")
        print("   파(300원), 고추(300원), 계란(500원), 콩나물(500원)")
        print("   햄(1000원), 김치(500원)")
        toppings = input("토핑 (콤마로 구분): ") or "선택안함"
        order.toppings = [t.strip() for t in toppings.split(',')]
        
        # 사이드
        print("\n🥤 사이드 메뉴:")
        print("   콜라/제로콜라/사이다/제로사이다/환타/제로환타(2000원)")
        print("   김밥(3000원), 떡볶이(4000원), 어묵(3000원)")
        print("   튀김(2000원), 순대(3000원)")
        sides = input("사이드 (콤마로 구분, 선택안함은 Enter): ")
        order.sides = [s.strip() for s in sides.split(',')] if sides else []
        
        return order

    def get_payment_input(self):
        """결제 정보 입력"""
        print("\n💳 결제 수단 선택:")
        print("   1. 카드")
        print("   2. 현금")
        
        payment_choice = input("선택 (1 or 2): ") or "1"
        
        if payment_choice == "1":
            payment_method = "card"
            while True:
                try:
                    card_balance = int(input("💵 카드 잔액 입력 (원): ") or "10000")
                    break
                except ValueError:
                    print("⚠️  숫자를 입력하세요.")
        else:
            payment_method = "cash"
            card_balance = 0
        
        return payment_method, card_balance

    def process_payment(self, order, payment_method, card_balance):
        """결제 처리 (Service 호출)"""
        # Service Request 생성
        request = ProcessPayment.Request()
        request.order = order
        request.payment_method = payment_method
        request.card_balance = card_balance
        
        # Service 호출 (동기 방식)
        self.get_logger().info('💳 결제 처리 중...')
        future = self.payment_client.call_async(request)
        
        # 응답 대기
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            response = future.result()
            
            print('\n' + '-' * 50)
            print(f'💰 총 결제 금액: {response.total_price}원')
            print(f'📝 결제 결과: {response.message}')
            
            if response.success:
                if payment_method == "card":
                    print(f'💵 남은 잔액: {response.remaining_balance}원')
                print('-' * 50)
                return True
            else:
                print(f'💵 현재 잔액: {response.remaining_balance}원')
                print('-' * 50)
                return False
        else:
            self.get_logger().error('❌ 결제 서비스 호출 실패!')
            return False


def main(args=None):
    rclpy.init(args=args)
    order_node = OrderNode()
    # spin_once 대신 spin 사용 (주문 루프가 내부에서 동작)
    order_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
