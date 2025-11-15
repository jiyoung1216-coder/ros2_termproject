#!/usr/bin/env python3
"""
라면 서빙 로봇 시스템 전체 실행 Launch 파일
"""

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 1. 계산 노드
        Node(
            package='ramen_table',
            executable='calculator_node',
            name='calculator_node',
            output='screen',
            emulate_tty=True,
        ),
        
        # 2. 주방 노드
        Node(
            package='ramen_kitchen',
            executable='kitchen_node',
            name='kitchen_node',
            output='screen',
            emulate_tty=True,
        ),
        
        # 3. 서빙 로봇 노드
        Node(
            package='ramen_serving',
            executable='robot_node',
            name='robot_node',
            output='screen',
            emulate_tty=True,
        ),
        
        # 4. 고객 노드
        Node(
            package='ramen_table',
            executable='customer_node',
            name='customer_node',
            output='screen',
            emulate_tty=True,
        ),
    ])