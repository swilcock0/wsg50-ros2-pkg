// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wsg_50_common:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__CMD__FUNCTIONS_H_
#define WSG_50_COMMON__MSG__DETAIL__CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wsg_50_common/msg/rosidl_generator_c__visibility_control.h"

#include "wsg_50_common/msg/detail/cmd__struct.h"

/// Initialize msg/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__msg__Cmd
 * )) before or use
 * wsg_50_common__msg__Cmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__msg__Cmd__init(wsg_50_common__msg__Cmd * msg);

/// Finalize msg/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__msg__Cmd__fini(wsg_50_common__msg__Cmd * msg);

/// Create msg/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__msg__Cmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__msg__Cmd *
wsg_50_common__msg__Cmd__create();

/// Destroy msg/Cmd message.
/**
 * It calls
 * wsg_50_common__msg__Cmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__msg__Cmd__destroy(wsg_50_common__msg__Cmd * msg);

/// Check for msg/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__msg__Cmd__are_equal(const wsg_50_common__msg__Cmd * lhs, const wsg_50_common__msg__Cmd * rhs);

/// Copy a msg/Cmd message.
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
wsg_50_common__msg__Cmd__copy(
  const wsg_50_common__msg__Cmd * input,
  wsg_50_common__msg__Cmd * output);

/// Initialize array of msg/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__msg__Cmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__msg__Cmd__Sequence__init(wsg_50_common__msg__Cmd__Sequence * array, size_t size);

/// Finalize array of msg/Cmd messages.
/**
 * It calls
 * wsg_50_common__msg__Cmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__msg__Cmd__Sequence__fini(wsg_50_common__msg__Cmd__Sequence * array);

/// Create array of msg/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__msg__Cmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__msg__Cmd__Sequence *
wsg_50_common__msg__Cmd__Sequence__create(size_t size);

/// Destroy array of msg/Cmd messages.
/**
 * It calls
 * wsg_50_common__msg__Cmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__msg__Cmd__Sequence__destroy(wsg_50_common__msg__Cmd__Sequence * array);

/// Check for msg/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__msg__Cmd__Sequence__are_equal(const wsg_50_common__msg__Cmd__Sequence * lhs, const wsg_50_common__msg__Cmd__Sequence * rhs);

/// Copy an array of msg/Cmd messages.
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
wsg_50_common__msg__Cmd__Sequence__copy(
  const wsg_50_common__msg__Cmd__Sequence * input,
  wsg_50_common__msg__Cmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WSG_50_COMMON__MSG__DETAIL__CMD__FUNCTIONS_H_
