# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ramen_interfaces:action/RequestRemake.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RequestRemake_Goal(type):
    """Metaclass of message 'RequestRemake_Goal'."""

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
                'ramen_interfaces.action.RequestRemake_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__request_remake__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__request_remake__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__request_remake__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__request_remake__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__request_remake__goal

            from ramen_interfaces.msg import CookedRamen
            if CookedRamen.__class__._TYPE_SUPPORT is None:
                CookedRamen.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestRemake_Goal(metaclass=Metaclass_RequestRemake_Goal):
    """Message class 'RequestRemake_Goal'."""

    __slots__ = [
        '_bad_food',
    ]

    _fields_and_field_types = {
        'bad_food': 'ramen_interfaces/CookedRamen',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ramen_interfaces', 'msg'], 'CookedRamen'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ramen_interfaces.msg import CookedRamen
        self.bad_food = kwargs.get('bad_food', CookedRamen())

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
        if self.bad_food != other.bad_food:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bad_food(self):
        """Message field 'bad_food'."""
        return self._bad_food

    @bad_food.setter
    def bad_food(self, value):
        if __debug__:
            from ramen_interfaces.msg import CookedRamen
            assert \
                isinstance(value, CookedRamen), \
                "The 'bad_food' field must be a sub message of type 'CookedRamen'"
        self._bad_food = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestRemake_Result(type):
    """Metaclass of message 'RequestRemake_Result'."""

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
                'ramen_interfaces.action.RequestRemake_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__request_remake__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__request_remake__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__request_remake__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__request_remake__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__request_remake__result

            from ramen_interfaces.msg import CookedRamen
            if CookedRamen.__class__._TYPE_SUPPORT is None:
                CookedRamen.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestRemake_Result(metaclass=Metaclass_RequestRemake_Result):
    """Message class 'RequestRemake_Result'."""

    __slots__ = [
        '_new_food',
    ]

    _fields_and_field_types = {
        'new_food': 'ramen_interfaces/CookedRamen',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ramen_interfaces', 'msg'], 'CookedRamen'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ramen_interfaces.msg import CookedRamen
        self.new_food = kwargs.get('new_food', CookedRamen())

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
        if self.new_food != other.new_food:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def new_food(self):
        """Message field 'new_food'."""
        return self._new_food

    @new_food.setter
    def new_food(self, value):
        if __debug__:
            from ramen_interfaces.msg import CookedRamen
            assert \
                isinstance(value, CookedRamen), \
                "The 'new_food' field must be a sub message of type 'CookedRamen'"
        self._new_food = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestRemake_Feedback(type):
    """Metaclass of message 'RequestRemake_Feedback'."""

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
                'ramen_interfaces.action.RequestRemake_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__request_remake__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__request_remake__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__request_remake__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__request_remake__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__request_remake__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestRemake_Feedback(metaclass=Metaclass_RequestRemake_Feedback):
    """Message class 'RequestRemake_Feedback'."""

    __slots__ = [
        '_progress',
    ]

    _fields_and_field_types = {
        'progress': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.progress = kwargs.get('progress', str())

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
        if self.progress != other.progress:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def progress(self):
        """Message field 'progress'."""
        return self._progress

    @progress.setter
    def progress(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'progress' field must be of type 'str'"
        self._progress = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestRemake_SendGoal_Request(type):
    """Metaclass of message 'RequestRemake_SendGoal_Request'."""

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
                'ramen_interfaces.action.RequestRemake_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__request_remake__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__request_remake__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__request_remake__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__request_remake__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__request_remake__send_goal__request

            from ramen_interfaces.action import RequestRemake
            if RequestRemake.Goal.__class__._TYPE_SUPPORT is None:
                RequestRemake.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestRemake_SendGoal_Request(metaclass=Metaclass_RequestRemake_SendGoal_Request):
    """Message class 'RequestRemake_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'ramen_interfaces/RequestRemake_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ramen_interfaces', 'action'], 'RequestRemake_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ramen_interfaces.action._request_remake import RequestRemake_Goal
        self.goal = kwargs.get('goal', RequestRemake_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from ramen_interfaces.action._request_remake import RequestRemake_Goal
            assert \
                isinstance(value, RequestRemake_Goal), \
                "The 'goal' field must be a sub message of type 'RequestRemake_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestRemake_SendGoal_Response(type):
    """Metaclass of message 'RequestRemake_SendGoal_Response'."""

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
                'ramen_interfaces.action.RequestRemake_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__request_remake__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__request_remake__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__request_remake__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__request_remake__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__request_remake__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestRemake_SendGoal_Response(metaclass=Metaclass_RequestRemake_SendGoal_Response):
    """Message class 'RequestRemake_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_RequestRemake_SendGoal(type):
    """Metaclass of service 'RequestRemake_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ramen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ramen_interfaces.action.RequestRemake_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__request_remake__send_goal

            from ramen_interfaces.action import _request_remake
            if _request_remake.Metaclass_RequestRemake_SendGoal_Request._TYPE_SUPPORT is None:
                _request_remake.Metaclass_RequestRemake_SendGoal_Request.__import_type_support__()
            if _request_remake.Metaclass_RequestRemake_SendGoal_Response._TYPE_SUPPORT is None:
                _request_remake.Metaclass_RequestRemake_SendGoal_Response.__import_type_support__()


class RequestRemake_SendGoal(metaclass=Metaclass_RequestRemake_SendGoal):
    from ramen_interfaces.action._request_remake import RequestRemake_SendGoal_Request as Request
    from ramen_interfaces.action._request_remake import RequestRemake_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestRemake_GetResult_Request(type):
    """Metaclass of message 'RequestRemake_GetResult_Request'."""

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
                'ramen_interfaces.action.RequestRemake_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__request_remake__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__request_remake__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__request_remake__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__request_remake__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__request_remake__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestRemake_GetResult_Request(metaclass=Metaclass_RequestRemake_GetResult_Request):
    """Message class 'RequestRemake_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestRemake_GetResult_Response(type):
    """Metaclass of message 'RequestRemake_GetResult_Response'."""

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
                'ramen_interfaces.action.RequestRemake_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__request_remake__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__request_remake__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__request_remake__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__request_remake__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__request_remake__get_result__response

            from ramen_interfaces.action import RequestRemake
            if RequestRemake.Result.__class__._TYPE_SUPPORT is None:
                RequestRemake.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestRemake_GetResult_Response(metaclass=Metaclass_RequestRemake_GetResult_Response):
    """Message class 'RequestRemake_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'ramen_interfaces/RequestRemake_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ramen_interfaces', 'action'], 'RequestRemake_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from ramen_interfaces.action._request_remake import RequestRemake_Result
        self.result = kwargs.get('result', RequestRemake_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from ramen_interfaces.action._request_remake import RequestRemake_Result
            assert \
                isinstance(value, RequestRemake_Result), \
                "The 'result' field must be a sub message of type 'RequestRemake_Result'"
        self._result = value


class Metaclass_RequestRemake_GetResult(type):
    """Metaclass of service 'RequestRemake_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ramen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ramen_interfaces.action.RequestRemake_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__request_remake__get_result

            from ramen_interfaces.action import _request_remake
            if _request_remake.Metaclass_RequestRemake_GetResult_Request._TYPE_SUPPORT is None:
                _request_remake.Metaclass_RequestRemake_GetResult_Request.__import_type_support__()
            if _request_remake.Metaclass_RequestRemake_GetResult_Response._TYPE_SUPPORT is None:
                _request_remake.Metaclass_RequestRemake_GetResult_Response.__import_type_support__()


class RequestRemake_GetResult(metaclass=Metaclass_RequestRemake_GetResult):
    from ramen_interfaces.action._request_remake import RequestRemake_GetResult_Request as Request
    from ramen_interfaces.action._request_remake import RequestRemake_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestRemake_FeedbackMessage(type):
    """Metaclass of message 'RequestRemake_FeedbackMessage'."""

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
                'ramen_interfaces.action.RequestRemake_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__request_remake__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__request_remake__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__request_remake__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__request_remake__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__request_remake__feedback_message

            from ramen_interfaces.action import RequestRemake
            if RequestRemake.Feedback.__class__._TYPE_SUPPORT is None:
                RequestRemake.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestRemake_FeedbackMessage(metaclass=Metaclass_RequestRemake_FeedbackMessage):
    """Message class 'RequestRemake_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'ramen_interfaces/RequestRemake_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ramen_interfaces', 'action'], 'RequestRemake_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ramen_interfaces.action._request_remake import RequestRemake_Feedback
        self.feedback = kwargs.get('feedback', RequestRemake_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from ramen_interfaces.action._request_remake import RequestRemake_Feedback
            assert \
                isinstance(value, RequestRemake_Feedback), \
                "The 'feedback' field must be a sub message of type 'RequestRemake_Feedback'"
        self._feedback = value


class Metaclass_RequestRemake(type):
    """Metaclass of action 'RequestRemake'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ramen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ramen_interfaces.action.RequestRemake')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__request_remake

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from ramen_interfaces.action import _request_remake
            if _request_remake.Metaclass_RequestRemake_SendGoal._TYPE_SUPPORT is None:
                _request_remake.Metaclass_RequestRemake_SendGoal.__import_type_support__()
            if _request_remake.Metaclass_RequestRemake_GetResult._TYPE_SUPPORT is None:
                _request_remake.Metaclass_RequestRemake_GetResult.__import_type_support__()
            if _request_remake.Metaclass_RequestRemake_FeedbackMessage._TYPE_SUPPORT is None:
                _request_remake.Metaclass_RequestRemake_FeedbackMessage.__import_type_support__()


class RequestRemake(metaclass=Metaclass_RequestRemake):

    # The goal message defined in the action definition.
    from ramen_interfaces.action._request_remake import RequestRemake_Goal as Goal
    # The result message defined in the action definition.
    from ramen_interfaces.action._request_remake import RequestRemake_Result as Result
    # The feedback message defined in the action definition.
    from ramen_interfaces.action._request_remake import RequestRemake_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from ramen_interfaces.action._request_remake import RequestRemake_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from ramen_interfaces.action._request_remake import RequestRemake_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from ramen_interfaces.action._request_remake import RequestRemake_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
