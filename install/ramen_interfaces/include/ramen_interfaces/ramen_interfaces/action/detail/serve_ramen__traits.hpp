// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ramen_interfaces:action/ServeRamen.idl
// generated code does not contain a copyright notice

#ifndef RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__TRAITS_HPP_
#define RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ramen_interfaces/action/detail/serve_ramen__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'food_to_serve'
#include "ramen_interfaces/msg/detail/cooked_ramen__traits.hpp"

namespace ramen_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ServeRamen_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: food_to_serve
  {
    out << "food_to_serve: ";
    to_flow_style_yaml(msg.food_to_serve, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServeRamen_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: food_to_serve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "food_to_serve:\n";
    to_block_style_yaml(msg.food_to_serve, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServeRamen_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::action::ServeRamen_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::action::ServeRamen_Goal & msg)
{
  return ramen_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_Goal>()
{
  return "ramen_interfaces::action::ServeRamen_Goal";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_Goal>()
{
  return "ramen_interfaces/action/ServeRamen_Goal";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_Goal>
  : std::integral_constant<bool, has_fixed_size<ramen_interfaces::msg::CookedRamen>::value> {};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_Goal>
  : std::integral_constant<bool, has_bounded_size<ramen_interfaces::msg::CookedRamen>::value> {};

template<>
struct is_message<ramen_interfaces::action::ServeRamen_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ramen_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ServeRamen_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: delivery_success
  {
    out << "delivery_success: ";
    rosidl_generator_traits::value_to_yaml(msg.delivery_success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServeRamen_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: delivery_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delivery_success: ";
    rosidl_generator_traits::value_to_yaml(msg.delivery_success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServeRamen_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::action::ServeRamen_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::action::ServeRamen_Result & msg)
{
  return ramen_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_Result>()
{
  return "ramen_interfaces::action::ServeRamen_Result";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_Result>()
{
  return "ramen_interfaces/action/ServeRamen_Result";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ramen_interfaces::action::ServeRamen_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ramen_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ServeRamen_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_x
  {
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << ", ";
  }

  // member: current_y
  {
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServeRamen_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << "\n";
  }

  // member: current_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServeRamen_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::action::ServeRamen_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::action::ServeRamen_Feedback & msg)
{
  return ramen_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_Feedback>()
{
  return "ramen_interfaces::action::ServeRamen_Feedback";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_Feedback>()
{
  return "ramen_interfaces/action/ServeRamen_Feedback";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ramen_interfaces::action::ServeRamen_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ramen_interfaces/action/detail/serve_ramen__traits.hpp"

namespace ramen_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ServeRamen_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServeRamen_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServeRamen_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::action::ServeRamen_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::action::ServeRamen_SendGoal_Request & msg)
{
  return ramen_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_SendGoal_Request>()
{
  return "ramen_interfaces::action::ServeRamen_SendGoal_Request";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_SendGoal_Request>()
{
  return "ramen_interfaces/action/ServeRamen_SendGoal_Request";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ramen_interfaces::action::ServeRamen_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ramen_interfaces::action::ServeRamen_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ramen_interfaces::action::ServeRamen_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ramen_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ServeRamen_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServeRamen_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServeRamen_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::action::ServeRamen_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::action::ServeRamen_SendGoal_Response & msg)
{
  return ramen_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_SendGoal_Response>()
{
  return "ramen_interfaces::action::ServeRamen_SendGoal_Response";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_SendGoal_Response>()
{
  return "ramen_interfaces/action/ServeRamen_SendGoal_Response";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ramen_interfaces::action::ServeRamen_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_SendGoal>()
{
  return "ramen_interfaces::action::ServeRamen_SendGoal";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_SendGoal>()
{
  return "ramen_interfaces/action/ServeRamen_SendGoal";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ramen_interfaces::action::ServeRamen_SendGoal_Request>::value &&
    has_fixed_size<ramen_interfaces::action::ServeRamen_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ramen_interfaces::action::ServeRamen_SendGoal_Request>::value &&
    has_bounded_size<ramen_interfaces::action::ServeRamen_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ramen_interfaces::action::ServeRamen_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ramen_interfaces::action::ServeRamen_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ramen_interfaces::action::ServeRamen_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ramen_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ServeRamen_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServeRamen_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServeRamen_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::action::ServeRamen_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::action::ServeRamen_GetResult_Request & msg)
{
  return ramen_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_GetResult_Request>()
{
  return "ramen_interfaces::action::ServeRamen_GetResult_Request";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_GetResult_Request>()
{
  return "ramen_interfaces/action/ServeRamen_GetResult_Request";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ramen_interfaces::action::ServeRamen_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ramen_interfaces/action/detail/serve_ramen__traits.hpp"

namespace ramen_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ServeRamen_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServeRamen_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServeRamen_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::action::ServeRamen_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::action::ServeRamen_GetResult_Response & msg)
{
  return ramen_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_GetResult_Response>()
{
  return "ramen_interfaces::action::ServeRamen_GetResult_Response";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_GetResult_Response>()
{
  return "ramen_interfaces/action/ServeRamen_GetResult_Response";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ramen_interfaces::action::ServeRamen_Result>::value> {};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ramen_interfaces::action::ServeRamen_Result>::value> {};

template<>
struct is_message<ramen_interfaces::action::ServeRamen_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_GetResult>()
{
  return "ramen_interfaces::action::ServeRamen_GetResult";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_GetResult>()
{
  return "ramen_interfaces/action/ServeRamen_GetResult";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ramen_interfaces::action::ServeRamen_GetResult_Request>::value &&
    has_fixed_size<ramen_interfaces::action::ServeRamen_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ramen_interfaces::action::ServeRamen_GetResult_Request>::value &&
    has_bounded_size<ramen_interfaces::action::ServeRamen_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ramen_interfaces::action::ServeRamen_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ramen_interfaces::action::ServeRamen_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ramen_interfaces::action::ServeRamen_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ramen_interfaces/action/detail/serve_ramen__traits.hpp"

namespace ramen_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ServeRamen_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServeRamen_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServeRamen_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ramen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ramen_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ramen_interfaces::action::ServeRamen_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ramen_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ramen_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ramen_interfaces::action::ServeRamen_FeedbackMessage & msg)
{
  return ramen_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ramen_interfaces::action::ServeRamen_FeedbackMessage>()
{
  return "ramen_interfaces::action::ServeRamen_FeedbackMessage";
}

template<>
inline const char * name<ramen_interfaces::action::ServeRamen_FeedbackMessage>()
{
  return "ramen_interfaces/action/ServeRamen_FeedbackMessage";
}

template<>
struct has_fixed_size<ramen_interfaces::action::ServeRamen_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ramen_interfaces::action::ServeRamen_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ramen_interfaces::action::ServeRamen_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ramen_interfaces::action::ServeRamen_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ramen_interfaces::action::ServeRamen_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ramen_interfaces::action::ServeRamen>
  : std::true_type
{
};

template<>
struct is_action_goal<ramen_interfaces::action::ServeRamen_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ramen_interfaces::action::ServeRamen_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ramen_interfaces::action::ServeRamen_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__TRAITS_HPP_
