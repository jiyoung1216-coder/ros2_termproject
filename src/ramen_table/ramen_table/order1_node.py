#!/usr/bin/env python3
import rclpy
import time
# [삭제] import random (더 이상 랜덤 확률을 쓰지 않음)
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy, QoSDurabilityPolicy
from std_msgs.msg import String, Int32
from ramen_interfaces.msg import RamenOrder
# [추가] 결제 서비스 임포트
from ramen_interfaces.srv import PayOrder

from PyQt5.QtWidgets import (
    QMainWindow, QWidget, QVBoxLayout, QHBoxLayout, QPushButton,
    QLabel, QRadioButton, QGridLayout, QDialog, QListWidget, QButtonGroup,
    QMessageBox, QApplication, QCheckBox, QScrollArea, QProgressBar
)
from PyQt5.QtGui import QFont
from PyQt5.QtCore import Qt, QTimer, pyqtSignal

class PaymentDialog(QDialog):
    """결제 방식 선택 및 처리 다이얼로그"""
    # [변경] 시그널에 '결제 성공 여부'도 같이 전달하도록 변경 가능하지만, 
    # 여기서는 부모창에서 로직을 처리하므로 기존 유지하거나,
    # 다이얼로그는 '방식 선택'만 하고 실제 통신은 메인 윈도우가 하는 것이 깔끔합니다.
    # 하지만 기존 구조를 최대한 유지하며 다이얼로그 안에서 비동기 처리는 복잡하므로,
    # **"다이얼로그는 결제 방식만 선택해서 반환"**하고, 통신은 메인(TableOrder)에서 하도록 구조를 개선하겠습니다.
    
    def __init__(self, total_price, parent=None):
        super().__init__(parent)
        self.setWindowTitle('결제')
        self.total_price = total_price
        self.selected_method = None # 선택된 결제 방식
        self.setModal(True)
        
        if parent:
            self.move(parent.frameGeometry().center() - self.frameGeometry().center())
            
        self.setStyleSheet("""
            QDialog { background-color: #ffffff; }
            QLabel { font-size: 16px; font-weight: bold; color: #d32f2f; padding: 10px 0; }
            QPushButton {
                font-size: 18px; padding: 15px; border: 2px solid #d32f2f;
                border-radius: 10px; min-width: 200px; min-height: 60px;
            }
            QPushButton:hover { background-color: #d32f2f; color: white; }
            QRadioButton { font-size: 16px; padding: 10px; margin: 10px; }
        """)
        
        layout = QVBoxLayout()
        
        # 결제 금액 표시
        price_label = QLabel(f'결제 금액: {total_price:,}원')
        price_label.setAlignment(Qt.AlignCenter)
        price_label.setStyleSheet('QLabel { font-size: 24px; background-color: #ffebee; padding: 20px; }')
        layout.addWidget(price_label)
        
        # 결제 방식 선택
        self.method_group = QButtonGroup()
        method_layout = QHBoxLayout()
        method_layout.setAlignment(Qt.AlignCenter)
        
        card_radio = QRadioButton('카드 결제')
        cash_radio = QRadioButton('현금 결제')
        card_radio.setChecked(True)
        
        self.method_group.addButton(card_radio, 0)
        self.method_group.addButton(cash_radio, 1)
        
        method_layout.addWidget(card_radio)
        method_layout.addWidget(cash_radio)
        layout.addLayout(method_layout)
        
        # 버튼
        buttons_layout = QHBoxLayout()
        
        cancel_btn = QPushButton('취소')
        cancel_btn.clicked.connect(self.reject)
        cancel_btn.setStyleSheet("QPushButton { background-color: #757575; color: white; }")
        
        pay_btn = QPushButton('결제 요청')
        pay_btn.clicked.connect(self.on_pay_clicked) # [변경] 핸들러 변경
        
        buttons_layout.addWidget(cancel_btn)
        buttons_layout.addWidget(pay_btn)
        layout.addLayout(buttons_layout)
        
        self.setLayout(layout)
        
    def on_pay_clicked(self):
        """결제 버튼 클릭 시 선택된 방식을 저장하고 다이얼로그 종료 (Accept)"""
        self.selected_method = '카드' if self.method_group.checkedId() == 0 else '현금'
        self.accept() # 다이얼로그를 닫고 exec_()가 QDialog.Accepted를 반환하게 함

