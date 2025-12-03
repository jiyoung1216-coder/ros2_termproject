# 🍜 ROS2 Ramen Shop Term Project

라면가게 전체 로직을 ROS 2(Humble 기준)로 구현한 패키지 묶음입니다. `src/src` 아래의 네 패키지(`ramen_interfaces`, `ramen_table`, `ramen_kitchen`, `ramen_serving`)가 주문 → 주방 → 서빙 로봇 → 고객 검수의 흐름을 함께 구성합니다.  
ROS 2를 처음 접하는 사람도 그대로 따라 하면 실행할 수 있도록 필수 개념과 명령어를 정리했습니다.

---

## 1. 준비물

1. **ROS 2 Humble (Ubuntu 22.04)**
   ```bash
   sudo apt update && sudo apt upgrade
   sudo apt install ros-humble-desktop python3-colcon-common-extensions python3-rosdep
   ```
2. **필수 파이썬 패키지**
   ```bash
   sudo apt install python3-pyqt5 python3-pyqt5.qtwebengine
   ```
3. **rosdep 초기화 & 의존성 설치 (워크스페이스 루트 `/workspace`)**
   ```bash
   cd /workspace
   rosdep update
   rosdep install --from-paths src --ignore-src -r -y
   ```

> 💡 **X 서버 주의**: `ramen_table/order_node.py`는 PyQt5 GUI를 띄웁니다. 로컬 Linux에서 실행하거나, 원격 SSH라면 X11 포워딩 또는 VNC를 사용하세요.

---

## 2. 빌드 & 환경 설정

```bash
cd /workspace
source /opt/ros/humble/setup.bash   # ROS 2 기본 환경
colcon build --symlink-install      # 프로젝트 빌드
source install/setup.bash           # 빌드 산출물 오버레이
```

빌드가 끝나면 **새 터미널마다** `/workspace/install/setup.bash`를 다시 source 해주세요. (Tip: `echo "source /workspace/install/setup.bash" >> ~/.bashrc`)

---

## 3. 전체 로직 한눈에 보기

```
┌──────────┐     서비스         ┌────────────┐      토픽           ┌────────────┐
│order_node│───/order_service──▶│counter_node│───/new_order──────▶│kitchen_node│
└──────────┘                     └────────────┘                    └────────────┘
       ▲                                │                                   │
       │                                └───────── 주문 로그                  │
       │                                                   │                ▼
       │                                                   │     토픽   ┌───────────┐
       │                                                   └──────────▶│robot_node│
       │                                                               └───────────┘
       │                                                                       │
       │                                            토픽                        │
       └───────────────────────────────/delivery_arrived◀──────────────────────┘
                                                         │
                                                         ▼
                                                   ┌───────────-─┐
                                                   │customer_node│
                                                   └──────────-──┘
                                                  (완벽 X 시 /request_remake 액션으로 주방 재조리)
```

- **주문 UI(`order_node`)**가 카운터 서비스(`/order_service`)를 호출합니다.
- **카운터(`counter_node`)**는 주문을 로깅하고 메시지(`/new_order`)를 주방으로 퍼블리시합니다.
- **주방(`kitchen_node`)**은 라면을 조리해 결과(`/food_ready`)를 서빙 로봇에게 전달합니다.
- **서빙 로봇(`robot_node`)**은 액션(`serve_ramen`)으로 로봇 이동·복귀를 시뮬레이션하고, 테이블에 도착하면 `/delivery_arrived`를 발행합니다.
- **고객(`customer_node`)**은 배달된 음식 상태를 검사하고, 불량이면 `/request_remake` 액션으로 재조리를 요청한 뒤 다시 로봇에게 전달합니다.

---

## 4. 실행 명령어 & 설명

아래 5개의 노드를 **각각 다른 터미널**에서 실행합니다. (모든 터미널에서 `/workspace/install/setup.bash`를 source 했다고 가정)

| 실행 순서 | 명령어 | 노드 설명 |
|-----------|--------|-----------|
|①|`ros2 run ramen_table counter_node`|POS/카운터. `order_node`의 서비스 요청을 받아 주문을 `/new_order`로 브로드캐스트합니다.|
|②|`ros2 run ramen_kitchen kitchen_node`|주방 시뮬레이터. 주문을 구독해 조리하고 `/food_ready`에 `CookedRamen` 메시지를 발행합니다.|
|③|`ros2 run ramen_serving robot_node`|서빙 로봇. 주방에서 받은 음식을 `ServeRamen` 액션으로 테이블까지 이동·복귀시키고 `/delivery_arrived`로 고객에게 알립니다.|
|④|`ros2 run ramen_table customer_node`|고객 역할. 배달된 음식의 `cook_status`를 검사하고, 불량이면 `/request_remake` 액션으로 재조리 후 다시 `/food_ready`로 전달합니다.|
|⑤|`ros2 run ramen_table order_node`|PyQt5 주문 키오스크. 메뉴 선택 → 결제 → `OrderService` 호출까지 담당합니다. 반드시 다른 노드가 모두 켜진 뒤 실행하세요.|

> ⚠️ `order_node`가 서비스 서버를 찾지 못하면 “카운터 시스템에 연결할 수 없습니다” 경고가 뜹니다. 이 경우 `counter_node` 터미널이 켜져 있는지 확인 후 다시 주문하세요.

---

## 5. 실습 가이드

1. 5개 터미널에서 위 표 순서대로 노드를 실행합니다.
2. `order_node` GUI에서 메뉴·토핑을 고르고 결제 버튼을 누르면 주문이 `counter_node`에 기록됩니다.
3. `kitchen_node`가 5초간 조리 후 `cook_status`를 랜덤으로 정하고, `robot_node`가 테이블로 이동하는 로그를 출력합니다.
4. `customer_node`는 배달 알림을 받고 상태가 perfect가 아니라면 재조리를 요청합니다.
5. 로봇이 복귀하면 UI 상태가 “로봇이 음식을 가져왔어요!”로 바뀌고, `table_num` 토픽을 통해 대기 상태로 리셋됩니다.

필요하면 다음 명령으로 데이터 흐름을 확인할 수 있습니다.

```bash
ros2 topic list
ros2 topic echo /food_ready
ros2 action list
ros2 action info /serve_ramen
ros2 service list
```

---

## 6. 문제 해결

- **PyQt5가 없다면서 실행 실패** → `sudo apt install python3-pyqt5 python3-pyqt5.qtwebengine`
- **`serve_ramen` 액션 서버가 없다** → `robot_node` 터미널이 켜져 있는지 확인.
- **빌드 실패 (ModuleNotFoundError)** → `colcon build` 전에 `rosdep install ...`로 의존성 설치했는지 확인.
- **GUI가 뜨지 않음 (SSH)** → `ssh -X`/`-Y` 또는 VNC 사용. Wayland 환경이면 `QT_QPA_PLATFORM=xcb` 설정.

---

## 7. 추가 아이디어

- Launch 파일을 작성해 다중 노드를 한 번에 켤 수 있도록 개선
- 주문 UI에서 테이블 번호/배달 모드를 ROS 파라미터화
- `robot_node`의 좌표/속도를 파라미터 서버로 빼서 손쉽게 조정

즐거운 ROS 2 라면가게 시뮬레이션 되세요!
