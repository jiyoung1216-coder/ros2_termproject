// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ramen_interfaces:msg/CookedRamen.idl
// generated code does not contain a copyright notice

#ifndef RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__BUILDER_HPP_
#define RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ramen_interfaces/msg/detail/cooked_ramen__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ramen_interfaces
{

namespace msg
{

namespace builder
{

class Init_CookedRamen_cook_status
{
public:
  explicit Init_CookedRamen_cook_status(::ramen_interfaces::msg::CookedRamen & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::msg::CookedRamen cook_status(::ramen_interfaces::msg::CookedRamen::_cook_status_type arg)
  {
    msg_.cook_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::msg::CookedRamen msg_;
};

class Init_CookedRamen_order
{
public:
  Init_CookedRamen_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CookedRamen_cook_status order(::ramen_interfaces::msg::CookedRamen::_order_type arg)
  {
    msg_.order = std::move(arg);
    return Init_CookedRamen_cook_status(msg_);
  }

private:
  ::ramen_interfaces::msg::CookedRamen msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::msg::CookedRamen>()
{
  return ramen_interfaces::msg::builder::Init_CookedRamen_order();
}

}  // namespace ramen_interfaces

#endif  // RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__BUILDER_HPP_
