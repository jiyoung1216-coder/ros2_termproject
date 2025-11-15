// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ramen_interfaces:msg/CookedRamen.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ramen_interfaces/msg/detail/cooked_ramen__rosidl_typesupport_introspection_c.h"
#include "ramen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ramen_interfaces/msg/detail/cooked_ramen__functions.h"
#include "ramen_interfaces/msg/detail/cooked_ramen__struct.h"


// Include directives for member types
// Member `order`
#include "ramen_interfaces/msg/ramen_order.h"
// Member `order`
#include "ramen_interfaces/msg/detail/ramen_order__rosidl_typesupport_introspection_c.h"
// Member `cook_status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ramen_interfaces__msg__CookedRamen__init(message_memory);
}

void ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_fini_function(void * message_memory)
{
  ramen_interfaces__msg__CookedRamen__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_member_array[2] = {
  {
    "order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__msg__CookedRamen, order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cook_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ramen_interfaces__msg__CookedRamen, cook_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_members = {
  "ramen_interfaces__msg",  // message namespace
  "CookedRamen",  // message name
  2,  // number of fields
  sizeof(ramen_interfaces__msg__CookedRamen),
  false,  // has_any_key_member_
  ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_member_array,  // message members
  ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_init_function,  // function to initialize message memory (memory has to be allocated)
  ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_type_support_handle = {
  0,
  &ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_members,
  get_message_typesupport_handle_function,
  &ramen_interfaces__msg__CookedRamen__get_type_hash,
  &ramen_interfaces__msg__CookedRamen__get_type_description,
  &ramen_interfaces__msg__CookedRamen__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ramen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, msg, CookedRamen)() {
  ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ramen_interfaces, msg, RamenOrder)();
  if (!ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_type_support_handle.typesupport_identifier) {
    ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ramen_interfaces__msg__CookedRamen__rosidl_typesupport_introspection_c__CookedRamen_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
