// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wsg_50_common:action/Cmd.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__ACTION__DETAIL__CMD__BUILDER_HPP_
#define WSG_50_COMMON__ACTION__DETAIL__CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wsg_50_common/action/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wsg_50_common
{

namespace action
{

namespace builder
{

class Init_Cmd_Goal_speed
{
public:
  explicit Init_Cmd_Goal_speed(::wsg_50_common::action::Cmd_Goal & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::action::Cmd_Goal speed(::wsg_50_common::action::Cmd_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_Goal msg_;
};

class Init_Cmd_Goal_width
{
public:
  explicit Init_Cmd_Goal_width(::wsg_50_common::action::Cmd_Goal & msg)
  : msg_(msg)
  {}
  Init_Cmd_Goal_speed width(::wsg_50_common::action::Cmd_Goal::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Cmd_Goal_speed(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_Goal msg_;
};

class Init_Cmd_Goal_mode
{
public:
  Init_Cmd_Goal_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cmd_Goal_width mode(::wsg_50_common::action::Cmd_Goal::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Cmd_Goal_width(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::action::Cmd_Goal>()
{
  return wsg_50_common::action::builder::Init_Cmd_Goal_mode();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace action
{

namespace builder
{

class Init_Cmd_Result_result
{
public:
  Init_Cmd_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wsg_50_common::action::Cmd_Result result(::wsg_50_common::action::Cmd_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::action::Cmd_Result>()
{
  return wsg_50_common::action::builder::Init_Cmd_Result_result();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace action
{

namespace builder
{

class Init_Cmd_Feedback_position
{
public:
  Init_Cmd_Feedback_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wsg_50_common::action::Cmd_Feedback position(::wsg_50_common::action::Cmd_Feedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::action::Cmd_Feedback>()
{
  return wsg_50_common::action::builder::Init_Cmd_Feedback_position();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace action
{

namespace builder
{

class Init_Cmd_SendGoal_Request_goal
{
public:
  explicit Init_Cmd_SendGoal_Request_goal(::wsg_50_common::action::Cmd_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::action::Cmd_SendGoal_Request goal(::wsg_50_common::action::Cmd_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_SendGoal_Request msg_;
};

class Init_Cmd_SendGoal_Request_goal_id
{
public:
  Init_Cmd_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cmd_SendGoal_Request_goal goal_id(::wsg_50_common::action::Cmd_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Cmd_SendGoal_Request_goal(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::action::Cmd_SendGoal_Request>()
{
  return wsg_50_common::action::builder::Init_Cmd_SendGoal_Request_goal_id();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace action
{

namespace builder
{

class Init_Cmd_SendGoal_Response_stamp
{
public:
  explicit Init_Cmd_SendGoal_Response_stamp(::wsg_50_common::action::Cmd_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::action::Cmd_SendGoal_Response stamp(::wsg_50_common::action::Cmd_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_SendGoal_Response msg_;
};

class Init_Cmd_SendGoal_Response_accepted
{
public:
  Init_Cmd_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cmd_SendGoal_Response_stamp accepted(::wsg_50_common::action::Cmd_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Cmd_SendGoal_Response_stamp(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::action::Cmd_SendGoal_Response>()
{
  return wsg_50_common::action::builder::Init_Cmd_SendGoal_Response_accepted();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace action
{

namespace builder
{

class Init_Cmd_GetResult_Request_goal_id
{
public:
  Init_Cmd_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wsg_50_common::action::Cmd_GetResult_Request goal_id(::wsg_50_common::action::Cmd_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::action::Cmd_GetResult_Request>()
{
  return wsg_50_common::action::builder::Init_Cmd_GetResult_Request_goal_id();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace action
{

namespace builder
{

class Init_Cmd_GetResult_Response_result
{
public:
  explicit Init_Cmd_GetResult_Response_result(::wsg_50_common::action::Cmd_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::action::Cmd_GetResult_Response result(::wsg_50_common::action::Cmd_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_GetResult_Response msg_;
};

class Init_Cmd_GetResult_Response_status
{
public:
  Init_Cmd_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cmd_GetResult_Response_result status(::wsg_50_common::action::Cmd_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Cmd_GetResult_Response_result(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::action::Cmd_GetResult_Response>()
{
  return wsg_50_common::action::builder::Init_Cmd_GetResult_Response_status();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace action
{

namespace builder
{

class Init_Cmd_FeedbackMessage_feedback
{
public:
  explicit Init_Cmd_FeedbackMessage_feedback(::wsg_50_common::action::Cmd_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::action::Cmd_FeedbackMessage feedback(::wsg_50_common::action::Cmd_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_FeedbackMessage msg_;
};

class Init_Cmd_FeedbackMessage_goal_id
{
public:
  Init_Cmd_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cmd_FeedbackMessage_feedback goal_id(::wsg_50_common::action::Cmd_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Cmd_FeedbackMessage_feedback(msg_);
  }

private:
  ::wsg_50_common::action::Cmd_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::action::Cmd_FeedbackMessage>()
{
  return wsg_50_common::action::builder::Init_Cmd_FeedbackMessage_goal_id();
}

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__ACTION__DETAIL__CMD__BUILDER_HPP_
