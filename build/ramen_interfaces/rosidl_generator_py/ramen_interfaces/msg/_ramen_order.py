# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ramen_interfaces:msg/RamenOrder.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RamenOrder(type):
    """Metaclass of message 'RamenOrder'."""

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
            module = import_type_support('ramen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ramen_interfaces.msg.RamenOrder')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ramen_order
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ramen_order
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ramen_order
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ramen_order
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ramen_order

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RamenOrder(metaclass=Metaclass_RamenOrder):
    """Message class 'RamenOrder'."""

    __slots__ = [
        '_table_number',
        '_ramen_type',
        '_toppings',
        '_sides',
    ]

    _fields_and_field_types = {
        'table_number': 'uint8',
        'ramen_type': 'string',
        'toppings': 'sequence<string>',
        'sides': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.table_number = kwargs.get('table_number', int())
        self.ramen_type = kwargs.get('ramen_type', str())
        self.toppings = kwargs.get('toppings', [])
        self.sides = kwargs.get('sides', [])

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
        if self.table_number != other.table_number:
            return False
        if self.ramen_type != other.ramen_type:
            return False
        if self.toppings != other.toppings:
            return False
        if self.sides != other.sides:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def table_number(self):
        """Message field 'table_number'."""
        return self._table_number

    @table_number.setter
    def table_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'table_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'table_number' field must be an unsigned integer in [0, 255]"
        self._table_number = value

    @builtins.property
    def ramen_type(self):
        """Message field 'ramen_type'."""
        return self._ramen_type

    @ramen_type.setter
    def ramen_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ramen_type' field must be of type 'str'"
        self._ramen_type = value

    @builtins.property
    def toppings(self):
        """Message field 'toppings'."""
        return self._toppings

    @toppings.setter
    def toppings(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'toppings' field must be a set or sequence and each value of type 'str'"
        self._toppings = value

    @builtins.property
    def sides(self):
        """Message field 'sides'."""
        return self._sides

    @sides.setter
    def sides(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'sides' field must be a set or sequence and each value of type 'str'"
        self._sides = value
