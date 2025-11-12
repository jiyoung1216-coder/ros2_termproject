// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice

#ifndef RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__TRAITS_HPP_
#define RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ramen_interfaces/msg/detail/ramen_order__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ramen_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RamenOrder & msg,
  std::ostream & out)
{
  out << "{";
  // member: table_number
  {
    out << "table_number: ";
    rosidl_generator_traits::value_to_yaml(msg.table_number, out);
    out << ", ";
  }

  // member: ramen_type
  {
    out << "ramen_type: ";
    rosidl_generator_traits::value_to_yaml(msg.ramen_type, out);
    out << ", ";
  }

  // member: toppings
  {
    if (msg.toppings.size() == 0) {
      out << "toppings: []";
    } else {
      out << "toppings: [";
      size_t pending_items = msg.toppings.size();
      for (auto item : msg.toppings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sides
  {
    if (msg.sides.size() == 0) {
      out << "sides: []";
    } else {
      out << "sides: [";
      size_t pending_items = msg.sides.size();
      for (auto item : msg.sides) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RamenOrder & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: table_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "table_number: ";
    rosidl_generator_traits::value_to_yaml(msg.table_number, out);
    out << "\n";
  }

  // member: ramen_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ramen_type: ";
    rosidl_generator_traits::value_to_yaml(msg.ramen_type, out);
    out << "\n";
  }

  // member: toppings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.toppings.size() == 0) {
      out << "toppings: []\n";
    } else {
      out << "toppings:\n";
      for (auto item : msg.toppings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sides
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sides.size() == 0) {
      out << "sides: []\n";
    } else {
      out << "sides:\n";
      for (auto item : msg.sides) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RamenOrder & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::msg::RamenOrder & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::msg::RamenOrder & msg)
{
  return ramen_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::msg::RamenOrder>()
{
  return "ramen_interfaces::msg::RamenOrder";
}

template<>
inline const char * name<ramen_interfaces::msg::RamenOrder>()
{
  return "ramen_interfaces/msg/RamenOrder";
}

template<>
struct has_fixed_size<ramen_interfaces::msg::RamenOrder>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ramen_interfaces::msg::RamenOrder>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ramen_interfaces::msg::RamenOrder>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__TRAITS_HPP_
