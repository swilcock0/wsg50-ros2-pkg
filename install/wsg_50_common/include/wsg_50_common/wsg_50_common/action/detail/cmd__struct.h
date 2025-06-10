// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wsg_50_common:action/Cmd.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__ACTION__DETAIL__CMD__STRUCT_H_
#define WSG_50_COMMON__ACTION__DETAIL__CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__action__Cmd_Goal
{
  /// Mode of operation
  int32_t mode;
  /// Possible values for mode:
  /// 0: MODE_MOVE
  /// 1: MODE_GRASP
  /// 2: MODE_RELEASE
  /// Width of the gripper
  float width;
  /// Speed of the gripper
  float speed;
} wsg_50_common__action__Cmd_Goal;

// Struct for a sequence of wsg_50_common__action__Cmd_Goal.
typedef struct wsg_50_common__action__Cmd_Goal__Sequence
{
  wsg_50_common__action__Cmd_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__action__Cmd_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__action__Cmd_Result
{
  /// Result of the command
  bool result;
} wsg_50_common__action__Cmd_Result;

// Struct for a sequence of wsg_50_common__action__Cmd_Result.
typedef struct wsg_50_common__action__Cmd_Result__Sequence
{
  wsg_50_common__action__Cmd_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__action__Cmd_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__action__Cmd_Feedback
{
  /// Current position of the gripper
  float position;
} wsg_50_common__action__Cmd_Feedback;

// Struct for a sequence of wsg_50_common__action__Cmd_Feedback.
typedef struct wsg_50_common__action__Cmd_Feedback__Sequence
{
  wsg_50_common__action__Cmd_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__action__Cmd_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "wsg_50_common/action/detail/cmd__struct.h"

/// Struct defined in action/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__action__Cmd_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  wsg_50_common__action__Cmd_Goal goal;
} wsg_50_common__action__Cmd_SendGoal_Request;

// Struct for a sequence of wsg_50_common__action__Cmd_SendGoal_Request.
typedef struct wsg_50_common__action__Cmd_SendGoal_Request__Sequence
{
  wsg_50_common__action__Cmd_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__action__Cmd_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__action__Cmd_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} wsg_50_common__action__Cmd_SendGoal_Response;

// Struct for a sequence of wsg_50_common__action__Cmd_SendGoal_Response.
typedef struct wsg_50_common__action__Cmd_SendGoal_Response__Sequence
{
  wsg_50_common__action__Cmd_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__action__Cmd_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__action__Cmd_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} wsg_50_common__action__Cmd_GetResult_Request;

// Struct for a sequence of wsg_50_common__action__Cmd_GetResult_Request.
typedef struct wsg_50_common__action__Cmd_GetResult_Request__Sequence
{
  wsg_50_common__action__Cmd_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__action__Cmd_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "wsg_50_common/action/detail/cmd__struct.h"

/// Struct defined in action/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__action__Cmd_GetResult_Response
{
  int8_t status;
  wsg_50_common__action__Cmd_Result result;
} wsg_50_common__action__Cmd_GetResult_Response;

// Struct for a sequence of wsg_50_common__action__Cmd_GetResult_Response.
typedef struct wsg_50_common__action__Cmd_GetResult_Response__Sequence
{
  wsg_50_common__action__Cmd_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__action__Cmd_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "wsg_50_common/action/detail/cmd__struct.h"

/// Struct defined in action/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__action__Cmd_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  wsg_50_common__action__Cmd_Feedback feedback;
} wsg_50_common__action__Cmd_FeedbackMessage;

// Struct for a sequence of wsg_50_common__action__Cmd_FeedbackMessage.
typedef struct wsg_50_common__action__Cmd_FeedbackMessage__Sequence
{
  wsg_50_common__action__Cmd_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__action__Cmd_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WSG_50_COMMON__ACTION__DETAIL__CMD__STRUCT_H_
