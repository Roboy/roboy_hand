# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from roboy_middleware_msgs/DanceCommand.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class DanceCommand(genpy.Message):
  _md5sum = "72a157af84f4f4cbc154d8d824d39082"
  _type = "roboy_middleware_msgs/DanceCommand"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 sensor_id
geometry_msgs/Vector3 pos
================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['sensor_id','pos']
  _slot_types = ['int32','geometry_msgs/Vector3']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sensor_id,pos

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DanceCommand, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.sensor_id is None:
        self.sensor_id = 0
      if self.pos is None:
        self.pos = geometry_msgs.msg.Vector3()
    else:
      self.sensor_id = 0
      self.pos = geometry_msgs.msg.Vector3()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_i3d().pack(_x.sensor_id, _x.pos.x, _x.pos.y, _x.pos.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pos is None:
        self.pos = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.sensor_id, _x.pos.x, _x.pos.y, _x.pos.z,) = _get_struct_i3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_i3d().pack(_x.sensor_id, _x.pos.x, _x.pos.y, _x.pos.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pos is None:
        self.pos = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.sensor_id, _x.pos.x, _x.pos.y, _x.pos.z,) = _get_struct_i3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i3d = None
def _get_struct_i3d():
    global _struct_i3d
    if _struct_i3d is None:
        _struct_i3d = struct.Struct("<i3d")
    return _struct_i3d
