// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ramen_interfaces:action/RequestRemake.idl
// generated code does not contain a copyright notice

#ifndef RAMEN_INTERFACES__ACTION__DETAIL__REQUEST_REMAKE__STRUCT_H_
#define RAMEN_INTERFACES__ACTION__DETAIL__REQUEST_REMAKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bad_food'
#include "ramen_interfaces/msg/detail/cooked_ramen__struct.h"

/// Struct defined in action/RequestRemake in the package ramen_interfaces.
typedef struct ramen_interfaces__action__RequestRemake_Goal
{
  /// Goal: 문제가 있는 음식 정보
  ramen_interfaces__msg__CookedRamen bad_food;
} ramen_interfaces__action__RequestRemake_Goal;

// Struct for a sequence of ramen_interfaces__action__RequestRemake_Goal.
typedef struct ramen_interfaces__action__RequestRemake_Goal__Sequence
{
  ramen_interfaces__action__RequestRemake_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__RequestRemake_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'new_food'
// already included above
// #include "ramen_interfaces/msg/detail/cooked_ramen__struct.h"

/// Struct defined in action/RequestRemake in the package ramen_interfaces.
typedef struct ramen_interfaces__action__RequestRemake_Result
{
  ramen_interfaces__msg__CookedRamen new_food;
} ramen_interfaces__action__RequestRemake_Result;

// Struct for a sequence of ramen_interfaces__action__RequestRemake_Result.
typedef struct ramen_interfaces__action__RequestRemake_Result__Sequence
{
  ramen_interfaces__action__RequestRemake_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__RequestRemake_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'progress'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RequestRemake in the package ramen_interfaces.
typedef struct ramen_interfaces__action__RequestRemake_Feedback
{
  /// "Re-cooking", "Remake_Done"
  rosidl_runtime_c__String progress;
} ramen_interfaces__action__RequestRemake_Feedback;

// Struct for a sequence of ramen_interfaces__action__RequestRemake_Feedback.
typedef struct ramen_interfaces__action__RequestRemake_Feedback__Sequence
{
  ramen_interfaces__action__RequestRemake_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__RequestRemake_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ramen_interfaces/action/detail/request_remake__struct.h"

/// Struct defined in action/RequestRemake in the package ramen_interfaces.
typedef struct ramen_interfaces__action__RequestRemake_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ramen_interfaces__action__RequestRemake_Goal goal;
} ramen_interfaces__action__RequestRemake_SendGoal_Request;

// Struct for a sequence of ramen_interfaces__action__RequestRemake_SendGoal_Request.
typedef struct ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence
{
  ramen_interfaces__action__RequestRemake_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RequestRemake in the package ramen_interfaces.
typedef struct ramen_interfaces__action__RequestRemake_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ramen_interfaces__action__RequestRemake_SendGoal_Response;

// Struct for a sequence of ramen_interfaces__action__RequestRemake_SendGoal_Response.
typedef struct ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence
{
  ramen_interfaces__action__RequestRemake_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RequestRemake in the package ramen_interfaces.
typedef struct ramen_interfaces__action__RequestRemake_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ramen_interfaces__action__RequestRemake_GetResult_Request;

// Struct for a sequence of ramen_interfaces__action__RequestRemake_GetResult_Request.
typedef struct ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence
{
  ramen_interfaces__action__RequestRemake_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ramen_interfaces/action/detail/request_remake__struct.h"

/// Struct defined in action/RequestRemake in the package ramen_interfaces.
typedef struct ramen_interfaces__action__RequestRemake_GetResult_Response
{
  int8_t status;
  ramen_interfaces__action__RequestRemake_Result result;
} ramen_interfaces__action__RequestRemake_GetResult_Response;

// Struct for a sequence of ramen_interfaces__action__RequestRemake_GetResult_Response.
typedef struct ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence
{
  ramen_interfaces__action__RequestRemake_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ramen_interfaces/action/detail/request_remake__struct.h"

/// Struct defined in action/RequestRemake in the package ramen_interfaces.
typedef struct ramen_interfaces__action__RequestRemake_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ramen_interfaces__action__RequestRemake_Feedback feedback;
} ramen_interfaces__action__RequestRemake_FeedbackMessage;

// Struct for a sequence of ramen_interfaces__action__RequestRemake_FeedbackMessage.
typedef struct ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence
{
  ramen_interfaces__action__RequestRemake_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAMEN_INTERFACES__ACTION__DETAIL__REQUEST_REMAKE__STRUCT_H_
