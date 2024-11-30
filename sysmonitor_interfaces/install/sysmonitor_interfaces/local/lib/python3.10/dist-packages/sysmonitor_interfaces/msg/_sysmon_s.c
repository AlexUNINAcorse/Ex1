// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "sysmonitor_interfaces/msg/detail/sysmon__struct.h"
#include "sysmonitor_interfaces/msg/detail/sysmon__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sysmonitor_interfaces__msg__sysmon__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("sysmonitor_interfaces.msg._sysmon.Sysmon", full_classname_dest, 40) == 0);
  }
  sysmonitor_interfaces__msg__Sysmon * ros_message = _ros_message;
  {  // cpu_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_temp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ram_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "ram_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ram_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gpu_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "gpu_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gpu_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gpu_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "gpu_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gpu_temp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gpuram_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "gpuram_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gpuram_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sysmonitor_interfaces__msg__sysmon__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Sysmon */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sysmonitor_interfaces.msg._sysmon");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Sysmon");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sysmonitor_interfaces__msg__Sysmon * ros_message = (sysmonitor_interfaces__msg__Sysmon *)raw_ros_message;
  {  // cpu_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ram_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ram_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ram_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gpu_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gpu_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gpu_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gpu_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gpu_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gpu_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gpuram_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gpuram_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gpuram_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
