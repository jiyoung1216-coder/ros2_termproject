// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice

#ifndef RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__STRUCT_H_
#define RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ramen_type'
// Member 'toppings'
// Member 'sides'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RamenOrder in the package ramen_interfaces.
/**
  * msg/RamenOrder.msg
 */
typedef struct ramen_interfaces__msg__RamenOrder
{
  /// 주문 테이블 번호 (1~9)
  uint8_t table_number;
  /// 라면 종류 (신라면, 진라면 등)
  rosidl_runtime_c__String ramen_type;
  /// 토핑 목록 (치즈, 떡, 만두 등)
  rosidl_runtime_c__String__Sequence toppings;
  /// 사이드 목록 (콜라, 김밥 등)
  rosidl_runtime_c__String__Sequence sides;
} ramen_interfaces__msg__RamenOrder;

// Struct for a sequence of ramen_interfaces__msg__RamenOrder.
typedef struct ramen_interfaces__msg__RamenOrder__Sequence
{
  ramen_interfaces__msg__RamenOrder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__msg__RamenOrder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__STRUCT_H_
