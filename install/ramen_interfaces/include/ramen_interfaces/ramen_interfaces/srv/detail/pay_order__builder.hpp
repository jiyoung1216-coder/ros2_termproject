// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ramen_interfaces:srv/PayOrder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/srv/pay_order.hpp"


#ifndef RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__BUILDER_HPP_
#define RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ramen_interfaces/srv/detail/pay_order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ramen_interfaces
{

namespace srv
{

namespace builder
{

class Init_PayOrder_Request_sides
{
public:
  explicit Init_PayOrder_Request_sides(::ramen_interfaces::srv::PayOrder_Request & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::srv::PayOrder_Request sides(::ramen_interfaces::srv::PayOrder_Request::_sides_type arg)
  {
    msg_.sides = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Request msg_;
};

class Init_PayOrder_Request_toppings
{
public:
  explicit Init_PayOrder_Request_toppings(::ramen_interfaces::srv::PayOrder_Request & msg)
  : msg_(msg)
  {}
  Init_PayOrder_Request_sides toppings(::ramen_interfaces::srv::PayOrder_Request::_toppings_type arg)
  {
    msg_.toppings = std::move(arg);
    return Init_PayOrder_Request_sides(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Request msg_;
};

class Init_PayOrder_Request_ramen_type
{
public:
  explicit Init_PayOrder_Request_ramen_type(::ramen_interfaces::srv::PayOrder_Request & msg)
  : msg_(msg)
  {}
  Init_PayOrder_Request_toppings ramen_type(::ramen_interfaces::srv::PayOrder_Request::_ramen_type_type arg)
  {
    msg_.ramen_type = std::move(arg);
    return Init_PayOrder_Request_toppings(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Request msg_;
};

class Init_PayOrder_Request_table_number
{
public:
  Init_PayOrder_Request_table_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayOrder_Request_ramen_type table_number(::ramen_interfaces::srv::PayOrder_Request::_table_number_type arg)
  {
    msg_.table_number = std::move(arg);
    return Init_PayOrder_Request_ramen_type(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::srv::PayOrder_Request>()
{
  return ramen_interfaces::srv::builder::Init_PayOrder_Request_table_number();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace srv
{

namespace builder
{

class Init_PayOrder_Response_message
{
public:
  explicit Init_PayOrder_Response_message(::ramen_interfaces::srv::PayOrder_Response & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::srv::PayOrder_Response message(::ramen_interfaces::srv::PayOrder_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Response msg_;
};

class Init_PayOrder_Response_total_price
{
public:
  explicit Init_PayOrder_Response_total_price(::ramen_interfaces::srv::PayOrder_Response & msg)
  : msg_(msg)
  {}
  Init_PayOrder_Response_message total_price(::ramen_interfaces::srv::PayOrder_Response::_total_price_type arg)
  {
    msg_.total_price = std::move(arg);
    return Init_PayOrder_Response_message(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Response msg_;
};

class Init_PayOrder_Response_success
{
public:
  Init_PayOrder_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayOrder_Response_total_price success(::ramen_interfaces::srv::PayOrder_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PayOrder_Response_total_price(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::srv::PayOrder_Response>()
{
  return ramen_interfaces::srv::builder::Init_PayOrder_Response_success();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace srv
{

namespace builder
{

class Init_PayOrder_Event_response
{
public:
  explicit Init_PayOrder_Event_response(::ramen_interfaces::srv::PayOrder_Event & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::srv::PayOrder_Event response(::ramen_interfaces::srv::PayOrder_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Event msg_;
};

class Init_PayOrder_Event_request
{
public:
  explicit Init_PayOrder_Event_request(::ramen_interfaces::srv::PayOrder_Event & msg)
  : msg_(msg)
  {}
  Init_PayOrder_Event_response request(::ramen_interfaces::srv::PayOrder_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PayOrder_Event_response(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Event msg_;
};

class Init_PayOrder_Event_info
{
public:
  Init_PayOrder_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayOrder_Event_request info(::ramen_interfaces::srv::PayOrder_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PayOrder_Event_request(msg_);
  }

private:
  ::ramen_interfaces::srv::PayOrder_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::srv::PayOrder_Event>()
{
  return ramen_interfaces::srv::builder::Init_PayOrder_Event_info();
}

}  // namespace ramen_interfaces

#endif  // RAMEN_INTERFACES__SRV__DETAIL__PAY_ORDER__BUILDER_HPP_
