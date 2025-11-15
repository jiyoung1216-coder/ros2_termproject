import rclpy
import random  # 랜덤 모듈 추가
from rclpy.node import Node
from ramen_interfaces.srv import PayOrder

# === 가격표 정의 ===
MENU_PRICES = {
    # 라면류
    '신라면': 3000, '진라면': 3000, '짜파게티': 3000, 
    '안성탕면': 3000, '삼양라면': 3000, '너구리': 3000, '불닭볶음면': 3000,
    # 음료류
    '콜라': 2000, '제로콜라': 2000, '사이다': 2000, 
    '제로사이다': 2000, '환타': 2000, '제로환타': 2000,
    # 사이드류
    '김밥': 3000, '떡볶이': 4000, '어묵': 3000, '튀김': 2000, '순대': 3000
}

TOPPING_PRICES = {
    '치즈': 500, '떡': 500, '만두': 1000, '파': 300, '고추': 300,
    '계란': 500, '콩나물': 500, '햄': 1000, '김치': 500
}

SIDE_PRICES = {
    '김밥': 3000, '떡볶이': 4000, '어묵': 3000, '튀김': 2000, '순대': 3000,
    '콜라': 2000, '제로콜라': 2000, '사이다': 2000, 
    '제로사이다': 2000, '환타': 2000, '제로환타': 2000
}

class CounterNode(Node):
    def __init__(self):
        super().__init__('counter_node')
        
        # 결제 서비스 서버 생성
        self.srv = self.create_service(PayOrder, 'pay_order', self.calculate_payment_callback)
        
        # 실패 사유 목록 (원본 코드 반영)
        self.error_messages = [
            '카드 읽기 오류가 발생했습니다.',
            '결제 승인이 거부되었습니다.',
            '네트워크 연결이 불안정합니다.',
            '결제 시스템 오류가 발생했습니다.',
            '잔액이 부족합니다.',
            'IC칩을 확인해주세요.'
        ]
        
        self.get_logger().info('=== 카운터(POS) 시스템 가동 중 ===')
        self.get_logger().info('손님의 결제 요청을 기다립니다...')

    def calculate_payment_callback(self, request, response):
        self.get_logger().info(f'[결제 요청 수신] 테이블 {request.table_number}번')
        
        total_price = 0
        
        # 1. 가격 계산
        if request.ramen_type in MENU_PRICES:
            total_price += MENU_PRICES[request.ramen_type]
        
        for t in request.toppings:
            total_price += TOPPING_PRICES.get(t, 0)
            
        for s in request.sides:
            total_price += SIDE_PRICES.get(s, 0)

        self.get_logger().info(f' -> 계산된 금액: {total_price}원')

        # 2. 승인/거절 로직 (확률 반영)
        # 0원 이하면 무조건 실패
        if total_price <= 0:
            response.success = False
            response.total_price = 0
            response.message = "주문 내역이 없습니다."
            self.get_logger().warn(' -> 결제 실패 (금액 0원)')
            return response

        # 80% 확률로 성공, 20% 확률로 실패
        is_success = random.random() < 0.8
        
        if is_success:
            response.success = True
            response.total_price = total_price
            response.message = "정상 승인되었습니다."
            self.get_logger().info(' -> 결제 승인 완료!')
        else:
            response.success = False
            response.total_price = total_price
            # 랜덤 실패 사유 선택
            error_msg = random.choice(self.error_messages)
            response.message = error_msg
            self.get_logger().warn(f' -> 결제 거절됨 ({error_msg})')

        return response

def main(args=None):
    rclpy.init(args=args)
    node = CounterNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()