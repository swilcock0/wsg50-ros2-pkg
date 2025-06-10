// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wsg_50_common:action/Cmd.idl
// generated code does not contain a copyright notice
#include "wsg_50_common/action/detail/cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wsg_50_common__action__Cmd_Goal__init(wsg_50_common__action__Cmd_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // width
  // speed
  return true;
}

void
wsg_50_common__action__Cmd_Goal__fini(wsg_50_common__action__Cmd_Goal * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // width
  // speed
}

bool
wsg_50_common__action__Cmd_Goal__are_equal(const wsg_50_common__action__Cmd_Goal * lhs, const wsg_50_common__action__Cmd_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
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
  return true;
}

bool
wsg_50_common__action__Cmd_Goal__copy(
  const wsg_50_common__action__Cmd_Goal * input,
  wsg_50_common__action__Cmd_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // width
  output->width = input->width;
  // speed
  output->speed = input->speed;
  return true;
}

wsg_50_common__action__Cmd_Goal *
wsg_50_common__action__Cmd_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Goal * msg = (wsg_50_common__action__Cmd_Goal *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__action__Cmd_Goal));
  bool success = wsg_50_common__action__Cmd_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__action__Cmd_Goal__destroy(wsg_50_common__action__Cmd_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__action__Cmd_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__action__Cmd_Goal__Sequence__init(wsg_50_common__action__Cmd_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Goal * data = NULL;

  if (size) {
    data = (wsg_50_common__action__Cmd_Goal *)allocator.zero_allocate(size, sizeof(wsg_50_common__action__Cmd_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__action__Cmd_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__action__Cmd_Goal__fini(&data[i - 1]);
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
wsg_50_common__action__Cmd_Goal__Sequence__fini(wsg_50_common__action__Cmd_Goal__Sequence * array)
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
      wsg_50_common__action__Cmd_Goal__fini(&array->data[i]);
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

wsg_50_common__action__Cmd_Goal__Sequence *
wsg_50_common__action__Cmd_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Goal__Sequence * array = (wsg_50_common__action__Cmd_Goal__Sequence *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__action__Cmd_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__action__Cmd_Goal__Sequence__destroy(wsg_50_common__action__Cmd_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__action__Cmd_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__action__Cmd_Goal__Sequence__are_equal(const wsg_50_common__action__Cmd_Goal__Sequence * lhs, const wsg_50_common__action__Cmd_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__action__Cmd_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__action__Cmd_Goal__Sequence__copy(
  const wsg_50_common__action__Cmd_Goal__Sequence * input,
  wsg_50_common__action__Cmd_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__action__Cmd_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__action__Cmd_Goal * data =
      (wsg_50_common__action__Cmd_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__action__Cmd_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__action__Cmd_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__action__Cmd_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
wsg_50_common__action__Cmd_Result__init(wsg_50_common__action__Cmd_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
wsg_50_common__action__Cmd_Result__fini(wsg_50_common__action__Cmd_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
wsg_50_common__action__Cmd_Result__are_equal(const wsg_50_common__action__Cmd_Result * lhs, const wsg_50_common__action__Cmd_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
wsg_50_common__action__Cmd_Result__copy(
  const wsg_50_common__action__Cmd_Result * input,
  wsg_50_common__action__Cmd_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

wsg_50_common__action__Cmd_Result *
wsg_50_common__action__Cmd_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Result * msg = (wsg_50_common__action__Cmd_Result *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__action__Cmd_Result));
  bool success = wsg_50_common__action__Cmd_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__action__Cmd_Result__destroy(wsg_50_common__action__Cmd_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__action__Cmd_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__action__Cmd_Result__Sequence__init(wsg_50_common__action__Cmd_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Result * data = NULL;

  if (size) {
    data = (wsg_50_common__action__Cmd_Result *)allocator.zero_allocate(size, sizeof(wsg_50_common__action__Cmd_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__action__Cmd_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__action__Cmd_Result__fini(&data[i - 1]);
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
wsg_50_common__action__Cmd_Result__Sequence__fini(wsg_50_common__action__Cmd_Result__Sequence * array)
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
      wsg_50_common__action__Cmd_Result__fini(&array->data[i]);
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

wsg_50_common__action__Cmd_Result__Sequence *
wsg_50_common__action__Cmd_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Result__Sequence * array = (wsg_50_common__action__Cmd_Result__Sequence *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__action__Cmd_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__action__Cmd_Result__Sequence__destroy(wsg_50_common__action__Cmd_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__action__Cmd_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__action__Cmd_Result__Sequence__are_equal(const wsg_50_common__action__Cmd_Result__Sequence * lhs, const wsg_50_common__action__Cmd_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__action__Cmd_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__action__Cmd_Result__Sequence__copy(
  const wsg_50_common__action__Cmd_Result__Sequence * input,
  wsg_50_common__action__Cmd_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__action__Cmd_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__action__Cmd_Result * data =
      (wsg_50_common__action__Cmd_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__action__Cmd_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__action__Cmd_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__action__Cmd_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
wsg_50_common__action__Cmd_Feedback__init(wsg_50_common__action__Cmd_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // position
  return true;
}

void
wsg_50_common__action__Cmd_Feedback__fini(wsg_50_common__action__Cmd_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // position
}

bool
wsg_50_common__action__Cmd_Feedback__are_equal(const wsg_50_common__action__Cmd_Feedback * lhs, const wsg_50_common__action__Cmd_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
wsg_50_common__action__Cmd_Feedback__copy(
  const wsg_50_common__action__Cmd_Feedback * input,
  wsg_50_common__action__Cmd_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  return true;
}

wsg_50_common__action__Cmd_Feedback *
wsg_50_common__action__Cmd_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Feedback * msg = (wsg_50_common__action__Cmd_Feedback *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__action__Cmd_Feedback));
  bool success = wsg_50_common__action__Cmd_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__action__Cmd_Feedback__destroy(wsg_50_common__action__Cmd_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__action__Cmd_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__action__Cmd_Feedback__Sequence__init(wsg_50_common__action__Cmd_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Feedback * data = NULL;

  if (size) {
    data = (wsg_50_common__action__Cmd_Feedback *)allocator.zero_allocate(size, sizeof(wsg_50_common__action__Cmd_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__action__Cmd_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__action__Cmd_Feedback__fini(&data[i - 1]);
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
wsg_50_common__action__Cmd_Feedback__Sequence__fini(wsg_50_common__action__Cmd_Feedback__Sequence * array)
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
      wsg_50_common__action__Cmd_Feedback__fini(&array->data[i]);
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

wsg_50_common__action__Cmd_Feedback__Sequence *
wsg_50_common__action__Cmd_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_Feedback__Sequence * array = (wsg_50_common__action__Cmd_Feedback__Sequence *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__action__Cmd_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__action__Cmd_Feedback__Sequence__destroy(wsg_50_common__action__Cmd_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__action__Cmd_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__action__Cmd_Feedback__Sequence__are_equal(const wsg_50_common__action__Cmd_Feedback__Sequence * lhs, const wsg_50_common__action__Cmd_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__action__Cmd_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__action__Cmd_Feedback__Sequence__copy(
  const wsg_50_common__action__Cmd_Feedback__Sequence * input,
  wsg_50_common__action__Cmd_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__action__Cmd_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__action__Cmd_Feedback * data =
      (wsg_50_common__action__Cmd_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__action__Cmd_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__action__Cmd_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__action__Cmd_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "wsg_50_common/action/detail/cmd__functions.h"

bool
wsg_50_common__action__Cmd_SendGoal_Request__init(wsg_50_common__action__Cmd_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wsg_50_common__action__Cmd_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!wsg_50_common__action__Cmd_Goal__init(&msg->goal)) {
    wsg_50_common__action__Cmd_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
wsg_50_common__action__Cmd_SendGoal_Request__fini(wsg_50_common__action__Cmd_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  wsg_50_common__action__Cmd_Goal__fini(&msg->goal);
}

bool
wsg_50_common__action__Cmd_SendGoal_Request__are_equal(const wsg_50_common__action__Cmd_SendGoal_Request * lhs, const wsg_50_common__action__Cmd_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!wsg_50_common__action__Cmd_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
wsg_50_common__action__Cmd_SendGoal_Request__copy(
  const wsg_50_common__action__Cmd_SendGoal_Request * input,
  wsg_50_common__action__Cmd_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!wsg_50_common__action__Cmd_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

wsg_50_common__action__Cmd_SendGoal_Request *
wsg_50_common__action__Cmd_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_SendGoal_Request * msg = (wsg_50_common__action__Cmd_SendGoal_Request *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__action__Cmd_SendGoal_Request));
  bool success = wsg_50_common__action__Cmd_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__action__Cmd_SendGoal_Request__destroy(wsg_50_common__action__Cmd_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__action__Cmd_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__init(wsg_50_common__action__Cmd_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_SendGoal_Request * data = NULL;

  if (size) {
    data = (wsg_50_common__action__Cmd_SendGoal_Request *)allocator.zero_allocate(size, sizeof(wsg_50_common__action__Cmd_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__action__Cmd_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__action__Cmd_SendGoal_Request__fini(&data[i - 1]);
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
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__fini(wsg_50_common__action__Cmd_SendGoal_Request__Sequence * array)
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
      wsg_50_common__action__Cmd_SendGoal_Request__fini(&array->data[i]);
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

wsg_50_common__action__Cmd_SendGoal_Request__Sequence *
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_SendGoal_Request__Sequence * array = (wsg_50_common__action__Cmd_SendGoal_Request__Sequence *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__action__Cmd_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__destroy(wsg_50_common__action__Cmd_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__action__Cmd_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__are_equal(const wsg_50_common__action__Cmd_SendGoal_Request__Sequence * lhs, const wsg_50_common__action__Cmd_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__action__Cmd_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__action__Cmd_SendGoal_Request__Sequence__copy(
  const wsg_50_common__action__Cmd_SendGoal_Request__Sequence * input,
  wsg_50_common__action__Cmd_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__action__Cmd_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__action__Cmd_SendGoal_Request * data =
      (wsg_50_common__action__Cmd_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__action__Cmd_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__action__Cmd_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__action__Cmd_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
wsg_50_common__action__Cmd_SendGoal_Response__init(wsg_50_common__action__Cmd_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    wsg_50_common__action__Cmd_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
wsg_50_common__action__Cmd_SendGoal_Response__fini(wsg_50_common__action__Cmd_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
wsg_50_common__action__Cmd_SendGoal_Response__are_equal(const wsg_50_common__action__Cmd_SendGoal_Response * lhs, const wsg_50_common__action__Cmd_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
wsg_50_common__action__Cmd_SendGoal_Response__copy(
  const wsg_50_common__action__Cmd_SendGoal_Response * input,
  wsg_50_common__action__Cmd_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

wsg_50_common__action__Cmd_SendGoal_Response *
wsg_50_common__action__Cmd_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_SendGoal_Response * msg = (wsg_50_common__action__Cmd_SendGoal_Response *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__action__Cmd_SendGoal_Response));
  bool success = wsg_50_common__action__Cmd_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__action__Cmd_SendGoal_Response__destroy(wsg_50_common__action__Cmd_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__action__Cmd_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__init(wsg_50_common__action__Cmd_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_SendGoal_Response * data = NULL;

  if (size) {
    data = (wsg_50_common__action__Cmd_SendGoal_Response *)allocator.zero_allocate(size, sizeof(wsg_50_common__action__Cmd_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__action__Cmd_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__action__Cmd_SendGoal_Response__fini(&data[i - 1]);
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
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__fini(wsg_50_common__action__Cmd_SendGoal_Response__Sequence * array)
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
      wsg_50_common__action__Cmd_SendGoal_Response__fini(&array->data[i]);
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

wsg_50_common__action__Cmd_SendGoal_Response__Sequence *
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_SendGoal_Response__Sequence * array = (wsg_50_common__action__Cmd_SendGoal_Response__Sequence *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__action__Cmd_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__destroy(wsg_50_common__action__Cmd_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__action__Cmd_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__are_equal(const wsg_50_common__action__Cmd_SendGoal_Response__Sequence * lhs, const wsg_50_common__action__Cmd_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__action__Cmd_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__action__Cmd_SendGoal_Response__Sequence__copy(
  const wsg_50_common__action__Cmd_SendGoal_Response__Sequence * input,
  wsg_50_common__action__Cmd_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__action__Cmd_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__action__Cmd_SendGoal_Response * data =
      (wsg_50_common__action__Cmd_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__action__Cmd_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__action__Cmd_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__action__Cmd_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
wsg_50_common__action__Cmd_GetResult_Request__init(wsg_50_common__action__Cmd_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wsg_50_common__action__Cmd_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
wsg_50_common__action__Cmd_GetResult_Request__fini(wsg_50_common__action__Cmd_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
wsg_50_common__action__Cmd_GetResult_Request__are_equal(const wsg_50_common__action__Cmd_GetResult_Request * lhs, const wsg_50_common__action__Cmd_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
wsg_50_common__action__Cmd_GetResult_Request__copy(
  const wsg_50_common__action__Cmd_GetResult_Request * input,
  wsg_50_common__action__Cmd_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

wsg_50_common__action__Cmd_GetResult_Request *
wsg_50_common__action__Cmd_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_GetResult_Request * msg = (wsg_50_common__action__Cmd_GetResult_Request *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__action__Cmd_GetResult_Request));
  bool success = wsg_50_common__action__Cmd_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__action__Cmd_GetResult_Request__destroy(wsg_50_common__action__Cmd_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__action__Cmd_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__action__Cmd_GetResult_Request__Sequence__init(wsg_50_common__action__Cmd_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_GetResult_Request * data = NULL;

  if (size) {
    data = (wsg_50_common__action__Cmd_GetResult_Request *)allocator.zero_allocate(size, sizeof(wsg_50_common__action__Cmd_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__action__Cmd_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__action__Cmd_GetResult_Request__fini(&data[i - 1]);
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
wsg_50_common__action__Cmd_GetResult_Request__Sequence__fini(wsg_50_common__action__Cmd_GetResult_Request__Sequence * array)
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
      wsg_50_common__action__Cmd_GetResult_Request__fini(&array->data[i]);
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

wsg_50_common__action__Cmd_GetResult_Request__Sequence *
wsg_50_common__action__Cmd_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_GetResult_Request__Sequence * array = (wsg_50_common__action__Cmd_GetResult_Request__Sequence *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__action__Cmd_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__action__Cmd_GetResult_Request__Sequence__destroy(wsg_50_common__action__Cmd_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__action__Cmd_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__action__Cmd_GetResult_Request__Sequence__are_equal(const wsg_50_common__action__Cmd_GetResult_Request__Sequence * lhs, const wsg_50_common__action__Cmd_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__action__Cmd_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__action__Cmd_GetResult_Request__Sequence__copy(
  const wsg_50_common__action__Cmd_GetResult_Request__Sequence * input,
  wsg_50_common__action__Cmd_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__action__Cmd_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__action__Cmd_GetResult_Request * data =
      (wsg_50_common__action__Cmd_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__action__Cmd_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__action__Cmd_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__action__Cmd_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "wsg_50_common/action/detail/cmd__functions.h"

bool
wsg_50_common__action__Cmd_GetResult_Response__init(wsg_50_common__action__Cmd_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!wsg_50_common__action__Cmd_Result__init(&msg->result)) {
    wsg_50_common__action__Cmd_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
wsg_50_common__action__Cmd_GetResult_Response__fini(wsg_50_common__action__Cmd_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  wsg_50_common__action__Cmd_Result__fini(&msg->result);
}

bool
wsg_50_common__action__Cmd_GetResult_Response__are_equal(const wsg_50_common__action__Cmd_GetResult_Response * lhs, const wsg_50_common__action__Cmd_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!wsg_50_common__action__Cmd_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
wsg_50_common__action__Cmd_GetResult_Response__copy(
  const wsg_50_common__action__Cmd_GetResult_Response * input,
  wsg_50_common__action__Cmd_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!wsg_50_common__action__Cmd_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

wsg_50_common__action__Cmd_GetResult_Response *
wsg_50_common__action__Cmd_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_GetResult_Response * msg = (wsg_50_common__action__Cmd_GetResult_Response *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__action__Cmd_GetResult_Response));
  bool success = wsg_50_common__action__Cmd_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__action__Cmd_GetResult_Response__destroy(wsg_50_common__action__Cmd_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__action__Cmd_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__action__Cmd_GetResult_Response__Sequence__init(wsg_50_common__action__Cmd_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_GetResult_Response * data = NULL;

  if (size) {
    data = (wsg_50_common__action__Cmd_GetResult_Response *)allocator.zero_allocate(size, sizeof(wsg_50_common__action__Cmd_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__action__Cmd_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__action__Cmd_GetResult_Response__fini(&data[i - 1]);
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
wsg_50_common__action__Cmd_GetResult_Response__Sequence__fini(wsg_50_common__action__Cmd_GetResult_Response__Sequence * array)
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
      wsg_50_common__action__Cmd_GetResult_Response__fini(&array->data[i]);
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

wsg_50_common__action__Cmd_GetResult_Response__Sequence *
wsg_50_common__action__Cmd_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_GetResult_Response__Sequence * array = (wsg_50_common__action__Cmd_GetResult_Response__Sequence *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__action__Cmd_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__action__Cmd_GetResult_Response__Sequence__destroy(wsg_50_common__action__Cmd_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__action__Cmd_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__action__Cmd_GetResult_Response__Sequence__are_equal(const wsg_50_common__action__Cmd_GetResult_Response__Sequence * lhs, const wsg_50_common__action__Cmd_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__action__Cmd_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__action__Cmd_GetResult_Response__Sequence__copy(
  const wsg_50_common__action__Cmd_GetResult_Response__Sequence * input,
  wsg_50_common__action__Cmd_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__action__Cmd_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__action__Cmd_GetResult_Response * data =
      (wsg_50_common__action__Cmd_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__action__Cmd_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__action__Cmd_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__action__Cmd_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "wsg_50_common/action/detail/cmd__functions.h"

bool
wsg_50_common__action__Cmd_FeedbackMessage__init(wsg_50_common__action__Cmd_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wsg_50_common__action__Cmd_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!wsg_50_common__action__Cmd_Feedback__init(&msg->feedback)) {
    wsg_50_common__action__Cmd_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
wsg_50_common__action__Cmd_FeedbackMessage__fini(wsg_50_common__action__Cmd_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  wsg_50_common__action__Cmd_Feedback__fini(&msg->feedback);
}

bool
wsg_50_common__action__Cmd_FeedbackMessage__are_equal(const wsg_50_common__action__Cmd_FeedbackMessage * lhs, const wsg_50_common__action__Cmd_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!wsg_50_common__action__Cmd_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
wsg_50_common__action__Cmd_FeedbackMessage__copy(
  const wsg_50_common__action__Cmd_FeedbackMessage * input,
  wsg_50_common__action__Cmd_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!wsg_50_common__action__Cmd_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

wsg_50_common__action__Cmd_FeedbackMessage *
wsg_50_common__action__Cmd_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_FeedbackMessage * msg = (wsg_50_common__action__Cmd_FeedbackMessage *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__action__Cmd_FeedbackMessage));
  bool success = wsg_50_common__action__Cmd_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__action__Cmd_FeedbackMessage__destroy(wsg_50_common__action__Cmd_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__action__Cmd_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__init(wsg_50_common__action__Cmd_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_FeedbackMessage * data = NULL;

  if (size) {
    data = (wsg_50_common__action__Cmd_FeedbackMessage *)allocator.zero_allocate(size, sizeof(wsg_50_common__action__Cmd_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__action__Cmd_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__action__Cmd_FeedbackMessage__fini(&data[i - 1]);
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
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__fini(wsg_50_common__action__Cmd_FeedbackMessage__Sequence * array)
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
      wsg_50_common__action__Cmd_FeedbackMessage__fini(&array->data[i]);
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

wsg_50_common__action__Cmd_FeedbackMessage__Sequence *
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__action__Cmd_FeedbackMessage__Sequence * array = (wsg_50_common__action__Cmd_FeedbackMessage__Sequence *)allocator.allocate(sizeof(wsg_50_common__action__Cmd_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__action__Cmd_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__destroy(wsg_50_common__action__Cmd_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__action__Cmd_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__are_equal(const wsg_50_common__action__Cmd_FeedbackMessage__Sequence * lhs, const wsg_50_common__action__Cmd_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__action__Cmd_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__action__Cmd_FeedbackMessage__Sequence__copy(
  const wsg_50_common__action__Cmd_FeedbackMessage__Sequence * input,
  wsg_50_common__action__Cmd_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__action__Cmd_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__action__Cmd_FeedbackMessage * data =
      (wsg_50_common__action__Cmd_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__action__Cmd_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__action__Cmd_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__action__Cmd_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
