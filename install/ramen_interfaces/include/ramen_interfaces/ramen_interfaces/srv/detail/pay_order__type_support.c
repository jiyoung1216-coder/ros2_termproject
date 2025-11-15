// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ramen_interfaces:srv/PayOrder.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ramen_interfaces/srv/detail/pay_order__rosidl_typesupport_introspection_c.h"
#include "ramen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ramen_interfaces/srv/detail/pay_order__functions.h"
#include "ramen_interfaces/srv/detail/pay_order__struct.h"


// Include directives for member types
// Member `ramen_type`
// Member `toppings`
// Member `sides`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ramen_interfaces__srv__PayOrder_Request__init(message_memory);
}

void ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_fini_function(void * message_memory)
{
  ramen_interfaces__srv__PayOrder_Request__fini(message_memory);
}

size_t ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__size_function__PayOrder_Request__toppings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Request__toppings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_function__PayOrder_Request__toppings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__fetch_function__PayOrder_Request__toppings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Request__toppings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__assign_function__PayOrder_Request__toppings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_function__PayOrder_Request__toppings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__resize_function__PayOrder_Request__toppings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__size_function__PayOrder_Request__sides(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Request__sides(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_function__PayOrder_Request__sides(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__fetch_function__PayOrder_Request__sides(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Request__sides(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__assign_function__PayOrder_Request__sides(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_function__PayOrder_Request__sides(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__resize_function__PayOrder_Request__sides(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_member_array[4] = {
  {
    "table_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Request, table_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ramen_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Request, ramen_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "toppings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Request, toppings),  // bytes offset in struct
    NULL,  // default value
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__size_function__PayOrder_Request__toppings,  // size() function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Request__toppings,  // get_const(index) function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_function__PayOrder_Request__toppings,  // get(index) function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__fetch_function__PayOrder_Request__toppings,  // fetch(index, &value) function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__assign_function__PayOrder_Request__toppings,  // assign(index, value) function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__resize_function__PayOrder_Request__toppings  // resize(index) function pointer
  },
  {
    "sides",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Request, sides),  // bytes offset in struct
    NULL,  // default value
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__size_function__PayOrder_Request__sides,  // size() function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Request__sides,  // get_const(index) function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__get_function__PayOrder_Request__sides,  // get(index) function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__fetch_function__PayOrder_Request__sides,  // fetch(index, &value) function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__assign_function__PayOrder_Request__sides,  // assign(index, value) function pointer
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__resize_function__PayOrder_Request__sides  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_members = {
  "ramen_interfaces__srv",  // message namespace
  "PayOrder_Request",  // message name
  4,  // number of fields
  sizeof(ramen_interfaces__srv__PayOrder_Request),
  false,  // has_any_key_member_
  ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_member_array,  // message members
  ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_type_support_handle = {
  0,
  &ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_members,
  get_message_typesupport_handle_function,
  &ramen_interfaces__srv__PayOrder_Request__get_type_hash,
  &ramen_interfaces__srv__PayOrder_Request__get_type_description,
  &ramen_interfaces__srv__PayOrder_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ramen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Request)() {
  if (!ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_type_support_handle.typesupport_identifier) {
    ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ramen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__functions.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ramen_interfaces__srv__PayOrder_Response__init(message_memory);
}

void ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_fini_function(void * message_memory)
{
  ramen_interfaces__srv__PayOrder_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_price",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Response, total_price),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_members = {
  "ramen_interfaces__srv",  // message namespace
  "PayOrder_Response",  // message name
  3,  // number of fields
  sizeof(ramen_interfaces__srv__PayOrder_Response),
  false,  // has_any_key_member_
  ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_member_array,  // message members
  ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_type_support_handle = {
  0,
  &ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_members,
  get_message_typesupport_handle_function,
  &ramen_interfaces__srv__PayOrder_Response__get_type_hash,
  &ramen_interfaces__srv__PayOrder_Response__get_type_description,
  &ramen_interfaces__srv__PayOrder_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ramen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Response)() {
  if (!ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_type_support_handle.typesupport_identifier) {
    ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ramen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__functions.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ramen_interfaces/srv/pay_order.h"
// Member `request`
// Member `response`
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ramen_interfaces__srv__PayOrder_Event__init(message_memory);
}

void ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_fini_function(void * message_memory)
{
  ramen_interfaces__srv__PayOrder_Event__fini(message_memory);
}

size_t ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__size_function__PayOrder_Event__request(
  const void * untyped_member)
{
  const ramen_interfaces__srv__PayOrder_Request__Sequence * member =
    (const ramen_interfaces__srv__PayOrder_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Event__request(
  const void * untyped_member, size_t index)
{
  const ramen_interfaces__srv__PayOrder_Request__Sequence * member =
    (const ramen_interfaces__srv__PayOrder_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_function__PayOrder_Event__request(
  void * untyped_member, size_t index)
{
  ramen_interfaces__srv__PayOrder_Request__Sequence * member =
    (ramen_interfaces__srv__PayOrder_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__fetch_function__PayOrder_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ramen_interfaces__srv__PayOrder_Request * item =
    ((const ramen_interfaces__srv__PayOrder_Request *)
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Event__request(untyped_member, index));
  ramen_interfaces__srv__PayOrder_Request * value =
    (ramen_interfaces__srv__PayOrder_Request *)(untyped_value);
  *value = *item;
}

void ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__assign_function__PayOrder_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ramen_interfaces__srv__PayOrder_Request * item =
    ((ramen_interfaces__srv__PayOrder_Request *)
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_function__PayOrder_Event__request(untyped_member, index));
  const ramen_interfaces__srv__PayOrder_Request * value =
    (const ramen_interfaces__srv__PayOrder_Request *)(untyped_value);
  *item = *value;
}

bool ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__resize_function__PayOrder_Event__request(
  void * untyped_member, size_t size)
{
  ramen_interfaces__srv__PayOrder_Request__Sequence * member =
    (ramen_interfaces__srv__PayOrder_Request__Sequence *)(untyped_member);
  ramen_interfaces__srv__PayOrder_Request__Sequence__fini(member);
  return ramen_interfaces__srv__PayOrder_Request__Sequence__init(member, size);
}

size_t ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__size_function__PayOrder_Event__response(
  const void * untyped_member)
{
  const ramen_interfaces__srv__PayOrder_Response__Sequence * member =
    (const ramen_interfaces__srv__PayOrder_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Event__response(
  const void * untyped_member, size_t index)
{
  const ramen_interfaces__srv__PayOrder_Response__Sequence * member =
    (const ramen_interfaces__srv__PayOrder_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_function__PayOrder_Event__response(
  void * untyped_member, size_t index)
{
  ramen_interfaces__srv__PayOrder_Response__Sequence * member =
    (ramen_interfaces__srv__PayOrder_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__fetch_function__PayOrder_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ramen_interfaces__srv__PayOrder_Response * item =
    ((const ramen_interfaces__srv__PayOrder_Response *)
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Event__response(untyped_member, index));
  ramen_interfaces__srv__PayOrder_Response * value =
    (ramen_interfaces__srv__PayOrder_Response *)(untyped_value);
  *value = *item;
}

void ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__assign_function__PayOrder_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ramen_interfaces__srv__PayOrder_Response * item =
    ((ramen_interfaces__srv__PayOrder_Response *)
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_function__PayOrder_Event__response(untyped_member, index));
  const ramen_interfaces__srv__PayOrder_Response * value =
    (const ramen_interfaces__srv__PayOrder_Response *)(untyped_value);
  *item = *value;
}

bool ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__resize_function__PayOrder_Event__response(
  void * untyped_member, size_t size)
{
  ramen_interfaces__srv__PayOrder_Response__Sequence * member =
    (ramen_interfaces__srv__PayOrder_Response__Sequence *)(untyped_member);
  ramen_interfaces__srv__PayOrder_Response__Sequence__fini(member);
  return ramen_interfaces__srv__PayOrder_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Event, request),  // bytes offset in struct
    NULL,  // default value
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__size_function__PayOrder_Event__request,  // size() function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Event__request,  // get_const(index) function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_function__PayOrder_Event__request,  // get(index) function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__fetch_function__PayOrder_Event__request,  // fetch(index, &value) function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__assign_function__PayOrder_Event__request,  // assign(index, value) function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__resize_function__PayOrder_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ramen_interfaces__srv__PayOrder_Event, response),  // bytes offset in struct
    NULL,  // default value
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__size_function__PayOrder_Event__response,  // size() function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_const_function__PayOrder_Event__response,  // get_const(index) function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__get_function__PayOrder_Event__response,  // get(index) function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__fetch_function__PayOrder_Event__response,  // fetch(index, &value) function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__assign_function__PayOrder_Event__response,  // assign(index, value) function pointer
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__resize_function__PayOrder_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_members = {
  "ramen_interfaces__srv",  // message namespace
  "PayOrder_Event",  // message name
  3,  // number of fields
  sizeof(ramen_interfaces__srv__PayOrder_Event),
  false,  // has_any_key_member_
  ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_member_array,  // message members
  ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_type_support_handle = {
  0,
  &ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_members,
  get_message_typesupport_handle_function,
  &ramen_interfaces__srv__PayOrder_Event__get_type_hash,
  &ramen_interfaces__srv__PayOrder_Event__get_type_description,
  &ramen_interfaces__srv__PayOrder_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ramen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Event)() {
  ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Request)();
  ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Response)();
  if (!ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_type_support_handle.typesupport_identifier) {
    ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ramen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_service_members = {
  "ramen_interfaces__srv",  // service namespace
  "PayOrder",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_Request_message_type_support_handle,
  NULL,  // response message
  // ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_Response_message_type_support_handle
  NULL  // event_message
  // ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_Response_message_type_support_handle
};


static rosidl_service_type_support_t ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_service_type_support_handle = {
  0,
  &ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_service_members,
  get_service_typesupport_handle_function,
  &ramen_interfaces__srv__PayOrder_Request__rosidl_typesupport_introspection_c__PayOrder_Request_message_type_support_handle,
  &ramen_interfaces__srv__PayOrder_Response__rosidl_typesupport_introspection_c__PayOrder_Response_message_type_support_handle,
  &ramen_interfaces__srv__PayOrder_Event__rosidl_typesupport_introspection_c__PayOrder_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ramen_interfaces,
    srv,
    PayOrder
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ramen_interfaces,
    srv,
    PayOrder
  ),
  &ramen_interfaces__srv__PayOrder__get_type_hash,
  &ramen_interfaces__srv__PayOrder__get_type_description,
  &ramen_interfaces__srv__PayOrder__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ramen_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder)(void) {
  if (!ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_service_type_support_handle.typesupport_identifier) {
    ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, srv, PayOrder_Event)()->data;
  }

  return &ramen_interfaces__srv__detail__pay_order__rosidl_typesupport_introspection_c__PayOrder_service_type_support_handle;
}
