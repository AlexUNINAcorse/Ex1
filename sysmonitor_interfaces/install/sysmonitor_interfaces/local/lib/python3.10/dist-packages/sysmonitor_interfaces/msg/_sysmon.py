# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sysmonitor_interfaces:msg/Sysmon.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Sysmon(type):
    """Metaclass of message 'Sysmon'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sysmonitor_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sysmonitor_interfaces.msg.Sysmon')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sysmon
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sysmon
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sysmon
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sysmon
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sysmon

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Sysmon(metaclass=Metaclass_Sysmon):
    """Message class 'Sysmon'."""

    __slots__ = [
        '_cpu_usage',
        '_cpu_temp',
        '_ram_usage',
        '_gpu_usage',
        '_gpu_temp',
        '_gpuram_usage',
    ]

    _fields_and_field_types = {
        'cpu_usage': 'double',
        'cpu_temp': 'double',
        'ram_usage': 'double',
        'gpu_usage': 'double',
        'gpu_temp': 'double',
        'gpuram_usage': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cpu_usage = kwargs.get('cpu_usage', float())
        self.cpu_temp = kwargs.get('cpu_temp', float())
        self.ram_usage = kwargs.get('ram_usage', float())
        self.gpu_usage = kwargs.get('gpu_usage', float())
        self.gpu_temp = kwargs.get('gpu_temp', float())
        self.gpuram_usage = kwargs.get('gpuram_usage', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.cpu_usage != other.cpu_usage:
            return False
        if self.cpu_temp != other.cpu_temp:
            return False
        if self.ram_usage != other.ram_usage:
            return False
        if self.gpu_usage != other.gpu_usage:
            return False
        if self.gpu_temp != other.gpu_temp:
            return False
        if self.gpuram_usage != other.gpuram_usage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cpu_usage(self):
        """Message field 'cpu_usage'."""
        return self._cpu_usage

    @cpu_usage.setter
    def cpu_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cpu_usage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cpu_usage = value

    @builtins.property
    def cpu_temp(self):
        """Message field 'cpu_temp'."""
        return self._cpu_temp

    @cpu_temp.setter
    def cpu_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_temp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cpu_temp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cpu_temp = value

    @builtins.property
    def ram_usage(self):
        """Message field 'ram_usage'."""
        return self._ram_usage

    @ram_usage.setter
    def ram_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ram_usage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ram_usage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ram_usage = value

    @builtins.property
    def gpu_usage(self):
        """Message field 'gpu_usage'."""
        return self._gpu_usage

    @gpu_usage.setter
    def gpu_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gpu_usage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gpu_usage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gpu_usage = value

    @builtins.property
    def gpu_temp(self):
        """Message field 'gpu_temp'."""
        return self._gpu_temp

    @gpu_temp.setter
    def gpu_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gpu_temp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gpu_temp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gpu_temp = value

    @builtins.property
    def gpuram_usage(self):
        """Message field 'gpuram_usage'."""
        return self._gpuram_usage

    @gpuram_usage.setter
    def gpuram_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gpuram_usage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gpuram_usage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gpuram_usage = value
