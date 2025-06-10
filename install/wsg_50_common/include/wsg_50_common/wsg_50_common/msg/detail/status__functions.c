// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wsg_50_common:msg/Status.idl
// generated code does not contain a copyright notice
#include "wsg_50_common/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
wsg_50_common__msg__Status__init(wsg_50_common__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    wsg_50_common__msg__Status__fini(msg);
    return false;
  }
  // object_grasped
  // width
  // speed
  // acc
  // force
  // force_finger0
  // force_finger1
  return true;
}

void
wsg_50_common__msg__Status__fini(wsg_50_common__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // object_grasped
  // width
  // speed
  // acc
  // force
  // force_finger0
  // force_finger1
}

bool
wsg_50_common__msg__Status__are_equal(const wsg_50_common__msg__Status * lhs, const wsg_50_common__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // object_grasped
  if (lhs->object_grasped != rhs->object_grasped) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // acc
  if (lhs->acc != rhs->acc) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  // force_finger0
  if (lhs->force_finger0 != rhs->force_finger0) {
    return false;
  }
  // force_finger1
  if (lhs->force_finger1 != rhs->force_finger1) {
    return false;
  }
  return true;
}

bool
wsg_50_common__msg__Status__copy(
  const wsg_50_common__msg__Status * input,
  wsg_50_common__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // object_grasped
  output->object_grasped = input->object_grasped;
  // width
  output->width = input->width;
  // speed
  output->speed = input->speed;
  // acc
  output->acc = input->acc;
  // force
  output->force = input->force;
  // force_finger0
  output->force_finger0 = input->force_finger0;
  // force_finger1
  output->force_finger1 = input->force_finger1;
  return true;
}

wsg_50_common__msg__Status *
wsg_50_common__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__msg__Status * msg = (wsg_50_common__msg__Status *)allocator.allocate(sizeof(wsg_50_common__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__msg__Status));
  bool success = wsg_50_common__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__msg__Status__destroy(wsg_50_common__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__msg__Status__Sequence__init(wsg_50_common__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__msg__Status * data = NULL;

  if (size) {
    data = (wsg_50_common__msg__Status *)allocator.zero_allocate(size, sizeof(wsg_50_common__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__msg__Status__fini(&data[i - 1]);
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
wsg_50_common__msg__Status__Sequence__fini(wsg_50_common__msg__Status__Sequence * array)
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
      wsg_50_common__msg__Status__fini(&array->data[i]);
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

wsg_50_common__msg__Status__Sequence *
wsg_50_common__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__msg__Status__Sequence * array = (wsg_50_common__msg__Status__Sequence *)allocator.allocate(sizeof(wsg_50_common__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__msg__Status__Sequence__destroy(wsg_50_common__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__msg__Status__Sequence__are_equal(const wsg_50_common__msg__Status__Sequence * lhs, const wsg_50_common__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__msg__Status__Sequence__copy(
  const wsg_50_common__msg__Status__Sequence * input,
  wsg_50_common__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__msg__Status * data =
      (wsg_50_common__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
