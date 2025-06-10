// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wsg_50_common:srv/Conf.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wsg_50_common/srv/detail/conf__rosidl_typesupport_introspection_c.h"
#include "wsg_50_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wsg_50_common/srv/detail/conf__functions.h"
#include "wsg_50_common/srv/detail/conf__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wsg_50_common__srv__Conf_Request__init(message_memory);
}

void wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_fini_function(void * message_memory)
{
  wsg_50_common__srv__Conf_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_message_member_array[1] = {
  {
    "val",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wsg_50_common__srv__Conf_Request, val),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_message_members = {
  "wsg_50_common__srv",  // message namespace
  "Conf_Request",  // message name
  1,  // number of fields
  sizeof(wsg_50_common__srv__Conf_Request),
  wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_message_member_array,  // message members
  wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_message_type_support_handle = {
  0,
  &wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wsg_50_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Conf_Request)() {
  if (!wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_message_type_support_handle.typesupport_identifier) {
    wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wsg_50_common__srv__Conf_Request__rosidl_typesupport_introspection_c__Conf_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "wsg_50_common/srv/detail/conf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "wsg_50_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "wsg_50_common/srv/detail/conf__functions.h"
// already included above
// #include "wsg_50_common/srv/detail/conf__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wsg_50_common__srv__Conf_Response__init(message_memory);
}

void wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_fini_function(void * message_memory)
{
  wsg_50_common__srv__Conf_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_message_member_array[1] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wsg_50_common__srv__Conf_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_message_members = {
  "wsg_50_common__srv",  // message namespace
  "Conf_Response",  // message name
  1,  // number of fields
  sizeof(wsg_50_common__srv__Conf_Response),
  wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_message_member_array,  // message members
  wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_message_type_support_handle = {
  0,
  &wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wsg_50_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Conf_Response)() {
  if (!wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_message_type_support_handle.typesupport_identifier) {
    wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wsg_50_common__srv__Conf_Response__rosidl_typesupport_introspection_c__Conf_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "wsg_50_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "wsg_50_common/srv/detail/conf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_service_members = {
  "wsg_50_common__srv",  // service namespace
  "Conf",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_Request_message_type_support_handle,
  NULL  // response message
  // wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_Response_message_type_support_handle
};

static rosidl_service_type_support_t wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_service_type_support_handle = {
  0,
  &wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Conf_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Conf_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wsg_50_common
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Conf)() {
  if (!wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_service_type_support_handle.typesupport_identifier) {
    wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Conf_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Conf_Response)()->data;
  }

  return &wsg_50_common__srv__detail__conf__rosidl_typesupport_introspection_c__Conf_service_type_support_handle;
}
