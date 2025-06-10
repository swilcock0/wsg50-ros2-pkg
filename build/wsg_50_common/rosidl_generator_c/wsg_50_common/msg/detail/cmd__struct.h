// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wsg_50_common:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__CMD__STRUCT_H_
#define WSG_50_COMMON__MSG__DETAIL__CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Cmd in the package wsg_50_common.
typedef struct wsg_50_common__msg__Cmd
{
  rosidl_runtime_c__String mode;
  float pos;
  float speed;
} wsg_50_common__msg__Cmd;

// Struct for a sequence of wsg_50_common__msg__Cmd.
typedef struct wsg_50_common__msg__Cmd__Sequence
{
  wsg_50_common__msg__Cmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__msg__Cmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WSG_50_COMMON__MSG__DETAIL__CMD__STRUCT_H_
