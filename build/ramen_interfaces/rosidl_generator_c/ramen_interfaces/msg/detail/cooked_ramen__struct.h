// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ramen_interfaces:msg/CookedRamen.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/msg/cooked_ramen.h"


#ifndef RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__STRUCT_H_
#define RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'order'
#include "ramen_interfaces/msg/detail/ramen_order__struct.h"
// Member 'cook_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CookedRamen in the package ramen_interfaces.
/**
  * msg/CookedRamen.msg
 */
typedef struct ramen_interfaces__msg__CookedRamen
{
  /// 원본 주문 정보
  ramen_interfaces__msg__RamenOrder order;
  /// 조리 상태
  /// "perfect" (o)
  /// "undercooked" (x)
  /// "overcooked" (x)
  /// "missing_topping" (x)
  /// "missing_side" (x)
  rosidl_runtime_c__String cook_status;
} ramen_interfaces__msg__CookedRamen;

// Struct for a sequence of ramen_interfaces__msg__CookedRamen.
typedef struct ramen_interfaces__msg__CookedRamen__Sequence
{
  ramen_interfaces__msg__CookedRamen * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__msg__CookedRamen__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__STRUCT_H_
