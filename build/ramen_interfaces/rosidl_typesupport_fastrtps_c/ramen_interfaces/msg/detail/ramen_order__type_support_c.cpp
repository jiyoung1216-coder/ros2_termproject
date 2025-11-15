// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice
#include "ramen_interfaces/msg/detail/ramen_order__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ramen_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ramen_interfaces/msg/detail/ramen_order__struct.h"
#include "ramen_interfaces/msg/detail/ramen_order__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // currency, payment_method, ramen_type, sides, toppings
#include "rosidl_runtime_c/string_functions.h"  // currency, payment_method, ramen_type, sides, toppings

// forward declare type support functions


using _RamenOrder__ros_msg_type = ramen_interfaces__msg__RamenOrder;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
bool cdr_serialize_ramen_interfaces__msg__RamenOrder(
  const ramen_interfaces__msg__RamenOrder * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: table_number
  {
    cdr << ros_message->table_number;
  }

  // Field name: ramen_type
  {
    const rosidl_runtime_c__String * str = &ros_message->ramen_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: toppings
  {
    size_t size = ros_message->toppings.size;
    auto array_ptr = ros_message->toppings.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: sides
  {
    size_t size = ros_message->sides.size;
    auto array_ptr = ros_message->sides.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: total_price
  {
    cdr << ros_message->total_price;
  }

  // Field name: payment_method
  {
    const rosidl_runtime_c__String * str = &ros_message->payment_method;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pay_now
  {
    cdr << (ros_message->pay_now ? true : false);
  }

  // Field name: currency
  {
    const rosidl_runtime_c__String * str = &ros_message->currency;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
bool cdr_deserialize_ramen_interfaces__msg__RamenOrder(
  eprosima::fastcdr::Cdr & cdr,
  ramen_interfaces__msg__RamenOrder * ros_message)
{
  // Field name: table_number
  {
    cdr >> ros_message->table_number;
  }

  // Field name: ramen_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ramen_type.data) {
      rosidl_runtime_c__String__init(&ros_message->ramen_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ramen_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ramen_type'\n");
      return false;
    }
  }

  // Field name: toppings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->toppings.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->toppings);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->toppings, size)) {
      fprintf(stderr, "failed to create array for field 'toppings'");
      return false;
    }
    auto array_ptr = ros_message->toppings.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'toppings'\n");
        return false;
      }
    }
  }

  // Field name: sides
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->sides.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->sides);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->sides, size)) {
      fprintf(stderr, "failed to create array for field 'sides'");
      return false;
    }
    auto array_ptr = ros_message->sides.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'sides'\n");
        return false;
      }
    }
  }

  // Field name: total_price
  {
    cdr >> ros_message->total_price;
  }

  // Field name: payment_method
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->payment_method.data) {
      rosidl_runtime_c__String__init(&ros_message->payment_method);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->payment_method,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'payment_method'\n");
      return false;
    }
  }

  // Field name: pay_now
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pay_now = tmp ? true : false;
  }

  // Field name: currency
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->currency.data) {
      rosidl_runtime_c__String__init(&ros_message->currency);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->currency,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'currency'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
size_t get_serialized_size_ramen_interfaces__msg__RamenOrder(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RamenOrder__ros_msg_type * ros_message = static_cast<const _RamenOrder__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: table_number
  {
    size_t item_size = sizeof(ros_message->table_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ramen_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ramen_type.size + 1);

  // Field name: toppings
  {
    size_t array_size = ros_message->toppings.size;
    auto array_ptr = ros_message->toppings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: sides
  {
    size_t array_size = ros_message->sides.size;
    auto array_ptr = ros_message->sides.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: total_price
  {
    size_t item_size = sizeof(ros_message->total_price);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: payment_method
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->payment_method.size + 1);

  // Field name: pay_now
  {
    size_t item_size = sizeof(ros_message->pay_now);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: currency
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->currency.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
size_t max_serialized_size_ramen_interfaces__msg__RamenOrder(
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

  // Field name: table_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ramen_type
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

  // Field name: toppings
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

  // Field name: sides
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

  // Field name: total_price
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: payment_method
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

  // Field name: pay_now
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: currency
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ramen_interfaces__msg__RamenOrder;
    is_plain =
      (
      offsetof(DataType, currency) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
bool cdr_serialize_key_ramen_interfaces__msg__RamenOrder(
  const ramen_interfaces__msg__RamenOrder * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: table_number
  {
    cdr << ros_message->table_number;
  }

  // Field name: ramen_type
  {
    const rosidl_runtime_c__String * str = &ros_message->ramen_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: toppings
  {
    size_t size = ros_message->toppings.size;
    auto array_ptr = ros_message->toppings.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: sides
  {
    size_t size = ros_message->sides.size;
    auto array_ptr = ros_message->sides.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: total_price
  {
    cdr << ros_message->total_price;
  }

  // Field name: payment_method
  {
    const rosidl_runtime_c__String * str = &ros_message->payment_method;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pay_now
  {
    cdr << (ros_message->pay_now ? true : false);
  }

  // Field name: currency
  {
    const rosidl_runtime_c__String * str = &ros_message->currency;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
size_t get_serialized_size_key_ramen_interfaces__msg__RamenOrder(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RamenOrder__ros_msg_type * ros_message = static_cast<const _RamenOrder__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: table_number
  {
    size_t item_size = sizeof(ros_message->table_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ramen_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ramen_type.size + 1);

  // Field name: toppings
  {
    size_t array_size = ros_message->toppings.size;
    auto array_ptr = ros_message->toppings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: sides
  {
    size_t array_size = ros_message->sides.size;
    auto array_ptr = ros_message->sides.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: total_price
  {
    size_t item_size = sizeof(ros_message->total_price);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: payment_method
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->payment_method.size + 1);

  // Field name: pay_now
  {
    size_t item_size = sizeof(ros_message->pay_now);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: currency
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->currency.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ramen_interfaces
size_t max_serialized_size_key_ramen_interfaces__msg__RamenOrder(
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
  // Field name: table_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ramen_type
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

  // Field name: toppings
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

  // Field name: sides
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

  // Field name: total_price
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: payment_method
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

  // Field name: pay_now
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: currency
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ramen_interfaces__msg__RamenOrder;
    is_plain =
      (
      offsetof(DataType, currency) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RamenOrder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ramen_interfaces__msg__RamenOrder * ros_message = static_cast<const ramen_interfaces__msg__RamenOrder *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ramen_interfaces__msg__RamenOrder(ros_message, cdr);
}

static bool _RamenOrder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ramen_interfaces__msg__RamenOrder * ros_message = static_cast<ramen_interfaces__msg__RamenOrder *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ramen_interfaces__msg__RamenOrder(cdr, ros_message);
}

static uint32_t _RamenOrder__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ramen_interfaces__msg__RamenOrder(
      untyped_ros_message, 0));
}

static size_t _RamenOrder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ramen_interfaces__msg__RamenOrder(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RamenOrder = {
  "ramen_interfaces::msg",
  "RamenOrder",
  _RamenOrder__cdr_serialize,
  _RamenOrder__cdr_deserialize,
  _RamenOrder__get_serialized_size,
  _RamenOrder__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RamenOrder__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RamenOrder,
  get_message_typesupport_handle_function,
  &ramen_interfaces__msg__RamenOrder__get_type_hash,
  &ramen_interfaces__msg__RamenOrder__get_type_description,
  &ramen_interfaces__msg__RamenOrder__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ramen_interfaces, msg, RamenOrder)() {
  return &_RamenOrder__type_support;
}

#if defined(__cplusplus)
}
#endif