# ... (TableSelectionDialog, TableNumberDialog, RamenOptionsDialog 클래스는 기존과 동일하므로 생략) ...
# (위 클래스들은 그대로 두시면 됩니다)
class TableSelectionDialog(QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setWindowTitle('주문 방식 선택')
        self.selected_table = None
        self.order_type = None

        if parent:
            geometry = self.frameGeometry()
            center = parent.frameGeometry().center()
            geometry.moveCenter(center)
            self.move(geometry.topLeft())

        self.setStyleSheet("""
            QDialog { background-color: #ffffff; }
            QLabel { font-size: 16px; font-weight: bold; color: #d32f2f; padding: 10px 0; }
            QPushButton {
                font-size: 20px; padding: 20px; border: 2px solid #d32f2f;
                border-radius: 10px; min-width: 150px; min-height: 80px;
            }
            QPushButton:hover { background-color: #d32f2f; color: white; }
        """)

        layout = QVBoxLayout()
        instruction_label = QLabel('주문 방식을 선택해주세요')
        instruction_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(instruction_label)

        btn_layout = QHBoxLayout()
        delivery_btn = QPushButton('배달')
        pickup_btn = QPushButton('픽업')

        delivery_btn.clicked.connect(lambda: self.show_table_selection('배달'))
        pickup_btn.clicked.connect(lambda: self.show_table_selection('픽업'))

        btn_layout.addWidget(delivery_btn)
        btn_layout.addWidget(pickup_btn)
        layout.addLayout(btn_layout)
        self.setLayout(layout)

    def show_table_selection(self, order_type):
        table_dialog = TableNumberDialog(order_type, self)
        if table_dialog.exec_():
            self.selected_table = table_dialog.selected_table
            self.order_type = order_type
            self.accept()

class TableNumberDialog(QDialog):
    def __init__(self, order_type, parent=None):
        super().__init__(parent)
        self.setWindowTitle('테이블 선택')
        self.selected_table = None

        if parent:
            geometry = self.frameGeometry()
            center = parent.frameGeometry().center()
            geometry.moveCenter(center)
            self.move(geometry.topLeft())

        self.setStyleSheet("""
            QDialog { background-color: #ffffff; }
            QLabel { font-size: 16px; font-weight: bold; color: #d32f2f; padding: 10px 0; }
            QPushButton {
                font-size: 20px; padding: 20px; border: 2px solid #d32f2f;
                border-radius: 10px; min-width: 80px; min-height: 80px;
            }
            QPushButton:hover { background-color: #d32f2f; color: white; }
        """)

        layout = QVBoxLayout()
        instruction_label = QLabel('테이블 번호를 선택해주세요')
        instruction_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(instruction_label)

        grid = QGridLayout()
        grid.setSpacing(10)

        if order_type == '배달':
            for i in range(6):
                row = i // 3
                col = i % 3
                btn = QPushButton(f"{i + 1}")
                btn.clicked.connect(lambda checked, num=i+1: self.select_table(num))
                grid.addWidget(btn, row, col)
        else:
            for i in range(3):
                floor = i + 1
                btn = QPushButton(f"{i + 7}\n({floor}층 픽업대)")
                btn.clicked.connect(lambda checked, num=i+7: self.select_table(num))
                grid.addWidget(btn, 0, i)

        layout.addLayout(grid)
        self.setLayout(layout)

    def select_table(self, table_num):
        self.selected_table = table_num
        self.accept()

class RamenOptionsDialog(QDialog):
    def __init__(self, ramen_name, parent=None):
        super().__init__(parent)
        self.setWindowTitle(f'{ramen_name} 토핑 선택')
        self.ramen_name = ramen_name
        self.selected_toppings = []
        self.topping_cost = 0
        
        if parent:
            geometry = self.frameGeometry()
            center = parent.frameGeometry().center()
            geometry.moveCenter(center)
            self.move(geometry.topLeft())

        self.setStyleSheet("""
            QDialog { background-color: #ffffff; }
            QLabel { font-size: 14px; font-weight: bold; color: #d32f2f; padding: 10px 0; }
            QCheckBox {
                font-size: 13px; padding: 8px; margin: 5px;
                min-width: 200px; min-height: 35px;
            }
            QCheckBox:hover { background-color: #ffebee; }
            QPushButton {
                background-color: #d32f2f; color: white; border: none; 
                padding: 10px; font-size: 14px; border-radius: 20px; min-width: 150px;
            }
            QPushButton:hover { background-color: #b71c1c; }
        """)

        layout = QVBoxLayout()
        
        # 토핑 옵션
        self.toppings = {
            '치즈': 500,
            '떡': 500,
            '만두': 1000,
            '파': 300,
            '고추': 300,
            '계란': 500,
            '콩나물': 500,
            '햄': 1000,
            '김치': 500
        }
        
        topping_label = QLabel('토핑 선택 (복수 선택 가능)')
        topping_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(topping_label)
        
        # 스크롤 가능한 토핑 리스트
        scroll = QScrollArea()
        scroll.setWidgetResizable(True)
        topping_widget = QWidget()
        topping_layout = QVBoxLayout(topping_widget)
        
        self.topping_checkboxes = {}
        for topping, price in self.toppings.items():
            cb = QCheckBox(f"{topping} (+{price}원)")
            cb.toggled.connect(self.update_total)
            self.topping_checkboxes[topping] = (cb, price)
            topping_layout.addWidget(cb)
        
        scroll.setWidget(topping_widget)
        scroll.setMaximumHeight(300)
        layout.addWidget(scroll)
        
        # 토핑 합계 표시
        self.total_label = QLabel('토핑 추가 금액: 0원')
        self.total_label.setAlignment(Qt.AlignCenter)
        self.total_label.setStyleSheet('QLabel { font-size: 16px; color: #000; padding: 15px; background-color: #f5f5f5; }')
        layout.addWidget(self.total_label)
        
        # 버튼
        buttons_layout = QHBoxLayout()
        cancel_btn = QPushButton('취소')
        cancel_btn.clicked.connect(self.reject)
        cancel_btn.setStyleSheet("QPushButton { background-color: #757575; } QPushButton:hover { background-color: #616161; }")
        buttons_layout.addWidget(cancel_btn)
        
        confirm_btn = QPushButton('완료')
        confirm_btn.clicked.connect(self.accept)
        buttons_layout.addWidget(confirm_btn)
        
        layout.addLayout(buttons_layout)
        self.setLayout(layout)
    
    def update_total(self):
        self.topping_cost = 0
        self.selected_toppings = []
        
        for topping, (cb, price) in self.topping_checkboxes.items():
            if cb.isChecked():
                self.topping_cost += price
                self.selected_toppings.append(topping)
        
        self.total_label.setText(f'토핑 추가 금액: {self.topping_cost:,}원')


class TableOrder(Node, QMainWindow):
    def __init__(self):
        Node.__init__(self, 'table_order')
        QMainWindow.__init__(self)

        # 구독자
        self.subscription_order_status = self.create_subscription(String, 'order_status', self.status_callback, 10)
        self.subscription_robot_status = self.create_subscription(String, '/robot_status', self.status_callback, 10)
        self.subscription_goback_status = self.create_subscription(Int32, 'table_num', self.goback_callback, 10)

        # 퍼블리셔
        qos_profile = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            history=QoSHistoryPolicy.KEEP_LAST,
            durability=QoSDurabilityPolicy.TRANSIENT_LOCAL,
            depth=10
        )
        self.order_publisher = self.create_publisher(String, 'table_order', qos_profile)
        self.new_order_pub = self.create_publisher(RamenOrder, 'new_order', 10)

        # [추가] 결제 서비스 클라이언트
        self.pay_client = self.create_client(PayOrder, 'pay_order')

        # 분식집 메뉴 (생략 - 기존과 동일)
        self.menu_categories = {
            '라면': [('신라면', 3000), ('진라면', 3000), ('짜파게티', 3000), ('안성탕면', 3000), ('삼양라면', 3000), ('너구리', 3000), ('불닭볶음면', 3000)],
            '음료': [('콜라', 2000), ('제로콜라', 2000), ('사이다', 2000), ('제로사이다', 2000), ('환타', 2000), ('제로환타', 2000)],
            '사이드': [('김밥', 3000), ('떡볶이', 4000), ('어묵', 3000), ('튀김', 2000), ('순대', 3000)]
        }

        # 상태
        self.total_price = 0
        self.orders = []
        self.order_details = []
        self.order_confirmed = False
        self.selected_table = None
        self.selected_order_type = None
        self.payment_method = None

        # UI 스타일 (기존과 동일)
        self.setStyleSheet("""
            QMainWindow { background-color: #ffffff; }
            QPushButton { 
                border: 2px solid #d32f2f; border-radius: 20px; 
                padding: 10px; background-color: white; color: #d32f2f; 
            }
            QPushButton:hover { background-color: #d32f2f; color: white; }
            QListWidget { border: 2px solid #E5E5E5; border-radius: 10px; padding: 10px; }
            QLabel { color: #d32f2f; font-weight: bold; }
        """)
        self.setWindowTitle('맛있는 분식집')
        self.setGeometry(100, 100, 1400, 900)

        # 중앙 위젯/레이아웃 구성 (기존과 동일 - 생략 가능하지만 전체 코드 제공을 위해 포함)
        central_widget = QWidget()
        self.setCentralWidget(central_widget)
        main_layout = QVBoxLayout(central_widget)
        main_layout.setSpacing(20)
        main_layout.setContentsMargins(20, 20, 20, 20)

        title_label = QLabel('🍜 맛있는 분식집 🍜')
        title_label.setFont(QFont('Arial', 24, QFont.Bold))
        title_label.setAlignment(Qt.AlignCenter)
        title_label.setStyleSheet('QLabel { padding: 20px; background-color: #ffebee; }')
        main_layout.addWidget(title_label)

        category_layout = QHBoxLayout()
        category_layout.setSpacing(15)
        for category in self.menu_categories.keys():
            btn = QPushButton(category)
            btn.setMinimumHeight(60)
            btn.setFont(QFont('Arial', 14, QFont.Bold))
            btn.clicked.connect(lambda checked, cat=category: self.show_subcategories(cat))
            category_layout.addWidget(btn)
        main_layout.addLayout(category_layout)

        self.subcategory_grid = QGridLayout()
        self.subcategory_grid.setSpacing(15)
        main_layout.addLayout(self.subcategory_grid)

        order_section = QVBoxLayout()
        order_section.setSpacing(10)
        order_header = QLabel('주문 내역')
        order_header.setFont(QFont('Arial', 18, QFont.Bold))
        order_section.addWidget(order_header)

        self.order_list = QListWidget()
        self.order_list.setFont(QFont('Arial', 14))
        self.order_list.setMinimumHeight(200)
        order_section.addWidget(self.order_list)

        remove_item_btn = QPushButton('선택한 메뉴 삭제')
        remove_item_btn.clicked.connect(self.remove_selected_item)
        remove_item_btn.setFont(QFont('Arial', 14, QFont.Bold))
        remove_item_btn.setStyleSheet("QPushButton { background-color: #d32f2f; color: white; min-width: 200px; }")
        remove_item_btn.setMinimumHeight(50)
        order_section.addWidget(remove_item_btn)

        self.order_status_label = QLabel('주문 상태: 주문 대기중')
        self.order_status_label.setFont(QFont('Arial', 14, QFont.Bold))
        self.order_status_label.setAlignment(Qt.AlignCenter)
        self.order_status_label.setStyleSheet("QLabel { background-color: #E5E5E5; padding: 10px; border-radius: 10px; margin: 10px 0; }")
        order_section.addWidget(self.order_status_label)

        self.total_price_label = QLabel('합계: 0원')
        self.total_price_label.setFont(QFont('Arial', 16, QFont.Bold))
        self.total_price_label.setAlignment(Qt.AlignRight)
        order_section.addWidget(self.total_price_label)

        order_buttons_layout = QHBoxLayout()
        order_buttons_layout.setSpacing(15)
        
        finish_order_btn = QPushButton('주문하기')
        finish_order_btn.clicked.connect(self.finish_order)
        finish_order_btn.setStyleSheet("QPushButton { background-color: #d32f2f; color: white; min-width: 200px; }")
        finish_order_btn.setMinimumHeight(50)
        
        cancel_order_btn = QPushButton('주문 초기화')
        cancel_order_btn.clicked.connect(self.cancel_order)
        cancel_order_btn.setStyleSheet("QPushButton { background-color: #757575; color: white; min-width: 200px; }")
        cancel_order_btn.setMinimumHeight(50)
        
        order_buttons_layout.addStretch()
        order_buttons_layout.addWidget(cancel_order_btn)
        order_buttons_layout.addWidget(finish_order_btn)
        
        order_section.addLayout(order_buttons_layout)
        main_layout.addLayout(order_section)

        # QTimer로 rclpy.spin_once 통합
        self._spin_timer = QTimer(self)
        self._spin_timer.timeout.connect(lambda: rclpy.spin_once(self, timeout_sec=0.0))
        self._spin_timer.start(10)

    # ROS 콜백들
    def status_callback(self, msg: String):
        if msg.data == '조리 중':
            self.order_status_label.setText('주문 상태: 조리 중')
        elif '주문취소' in msg.data:
            self.order_status_label.setText('주문 상태 : 주문 대기중')
            QMessageBox.warning(self, "주문 취소", msg.data)
        elif msg.data == '조리완료':
            self.order_status_label.setText('주문 상태: 이동 중')
        elif msg.data == '이동 완료':
            self.order_status_label.setText('로봇이 음식을 가져왔어요! 배달 확인 버튼을 눌러주세요!')

    def goback_callback(self, msg: Int32):
        if (msg.data == 0) and (self.order_status_label.text() == '로봇이 음식을 가져왔어요! 배달 확인 버튼을 눌러주세요!'):
            self.order_status_label.setText('주문 상태 : 주문 대기중')

    # UI 동작 (메뉴 추가/삭제 로직 등 - 생략, 기존과 동일)
    def show_subcategories(self, category):
        # (기존 코드 유지)
        if self.order_confirmed:
            self._warn('경고', '주문이 이미 확정되었습니다. 새로운 주문을 하시려면 주문 초기화를 해주세요.')
            return
        for i in reversed(range(self.subcategory_grid.count())):
            w = self.subcategory_grid.itemAt(i).widget()
            if w: w.setParent(None)
        subcategories = self.menu_categories[category]
        for i, (item_name, price) in enumerate(subcategories):
            row = i // 3
            col = i % 3
            btn = QPushButton(f"{item_name}\n{price:,}원")
            btn.setMinimumSize(250, 100)
            btn.setFont(QFont('Arial', 12))
            if category == '라면':
                btn.clicked.connect(lambda checked, name=item_name, p=price: self.show_ramen_options(name, p))
            else:
                btn.clicked.connect(lambda checked, name=item_name, p=price: self.add_simple_item(name, p, category))
            self.subcategory_grid.addWidget(btn, row, col)

    def show_ramen_options(self, ramen_name, base_price):
        # (기존 코드 유지)
        if self.order_confirmed:
            self._warn('경고', '주문이 이미 확정되었습니다.')
            return
        dialog = RamenOptionsDialog(ramen_name, self)
        if dialog.exec_():
            total_item_price = base_price + dialog.topping_cost
            self.total_price += total_item_price
            self.total_price_label.setText(f'합계: {self.total_price:,}원')
            order_text = f"{ramen_name}"
            if dialog.selected_toppings:
                order_text += f" (토핑: {', '.join(dialog.selected_toppings)})"
            order_text += f" - {total_item_price:,}원"
            self.order_list.addItem(order_text)
            self.orders.append(order_text)
            self.order_details.append({'type': 'ramen', 'name': ramen_name, 'toppings': dialog.selected_toppings, 'sides': [], 'price': total_item_price})
            self._update_order_status()

    def add_simple_item(self, item_name, price, category):
        # (기존 코드 유지)
        if self.order_confirmed:
            self._warn('경고', '주문이 이미 확정되었습니다.')
            return
        self.total_price += price
        self.total_price_label.setText(f'합계: {self.total_price:,}원')
        order_text = f"{item_name} - {price:,}원"
        self.order_list.addItem(order_text)
        self.orders.append(order_text)
        if category == '사이드':
            self.order_details.append({'type': 'side', 'name': item_name, 'toppings': [], 'sides': [item_name], 'price': price})
        else:
            self.order_details.append({'type': 'drink', 'name': item_name, 'toppings': [], 'sides': [], 'price': price})
        self._update_order_status()

    def _update_order_status(self):
        self.order_status_label.setText('주문 상태: 메뉴 선택중')
        self.order_status_label.setStyleSheet("QLabel { background-color: #FFF3CD; color: #856404; padding: 10px; border-radius: 10px; margin: 10px 0; }")

    def remove_selected_item(self):
        # (기존 코드 유지)
        if self.order_confirmed:
            self._warn('경고', '주문이 이미 확정되었습니다.')
            return
        current_item = self.order_list.currentItem()
        if current_item:
            row = self.order_list.row(current_item)
            price_str = current_item.text().split(' - ')[1].replace('원', '').replace(',', '')
            self.total_price -= int(price_str)
            self.total_price_label.setText(f'합계: {self.total_price:,}원')
            self.orders.pop(row)
            self.order_details.pop(row)
            self.order_list.takeItem(row)
            if not self.orders:
                self.order_status_label.setText('주문 상태: 주문 대기중')
                self.order_status_label.setStyleSheet("QLabel { background-color: #E5E5E5; padding: 10px; border-radius: 10px; margin: 10px 0; }")
        else:
            self._warn('경고', '삭제할 메뉴를 선택해주세요.')

    # [변경] 주문 및 결제 로직의 핵심 변경 부분
    def finish_order(self):
        if not self.orders:
            self._warn('경고', '주문을 추가해주세요!')
            return

        if not self.order_confirmed:
            # 1. 테이블 선택
            table_dialog = TableSelectionDialog(self)
            if not table_dialog.exec_():
                return # 취소됨
            
            self.selected_table = table_dialog.selected_table
            self.selected_order_type = table_dialog.order_type
            
            # 2. 결제 방식 선택 (이제 여기서 바로 성공/실패가 결정되지 않음)
            payment_dialog = PaymentDialog(self.total_price, self)
            if not payment_dialog.exec_():
                self.selected_table = None
                self.selected_order_type = None
                return # 결제 취소됨
            
            # 결제 방식 선택 완료 -> 서버에 결제 요청 시작
            self.payment_method = payment_dialog.selected_method
            self.request_payment_to_server()
            
        else:
            self._warn('경고', '주문이 이미 확정되었습니다.')

    # [추가] 비동기 서비스 요청 함수
    def request_payment_to_server(self):
        # 서비스 서버 확인
        if not self.pay_client.wait_for_service(timeout_sec=1.0):
            QMessageBox.critical(self, "통신 오류", "카운터(결제 서버)가 연결되지 않았습니다.\n잠시 후 다시 시도해주세요.")
            return

        # 프로그레스 다이얼로그 표시 (결제 중...)
        self.progress_dialog = QDialog(self)
        self.progress_dialog.setWindowTitle('결제 승인 대기중')
        self.progress_dialog.setFixedSize(300, 100)
        self.progress_dialog.setModal(True)
        layout = QVBoxLayout()
        layout.addWidget(QLabel(f"카운터에 승인 요청 중... ({self.payment_method})", alignment=Qt.AlignCenter))
        
        bar = QProgressBar()
        bar.setRange(0, 0) # 무한 로딩
        layout.addWidget(bar)
        self.progress_dialog.setLayout(layout)
        self.progress_dialog.show()

        # 서비스 요청 생성 (메뉴 내역 전송)
        req = PayOrder.Request()
        req.table_number = int(self.selected_table)
        # 대표 메뉴명 생성 (예: 신라면 외 2건)
        menu_names = [d['name'] for d in self.order_details]
        req.ramen_type = menu_names[0] if menu_names else ""
        # 모든 토핑과 사이드를 모아서 리스트로 전송
        all_toppings = []
        all_sides = []
        for d in self.order_details:
            all_toppings.extend(d.get('toppings', []))
            all_sides.extend(d.get('sides', []))
        req.toppings = all_toppings
        req.sides = all_sides

        # 비동기 호출 (응답 오면 future_callback 실행)
        future = self.pay_client.call_async(req)
        future.add_done_callback(self.payment_response_callback)

    # [추가] 서비스 응답 처리 콜백
    def payment_response_callback(self, future):
        # GUI 스레드 안전을 위해 타이머 등 다른 방식으로 메인 스레드에서 처리해야 하는 경우도 있지만,
        # 간단한 처리는 여기서도 가능합니다. 안전하게 하려면 QTimer.singleShot을 쓰는 게 좋습니다.
        try:
            response = future.result()
            # 메인 스레드에서 UI 업데이트를 위해 타이머 사용
            QTimer.singleShot(0, lambda: self.handle_payment_result(response))
        except Exception as e:
            QTimer.singleShot(0, lambda: self.handle_payment_error(str(e)))

    def handle_payment_result(self, response):
        self.progress_dialog.accept() # 로딩창 닫기
        
        if response.success:
            # 서버가 계산한 정확한 금액으로 업데이트 (선택사항)
            # self.total_price = response.total_price 
            
            QMessageBox.information(self, "결제 승인 완료", 
                                  f"{response.message}\n결제 금액: {response.total_price:,}원")
            self.on_payment_success() # 주문 발행 로직 실행
        else:
            QMessageBox.critical(self, "결제 승인 거부", f"결제가 거부되었습니다.\n사유: {response.message}")
            # 실패 시 초기화
            self.selected_table = None

    def handle_payment_error(self, error_msg):
        self.progress_dialog.accept()
        QMessageBox.critical(self, "시스템 오류", f"통신 중 오류가 발생했습니다.\n{error_msg}")

    # [기존 on_payment_completed를 대체/수정]
    def on_payment_success(self):
        """결제 승인 후 실제 주문 발행"""
        self.order_confirmed = True
        
        # 주문 발행 로직 (기존과 동일)
        ramen_orders = [detail for detail in self.order_details if detail['type'] == 'ramen']
        if ramen_orders:
            for ramen_detail in ramen_orders:
                order_msg = RamenOrder()
                order_msg.table_number = int(self.selected_table)
                order_msg.ramen_type = ramen_detail['name']
                order_msg.toppings = ramen_detail['toppings']
                order_msg.sides = [] # (참고: 사이드는 별도 처리 혹은 여기에 합칠 수 있음)
                
                # [중요] 가격 정보는 PayOrder 서비스가 있다면 서버가 알지만, 
                # RamenOrder 메시지에도 넣고 싶다면 추가 (단, RamenOrder.msg 수정 필요)
                try:
                    order_msg.total_price = int(ramen_detail['price'])
                except: pass

                self.new_order_pub.publish(order_msg)
                self.get_logger().info(f'라면 주문 발행: {ramen_detail["name"]}')
        
        # 로그 발행
        dbg = String()
        dbg.data = f"테이블 {self.selected_table} 주문 ({self.payment_method} 승인완료):\n" + "\n".join(self.orders)
        self.order_publisher.publish(dbg)
        
        self._show_success_and_reset()

    def _show_success_and_reset(self):
        # (기존 코드 유지)
        self.order_status_label.setText(f'주문 상태: 결제 완료 ({self.payment_method})')
        self.order_status_label.setStyleSheet("QLabel { background-color: #D4EDDA; color: #155724; padding: 10px; border-radius: 10px; margin: 10px 0; }")
        # (메시지 박스는 handle_payment_result에서 이미 띄웠으므로 생략 가능)
        
        # 초기화
        self.orders.clear()
        self.order_details.clear()
        self.order_list.clear()
        self.total_price = 0
        self.total_price_label.setText('합계: 0원')
        self.order_confirmed = False
        self.selected_table = None
        self.selected_order_type = None
        self.payment_method = None

    def cancel_order(self):
        if self.orders:
            reply = QMessageBox.question(self, '주문취소', '정말로 주문을 취소하시겠습니까?',
                                       QMessageBox.Yes | QMessageBox.No, QMessageBox.No)
            if reply == QMessageBox.Yes:
                self.orders.clear()
                self.order_details.clear()
                self.order_list.clear()
                self.total_price = 0
                self.total_price_label.setText('합계: 0원')
                self.order_confirmed = False
                QMessageBox.information(self, '취소완료', '주문이 취소되었습니다.')
        else:
            self._info('알림', '취소할 주문이 없습니다.')

    def _warn(self, title, text):
        QMessageBox.warning(self, title, text)

    def _info(self, title, text):
        QMessageBox.information(self, title, text)

    def closeEvent(self, event):
        try:
            self.destroy_node()
            rclpy.shutdown()
        except Exception:
            pass
        event.accept()

def main(args=None):
    rclpy.init(args=args)
    import sys
    app = QApplication(sys.argv)
    ui = TableOrder()
    ui.show()
    exit_code = app.exec_()
    try:
        ui.destroy_node()
        rclpy.shutdown()
    except Exception:
        pass
    sys.exit(exit_code)

if __name__ == '__main__':
    main()