// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice
#include "sysmonitor_interfaces/msg/detail/sysmon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sysmonitor_interfaces__msg__Sysmon__init(sysmonitor_interfaces__msg__Sysmon * msg)
{
  if (!msg) {
    return false;
  }
  // cpu_usage
  // cpu_temp
  // ram_usage
  // gpu_usage
  // gpu_temp
  // gpuram_usage
  return true;
}

void
sysmonitor_interfaces__msg__Sysmon__fini(sysmonitor_interfaces__msg__Sysmon * msg)
{
  if (!msg) {
    return;
  }
  // cpu_usage
  // cpu_temp
  // ram_usage
  // gpu_usage
  // gpu_temp
  // gpuram_usage
}

bool
sysmonitor_interfaces__msg__Sysmon__are_equal(const sysmonitor_interfaces__msg__Sysmon * lhs, const sysmonitor_interfaces__msg__Sysmon * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cpu_usage
  if (lhs->cpu_usage != rhs->cpu_usage) {
    return false;
  }
  // cpu_temp
  if (lhs->cpu_temp != rhs->cpu_temp) {
    return false;
  }
  // ram_usage
  if (lhs->ram_usage != rhs->ram_usage) {
    return false;
  }
  // gpu_usage
  if (lhs->gpu_usage != rhs->gpu_usage) {
    return false;
  }
  // gpu_temp
  if (lhs->gpu_temp != rhs->gpu_temp) {
    return false;
  }
  // gpuram_usage
  if (lhs->gpuram_usage != rhs->gpuram_usage) {
    return false;
  }
  return true;
}

bool
sysmonitor_interfaces__msg__Sysmon__copy(
  const sysmonitor_interfaces__msg__Sysmon * input,
  sysmonitor_interfaces__msg__Sysmon * output)
{
  if (!input || !output) {
    return false;
  }
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // cpu_temp
  output->cpu_temp = input->cpu_temp;
  // ram_usage
  output->ram_usage = input->ram_usage;
  // gpu_usage
  output->gpu_usage = input->gpu_usage;
  // gpu_temp
  output->gpu_temp = input->gpu_temp;
  // gpuram_usage
  output->gpuram_usage = input->gpuram_usage;
  return true;
}

sysmonitor_interfaces__msg__Sysmon *
sysmonitor_interfaces__msg__Sysmon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sysmonitor_interfaces__msg__Sysmon * msg = (sysmonitor_interfaces__msg__Sysmon *)allocator.allocate(sizeof(sysmonitor_interfaces__msg__Sysmon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sysmonitor_interfaces__msg__Sysmon));
  bool success = sysmonitor_interfaces__msg__Sysmon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sysmonitor_interfaces__msg__Sysmon__destroy(sysmonitor_interfaces__msg__Sysmon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sysmonitor_interfaces__msg__Sysmon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sysmonitor_interfaces__msg__Sysmon__Sequence__init(sysmonitor_interfaces__msg__Sysmon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sysmonitor_interfaces__msg__Sysmon * data = NULL;

  if (size) {
    data = (sysmonitor_interfaces__msg__Sysmon *)allocator.zero_allocate(size, sizeof(sysmonitor_interfaces__msg__Sysmon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sysmonitor_interfaces__msg__Sysmon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sysmonitor_interfaces__msg__Sysmon__fini(&data[i - 1]);
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
sysmonitor_interfaces__msg__Sysmon__Sequence__fini(sysmonitor_interfaces__msg__Sysmon__Sequence * array)
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
      sysmonitor_interfaces__msg__Sysmon__fini(&array->data[i]);
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

sysmonitor_interfaces__msg__Sysmon__Sequence *
sysmonitor_interfaces__msg__Sysmon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sysmonitor_interfaces__msg__Sysmon__Sequence * array = (sysmonitor_interfaces__msg__Sysmon__Sequence *)allocator.allocate(sizeof(sysmonitor_interfaces__msg__Sysmon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sysmonitor_interfaces__msg__Sysmon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sysmonitor_interfaces__msg__Sysmon__Sequence__destroy(sysmonitor_interfaces__msg__Sysmon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sysmonitor_interfaces__msg__Sysmon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sysmonitor_interfaces__msg__Sysmon__Sequence__are_equal(const sysmonitor_interfaces__msg__Sysmon__Sequence * lhs, const sysmonitor_interfaces__msg__Sysmon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sysmonitor_interfaces__msg__Sysmon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sysmonitor_interfaces__msg__Sysmon__Sequence__copy(
  const sysmonitor_interfaces__msg__Sysmon__Sequence * input,
  sysmonitor_interfaces__msg__Sysmon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sysmonitor_interfaces__msg__Sysmon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sysmonitor_interfaces__msg__Sysmon * data =
      (sysmonitor_interfaces__msg__Sysmon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sysmonitor_interfaces__msg__Sysmon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sysmonitor_interfaces__msg__Sysmon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sysmonitor_interfaces__msg__Sysmon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
