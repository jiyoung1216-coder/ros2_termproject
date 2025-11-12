# msg/RamenOrder.msg
uint8 table_number     # 주문 테이블 번호 (1~9)
string ramen_type      # 라면 종류 (신라면, 진라면 등)
string[] toppings        # 토핑 목록 (치즈, 떡, 만두 등)
string[] sides           # 사이드 목록 (콜라, 김밥 등)
