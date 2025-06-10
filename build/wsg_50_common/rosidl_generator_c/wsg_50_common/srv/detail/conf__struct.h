// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wsg_50_common:srv/Conf.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__CONF__STRUCT_H_
#define WSG_50_COMMON__SRV__DETAIL__CONF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Conf in the package wsg_50_common.
typedef struct wsg_50_common__srv__Conf_Request
{
  float val;
} wsg_50_common__srv__Conf_Request;

// Struct for a sequence of wsg_50_common__srv__Conf_Request.
typedef struct wsg_50_common__srv__Conf_Request__Sequence
{
  wsg_50_common__srv__Conf_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__srv__Conf_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Conf in the package wsg_50_common.
typedef struct wsg_50_common__srv__Conf_Response
{
  uint8_t error;
} wsg_50_common__srv__Conf_Response;

// Struct for a sequence of wsg_50_common__srv__Conf_Response.
typedef struct wsg_50_common__srv__Conf_Response__Sequence
{
  wsg_50_common__srv__Conf_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__srv__Conf_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WSG_50_COMMON__SRV__DETAIL__CONF__STRUCT_H_
