#!/usr/bin/env python3
import rclpy
import time
import random
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy, QoSDurabilityPolicy
from std_msgs.msg import String, Int32
from ramen_interfaces.msg import RamenOrder

from PyQt5.QtWidgets import (
    QMainWindow, QWidget, QVBoxLayout, QHBoxLayout, QPushButton,
    QLabel, QRadioButton, QGridLayout, QDialog, QListWidget, QButtonGroup,
    QMessageBox, QApplication, QCheckBox, QScrollArea, QProgressBar
)
from PyQt5.QtGui import QFont, QPixmap, QPainter, QBrush
from PyQt5.QtCore import Qt, QTimer, pyqtSignal

class PaymentDialog(QDialog):
    """결제 방식 선택 및 처리 다이얼로그"""
    payment_completed = pyqtSignal(str)  # 결제 완료 시그널 (결제 방식 전달)
    
    def __init__(self, total_price, parent=None):
        super().__init__(parent)
        self.setWindowTitle('💳 결제')
        self.total_price = total_price
        self.payment_method = None
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
            QRadioButton {
                font-size: 16px; padding: 10px; margin: 10px;
            }
            QRadioButton::indicator {
                width: 20px; height: 20px;
            }
        """)
        
        layout = QVBoxLayout()
        
        # 결제 금액 표시
        price_label = QLabel(f'💰 결제 금액: {total_price:,}원')
        price_label.setAlignment(Qt.AlignCenter)
        price_label.setStyleSheet('QLabel { font-size: 24px; background-color: #ffebee; padding: 20px; }')
        layout.addWidget(price_label)
        
        # 결제 방식 선택
        method_label = QLabel('💳 결제 방식을 선택해주세요')
        method_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(method_label)
        
        self.method_group = QButtonGroup()
        method_layout = QHBoxLayout()
        method_layout.setAlignment(Qt.AlignCenter)
        
        card_radio = QRadioButton('💳 카드 결제')
        cash_radio = QRadioButton('💵 현금 결제')
        card_radio.setChecked(True)
        
        self.method_group.addButton(card_radio, 0)
        self.method_group.addButton(cash_radio, 1)
        
        method_layout.addWidget(card_radio)
        method_layout.addWidget(cash_radio)
        layout.addLayout(method_layout)
        
        # 버튼
        buttons_layout = QHBoxLayout()
        
        cancel_btn = QPushButton('❌ 취소')
        cancel_btn.clicked.connect(self.reject)
        cancel_btn.setStyleSheet("""
            QPushButton { background-color: #757575; color: white; }
            QPushButton:hover { background-color: #616161; }
        """)
        
        pay_btn = QPushButton('✅ 결제하기')
        pay_btn.clicked.connect(self.process_payment)
        pay_btn.setStyleSheet("""
            QPushButton { background-color: #d32f2f; color: white; }
            QPushButton:hover { background-color: #b71c1c; }
        """)
        
        buttons_layout.addWidget(cancel_btn)
        buttons_layout.addWidget(pay_btn)
        layout.addLayout(buttons_layout)
        
        self.setLayout(layout)
        
    def process_payment(self):
        """결제 처리 (20% 확률로 실패)"""
        self.payment_method = '카드' if self.method_group.checkedId() == 0 else '현금'
        
        # 결제 중 표시
        progress_dialog = QDialog(self)
        progress_dialog.setWindowTitle('⏳ 결제 처리중')
        progress_dialog.setModal(True)
        progress_dialog.setFixedSize(300, 150)
        
        progress_layout = QVBoxLayout()
        
        # 결제 방식에 따른 이모티콘
        icon = '💳' if self.payment_method == '카드' else '💵'
        progress_label = QLabel(f'{icon} {self.payment_method} 결제 처리중...')
        progress_label.setAlignment(Qt.AlignCenter)
        progress_layout.addWidget(progress_label)
        
        progress_bar = QProgressBar()
        progress_bar.setRange(0, 0)  # 무한 프로그레스
        progress_layout.addWidget(progress_bar)
        
        progress_dialog.setLayout(progress_layout)
        progress_dialog.show()
        
        # 2초 후 결제 결과 표시
        QTimer.singleShot(2000, lambda: self.show_payment_result(progress_dialog))
        
    def show_payment_result(self, progress_dialog):
        """결제 결과 표시"""
        progress_dialog.close()
        
        success = random.random() < 0.8
        
        if success:
            QMessageBox.information(self, '✅ 결제 성공', 
                                  f'🎉 {self.payment_method} 결제가 완료되었습니다!\n감사합니다.')
            self.payment_completed.emit(self.payment_method)
            self.accept()
        else:
            error_messages = [
                '⚠️ 카드 읽기 오류가 발생했습니다.',
                '❌ 결제 승인이 거부되었습니다.',
                '📡 네트워크 연결이 불안정합니다.',
                '🔧 결제 시스템 오류가 발생했습니다.'
            ] if self.payment_method == '카드' else [
                '💸 금액이 부족합니다.',
                '🪙 거스름돈 준비가 부족합니다.',
                '💵 현금 인식 오류가 발생했습니다.'
            ]
            
            error_msg = random.choice(error_messages)
            reply = QMessageBox.warning(self, '❌ 결제 실패', 
                                      f'{error_msg}\n다시 시도하시겠습니까?',
                                      QMessageBox.Yes | QMessageBox.No,
                                      QMessageBox.Yes)
            
            if reply == QMessageBox.Yes:
                self.process_payment()  # 재시도

class TableSelectionDialog(QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setWindowTitle('🏠 주문 방식 선택')
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
        instruction_label = QLabel('📍 주문 방식을 선택해주세요')
        instruction_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(instruction_label)

        btn_layout = QHBoxLayout()
        delivery_btn = QPushButton('🚚 배달')
        pickup_btn = QPushButton('🏃 픽업')

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
        self.setWindowTitle('🪑 테이블 선택')
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
        instruction_label = QLabel('🏷️ 테이블 번호를 선택해주세요')
        instruction_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(instruction_label)

        grid = QGridLayout()
        grid.setSpacing(10)

        if order_type == '배달':
            for i in range(6):
                row = i // 3
                col = i % 3
                btn = QPushButton(f"🪑 {i + 1}")
                btn.clicked.connect(lambda checked, num=i+1: self.select_table(num))
                grid.addWidget(btn, row, col)
        else:
            for i in range(3):
                floor = i + 1
                btn = QPushButton(f"📦 {i + 7}\n({floor}층 픽업대)")
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
        self.setWindowTitle(f'🍜 {ramen_name} 토핑 선택')
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
        
        # 토핑 옵션 with 이모티콘
        self.toppings = {
            '🧀 치즈': 500,
            '🍡 떡': 500,
            '🥟 만두': 1000,
            '🌱 파': 300,
            '🌶️ 고추': 300,
            '🥚 계란': 500,
            '🌿 콩나물': 500,
            '🥓 햄': 1000,
            '🥬 김치': 500
        }
        
        topping_label = QLabel('✨ 토핑 선택 (복수 선택 가능)')
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
        self.total_label = QLabel('💰 토핑 추가 금액: 0원')
        self.total_label.setAlignment(Qt.AlignCenter)
        self.total_label.setStyleSheet('QLabel { font-size: 16px; color: #000; padding: 15px; background-color: #f5f5f5; }')
        layout.addWidget(self.total_label)
        
        # 버튼
        buttons_layout = QHBoxLayout()
        cancel_btn = QPushButton('❌ 취소')
        cancel_btn.clicked.connect(self.reject)
        cancel_btn.setStyleSheet("QPushButton { background-color: #757575; } QPushButton:hover { background-color: #616161; }")
        buttons_layout.addWidget(cancel_btn)
        
        confirm_btn = QPushButton('✅ 완료')
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
                # 이모티콘 제거하고 토핑 이름만 저장
                clean_name = topping.split(' ', 1)[1] if ' ' in topping else topping
                self.selected_toppings.append(clean_name)
        
        self.total_label.setText(f'💰 토핑 추가 금액: {self.topping_cost:,}원')

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

        # 분식집 메뉴
        self.menu_categories = {
            '🍜 라면': [
                ('신라면', 3000),
                ('진라면', 3000),
                ('짜파게티', 3000),
                ('안성탕면', 3000),
                ('삼양라면', 3000),
                ('너구리', 3000),
                ('불닭볶음면', 3000)
            ],
            '🥤 음료': [
                ('콜라', 2000),
                ('제로콜라', 2000),
                ('사이다', 2000),
                ('제로사이다', 2000),
                ('환타', 2000),
                ('제로환타', 2000)
            ],
            '🍱 사이드': [
                ('김밥', 3000),
                ('떡볶이', 4000),
                ('어묵', 3000),
                ('튀김', 2000),
                ('순대', 3000)
            ]
        }

        # 상태
        self.total_price = 0
        self.orders = []
        self.order_details = []
        self.order_confirmed = False
        self.selected_table = None
        self.selected_order_type = None
        self.payment_method = None

        # UI 스타일 (분식집 테마 - 빨간색)
        self.setStyleSheet("""
            QMainWindow { background-color: #ffffff; }
            QPushButton { 
                border: 2px solid #d32f2f; border-radius: 20px; 
                padding: 10px; background-color: white; color: #d32f2f; 
                font-weight: bold;
            }
            QPushButton:hover { background-color: #d32f2f; color: white; }
            QListWidget { 
                border: 2px solid #E5E5E5; border-radius: 10px; 
                padding: 10px; font-size: 14px;
            }
            QLabel { color: #d32f2f; font-weight: bold; }
        """)
        self.setWindowTitle('🍜 맛있는 분식집')
        self.setGeometry(100, 100, 1400, 900)

        # 중앙 위젯/레이아웃
        central_widget = QWidget()
        self.setCentralWidget(central_widget)
        main_layout = QVBoxLayout(central_widget)
        main_layout.setSpacing(20)
        main_layout.setContentsMargins(20, 20, 20, 20)

        # 상단 타이틀
        title_label = QLabel('🍜 맛있는 분식집 🍜')
        title_label.setFont(QFont('Arial', 28, QFont.Bold))
        title_label.setAlignment(Qt.AlignCenter)
        title_label.setStyleSheet('QLabel { padding: 20px; background-color: #ffebee; border-radius: 15px; }')
        main_layout.addWidget(title_label)

        # 카테고리 버튼
        category_layout = QHBoxLayout()
        category_layout.setSpacing(15)
        for category in self.menu_categories.keys():
            btn = QPushButton(category)
            btn.setMinimumHeight(70)
            btn.setFont(QFont('Arial', 16, QFont.Bold))
            btn.clicked.connect(lambda checked, cat=category: self.show_subcategories(cat))
            category_layout.addWidget(btn)
        main_layout.addLayout(category_layout)

        # 서브카테고리 그리드
        self.subcategory_grid = QGridLayout()
        self.subcategory_grid.setSpacing(15)
        main_layout.addLayout(self.subcategory_grid)

        # 주문 섹션
        order_section = QVBoxLayout()
        order_section.setSpacing(10)

        order_header = QLabel('📋 주문 내역')
        order_header.setFont(QFont('Arial', 20, QFont.Bold))
        order_section.addWidget(order_header)

        self.order_list = QListWidget()
        self.order_list.setFont(QFont('Arial', 14))
        self.order_list.setMinimumHeight(200)
        order_section.addWidget(self.order_list)

        # 메뉴 삭제 버튼
        remove_item_btn = QPushButton('🗑️ 선택한 메뉴 삭제')
        remove_item_btn.clicked.connect(self.remove_selected_item)
        remove_item_btn.setFont(QFont('Arial', 14, QFont.Bold))
        remove_item_btn.setStyleSheet("""
            QPushButton { 
                background-color: #ff5722; color: white; 
                font-weight: bold; min-width: 200px; 
            }
            QPushButton:hover { background-color: #e64a19; }
        """)
        remove_item_btn.setMinimumHeight(50)
        order_section.addWidget(remove_item_btn)

        # 주문 상태
        self.order_status_label = QLabel('📍 주문 상태: 주문 대기중')
        self.order_status_label.setFont(QFont('Arial', 14, QFont.Bold))
        self.order_status_label.setAlignment(Qt.AlignCenter)
        self.order_status_label.setStyleSheet("""
            QLabel { 
                background-color: #E5E5E5; padding: 15px; 
                border-radius: 10px; margin: 10px 0; 
            }
        """)
        order_section.addWidget(self.order_status_label)

        # 총 금액
        self.total_price_label = QLabel('💰 합계: 0원')
        self.total_price_label.setFont(QFont('Arial', 18, QFont.Bold))
        self.total_price_label.setAlignment(Qt.AlignRight)
        self.total_price_label.setStyleSheet('QLabel { padding: 10px; background-color: #fff3e0; border-radius: 10px; }')
        order_section.addWidget(self.total_price_label)

        # 주문 버튼들
        order_buttons_layout = QHBoxLayout()
        order_buttons_layout.setSpacing(15)
        
        finish_order_btn = QPushButton('💳 주문하기')
        finish_order_btn.clicked.connect(self.finish_order)
        finish_order_btn.setStyleSheet("""
            QPushButton { 
                background-color: #d32f2f; color: white; 
                font-weight: bold; min-width: 200px; font-size: 16px;
            }
            QPushButton:hover { background-color: #b71c1c; }
        """)
        finish_order_btn.setMinimumHeight(60)
        
        cancel_order_btn = QPushButton('🔄 주문 초기화')
        cancel_order_btn.clicked.connect(self.cancel_order)
        cancel_order_btn.setStyleSheet("""
            QPushButton { 
                background-color: #757575; color: white; 
                font-weight: bold; min-width: 200px; font-size: 16px;
            }
            QPushButton:hover { background-color: #616161; }
        """)
        cancel_order_btn.setMinimumHeight(60)
        
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
            self.order_status_label.setText('🍳 주문 상태: 조리 중')
        elif '주문취소' in msg.data:
            self.order_status_label.setText('📍 주문 상태: 주문 대기중')
            QMessageBox.warning(self, "⚠️ 주문 취소", msg.data)
        elif msg.data == '조리완료':
            self.order_status_label.setText('🚚 주문 상태: 이동 중')
        elif msg.data == '이동 완료':
            self.order_status_label.setText('🔔 로봇이 음식을 가져왔어요!')

    def goback_callback(self, msg: Int32):
        if (msg.data == 0) and ('로봇이 음식을' in self.order_status_label.text()):
            self.order_status_label.setText('📍 주문 상태: 주문 대기중')

    # UI 동작
    def show_subcategories(self, category):
        if self.order_confirmed:
            self._warn('⚠️ 경고', '주문이 이미 확정되었습니다.\n새로운 주문을 하시려면 주문 초기화를 해주세요.')
            return
            
        for i in reversed(range(self.subcategory_grid.count())):
            w = self.subcategory_grid.itemAt(i).widget()
            if w: 
                w.setParent(None)

        # 카테고리별 이모티콘 매핑
        menu_icons = {
            '신라면': '🌶️', '진라면': '🔥', '짜파게티': '🍝', '안성탕면': '🍲',
            '삼양라면': '🎯', '너구리': '🦝', '불닭볶음면': '🔥',
            '콜라': '🥤', '제로콜라': '🥤', '사이다': '🍋', '제로사이다': '🍋',
            '환타': '🍊', '제로환타': '🍊',
            '김밥': '🍙', '떡볶이': '🌶️', '어묵': '🍢', '튀김': '🍤', '순대': '🍖',
            '돈가스': '🍖', 
        }

        subcategories = self.menu_categories[category]
        for i, (item_name, price) in enumerate(subcategories):
            row = i // 3
            col = i % 3
            icon = menu_icons.get(item_name, '🍴')
            btn = QPushButton(f"{icon} {item_name}\n{price:,}원")
            btn.setMinimumSize(250, 100)
            btn.setFont(QFont('Arial', 12))
            
            if '라면' in category:
                btn.clicked.connect(lambda checked, name=item_name, p=price: self.show_ramen_options(name, p))
            else:
                btn.clicked.connect(lambda checked, name=item_name, p=price: self.add_simple_item(name, p, category))
            
            self.subcategory_grid.addWidget(btn, row, col)

    def show_ramen_options(self, ramen_name, base_price):
        if self.order_confirmed:
            self._warn('⚠️ 경고', '주문이 이미 확정되었습니다.')
            return
            
        dialog = RamenOptionsDialog(ramen_name, self)
        if dialog.exec_():
            # 총 가격 계산
            total_item_price = base_price + dialog.topping_cost
            self.total_price += total_item_price
            self.total_price_label.setText(f'💰 합계: {self.total_price:,}원')
            
            # 주문 텍스트 생성
            order_text = f"🍜 {ramen_name}"
            if dialog.selected_toppings:
                order_text += f" (토핑: {', '.join(dialog.selected_toppings)})"
            order_text += f" - {total_item_price:,}원"
            
            self.order_list.addItem(order_text)
            self.orders.append(order_text)
            
            # 상세 주문 정보 저장
            self.order_details.append({
                'type': 'ramen',
                'name': ramen_name,
                'toppings': dialog.selected_toppings,
                'sides': [],
                'price': total_item_price
            })
            
            self._update_order_status()

    def add_simple_item(self, item_name, price, category):
        if self.order_confirmed:
            self._warn('⚠️ 경고', '주문이 이미 확정되었습니다.')
            return
            
        self.total_price += price
        self.total_price_label.setText(f'💰 합계: {self.total_price:,}원')
        
        # 카테고리별 이모티콘
        if '음료' in category:
            icon = '🥤'
        elif '사이드' in category:
            icon = '🍱'
        else:
            icon = '📦'
            
        order_text = f"{icon} {item_name} - {price:,}원"
        self.order_list.addItem(order_text)
        self.orders.append(order_text)
        
        # 사이드 메뉴 정보 저장
        if '사이드' in category:
            self.order_details.append({
                'type': 'side',
                'name': item_name,
                'toppings': [],
                'sides': [item_name],
                'price': price
            })
        else:  # 음료
            self.order_details.append({
                'type': 'drink',
                'name': item_name,
                'toppings': [],
                'sides': [],
                'price': price
            })
        
        self._update_order_status()

    def _update_order_status(self):
        self.order_status_label.setText('📝 주문 상태: 메뉴 선택중')
        self.order_status_label.setStyleSheet("""
            QLabel { 
                background-color: #FFF3CD; color: #856404; 
                padding: 15px; border-radius: 10px; margin: 10px 0; 
            }
        """)

    def remove_selected_item(self):
        if self.order_confirmed:
            self._warn('⚠️ 경고', '주문이 이미 확정되었습니다.')
            return
            
        current_item = self.order_list.currentItem()
        if current_item:
            row = self.order_list.row(current_item)
            
            # 가격 차감
            price_str = current_item.text().split(' - ')[1].replace('원', '').replace(',', '')
            self.total_price -= int(price_str)
            self.total_price_label.setText(f'💰 합계: {self.total_price:,}원')
            
            # 리스트에서 제거
            self.orders.pop(row)
            self.order_details.pop(row)
            self.order_list.takeItem(row)
            
            if not self.orders:
                self.order_status_label.setText('📍 주문 상태: 주문 대기중')
                self.order_status_label.setStyleSheet("""
                    QLabel { 
                        background-color: #E5E5E5; padding: 15px; 
                        border-radius: 10px; margin: 10px 0; 
                    }
                """)
        else:
            self._warn('⚠️ 경고', '삭제할 메뉴를 선택해주세요.')

    def finish_order(self):
        if not self.orders:
            self._warn('⚠️ 경고', '주문을 추가해주세요!')
            return

        if not self.order_confirmed:
            # 1단계: 테이블 선택
            table_dialog = TableSelectionDialog(self)
            if table_dialog.exec_():
                self.selected_table = table_dialog.selected_table
                self.selected_order_type = table_dialog.order_type
                
                # 2단계: 결제 진행
                payment_dialog = PaymentDialog(self.total_price, self)
                payment_dialog.payment_completed.connect(self.on_payment_completed)
                
                if payment_dialog.exec_():
                    # 결제 성공 시 on_payment_completed에서 처리
                    pass
                else:
                    # 결제 취소 시
                    self.selected_table = None
                    self.selected_order_type = None
        else:
            self._warn('⚠️ 경고', '주문이 이미 확정되었습니다.')

    def on_payment_completed(self, payment_method):
        """결제 완료 후 처리"""
        self.payment_method = payment_method
        self.order_confirmed = True
        
        # 주문 발행
        ramen_orders = [detail for detail in self.order_details if detail['type'] == 'ramen']
        
        if ramen_orders:
            # 라면 주문 각각 발행
            for ramen_detail in ramen_orders:
                order_msg = RamenOrder()
                order_msg.table_number = int(self.selected_table)
                order_msg.ramen_type = ramen_detail['name']
                order_msg.toppings = ramen_detail['toppings']
                order_msg.sides = []
                
                try:
                    order_msg.total_price = float(ramen_detail['price'])
                    order_msg.payment_method = payment_method.lower()  # "카드" → "card", "현금" → "cash"
                    order_msg.pay_now = True  # 결제 완료
                    order_msg.currency = "KRW"
                except AttributeError:
                    pass
                
                self.new_order_pub.publish(order_msg)
                self.get_logger().info(f'✅ 라면 주문 발행: {ramen_detail["name"]} ({payment_method} 결제)')
        
        # 전체 주문 요약 (로그용)
        dbg = String()
        dbg.data = f"🪑 테이블 {self.selected_table} 주문 ({payment_method} 결제완료):\n" + "\n".join(self.orders)
        self.order_publisher.publish(dbg)
        
        self._show_success_and_reset()

    def _show_success_and_reset(self):
        self.order_status_label.setText(f'✅ 주문 상태: 결제 완료 ({self.payment_method})')
        self.order_status_label.setStyleSheet("""
            QLabel { 
                background-color: #D4EDDA; color: #155724; 
                padding: 15px; border-radius: 10px; margin: 10px 0; 
            }
        """)
        
        QMessageBox.information(self, '✅ 주문 완료', 
                              f'🎉 주문이 확정되었습니다!\n💳 결제 방식: {self.payment_method}')
        
        # 초기화
        self.orders.clear()
        self.order_details.clear()
        self.order_list.clear()
        self.total_price = 0
        self.total_price_label.setText('💰 합계: 0원')
        self.order_confirmed = False
        self.selected_table = None
        self.selected_order_type = None
        self.payment_method = None

    def cancel_order(self):
        if self.orders:
            reply = QMessageBox.question(self, '🔄 주문 초기화', 
                                       '정말로 주문을 초기화하시겠습니까?\n모든 선택이 취소됩니다.',
                                       QMessageBox.Yes | QMessageBox.No, QMessageBox.No)
            if reply == QMessageBox.Yes:
                self.orders.clear()
                self.order_details.clear()
                self.order_list.clear()
                self.total_price = 0
                self.total_price_label.setText('💰 합계: 0원')
                self.order_confirmed = False
                QMessageBox.information(self, '✅ 초기화 완료', '주문이 초기화되었습니다.')
        else:
            self._info('ℹ️ 알림', '초기화할 주문이 없습니다.')

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
