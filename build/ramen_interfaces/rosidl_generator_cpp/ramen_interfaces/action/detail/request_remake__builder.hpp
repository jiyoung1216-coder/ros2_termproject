// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ramen_interfaces:action/RequestRemake.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/action/request_remake.hpp"


#ifndef RAMEN_INTERFACES__ACTION__DETAIL__REQUEST_REMAKE__BUILDER_HPP_
#define RAMEN_INTERFACES__ACTION__DETAIL__REQUEST_REMAKE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ramen_interfaces/action/detail/request_remake__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_Goal_bad_food
{
public:
  Init_RequestRemake_Goal_bad_food()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ramen_interfaces::action::RequestRemake_Goal bad_food(::ramen_interfaces::action::RequestRemake_Goal::_bad_food_type arg)
  {
    msg_.bad_food = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_Goal>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_Goal_bad_food();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_Result_new_food
{
public:
  Init_RequestRemake_Result_new_food()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ramen_interfaces::action::RequestRemake_Result new_food(::ramen_interfaces::action::RequestRemake_Result::_new_food_type arg)
  {
    msg_.new_food = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_Result>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_Result_new_food();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_Feedback_progress
{
public:
  Init_RequestRemake_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ramen_interfaces::action::RequestRemake_Feedback progress(::ramen_interfaces::action::RequestRemake_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_Feedback>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_Feedback_progress();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_SendGoal_Request_goal
{
public:
  explicit Init_RequestRemake_SendGoal_Request_goal(::ramen_interfaces::action::RequestRemake_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::RequestRemake_SendGoal_Request goal(::ramen_interfaces::action::RequestRemake_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_SendGoal_Request msg_;
};

class Init_RequestRemake_SendGoal_Request_goal_id
{
public:
  Init_RequestRemake_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestRemake_SendGoal_Request_goal goal_id(::ramen_interfaces::action::RequestRemake_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RequestRemake_SendGoal_Request_goal(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_SendGoal_Request>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_SendGoal_Request_goal_id();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_SendGoal_Response_stamp
{
public:
  explicit Init_RequestRemake_SendGoal_Response_stamp(::ramen_interfaces::action::RequestRemake_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::RequestRemake_SendGoal_Response stamp(::ramen_interfaces::action::RequestRemake_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_SendGoal_Response msg_;
};

class Init_RequestRemake_SendGoal_Response_accepted
{
public:
  Init_RequestRemake_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestRemake_SendGoal_Response_stamp accepted(::ramen_interfaces::action::RequestRemake_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RequestRemake_SendGoal_Response_stamp(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_SendGoal_Response>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_SendGoal_Response_accepted();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_SendGoal_Event_response
{
public:
  explicit Init_RequestRemake_SendGoal_Event_response(::ramen_interfaces::action::RequestRemake_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::RequestRemake_SendGoal_Event response(::ramen_interfaces::action::RequestRemake_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_SendGoal_Event msg_;
};

class Init_RequestRemake_SendGoal_Event_request
{
public:
  explicit Init_RequestRemake_SendGoal_Event_request(::ramen_interfaces::action::RequestRemake_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_RequestRemake_SendGoal_Event_response request(::ramen_interfaces::action::RequestRemake_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RequestRemake_SendGoal_Event_response(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_SendGoal_Event msg_;
};

class Init_RequestRemake_SendGoal_Event_info
{
public:
  Init_RequestRemake_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestRemake_SendGoal_Event_request info(::ramen_interfaces::action::RequestRemake_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RequestRemake_SendGoal_Event_request(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_SendGoal_Event>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_SendGoal_Event_info();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_GetResult_Request_goal_id
{
public:
  Init_RequestRemake_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ramen_interfaces::action::RequestRemake_GetResult_Request goal_id(::ramen_interfaces::action::RequestRemake_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_GetResult_Request>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_GetResult_Request_goal_id();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_GetResult_Response_result
{
public:
  explicit Init_RequestRemake_GetResult_Response_result(::ramen_interfaces::action::RequestRemake_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::RequestRemake_GetResult_Response result(::ramen_interfaces::action::RequestRemake_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_GetResult_Response msg_;
};

class Init_RequestRemake_GetResult_Response_status
{
public:
  Init_RequestRemake_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestRemake_GetResult_Response_result status(::ramen_interfaces::action::RequestRemake_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RequestRemake_GetResult_Response_result(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_GetResult_Response>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_GetResult_Response_status();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_GetResult_Event_response
{
public:
  explicit Init_RequestRemake_GetResult_Event_response(::ramen_interfaces::action::RequestRemake_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::RequestRemake_GetResult_Event response(::ramen_interfaces::action::RequestRemake_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_GetResult_Event msg_;
};

class Init_RequestRemake_GetResult_Event_request
{
public:
  explicit Init_RequestRemake_GetResult_Event_request(::ramen_interfaces::action::RequestRemake_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_RequestRemake_GetResult_Event_response request(::ramen_interfaces::action::RequestRemake_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RequestRemake_GetResult_Event_response(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_GetResult_Event msg_;
};

class Init_RequestRemake_GetResult_Event_info
{
public:
  Init_RequestRemake_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestRemake_GetResult_Event_request info(::ramen_interfaces::action::RequestRemake_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RequestRemake_GetResult_Event_request(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_GetResult_Event>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_GetResult_Event_info();
}

}  // namespace ramen_interfaces


namespace ramen_interfaces
{

namespace action
{

namespace builder
{

class Init_RequestRemake_FeedbackMessage_feedback
{
public:
  explicit Init_RequestRemake_FeedbackMessage_feedback(::ramen_interfaces::action::RequestRemake_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ramen_interfaces::action::RequestRemake_FeedbackMessage feedback(::ramen_interfaces::action::RequestRemake_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_FeedbackMessage msg_;
};

class Init_RequestRemake_FeedbackMessage_goal_id
{
public:
  Init_RequestRemake_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestRemake_FeedbackMessage_feedback goal_id(::ramen_interfaces::action::RequestRemake_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RequestRemake_FeedbackMessage_feedback(msg_);
  }

private:
  ::ramen_interfaces::action::RequestRemake_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ramen_interfaces::action::RequestRemake_FeedbackMessage>()
{
  return ramen_interfaces::action::builder::Init_RequestRemake_FeedbackMessage_goal_id();
}

}  // namespace ramen_interfaces

#endif  // RAMEN_INTERFACES__ACTION__DETAIL__REQUEST_REMAKE__BUILDER_HPP_
