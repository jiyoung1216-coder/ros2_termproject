// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ramen_interfaces:msg/CookedRamen.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/msg/cooked_ramen.hpp"


#ifndef RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__TRAITS_HPP_
#define RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ramen_interfaces/msg/detail/cooked_ramen__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'order'
#include "ramen_interfaces/msg/detail/ramen_order__traits.hpp"

namespace ramen_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CookedRamen & msg,
  std::ostream & out)
{
  out << "{";
  // member: order
  {
    out << "order: ";
    to_flow_style_yaml(msg.order, out);
    out << ", ";
  }

  // member: cook_status
  {
    out << "cook_status: ";
    rosidl_generator_traits::value_to_yaml(msg.cook_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CookedRamen & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order:\n";
    to_block_style_yaml(msg.order, out, indentation + 2);
  }

  // member: cook_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cook_status: ";
    rosidl_generator_traits::value_to_yaml(msg.cook_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CookedRamen & msg, bool use_flow_style = false)
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
  const ramen_interfaces::msg::CookedRamen & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::msg::CookedRamen & msg)
{
  return ramen_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::msg::CookedRamen>()
{
  return "ramen_interfaces::msg::CookedRamen";
}

template<>
inline const char * name<ramen_interfaces::msg::CookedRamen>()
{
  return "ramen_interfaces/msg/CookedRamen";
}

template<>
struct has_fixed_size<ramen_interfaces::msg::CookedRamen>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ramen_interfaces::msg::CookedRamen>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ramen_interfaces::msg::CookedRamen>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__TRAITS_HPP_
