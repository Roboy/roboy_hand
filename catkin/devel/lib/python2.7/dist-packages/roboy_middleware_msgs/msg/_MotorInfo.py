# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from roboy_middleware_msgs/MotorInfo.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MotorInfo(genpy.Message):
  _md5sum = "efed6a40bd0150d07743fdfc5f7f955c"
  _type = "roboy_middleware_msgs/MotorInfo"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32[] setpoint
uint8[] control_mode
int32[] Kp
int32[] Ki
int32[] Kd
int32[] deadband
int32[] IntegralLimit
int32[] PWMLimit
int32[] pwm
int32[] communication_quality
int32[] error_code
int32[] gearBoxRatio"""
  __slots__ = ['setpoint','control_mode','Kp','Ki','Kd','deadband','IntegralLimit','PWMLimit','pwm','communication_quality','error_code','gearBoxRatio']
  _slot_types = ['int32[]','uint8[]','int32[]','int32[]','int32[]','int32[]','int32[]','int32[]','int32[]','int32[]','int32[]','int32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       setpoint,control_mode,Kp,Ki,Kd,deadband,IntegralLimit,PWMLimit,pwm,communication_quality,error_code,gearBoxRatio

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MotorInfo, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.setpoint is None:
        self.setpoint = []
      if self.control_mode is None:
        self.control_mode = b''
      if self.Kp is None:
        self.Kp = []
      if self.Ki is None:
        self.Ki = []
      if self.Kd is None:
        self.Kd = []
      if self.deadband is None:
        self.deadband = []
      if self.IntegralLimit is None:
        self.IntegralLimit = []
      if self.PWMLimit is None:
        self.PWMLimit = []
      if self.pwm is None:
        self.pwm = []
      if self.communication_quality is None:
        self.communication_quality = []
      if self.error_code is None:
        self.error_code = []
      if self.gearBoxRatio is None:
        self.gearBoxRatio = []
    else:
      self.setpoint = []
      self.control_mode = b''
      self.Kp = []
      self.Ki = []
      self.Kd = []
      self.deadband = []
      self.IntegralLimit = []
      self.PWMLimit = []
      self.pwm = []
      self.communication_quality = []
      self.error_code = []
      self.gearBoxRatio = []

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
      length = len(self.setpoint)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.setpoint))
      _x = self.control_mode
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.Kp)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.Kp))
      length = len(self.Ki)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.Ki))
      length = len(self.Kd)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.Kd))
      length = len(self.deadband)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.deadband))
      length = len(self.IntegralLimit)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.IntegralLimit))
      length = len(self.PWMLimit)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.PWMLimit))
      length = len(self.pwm)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.pwm))
      length = len(self.communication_quality)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.communication_quality))
      length = len(self.error_code)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.error_code))
      length = len(self.gearBoxRatio)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.gearBoxRatio))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.setpoint = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.control_mode = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.Kp = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.Ki = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.Kd = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.deadband = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.IntegralLimit = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.PWMLimit = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.pwm = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.communication_quality = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.error_code = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.gearBoxRatio = struct.unpack(pattern, str[start:end])
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
      length = len(self.setpoint)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.setpoint.tostring())
      _x = self.control_mode
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.Kp)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.Kp.tostring())
      length = len(self.Ki)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.Ki.tostring())
      length = len(self.Kd)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.Kd.tostring())
      length = len(self.deadband)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.deadband.tostring())
      length = len(self.IntegralLimit)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.IntegralLimit.tostring())
      length = len(self.PWMLimit)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.PWMLimit.tostring())
      length = len(self.pwm)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.pwm.tostring())
      length = len(self.communication_quality)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.communication_quality.tostring())
      length = len(self.error_code)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.error_code.tostring())
      length = len(self.gearBoxRatio)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.gearBoxRatio.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.setpoint = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.control_mode = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.Kp = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.Ki = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.Kd = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.deadband = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.IntegralLimit = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.PWMLimit = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.pwm = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.communication_quality = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.error_code = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.gearBoxRatio = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
