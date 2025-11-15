// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ramen_interfaces:msg/CookedRamen.idl
// generated code does not contain a copyright notice
#ifndef RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ramen_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ramen_interfaces/msg/detail/cooked_ramen__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
bool cdr_serialize_ramen_interfaces__msg__CookedRamen(
  const ramen_interfaces__msg__CookedRamen * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
bool cdr_deserialize_ramen_interfaces__msg__CookedRamen(
  eprosima::fastcdr::Cdr &,
  ramen_interfaces__msg__CookedRamen * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
size_t get_serialized_size_ramen_interfaces__msg__CookedRamen(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
size_t max_serialized_size_ramen_interfaces__msg__CookedRamen(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
bool cdr_serialize_key_ramen_interfaces__msg__CookedRamen(
  const ramen_interfaces__msg__CookedRamen * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
size_t get_serialized_size_key_ramen_interfaces__msg__CookedRamen(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
size_t max_serialized_size_key_ramen_interfaces__msg__CookedRamen(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ramen_interfaces, msg, CookedRamen)();

#ifdef __cplusplus
}
#endif

#endif  // RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
