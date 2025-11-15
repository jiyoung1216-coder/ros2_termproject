// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ramen_interfaces:srv/PayOrder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/srv/pay_order.h"


#ifndef RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__STRUCT_H_
#define RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__STRUCT_H_

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

/// Struct defined in srv/PayOrder in the package ramen_interfaces.
typedef struct ramen_interfaces__srv__PayOrder_Request
{
  /// 테이블 번호
  int32_t table_number;
  /// 라면 종류 (예: "신라면")
  rosidl_runtime_c__String ramen_type;
  /// 토핑 리스트 (예: ["치즈", "떡"])
  rosidl_runtime_c__String__Sequence toppings;
  /// 사이드 리스트 (예:)
  rosidl_runtime_c__String__Sequence sides;
} ramen_interfaces__srv__PayOrder_Request;

// Struct for a sequence of ramen_interfaces__srv__PayOrder_Request.
typedef struct ramen_interfaces__srv__PayOrder_Request__Sequence
{
  ramen_interfaces__srv__PayOrder_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__srv__PayOrder_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PayOrder in the package ramen_interfaces.
typedef struct ramen_interfaces__srv__PayOrder_Response
{
  /// 결제 승인 여부 (True/False)
  bool success;
  /// 계산된 총 결제 금액
  int32_t total_price;
  /// 결과 메시지 (예: "결제 승인 완료" 또는 "잔액 부족")
  rosidl_runtime_c__String message;
} ramen_interfaces__srv__PayOrder_Response;

// Struct for a sequence of ramen_interfaces__srv__PayOrder_Response.
typedef struct ramen_interfaces__srv__PayOrder_Response__Sequence
{
  ramen_interfaces__srv__PayOrder_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__srv__PayOrder_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ramen_interfaces__srv__PayOrder_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ramen_interfaces__srv__PayOrder_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PayOrder in the package ramen_interfaces.
typedef struct ramen_interfaces__srv__PayOrder_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ramen_interfaces__srv__PayOrder_Request__Sequence request;
  ramen_interfaces__srv__PayOrder_Response__Sequence response;
} ramen_interfaces__srv__PayOrder_Event;

// Struct for a sequence of ramen_interfaces__srv__PayOrder_Event.
typedef struct ramen_interfaces__srv__PayOrder_Event__Sequence
{
  ramen_interfaces__srv__PayOrder_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__srv__PayOrder_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__STRUCT_H_
