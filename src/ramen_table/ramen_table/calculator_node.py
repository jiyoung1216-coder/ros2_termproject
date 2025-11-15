#!/usr/bin/env python3
"""
계산 노드 (Calculator Node)
- ProcessPayment 서비스 서버를 운영
- 주문 금액 계산 및 결제 검증
"""

import rclpy
from rclpy.node import Node
from ramen_interfaces.srv import ProcessPayment

class CalculatorNode(Node):
    # 메뉴 가격표
    RAMEN_PRICES = {
        "신라면": 3000, "진라면": 3000, "짜파게티": 3000,
        "안성탕면": 3000, "삼양라면": 3000, "너구리": 3000, "불닭": 3000
    }
    
    TOPPING_PRICES = {
        "선택안함": 0, "치즈": 500, "떡": 500, "만두": 1000,
        "파": 300, "고추": 300, "계란": 500, "콩나물": 500,
        "햄": 1000, "김치": 500
    }
    
    SIDE_PRICES = {
        "콜라": 2000, "제로콜라": 2000, "사이다": 2000,
        "제로사이다": 2000, "환타": 2000, "제로환타": 2000,
        "김밥": 3000, "떡볶이": 4000, "어묵": 3000,
        "튀김": 2000, "순대": 3000
    }

    def __init__(self):
        super().__init__('calculator_node')
        
        # ProcessPayment 서비스 서버 생성
        self.service = self.create_service(
            ProcessPayment,
            'process_payment',
            self.process_payment_callback
        )
        
        self.get_logger().info('💳 계산 노드(CalculatorNode) 시작. 결제 요청을 기다립니다...')

    def calculate_total_price(self, order):
        """주문 내역으로부터 총 금액 계산"""
        total = 0
        
        # 라면 가격
        ramen_price = self.RAMEN_PRICES.get(order.ramen_type, 0)
        total += ramen_price
        self.get_logger().info(f'  - 라면({order.ramen_type}): {ramen_price}원')
        
        # 토핑 가격
        for topping in order.toppings:
            topping_price = self.TOPPING_PRICES.get(topping, 0)
            total += topping_price
            if topping != "선택안함":
                self.get_logger().info(f'  - 토핑({topping}): {topping_price}원')
        
        # 사이드 가격
        for side in order.sides:
            side_price = self.SIDE_PRICES.get(side, 0)
            total += side_price
            self.get_logger().info(f'  - 사이드({side}): {side_price}원')
        
        return total

    def process_payment_callback(self, request, response):
        """결제 처리 서비스 콜백"""
        self.get_logger().info('=' * 50)
        self.get_logger().info(f'📋 테이블 {request.order.table_number} 결제 요청 접수')
        
        # 1. 총 금액 계산
        total_price = self.calculate_total_price(request.order)
        self.get_logger().info(f'💰 총 결제 금액: {total_price}원')
        
        # 2. 결제 수단 확인
        payment_method = request.payment_method
        self.get_logger().info(f'💳 결제 수단: {payment_method}')
        
        # 3. 결제 검증
        if payment_method == "card":
            card_balance = request.card_balance
            self.get_logger().info(f'💵 카드 잔액: {card_balance}원')
            
            if card_balance >= total_price:
                # 결제 성공
                remaining = card_balance - total_price
                response.success = True
                response.total_price = total_price
                response.remaining_balance = remaining
                response.message = f"결제 완료! 잔액: {remaining}원"
                
                self.get_logger().info(f'✅ 결제 성공! 남은 잔액: {remaining}원')
            else:
                # 잔액 부족
                shortage = total_price - card_balance
                response.success = False
                response.total_price = total_price
                response.remaining_balance = card_balance
                response.message = f"잔액 부족! {shortage}원이 부족합니다."
                
                self.get_logger().warn(f'❌ 결제 실패! {shortage}원 부족')
        
        elif payment_method == "cash":
            # 현금 결제는 무조건 성공으로 가정
            response.success = True
            response.total_price = total_price
            response.remaining_balance = 0
            response.message = "현금 결제 완료!"
            
            self.get_logger().info('✅ 현금 결제 완료!')
        
        else:
            # 알 수 없는 결제 수단
            response.success = False
            response.total_price = total_price
            response.remaining_balance = 0
            response.message = "알 수 없는 결제 수단입니다."
            
            self.get_logger().error('❌ 알 수 없는 결제 수단!')
        
        self.get_logger().info('=' * 50)
        return response


def main(args=None):
    rclpy.init(args=args)
    calculator_node = CalculatorNode()
    rclpy.spin(calculator_node)
    calculator_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
