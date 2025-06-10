// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wsg_50_common:srv/Conf.idl
// generated code does not contain a copyright notice
#include "wsg_50_common/srv/detail/conf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
wsg_50_common__srv__Conf_Request__init(wsg_50_common__srv__Conf_Request * msg)
{
  if (!msg) {
    return false;
  }
  // val
  return true;
}

void
wsg_50_common__srv__Conf_Request__fini(wsg_50_common__srv__Conf_Request * msg)
{
  if (!msg) {
    return;
  }
  // val
}

bool
wsg_50_common__srv__Conf_Request__are_equal(const wsg_50_common__srv__Conf_Request * lhs, const wsg_50_common__srv__Conf_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // val
  if (lhs->val != rhs->val) {
    return false;
  }
  return true;
}

bool
wsg_50_common__srv__Conf_Request__copy(
  const wsg_50_common__srv__Conf_Request * input,
  wsg_50_common__srv__Conf_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // val
  output->val = input->val;
  return true;
}

wsg_50_common__srv__Conf_Request *
wsg_50_common__srv__Conf_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__srv__Conf_Request * msg = (wsg_50_common__srv__Conf_Request *)allocator.allocate(sizeof(wsg_50_common__srv__Conf_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__srv__Conf_Request));
  bool success = wsg_50_common__srv__Conf_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__srv__Conf_Request__destroy(wsg_50_common__srv__Conf_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__srv__Conf_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__srv__Conf_Request__Sequence__init(wsg_50_common__srv__Conf_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__srv__Conf_Request * data = NULL;

  if (size) {
    data = (wsg_50_common__srv__Conf_Request *)allocator.zero_allocate(size, sizeof(wsg_50_common__srv__Conf_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__srv__Conf_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__srv__Conf_Request__fini(&data[i - 1]);
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
wsg_50_common__srv__Conf_Request__Sequence__fini(wsg_50_common__srv__Conf_Request__Sequence * array)
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
      wsg_50_common__srv__Conf_Request__fini(&array->data[i]);
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

wsg_50_common__srv__Conf_Request__Sequence *
wsg_50_common__srv__Conf_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__srv__Conf_Request__Sequence * array = (wsg_50_common__srv__Conf_Request__Sequence *)allocator.allocate(sizeof(wsg_50_common__srv__Conf_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__srv__Conf_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__srv__Conf_Request__Sequence__destroy(wsg_50_common__srv__Conf_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__srv__Conf_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__srv__Conf_Request__Sequence__are_equal(const wsg_50_common__srv__Conf_Request__Sequence * lhs, const wsg_50_common__srv__Conf_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__srv__Conf_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__srv__Conf_Request__Sequence__copy(
  const wsg_50_common__srv__Conf_Request__Sequence * input,
  wsg_50_common__srv__Conf_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__srv__Conf_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__srv__Conf_Request * data =
      (wsg_50_common__srv__Conf_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__srv__Conf_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__srv__Conf_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__srv__Conf_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
wsg_50_common__srv__Conf_Response__init(wsg_50_common__srv__Conf_Response * msg)
{
  if (!msg) {
    return false;
  }
  // error
  return true;
}

void
wsg_50_common__srv__Conf_Response__fini(wsg_50_common__srv__Conf_Response * msg)
{
  if (!msg) {
    return;
  }
  // error
}

bool
wsg_50_common__srv__Conf_Response__are_equal(const wsg_50_common__srv__Conf_Response * lhs, const wsg_50_common__srv__Conf_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  return true;
}

bool
wsg_50_common__srv__Conf_Response__copy(
  const wsg_50_common__srv__Conf_Response * input,
  wsg_50_common__srv__Conf_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  output->error = input->error;
  return true;
}

wsg_50_common__srv__Conf_Response *
wsg_50_common__srv__Conf_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__srv__Conf_Response * msg = (wsg_50_common__srv__Conf_Response *)allocator.allocate(sizeof(wsg_50_common__srv__Conf_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wsg_50_common__srv__Conf_Response));
  bool success = wsg_50_common__srv__Conf_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wsg_50_common__srv__Conf_Response__destroy(wsg_50_common__srv__Conf_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wsg_50_common__srv__Conf_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wsg_50_common__srv__Conf_Response__Sequence__init(wsg_50_common__srv__Conf_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__srv__Conf_Response * data = NULL;

  if (size) {
    data = (wsg_50_common__srv__Conf_Response *)allocator.zero_allocate(size, sizeof(wsg_50_common__srv__Conf_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wsg_50_common__srv__Conf_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wsg_50_common__srv__Conf_Response__fini(&data[i - 1]);
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
wsg_50_common__srv__Conf_Response__Sequence__fini(wsg_50_common__srv__Conf_Response__Sequence * array)
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
      wsg_50_common__srv__Conf_Response__fini(&array->data[i]);
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

wsg_50_common__srv__Conf_Response__Sequence *
wsg_50_common__srv__Conf_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wsg_50_common__srv__Conf_Response__Sequence * array = (wsg_50_common__srv__Conf_Response__Sequence *)allocator.allocate(sizeof(wsg_50_common__srv__Conf_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wsg_50_common__srv__Conf_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wsg_50_common__srv__Conf_Response__Sequence__destroy(wsg_50_common__srv__Conf_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wsg_50_common__srv__Conf_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wsg_50_common__srv__Conf_Response__Sequence__are_equal(const wsg_50_common__srv__Conf_Response__Sequence * lhs, const wsg_50_common__srv__Conf_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wsg_50_common__srv__Conf_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wsg_50_common__srv__Conf_Response__Sequence__copy(
  const wsg_50_common__srv__Conf_Response__Sequence * input,
  wsg_50_common__srv__Conf_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wsg_50_common__srv__Conf_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wsg_50_common__srv__Conf_Response * data =
      (wsg_50_common__srv__Conf_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wsg_50_common__srv__Conf_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wsg_50_common__srv__Conf_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wsg_50_common__srv__Conf_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
