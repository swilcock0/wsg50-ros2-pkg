// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wsg_50_common:srv/Incr.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__INCR__FUNCTIONS_H_
#define WSG_50_COMMON__SRV__DETAIL__INCR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wsg_50_common/msg/rosidl_generator_c__visibility_control.h"

#include "wsg_50_common/srv/detail/incr__struct.h"

/// Initialize srv/Incr message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__srv__Incr_Request
 * )) before or use
 * wsg_50_common__srv__Incr_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Request__init(wsg_50_common__srv__Incr_Request * msg);

/// Finalize srv/Incr message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__srv__Incr_Request__fini(wsg_50_common__srv__Incr_Request * msg);

/// Create srv/Incr message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__srv__Incr_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__srv__Incr_Request *
wsg_50_common__srv__Incr_Request__create();

/// Destroy srv/Incr message.
/**
 * It calls
 * wsg_50_common__srv__Incr_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__srv__Incr_Request__destroy(wsg_50_common__srv__Incr_Request * msg);

/// Check for srv/Incr message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Request__are_equal(const wsg_50_common__srv__Incr_Request * lhs, const wsg_50_common__srv__Incr_Request * rhs);

/// Copy a srv/Incr message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Request__copy(
  const wsg_50_common__srv__Incr_Request * input,
  wsg_50_common__srv__Incr_Request * output);

/// Initialize array of srv/Incr messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__srv__Incr_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Request__Sequence__init(wsg_50_common__srv__Incr_Request__Sequence * array, size_t size);

/// Finalize array of srv/Incr messages.
/**
 * It calls
 * wsg_50_common__srv__Incr_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__srv__Incr_Request__Sequence__fini(wsg_50_common__srv__Incr_Request__Sequence * array);

/// Create array of srv/Incr messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__srv__Incr_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__srv__Incr_Request__Sequence *
wsg_50_common__srv__Incr_Request__Sequence__create(size_t size);

/// Destroy array of srv/Incr messages.
/**
 * It calls
 * wsg_50_common__srv__Incr_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__srv__Incr_Request__Sequence__destroy(wsg_50_common__srv__Incr_Request__Sequence * array);

/// Check for srv/Incr message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Request__Sequence__are_equal(const wsg_50_common__srv__Incr_Request__Sequence * lhs, const wsg_50_common__srv__Incr_Request__Sequence * rhs);

/// Copy an array of srv/Incr messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Request__Sequence__copy(
  const wsg_50_common__srv__Incr_Request__Sequence * input,
  wsg_50_common__srv__Incr_Request__Sequence * output);

/// Initialize srv/Incr message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__srv__Incr_Response
 * )) before or use
 * wsg_50_common__srv__Incr_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Response__init(wsg_50_common__srv__Incr_Response * msg);

/// Finalize srv/Incr message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__srv__Incr_Response__fini(wsg_50_common__srv__Incr_Response * msg);

/// Create srv/Incr message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__srv__Incr_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__srv__Incr_Response *
wsg_50_common__srv__Incr_Response__create();

/// Destroy srv/Incr message.
/**
 * It calls
 * wsg_50_common__srv__Incr_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__srv__Incr_Response__destroy(wsg_50_common__srv__Incr_Response * msg);

/// Check for srv/Incr message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Response__are_equal(const wsg_50_common__srv__Incr_Response * lhs, const wsg_50_common__srv__Incr_Response * rhs);

/// Copy a srv/Incr message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Response__copy(
  const wsg_50_common__srv__Incr_Response * input,
  wsg_50_common__srv__Incr_Response * output);

/// Initialize array of srv/Incr messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__srv__Incr_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Response__Sequence__init(wsg_50_common__srv__Incr_Response__Sequence * array, size_t size);

/// Finalize array of srv/Incr messages.
/**
 * It calls
 * wsg_50_common__srv__Incr_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__srv__Incr_Response__Sequence__fini(wsg_50_common__srv__Incr_Response__Sequence * array);

/// Create array of srv/Incr messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__srv__Incr_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__srv__Incr_Response__Sequence *
wsg_50_common__srv__Incr_Response__Sequence__create(size_t size);

/// Destroy array of srv/Incr messages.
/**
 * It calls
 * wsg_50_common__srv__Incr_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__srv__Incr_Response__Sequence__destroy(wsg_50_common__srv__Incr_Response__Sequence * array);

/// Check for srv/Incr message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Response__Sequence__are_equal(const wsg_50_common__srv__Incr_Response__Sequence * lhs, const wsg_50_common__srv__Incr_Response__Sequence * rhs);

/// Copy an array of srv/Incr messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__srv__Incr_Response__Sequence__copy(
  const wsg_50_common__srv__Incr_Response__Sequence * input,
  wsg_50_common__srv__Incr_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WSG_50_COMMON__SRV__DETAIL__INCR__FUNCTIONS_H_
