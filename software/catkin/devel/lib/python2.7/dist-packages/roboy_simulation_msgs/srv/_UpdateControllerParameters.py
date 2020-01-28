# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from roboy_simulation_msgs/UpdateControllerParametersRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import roboy_simulation_msgs.msg

class UpdateControllerParametersRequest(genpy.Message):
  _md5sum = "b756c0585632134411ae7db8d90667b1"
  _type = "roboy_simulation_msgs/UpdateControllerParametersRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """roboy_simulation_msgs/ControllerParameters params

================================================================================
MSG: roboy_simulation_msgs/ControllerParameters
int32 roboy_id
float64 f_contact
float64 d_lift
float64 d_prep
float64 f_max
float64 psi_heading
float64 omega_heading
float64 v_forward
float64 v_com
float64 k_h
float64[] k_p_theta_left
float64[] k_p_theta_right
float64[] k_d_theta_left
float64[] k_d_theta_right
float64[] k_p_phi
float64[] k_d_phi
float64 k_v
float64 k_p
float64 k_q
float64 k_omega
float64 k_m_fplus
float64 c_hip_lift
float64 c_knee_lift
float64 c_stance_lift
float64 c_swing_prep
float64[] theta_groin_0
float64[] phi_groin_0
float64 theta_trunk_0
float64 phi_trunk_0
float64[] theta_knee
float64[] theta_ankle
float64[] d_s
float64[] d_c
float64[] v_s
float64[] v_c
float32 sim_time
"""
  __slots__ = ['params']
  _slot_types = ['roboy_simulation_msgs/ControllerParameters']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       params

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(UpdateControllerParametersRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.params is None:
        self.params = roboy_simulation_msgs.msg.ControllerParameters()
    else:
      self.params = roboy_simulation_msgs.msg.ControllerParameters()

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
      buff.write(_get_struct_i9d().pack(_x.params.roboy_id, _x.params.f_contact, _x.params.d_lift, _x.params.d_prep, _x.params.f_max, _x.params.psi_heading, _x.params.omega_heading, _x.params.v_forward, _x.params.v_com, _x.params.k_h))
      length = len(self.params.k_p_theta_left)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.k_p_theta_left))
      length = len(self.params.k_p_theta_right)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.k_p_theta_right))
      length = len(self.params.k_d_theta_left)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.k_d_theta_left))
      length = len(self.params.k_d_theta_right)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.k_d_theta_right))
      length = len(self.params.k_p_phi)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.k_p_phi))
      length = len(self.params.k_d_phi)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.k_d_phi))
      _x = self
      buff.write(_get_struct_9d().pack(_x.params.k_v, _x.params.k_p, _x.params.k_q, _x.params.k_omega, _x.params.k_m_fplus, _x.params.c_hip_lift, _x.params.c_knee_lift, _x.params.c_stance_lift, _x.params.c_swing_prep))
      length = len(self.params.theta_groin_0)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.theta_groin_0))
      length = len(self.params.phi_groin_0)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.phi_groin_0))
      _x = self
      buff.write(_get_struct_2d().pack(_x.params.theta_trunk_0, _x.params.phi_trunk_0))
      length = len(self.params.theta_knee)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.theta_knee))
      length = len(self.params.theta_ankle)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.theta_ankle))
      length = len(self.params.d_s)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.d_s))
      length = len(self.params.d_c)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.d_c))
      length = len(self.params.v_s)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.v_s))
      length = len(self.params.v_c)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.params.v_c))
      buff.write(_get_struct_f().pack(self.params.sim_time))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.params is None:
        self.params = roboy_simulation_msgs.msg.ControllerParameters()
      end = 0
      _x = self
      start = end
      end += 76
      (_x.params.roboy_id, _x.params.f_contact, _x.params.d_lift, _x.params.d_prep, _x.params.f_max, _x.params.psi_heading, _x.params.omega_heading, _x.params.v_forward, _x.params.v_com, _x.params.k_h,) = _get_struct_i9d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_p_theta_left = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_p_theta_right = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_d_theta_left = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_d_theta_right = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_p_phi = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_d_phi = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 72
      (_x.params.k_v, _x.params.k_p, _x.params.k_q, _x.params.k_omega, _x.params.k_m_fplus, _x.params.c_hip_lift, _x.params.c_knee_lift, _x.params.c_stance_lift, _x.params.c_swing_prep,) = _get_struct_9d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.theta_groin_0 = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.phi_groin_0 = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 16
      (_x.params.theta_trunk_0, _x.params.phi_trunk_0,) = _get_struct_2d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.theta_knee = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.theta_ankle = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.d_s = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.d_c = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.v_s = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.v_c = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (self.params.sim_time,) = _get_struct_f().unpack(str[start:end])
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
      buff.write(_get_struct_i9d().pack(_x.params.roboy_id, _x.params.f_contact, _x.params.d_lift, _x.params.d_prep, _x.params.f_max, _x.params.psi_heading, _x.params.omega_heading, _x.params.v_forward, _x.params.v_com, _x.params.k_h))
      length = len(self.params.k_p_theta_left)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.k_p_theta_left.tostring())
      length = len(self.params.k_p_theta_right)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.k_p_theta_right.tostring())
      length = len(self.params.k_d_theta_left)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.k_d_theta_left.tostring())
      length = len(self.params.k_d_theta_right)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.k_d_theta_right.tostring())
      length = len(self.params.k_p_phi)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.k_p_phi.tostring())
      length = len(self.params.k_d_phi)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.k_d_phi.tostring())
      _x = self
      buff.write(_get_struct_9d().pack(_x.params.k_v, _x.params.k_p, _x.params.k_q, _x.params.k_omega, _x.params.k_m_fplus, _x.params.c_hip_lift, _x.params.c_knee_lift, _x.params.c_stance_lift, _x.params.c_swing_prep))
      length = len(self.params.theta_groin_0)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.theta_groin_0.tostring())
      length = len(self.params.phi_groin_0)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.phi_groin_0.tostring())
      _x = self
      buff.write(_get_struct_2d().pack(_x.params.theta_trunk_0, _x.params.phi_trunk_0))
      length = len(self.params.theta_knee)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.theta_knee.tostring())
      length = len(self.params.theta_ankle)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.theta_ankle.tostring())
      length = len(self.params.d_s)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.d_s.tostring())
      length = len(self.params.d_c)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.d_c.tostring())
      length = len(self.params.v_s)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.v_s.tostring())
      length = len(self.params.v_c)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.params.v_c.tostring())
      buff.write(_get_struct_f().pack(self.params.sim_time))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.params is None:
        self.params = roboy_simulation_msgs.msg.ControllerParameters()
      end = 0
      _x = self
      start = end
      end += 76
      (_x.params.roboy_id, _x.params.f_contact, _x.params.d_lift, _x.params.d_prep, _x.params.f_max, _x.params.psi_heading, _x.params.omega_heading, _x.params.v_forward, _x.params.v_com, _x.params.k_h,) = _get_struct_i9d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_p_theta_left = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_p_theta_right = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_d_theta_left = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_d_theta_right = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_p_phi = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.k_d_phi = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      _x = self
      start = end
      end += 72
      (_x.params.k_v, _x.params.k_p, _x.params.k_q, _x.params.k_omega, _x.params.k_m_fplus, _x.params.c_hip_lift, _x.params.c_knee_lift, _x.params.c_stance_lift, _x.params.c_swing_prep,) = _get_struct_9d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.theta_groin_0 = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.phi_groin_0 = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      _x = self
      start = end
      end += 16
      (_x.params.theta_trunk_0, _x.params.phi_trunk_0,) = _get_struct_2d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.theta_knee = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.theta_ankle = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.d_s = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.d_c = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.v_s = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.params.v_c = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (self.params.sim_time,) = _get_struct_f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2d = None
def _get_struct_2d():
    global _struct_2d
    if _struct_2d is None:
        _struct_2d = struct.Struct("<2d")
    return _struct_2d
_struct_i9d = None
def _get_struct_i9d():
    global _struct_i9d
    if _struct_i9d is None:
        _struct_i9d = struct.Struct("<i9d")
    return _struct_i9d
_struct_9d = None
def _get_struct_9d():
    global _struct_9d
    if _struct_9d is None:
        _struct_9d = struct.Struct("<9d")
    return _struct_9d
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from roboy_simulation_msgs/UpdateControllerParametersResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class UpdateControllerParametersResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "roboy_simulation_msgs/UpdateControllerParametersResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(UpdateControllerParametersResponse, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
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
      pass
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
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class UpdateControllerParameters(object):
  _type          = 'roboy_simulation_msgs/UpdateControllerParameters'
  _md5sum = 'b756c0585632134411ae7db8d90667b1'
  _request_class  = UpdateControllerParametersRequest
  _response_class = UpdateControllerParametersResponse
