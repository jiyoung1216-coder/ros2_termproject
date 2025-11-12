// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ramen_interfaces:action/ServeRamen.idl
// generated code does not contain a copyright notice

#ifndef RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__STRUCT_H_
#define RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'food_to_serve'
#include "ramen_interfaces/msg/detail/cooked_ramen__struct.h"

/// Struct defined in action/ServeRamen in the package ramen_interfaces.
typedef struct ramen_interfaces__action__ServeRamen_Goal
{
  /// Goal: 서빙할 음식과 목적지
  ramen_interfaces__msg__CookedRamen food_to_serve;
} ramen_interfaces__action__ServeRamen_Goal;

// Struct for a sequence of ramen_interfaces__action__ServeRamen_Goal.
typedef struct ramen_interfaces__action__ServeRamen_Goal__Sequence
{
  ramen_interfaces__action__ServeRamen_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__ServeRamen_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ServeRamen in the package ramen_interfaces.
typedef struct ramen_interfaces__action__ServeRamen_Result
{
  bool delivery_success;
} ramen_interfaces__action__ServeRamen_Result;

// Struct for a sequence of ramen_interfaces__action__ServeRamen_Result.
typedef struct ramen_interfaces__action__ServeRamen_Result__Sequence
{
  ramen_interfaces__action__ServeRamen_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__ServeRamen_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ServeRamen in the package ramen_interfaces.
typedef struct ramen_interfaces__action__ServeRamen_Feedback
{
  float current_x;
  float current_y;
  /// "delivering", "arrived", "returning"
  rosidl_runtime_c__String status;
} ramen_interfaces__action__ServeRamen_Feedback;

// Struct for a sequence of ramen_interfaces__action__ServeRamen_Feedback.
typedef struct ramen_interfaces__action__ServeRamen_Feedback__Sequence
{
  ramen_interfaces__action__ServeRamen_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__ServeRamen_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ramen_interfaces/action/detail/serve_ramen__struct.h"

/// Struct defined in action/ServeRamen in the package ramen_interfaces.
typedef struct ramen_interfaces__action__ServeRamen_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ramen_interfaces__action__ServeRamen_Goal goal;
} ramen_interfaces__action__ServeRamen_SendGoal_Request;

// Struct for a sequence of ramen_interfaces__action__ServeRamen_SendGoal_Request.
typedef struct ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence
{
  ramen_interfaces__action__ServeRamen_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ServeRamen in the package ramen_interfaces.
typedef struct ramen_interfaces__action__ServeRamen_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ramen_interfaces__action__ServeRamen_SendGoal_Response;

// Struct for a sequence of ramen_interfaces__action__ServeRamen_SendGoal_Response.
typedef struct ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence
{
  ramen_interfaces__action__ServeRamen_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ServeRamen in the package ramen_interfaces.
typedef struct ramen_interfaces__action__ServeRamen_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ramen_interfaces__action__ServeRamen_GetResult_Request;

// Struct for a sequence of ramen_interfaces__action__ServeRamen_GetResult_Request.
typedef struct ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence
{
  ramen_interfaces__action__ServeRamen_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ramen_interfaces/action/detail/serve_ramen__struct.h"

/// Struct defined in action/ServeRamen in the package ramen_interfaces.
typedef struct ramen_interfaces__action__ServeRamen_GetResult_Response
{
  int8_t status;
  ramen_interfaces__action__ServeRamen_Result result;
} ramen_interfaces__action__ServeRamen_GetResult_Response;

// Struct for a sequence of ramen_interfaces__action__ServeRamen_GetResult_Response.
typedef struct ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence
{
  ramen_interfaces__action__ServeRamen_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ramen_interfaces/action/detail/serve_ramen__struct.h"

/// Struct defined in action/ServeRamen in the package ramen_interfaces.
typedef struct ramen_interfaces__action__ServeRamen_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ramen_interfaces__action__ServeRamen_Feedback feedback;
} ramen_interfaces__action__ServeRamen_FeedbackMessage;

// Struct for a sequence of ramen_interfaces__action__ServeRamen_FeedbackMessage.
typedef struct ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence
{
  ramen_interfaces__action__ServeRamen_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__STRUCT_H_
