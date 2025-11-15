// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/msg/ramen_order.h"


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
// Member 'payment_method'
// Member 'currency'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RamenOrder in the package ramen_interfaces.
typedef struct ramen_interfaces__msg__RamenOrder
{
  int32_t table_number;
  rosidl_runtime_c__String ramen_type;
  rosidl_runtime_c__String__Sequence toppings;
  rosidl_runtime_c__String__Sequence sides;
  int32_t total_price;
  rosidl_runtime_c__String payment_method;
  bool pay_now;
  rosidl_runtime_c__String currency;
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
