// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wsg_50_common:action/Cmd.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__ACTION__DETAIL__CMD__FUNCTIONS_H_
#define WSG_50_COMMON__ACTION__DETAIL__CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wsg_50_common/msg/rosidl_generator_c__visibility_control.h"

#include "wsg_50_common/action/detail/cmd__struct.h"

/// Initialize action/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__action__Cmd_Goal
 * )) before or use
 * wsg_50_common__action__Cmd_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Goal__init(wsg_50_common__action__Cmd_Goal * msg);

/// Finalize action/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Goal__fini(wsg_50_common__action__Cmd_Goal * msg);

/// Create action/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__action__Cmd_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_Goal *
wsg_50_common__action__Cmd_Goal__create();

/// Destroy action/Cmd message.
/**
 * It calls
 * wsg_50_common__action__Cmd_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Goal__destroy(wsg_50_common__action__Cmd_Goal * msg);

/// Check for action/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Goal__are_equal(const wsg_50_common__action__Cmd_Goal * lhs, const wsg_50_common__action__Cmd_Goal * rhs);

/// Copy a action/Cmd message.
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
wsg_50_common__action__Cmd_Goal__copy(
  const wsg_50_common__action__Cmd_Goal * input,
  wsg_50_common__action__Cmd_Goal * output);

/// Initialize array of action/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__action__Cmd_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Goal__Sequence__init(wsg_50_common__action__Cmd_Goal__Sequence * array, size_t size);

/// Finalize array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Goal__Sequence__fini(wsg_50_common__action__Cmd_Goal__Sequence * array);

/// Create array of action/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__action__Cmd_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_Goal__Sequence *
wsg_50_common__action__Cmd_Goal__Sequence__create(size_t size);

/// Destroy array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Goal__Sequence__destroy(wsg_50_common__action__Cmd_Goal__Sequence * array);

/// Check for action/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Goal__Sequence__are_equal(const wsg_50_common__action__Cmd_Goal__Sequence * lhs, const wsg_50_common__action__Cmd_Goal__Sequence * rhs);

/// Copy an array of action/Cmd messages.
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
wsg_50_common__action__Cmd_Goal__Sequence__copy(
  const wsg_50_common__action__Cmd_Goal__Sequence * input,
  wsg_50_common__action__Cmd_Goal__Sequence * output);

/// Initialize action/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__action__Cmd_Result
 * )) before or use
 * wsg_50_common__action__Cmd_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Result__init(wsg_50_common__action__Cmd_Result * msg);

/// Finalize action/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Result__fini(wsg_50_common__action__Cmd_Result * msg);

/// Create action/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__action__Cmd_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_Result *
wsg_50_common__action__Cmd_Result__create();

/// Destroy action/Cmd message.
/**
 * It calls
 * wsg_50_common__action__Cmd_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Result__destroy(wsg_50_common__action__Cmd_Result * msg);

/// Check for action/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Result__are_equal(const wsg_50_common__action__Cmd_Result * lhs, const wsg_50_common__action__Cmd_Result * rhs);

/// Copy a action/Cmd message.
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
wsg_50_common__action__Cmd_Result__copy(
  const wsg_50_common__action__Cmd_Result * input,
  wsg_50_common__action__Cmd_Result * output);

/// Initialize array of action/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__action__Cmd_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Result__Sequence__init(wsg_50_common__action__Cmd_Result__Sequence * array, size_t size);

/// Finalize array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Result__Sequence__fini(wsg_50_common__action__Cmd_Result__Sequence * array);

/// Create array of action/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__action__Cmd_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_Result__Sequence *
wsg_50_common__action__Cmd_Result__Sequence__create(size_t size);

/// Destroy array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Result__Sequence__destroy(wsg_50_common__action__Cmd_Result__Sequence * array);

/// Check for action/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Result__Sequence__are_equal(const wsg_50_common__action__Cmd_Result__Sequence * lhs, const wsg_50_common__action__Cmd_Result__Sequence * rhs);

/// Copy an array of action/Cmd messages.
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
wsg_50_common__action__Cmd_Result__Sequence__copy(
  const wsg_50_common__action__Cmd_Result__Sequence * input,
  wsg_50_common__action__Cmd_Result__Sequence * output);

/// Initialize action/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__action__Cmd_Feedback
 * )) before or use
 * wsg_50_common__action__Cmd_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Feedback__init(wsg_50_common__action__Cmd_Feedback * msg);

/// Finalize action/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Feedback__fini(wsg_50_common__action__Cmd_Feedback * msg);

/// Create action/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__action__Cmd_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_Feedback *
wsg_50_common__action__Cmd_Feedback__create();

/// Destroy action/Cmd message.
/**
 * It calls
 * wsg_50_common__action__Cmd_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Feedback__destroy(wsg_50_common__action__Cmd_Feedback * msg);

/// Check for action/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Feedback__are_equal(const wsg_50_common__action__Cmd_Feedback * lhs, const wsg_50_common__action__Cmd_Feedback * rhs);

/// Copy a action/Cmd message.
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
wsg_50_common__action__Cmd_Feedback__copy(
  const wsg_50_common__action__Cmd_Feedback * input,
  wsg_50_common__action__Cmd_Feedback * output);

/// Initialize array of action/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__action__Cmd_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Feedback__Sequence__init(wsg_50_common__action__Cmd_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Feedback__Sequence__fini(wsg_50_common__action__Cmd_Feedback__Sequence * array);

/// Create array of action/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__action__Cmd_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_Feedback__Sequence *
wsg_50_common__action__Cmd_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_Feedback__Sequence__destroy(wsg_50_common__action__Cmd_Feedback__Sequence * array);

/// Check for action/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_Feedback__Sequence__are_equal(const wsg_50_common__action__Cmd_Feedback__Sequence * lhs, const wsg_50_common__action__Cmd_Feedback__Sequence * rhs);

/// Copy an array of action/Cmd messages.
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
wsg_50_common__action__Cmd_Feedback__Sequence__copy(
  const wsg_50_common__action__Cmd_Feedback__Sequence * input,
  wsg_50_common__action__Cmd_Feedback__Sequence * output);

/// Initialize action/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__action__Cmd_SendGoal_Request
 * )) before or use
 * wsg_50_common__action__Cmd_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_SendGoal_Request__init(wsg_50_common__action__Cmd_SendGoal_Request * msg);

/// Finalize action/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_SendGoal_Request__fini(wsg_50_common__action__Cmd_SendGoal_Request * msg);

/// Create action/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__action__Cmd_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_SendGoal_Request *
wsg_50_common__action__Cmd_SendGoal_Request__create();

/// Destroy action/Cmd message.
/**
 * It calls
 * wsg_50_common__action__Cmd_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_SendGoal_Request__destroy(wsg_50_common__action__Cmd_SendGoal_Request * msg);

/// Check for action/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_SendGoal_Request__are_equal(const wsg_50_common__action__Cmd_SendGoal_Request * lhs, const wsg_50_common__action__Cmd_SendGoal_Request * rhs);

/// Copy a action/Cmd message.
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
wsg_50_common__action__Cmd_SendGoal_Request__copy(
  const wsg_50_common__action__Cmd_SendGoal_Request * input,
  wsg_50_common__action__Cmd_SendGoal_Request * output);

/// Initialize array of action/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__action__Cmd_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__init(wsg_50_common__action__Cmd_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__fini(wsg_50_common__action__Cmd_SendGoal_Request__Sequence * array);

/// Create array of action/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__action__Cmd_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_SendGoal_Request__Sequence *
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__destroy(wsg_50_common__action__Cmd_SendGoal_Request__Sequence * array);

/// Check for action/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__are_equal(const wsg_50_common__action__Cmd_SendGoal_Request__Sequence * lhs, const wsg_50_common__action__Cmd_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Cmd messages.
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
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__copy(
  const wsg_50_common__action__Cmd_SendGoal_Request__Sequence * input,
  wsg_50_common__action__Cmd_SendGoal_Request__Sequence * output);

/// Initialize action/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__action__Cmd_SendGoal_Response
 * )) before or use
 * wsg_50_common__action__Cmd_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_SendGoal_Response__init(wsg_50_common__action__Cmd_SendGoal_Response * msg);

/// Finalize action/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_SendGoal_Response__fini(wsg_50_common__action__Cmd_SendGoal_Response * msg);

/// Create action/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__action__Cmd_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_SendGoal_Response *
wsg_50_common__action__Cmd_SendGoal_Response__create();

/// Destroy action/Cmd message.
/**
 * It calls
 * wsg_50_common__action__Cmd_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_SendGoal_Response__destroy(wsg_50_common__action__Cmd_SendGoal_Response * msg);

/// Check for action/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_SendGoal_Response__are_equal(const wsg_50_common__action__Cmd_SendGoal_Response * lhs, const wsg_50_common__action__Cmd_SendGoal_Response * rhs);

/// Copy a action/Cmd message.
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
wsg_50_common__action__Cmd_SendGoal_Response__copy(
  const wsg_50_common__action__Cmd_SendGoal_Response * input,
  wsg_50_common__action__Cmd_SendGoal_Response * output);

/// Initialize array of action/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__action__Cmd_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__init(wsg_50_common__action__Cmd_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__fini(wsg_50_common__action__Cmd_SendGoal_Response__Sequence * array);

/// Create array of action/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__action__Cmd_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_SendGoal_Response__Sequence *
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__destroy(wsg_50_common__action__Cmd_SendGoal_Response__Sequence * array);

/// Check for action/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__are_equal(const wsg_50_common__action__Cmd_SendGoal_Response__Sequence * lhs, const wsg_50_common__action__Cmd_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Cmd messages.
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
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__copy(
  const wsg_50_common__action__Cmd_SendGoal_Response__Sequence * input,
  wsg_50_common__action__Cmd_SendGoal_Response__Sequence * output);

/// Initialize action/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__action__Cmd_GetResult_Request
 * )) before or use
 * wsg_50_common__action__Cmd_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_GetResult_Request__init(wsg_50_common__action__Cmd_GetResult_Request * msg);

/// Finalize action/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_GetResult_Request__fini(wsg_50_common__action__Cmd_GetResult_Request * msg);

/// Create action/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__action__Cmd_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_GetResult_Request *
wsg_50_common__action__Cmd_GetResult_Request__create();

/// Destroy action/Cmd message.
/**
 * It calls
 * wsg_50_common__action__Cmd_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_GetResult_Request__destroy(wsg_50_common__action__Cmd_GetResult_Request * msg);

/// Check for action/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_GetResult_Request__are_equal(const wsg_50_common__action__Cmd_GetResult_Request * lhs, const wsg_50_common__action__Cmd_GetResult_Request * rhs);

/// Copy a action/Cmd message.
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
wsg_50_common__action__Cmd_GetResult_Request__copy(
  const wsg_50_common__action__Cmd_GetResult_Request * input,
  wsg_50_common__action__Cmd_GetResult_Request * output);

/// Initialize array of action/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__action__Cmd_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_GetResult_Request__Sequence__init(wsg_50_common__action__Cmd_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_GetResult_Request__Sequence__fini(wsg_50_common__action__Cmd_GetResult_Request__Sequence * array);

/// Create array of action/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__action__Cmd_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_GetResult_Request__Sequence *
wsg_50_common__action__Cmd_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_GetResult_Request__Sequence__destroy(wsg_50_common__action__Cmd_GetResult_Request__Sequence * array);

/// Check for action/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_GetResult_Request__Sequence__are_equal(const wsg_50_common__action__Cmd_GetResult_Request__Sequence * lhs, const wsg_50_common__action__Cmd_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Cmd messages.
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
wsg_50_common__action__Cmd_GetResult_Request__Sequence__copy(
  const wsg_50_common__action__Cmd_GetResult_Request__Sequence * input,
  wsg_50_common__action__Cmd_GetResult_Request__Sequence * output);

/// Initialize action/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__action__Cmd_GetResult_Response
 * )) before or use
 * wsg_50_common__action__Cmd_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_GetResult_Response__init(wsg_50_common__action__Cmd_GetResult_Response * msg);

/// Finalize action/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_GetResult_Response__fini(wsg_50_common__action__Cmd_GetResult_Response * msg);

/// Create action/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__action__Cmd_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_GetResult_Response *
wsg_50_common__action__Cmd_GetResult_Response__create();

/// Destroy action/Cmd message.
/**
 * It calls
 * wsg_50_common__action__Cmd_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_GetResult_Response__destroy(wsg_50_common__action__Cmd_GetResult_Response * msg);

/// Check for action/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_GetResult_Response__are_equal(const wsg_50_common__action__Cmd_GetResult_Response * lhs, const wsg_50_common__action__Cmd_GetResult_Response * rhs);

/// Copy a action/Cmd message.
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
wsg_50_common__action__Cmd_GetResult_Response__copy(
  const wsg_50_common__action__Cmd_GetResult_Response * input,
  wsg_50_common__action__Cmd_GetResult_Response * output);

/// Initialize array of action/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__action__Cmd_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_GetResult_Response__Sequence__init(wsg_50_common__action__Cmd_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_GetResult_Response__Sequence__fini(wsg_50_common__action__Cmd_GetResult_Response__Sequence * array);

/// Create array of action/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__action__Cmd_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_GetResult_Response__Sequence *
wsg_50_common__action__Cmd_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_GetResult_Response__Sequence__destroy(wsg_50_common__action__Cmd_GetResult_Response__Sequence * array);

/// Check for action/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_GetResult_Response__Sequence__are_equal(const wsg_50_common__action__Cmd_GetResult_Response__Sequence * lhs, const wsg_50_common__action__Cmd_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Cmd messages.
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
wsg_50_common__action__Cmd_GetResult_Response__Sequence__copy(
  const wsg_50_common__action__Cmd_GetResult_Response__Sequence * input,
  wsg_50_common__action__Cmd_GetResult_Response__Sequence * output);

/// Initialize action/Cmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wsg_50_common__action__Cmd_FeedbackMessage
 * )) before or use
 * wsg_50_common__action__Cmd_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_FeedbackMessage__init(wsg_50_common__action__Cmd_FeedbackMessage * msg);

/// Finalize action/Cmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_FeedbackMessage__fini(wsg_50_common__action__Cmd_FeedbackMessage * msg);

/// Create action/Cmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wsg_50_common__action__Cmd_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_FeedbackMessage *
wsg_50_common__action__Cmd_FeedbackMessage__create();

/// Destroy action/Cmd message.
/**
 * It calls
 * wsg_50_common__action__Cmd_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_FeedbackMessage__destroy(wsg_50_common__action__Cmd_FeedbackMessage * msg);

/// Check for action/Cmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_FeedbackMessage__are_equal(const wsg_50_common__action__Cmd_FeedbackMessage * lhs, const wsg_50_common__action__Cmd_FeedbackMessage * rhs);

/// Copy a action/Cmd message.
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
wsg_50_common__action__Cmd_FeedbackMessage__copy(
  const wsg_50_common__action__Cmd_FeedbackMessage * input,
  wsg_50_common__action__Cmd_FeedbackMessage * output);

/// Initialize array of action/Cmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * wsg_50_common__action__Cmd_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__init(wsg_50_common__action__Cmd_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__fini(wsg_50_common__action__Cmd_FeedbackMessage__Sequence * array);

/// Create array of action/Cmd messages.
/**
 * It allocates the memory for the array and calls
 * wsg_50_common__action__Cmd_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
wsg_50_common__action__Cmd_FeedbackMessage__Sequence *
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Cmd messages.
/**
 * It calls
 * wsg_50_common__action__Cmd_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
void
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__destroy(wsg_50_common__action__Cmd_FeedbackMessage__Sequence * array);

/// Check for action/Cmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wsg_50_common
bool
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__are_equal(const wsg_50_common__action__Cmd_FeedbackMessage__Sequence * lhs, const wsg_50_common__action__Cmd_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Cmd messages.
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
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__copy(
  const wsg_50_common__action__Cmd_FeedbackMessage__Sequence * input,
  wsg_50_common__action__Cmd_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WSG_50_COMMON__ACTION__DETAIL__CMD__FUNCTIONS_H_
