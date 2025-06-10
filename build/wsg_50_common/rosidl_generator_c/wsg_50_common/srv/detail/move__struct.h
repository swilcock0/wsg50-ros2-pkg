// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wsg_50_common:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__MOVE__STRUCT_H_
#define WSG_50_COMMON__SRV__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Move in the package wsg_50_common.
typedef struct wsg_50_common__srv__Move_Request
{
  float width;
  float speed;
} wsg_50_common__srv__Move_Request;

// Struct for a sequence of wsg_50_common__srv__Move_Request.
typedef struct wsg_50_common__srv__Move_Request__Sequence
{
  wsg_50_common__srv__Move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__srv__Move_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Move in the package wsg_50_common.
typedef struct wsg_50_common__srv__Move_Response
{
  uint8_t error;
} wsg_50_common__srv__Move_Response;

// Struct for a sequence of wsg_50_common__srv__Move_Response.
typedef struct wsg_50_common__srv__Move_Response__Sequence
{
  wsg_50_common__srv__Move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__srv__Move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WSG_50_COMMON__SRV__DETAIL__MOVE__STRUCT_H_
