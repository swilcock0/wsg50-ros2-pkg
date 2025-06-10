// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wsg_50_common:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__STATUS__STRUCT_H_
#define WSG_50_COMMON__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Status in the package wsg_50_common.
typedef struct wsg_50_common__msg__Status
{
  rosidl_runtime_c__String status;
  bool object_grasped;
  float width;
  float speed;
  float acc;
  float force;
  float force_finger0;
  float force_finger1;
} wsg_50_common__msg__Status;

// Struct for a sequence of wsg_50_common__msg__Status.
typedef struct wsg_50_common__msg__Status__Sequence
{
  wsg_50_common__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wsg_50_common__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WSG_50_COMMON__MSG__DETAIL__STATUS__STRUCT_H_
