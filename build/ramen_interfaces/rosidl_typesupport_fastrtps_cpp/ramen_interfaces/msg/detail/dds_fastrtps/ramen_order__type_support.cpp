// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice
#include "ramen_interfaces/msg/detail/ramen_order__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ramen_interfaces/msg/detail/ramen_order__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ramen_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ramen_interfaces
cdr_serialize(
  const ramen_interfaces::msg::RamenOrder & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: table_number
  cdr << ros_message.table_number;
  // Member: ramen_type
  cdr << ros_message.ramen_type;
  // Member: toppings
  {
    cdr << ros_message.toppings;
  }
  // Member: sides
  {
    cdr << ros_message.sides;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ramen_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ramen_interfaces::msg::RamenOrder & ros_message)
{
  // Member: table_number
  cdr >> ros_message.table_number;

  // Member: ramen_type
  cdr >> ros_message.ramen_type;

  // Member: toppings
  {
    cdr >> ros_message.toppings;
  }

  // Member: sides
  {
    cdr >> ros_message.sides;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ramen_interfaces
get_serialized_size(
  const ramen_interfaces::msg::RamenOrder & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: table_number
  {
    size_t item_size = sizeof(ros_message.table_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ramen_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ramen_type.size() + 1);
  // Member: toppings
  {
    size_t array_size = ros_message.toppings.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.toppings[index].size() + 1);
    }
  }
  // Member: sides
  {
    size_t array_size = ros_message.sides.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.sides[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ramen_interfaces
max_serialized_size_RamenOrder(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: table_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ramen_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: toppings
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sides
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ramen_interfaces::msg::RamenOrder;
    is_plain =
      (
      offsetof(DataType, sides) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RamenOrder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ramen_interfaces::msg::RamenOrder *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RamenOrder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ramen_interfaces::msg::RamenOrder *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RamenOrder__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ramen_interfaces::msg::RamenOrder *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RamenOrder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RamenOrder(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RamenOrder__callbacks = {
  "ramen_interfaces::msg",
  "RamenOrder",
  _RamenOrder__cdr_serialize,
  _RamenOrder__cdr_deserialize,
  _RamenOrder__get_serialized_size,
  _RamenOrder__max_serialized_size
};

static rosidl_message_type_support_t _RamenOrder__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RamenOrder__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ramen_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ramen_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<ramen_interfaces::msg::RamenOrder>()
{
  return &ramen_interfaces::msg::typesupport_fastrtps_cpp::_RamenOrder__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ramen_interfaces, msg, RamenOrder)() {
  return &ramen_interfaces::msg::typesupport_fastrtps_cpp::_RamenOrder__handle;
}

#ifdef __cplusplus
}
#endif
