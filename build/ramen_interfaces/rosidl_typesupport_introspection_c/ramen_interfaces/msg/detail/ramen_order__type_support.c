// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ramen_interfaces/msg/detail/ramen_order__rosidl_typesupport_introspection_c.h"
#include "ramen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ramen_interfaces/msg/detail/ramen_order__functions.h"
#include "ramen_interfaces/msg/detail/ramen_order__struct.h"


// Include directives for member types
// Member `ramen_type`
// Member `toppings`
// Member `sides`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ramen_interfaces__msg__RamenOrder__init(message_memory);
}

void ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_fini_function(void * message_memory)
{
  ramen_interfaces__msg__RamenOrder__fini(message_memory);
}

size_t ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__size_function__RamenOrder__toppings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_const_function__RamenOrder__toppings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_function__RamenOrder__toppings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__fetch_function__RamenOrder__toppings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_const_function__RamenOrder__toppings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__assign_function__RamenOrder__toppings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_function__RamenOrder__toppings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__resize_function__RamenOrder__toppings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__size_function__RamenOrder__sides(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_const_function__RamenOrder__sides(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_function__RamenOrder__sides(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__fetch_function__RamenOrder__sides(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_const_function__RamenOrder__sides(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__assign_function__RamenOrder__sides(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_function__RamenOrder__sides(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__resize_function__RamenOrder__sides(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_message_member_array[4] = {
  {
    "table_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__msg__RamenOrder, table_number),  // bytes offset in struct
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
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__msg__RamenOrder, ramen_type),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__msg__RamenOrder, toppings),  // bytes offset in struct
    NULL,  // default value
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__size_function__RamenOrder__toppings,  // size() function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_const_function__RamenOrder__toppings,  // get_const(index) function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_function__RamenOrder__toppings,  // get(index) function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__fetch_function__RamenOrder__toppings,  // fetch(index, &value) function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__assign_function__RamenOrder__toppings,  // assign(index, value) function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__resize_function__RamenOrder__toppings  // resize(index) function pointer
  },
  {
    "sides",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__msg__RamenOrder, sides),  // bytes offset in struct
    NULL,  // default value
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__size_function__RamenOrder__sides,  // size() function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_const_function__RamenOrder__sides,  // get_const(index) function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__get_function__RamenOrder__sides,  // get(index) function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__fetch_function__RamenOrder__sides,  // fetch(index, &value) function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__assign_function__RamenOrder__sides,  // assign(index, value) function pointer
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__resize_function__RamenOrder__sides  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_message_members = {
  "ramen_interfaces__msg",  // message namespace
  "RamenOrder",  // message name
  4,  // number of fields
  sizeof(ramen_interfaces__msg__RamenOrder),
  ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_message_member_array,  // message members
  ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_init_function,  // function to initialize message memory (memory has to be allocated)
  ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_message_type_support_handle = {
  0,
  &ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ramen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, msg, RamenOrder)() {
  if (!ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_message_type_support_handle.typesupport_identifier) {
    ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ramen_interfaces__msg__RamenOrder__rosidl_typesupport_introspection_c__RamenOrder_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
