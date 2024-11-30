// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice

#ifndef SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__FUNCTIONS_H_
#define SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sysmonitor_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sysmonitor_interfaces/msg/detail/sysmon__struct.h"

/// Initialize msg/Sysmon message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sysmonitor_interfaces__msg__Sysmon
 * )) before or use
 * sysmonitor_interfaces__msg__Sysmon__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
bool
sysmonitor_interfaces__msg__Sysmon__init(sysmonitor_interfaces__msg__Sysmon * msg);

/// Finalize msg/Sysmon message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
void
sysmonitor_interfaces__msg__Sysmon__fini(sysmonitor_interfaces__msg__Sysmon * msg);

/// Create msg/Sysmon message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sysmonitor_interfaces__msg__Sysmon__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
sysmonitor_interfaces__msg__Sysmon *
sysmonitor_interfaces__msg__Sysmon__create();

/// Destroy msg/Sysmon message.
/**
 * It calls
 * sysmonitor_interfaces__msg__Sysmon__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
void
sysmonitor_interfaces__msg__Sysmon__destroy(sysmonitor_interfaces__msg__Sysmon * msg);

/// Check for msg/Sysmon message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
bool
sysmonitor_interfaces__msg__Sysmon__are_equal(const sysmonitor_interfaces__msg__Sysmon * lhs, const sysmonitor_interfaces__msg__Sysmon * rhs);

/// Copy a msg/Sysmon message.
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
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
bool
sysmonitor_interfaces__msg__Sysmon__copy(
  const sysmonitor_interfaces__msg__Sysmon * input,
  sysmonitor_interfaces__msg__Sysmon * output);

/// Initialize array of msg/Sysmon messages.
/**
 * It allocates the memory for the number of elements and calls
 * sysmonitor_interfaces__msg__Sysmon__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
bool
sysmonitor_interfaces__msg__Sysmon__Sequence__init(sysmonitor_interfaces__msg__Sysmon__Sequence * array, size_t size);

/// Finalize array of msg/Sysmon messages.
/**
 * It calls
 * sysmonitor_interfaces__msg__Sysmon__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
void
sysmonitor_interfaces__msg__Sysmon__Sequence__fini(sysmonitor_interfaces__msg__Sysmon__Sequence * array);

/// Create array of msg/Sysmon messages.
/**
 * It allocates the memory for the array and calls
 * sysmonitor_interfaces__msg__Sysmon__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
sysmonitor_interfaces__msg__Sysmon__Sequence *
sysmonitor_interfaces__msg__Sysmon__Sequence__create(size_t size);

/// Destroy array of msg/Sysmon messages.
/**
 * It calls
 * sysmonitor_interfaces__msg__Sysmon__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
void
sysmonitor_interfaces__msg__Sysmon__Sequence__destroy(sysmonitor_interfaces__msg__Sysmon__Sequence * array);

/// Check for msg/Sysmon message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
bool
sysmonitor_interfaces__msg__Sysmon__Sequence__are_equal(const sysmonitor_interfaces__msg__Sysmon__Sequence * lhs, const sysmonitor_interfaces__msg__Sysmon__Sequence * rhs);

/// Copy an array of msg/Sysmon messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sysmonitor_interfaces
bool
sysmonitor_interfaces__msg__Sysmon__Sequence__copy(
  const sysmonitor_interfaces__msg__Sysmon__Sequence * input,
  sysmonitor_interfaces__msg__Sysmon__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__FUNCTIONS_H_
