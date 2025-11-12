// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ramen_interfaces:action/ServeRamen.idl
// generated code does not contain a copyright notice

#ifndef RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__BUILDER_HPP_
#define RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ramen_interfaces/action/detail/serve_ramen__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_ServeRamen_Goal_food_to_serve
{
public:
  Init_ServeRamen_Goal_food_to_serve()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ramen_interfaces::action::ServeRamen_Goal food_to_serve(::ramen_interfaces::action::ServeRamen_Goal::_food_to_serve_type arg)
  {
    msg_.food_to_serve = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::ServeRamen_Goal>()
{
  return ramen_interfaces::action::builder::Init_ServeRamen_Goal_food_to_serve();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_ServeRamen_Result_delivery_success
{
public:
  Init_ServeRamen_Result_delivery_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ramen_interfaces::action::ServeRamen_Result delivery_success(::ramen_interfaces::action::ServeRamen_Result::_delivery_success_type arg)
  {
    msg_.delivery_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::ServeRamen_Result>()
{
  return ramen_interfaces::action::builder::Init_ServeRamen_Result_delivery_success();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_ServeRamen_Feedback_status
{
public:
  explicit Init_ServeRamen_Feedback_status(::ramen_interfaces::action::ServeRamen_Feedback & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::ServeRamen_Feedback status(::ramen_interfaces::action::ServeRamen_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_Feedback msg_;
};

class Init_ServeRamen_Feedback_current_y
{
public:
  explicit Init_ServeRamen_Feedback_current_y(::ramen_interfaces::action::ServeRamen_Feedback & msg)
  : msg_(msg)
  {}
  Init_ServeRamen_Feedback_status current_y(::ramen_interfaces::action::ServeRamen_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_ServeRamen_Feedback_status(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_Feedback msg_;
};

class Init_ServeRamen_Feedback_current_x
{
public:
  Init_ServeRamen_Feedback_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServeRamen_Feedback_current_y current_x(::ramen_interfaces::action::ServeRamen_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_ServeRamen_Feedback_current_y(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::ServeRamen_Feedback>()
{
  return ramen_interfaces::action::builder::Init_ServeRamen_Feedback_current_x();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_ServeRamen_SendGoal_Request_goal
{
public:
  explicit Init_ServeRamen_SendGoal_Request_goal(::ramen_interfaces::action::ServeRamen_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::ServeRamen_SendGoal_Request goal(::ramen_interfaces::action::ServeRamen_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_SendGoal_Request msg_;
};

class Init_ServeRamen_SendGoal_Request_goal_id
{
public:
  Init_ServeRamen_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServeRamen_SendGoal_Request_goal goal_id(::ramen_interfaces::action::ServeRamen_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ServeRamen_SendGoal_Request_goal(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::ServeRamen_SendGoal_Request>()
{
  return ramen_interfaces::action::builder::Init_ServeRamen_SendGoal_Request_goal_id();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_ServeRamen_SendGoal_Response_stamp
{
public:
  explicit Init_ServeRamen_SendGoal_Response_stamp(::ramen_interfaces::action::ServeRamen_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::ServeRamen_SendGoal_Response stamp(::ramen_interfaces::action::ServeRamen_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_SendGoal_Response msg_;
};

class Init_ServeRamen_SendGoal_Response_accepted
{
public:
  Init_ServeRamen_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServeRamen_SendGoal_Response_stamp accepted(::ramen_interfaces::action::ServeRamen_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ServeRamen_SendGoal_Response_stamp(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::ServeRamen_SendGoal_Response>()
{
  return ramen_interfaces::action::builder::Init_ServeRamen_SendGoal_Response_accepted();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_ServeRamen_GetResult_Request_goal_id
{
public:
  Init_ServeRamen_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ramen_interfaces::action::ServeRamen_GetResult_Request goal_id(::ramen_interfaces::action::ServeRamen_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::ServeRamen_GetResult_Request>()
{
  return ramen_interfaces::action::builder::Init_ServeRamen_GetResult_Request_goal_id();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_ServeRamen_GetResult_Response_result
{
public:
  explicit Init_ServeRamen_GetResult_Response_result(::ramen_interfaces::action::ServeRamen_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::ServeRamen_GetResult_Response result(::ramen_interfaces::action::ServeRamen_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_GetResult_Response msg_;
};

class Init_ServeRamen_GetResult_Response_status
{
public:
  Init_ServeRamen_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServeRamen_GetResult_Response_result status(::ramen_interfaces::action::ServeRamen_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ServeRamen_GetResult_Response_result(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::ServeRamen_GetResult_Response>()
{
  return ramen_interfaces::action::builder::Init_ServeRamen_GetResult_Response_status();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_ServeRamen_FeedbackMessage_feedback
{
public:
  explicit Init_ServeRamen_FeedbackMessage_feedback(::ramen_interfaces::action::ServeRamen_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::ServeRamen_FeedbackMessage feedback(::ramen_interfaces::action::ServeRamen_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_FeedbackMessage msg_;
};

class Init_ServeRamen_FeedbackMessage_goal_id
{
public:
  Init_ServeRamen_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServeRamen_FeedbackMessage_feedback goal_id(::ramen_interfaces::action::ServeRamen_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ServeRamen_FeedbackMessage_feedback(msg_);
  }

private:
  ::ramen_interfaces::action::ServeRamen_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::ServeRamen_FeedbackMessage>()
{
  return ramen_interfaces::action::builder::Init_ServeRamen_FeedbackMessage_goal_id();
}

}  // namespace ramen_interfaces

#endif  // RAMEN_INTERFACES__ACTION__DETAIL__SERVE_RAMEN__BUILDER_HPP_
