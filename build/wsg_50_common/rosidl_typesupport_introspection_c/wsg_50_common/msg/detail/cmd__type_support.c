// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wsg_50_common:msg/Cmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wsg_50_common/msg/detail/cmd__rosidl_typesupport_introspection_c.h"
#include "wsg_50_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wsg_50_common/msg/detail/cmd__functions.h"
#include "wsg_50_common/msg/detail/cmd__struct.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wsg_50_common__msg__Cmd__init(message_memory);
}

void wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_fini_function(void * message_memory)
{
  wsg_50_common__msg__Cmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_member_array[3] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wsg_50_common__msg__Cmd, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wsg_50_common__msg__Cmd, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wsg_50_common__msg__Cmd, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_members = {
  "wsg_50_common__msg",  // message namespace
  "Cmd",  // message name
  3,  // number of fields
  sizeof(wsg_50_common__msg__Cmd),
  wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_member_array,  // message members
  wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_init_function,  // function to initialize message memory (memory has to be allocated)
  wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle = {
  0,
  &wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wsg_50_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, msg, Cmd)() {
  if (!wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle.typesupport_identifier) {
    wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wsg_50_common__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
