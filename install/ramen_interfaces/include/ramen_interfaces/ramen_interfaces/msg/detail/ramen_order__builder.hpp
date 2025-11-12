// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice

#ifndef RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__BUILDER_HPP_
#define RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ramen_interfaces/msg/detail/ramen_order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ramen_interfaces
{

namespace msg
{

namespace builder
{

class Init_RamenOrder_sides
{
public:
  explicit Init_RamenOrder_sides(::ramen_interfaces::msg::RamenOrder & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::msg::RamenOrder sides(::ramen_interfaces::msg::RamenOrder::_sides_type arg)
  {
    msg_.sides = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::msg::RamenOrder msg_;
};

class Init_RamenOrder_toppings
{
public:
  explicit Init_RamenOrder_toppings(::ramen_interfaces::msg::RamenOrder & msg)
  : msg_(msg)
  {}
  Init_RamenOrder_sides toppings(::ramen_interfaces::msg::RamenOrder::_toppings_type arg)
  {
    msg_.toppings = std::move(arg);
    return Init_RamenOrder_sides(msg_);
  }

private:
  ::ramen_interfaces::msg::RamenOrder msg_;
};

class Init_RamenOrder_ramen_type
{
public:
  explicit Init_RamenOrder_ramen_type(::ramen_interfaces::msg::RamenOrder & msg)
  : msg_(msg)
  {}
  Init_RamenOrder_toppings ramen_type(::ramen_interfaces::msg::RamenOrder::_ramen_type_type arg)
  {
    msg_.ramen_type = std::move(arg);
    return Init_RamenOrder_toppings(msg_);
  }

private:
  ::ramen_interfaces::msg::RamenOrder msg_;
};

class Init_RamenOrder_table_number
{
public:
  Init_RamenOrder_table_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RamenOrder_ramen_type table_number(::ramen_interfaces::msg::RamenOrder::_table_number_type arg)
  {
    msg_.table_number = std::move(arg);
    return Init_RamenOrder_ramen_type(msg_);
  }

private:
  ::ramen_interfaces::msg::RamenOrder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::msg::RamenOrder>()
{
  return ramen_interfaces::msg::builder::Init_RamenOrder_table_number();
}

}  // namespace ramen_interfaces

#endif  // RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__BUILDER_HPP_
