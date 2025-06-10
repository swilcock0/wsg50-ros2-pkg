// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wsg_50_common:msg/Cmd.idl
// generated code does not contain a copyright notice
#include "wsg_50_common/msg/detail/cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
wsg_50_common__msg__Cmd__init(wsg_50_common__msg__Cmd * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    wsg_50_common__msg__Cmd__fini(msg);
    return false;
  }
  // pos
  // speed
  return true;
}

void
wsg_50_common__msg__Cmd__fini(wsg_50_common__msg__Cmd * msg)
{
  if (!msg) {
    return;
  }
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // pos
  // speed
}

bool
wsg_50_common__msg__Cmd__are_equal(const wsg_50_common__msg__Cmd * lhs, const wsg_50_common__msg__Cmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // pos
  if (lhs->pos != rhs->pos) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
wsg_50_common__msg__Cmd__copy(
  const wsg_50_common__msg__Cmd * input,
  wsg_50_common__msg__Cmd * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // pos
  output->pos = input->pos;
  // speed
  output->speed = input->speed;
  return true;
}

wsg_50_common__msg__Cmd *
wsg_50_common__msg__Cmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__msg__Cmd * msg = (wsg_50_common__msg__Cmd *)allocator.allocate(sizeof(wsg_50_common__msg__Cmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__msg__Cmd));
  bool success = wsg_50_common__msg__Cmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__msg__Cmd__destroy(wsg_50_common__msg__Cmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__msg__Cmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__msg__Cmd__Sequence__init(wsg_50_common__msg__Cmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__msg__Cmd * data = NULL;

  if (size) {
    data = (wsg_50_common__msg__Cmd *)allocator.zero_allocate(size, sizeof(wsg_50_common__msg__Cmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__msg__Cmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__msg__Cmd__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wsg_50_common__msg__Cmd__Sequence__fini(wsg_50_common__msg__Cmd__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wsg_50_common__msg__Cmd__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wsg_50_common__msg__Cmd__Sequence *
wsg_50_common__msg__Cmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__msg__Cmd__Sequence * array = (wsg_50_common__msg__Cmd__Sequence *)allocator.allocate(sizeof(wsg_50_common__msg__Cmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__msg__Cmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__msg__Cmd__Sequence__destroy(wsg_50_common__msg__Cmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__msg__Cmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__msg__Cmd__Sequence__are_equal(const wsg_50_common__msg__Cmd__Sequence * lhs, const wsg_50_common__msg__Cmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__msg__Cmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__msg__Cmd__Sequence__copy(
  const wsg_50_common__msg__Cmd__Sequence * input,
  wsg_50_common__msg__Cmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__msg__Cmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__msg__Cmd * data =
      (wsg_50_common__msg__Cmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__msg__Cmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__msg__Cmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__msg__Cmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
