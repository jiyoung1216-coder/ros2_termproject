// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ramen_interfaces:srv/PayOrder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/srv/pay_order.hpp"


#ifndef RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__TRAITS_HPP_
#define RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ramen_interfaces/srv/detail/pay_order__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ramen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PayOrder_Request & msg,
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
  const PayOrder_Request & msg,
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

inline std::string to_yaml(const PayOrder_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::srv::PayOrder_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::srv::PayOrder_Request & msg)
{
  return ramen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::srv::PayOrder_Request>()
{
  return "ramen_interfaces::srv::PayOrder_Request";
}

template<>
inline const char * name<ramen_interfaces::srv::PayOrder_Request>()
{
  return "ramen_interfaces/srv/PayOrder_Request";
}

template<>
struct has_fixed_size<ramen_interfaces::srv::PayOrder_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ramen_interfaces::srv::PayOrder_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ramen_interfaces::srv::PayOrder_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ramen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PayOrder_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: total_price
  {
    out << "total_price: ";
    rosidl_generator_traits::value_to_yaml(msg.total_price, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PayOrder_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: total_price
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_price: ";
    rosidl_generator_traits::value_to_yaml(msg.total_price, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PayOrder_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::srv::PayOrder_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::srv::PayOrder_Response & msg)
{
  return ramen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::srv::PayOrder_Response>()
{
  return "ramen_interfaces::srv::PayOrder_Response";
}

template<>
inline const char * name<ramen_interfaces::srv::PayOrder_Response>()
{
  return "ramen_interfaces/srv/PayOrder_Response";
}

template<>
struct has_fixed_size<ramen_interfaces::srv::PayOrder_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ramen_interfaces::srv::PayOrder_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ramen_interfaces::srv::PayOrder_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ramen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PayOrder_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const PayOrder_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PayOrder_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::srv::PayOrder_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::srv::PayOrder_Event & msg)
{
  return ramen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::srv::PayOrder_Event>()
{
  return "ramen_interfaces::srv::PayOrder_Event";
}

template<>
inline const char * name<ramen_interfaces::srv::PayOrder_Event>()
{
  return "ramen_interfaces/srv/PayOrder_Event";
}

template<>
struct has_fixed_size<ramen_interfaces::srv::PayOrder_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ramen_interfaces::srv::PayOrder_Event>
  : std::integral_constant<bool, has_bounded_size<ramen_interfaces::srv::PayOrder_Request>::value && has_bounded_size<ramen_interfaces::srv::PayOrder_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ramen_interfaces::srv::PayOrder_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ramen_interfaces::srv::PayOrder>()
{
  return "ramen_interfaces::srv::PayOrder";
}

template<>
inline const char * name<ramen_interfaces::srv::PayOrder>()
{
  return "ramen_interfaces/srv/PayOrder";
}

template<>
struct has_fixed_size<ramen_interfaces::srv::PayOrder>
  : std::integral_constant<
    bool,
    has_fixed_size<ramen_interfaces::srv::PayOrder_Request>::value &&
    has_fixed_size<ramen_interfaces::srv::PayOrder_Response>::value
  >
{
};

template<>
struct has_bounded_size<ramen_interfaces::srv::PayOrder>
  : std::integral_constant<
    bool,
    has_bounded_size<ramen_interfaces::srv::PayOrder_Request>::value &&
    has_bounded_size<ramen_interfaces::srv::PayOrder_Response>::value
  >
{
};

template<>
struct is_service<ramen_interfaces::srv::PayOrder>
  : std::true_type
{
};

template<>
struct is_service_request<ramen_interfaces::srv::PayOrder_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ramen_interfaces::srv::PayOrder_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__TRAITS_HPP_
