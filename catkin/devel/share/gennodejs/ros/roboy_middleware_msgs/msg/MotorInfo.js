// Auto-generated. Do not edit!

// (in-package roboy_middleware_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class MotorInfo {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.setpoint = null;
      this.control_mode = null;
      this.Kp = null;
      this.Ki = null;
      this.Kd = null;
      this.deadband = null;
      this.IntegralLimit = null;
      this.PWMLimit = null;
      this.pwm = null;
      this.communication_quality = null;
      this.error_code = null;
      this.neopixelColor = null;
    }
    else {
      if (initObj.hasOwnProperty('setpoint')) {
        this.setpoint = initObj.setpoint
      }
      else {
        this.setpoint = [];
      }
      if (initObj.hasOwnProperty('control_mode')) {
        this.control_mode = initObj.control_mode
      }
      else {
        this.control_mode = [];
      }
      if (initObj.hasOwnProperty('Kp')) {
        this.Kp = initObj.Kp
      }
      else {
        this.Kp = [];
      }
      if (initObj.hasOwnProperty('Ki')) {
        this.Ki = initObj.Ki
      }
      else {
        this.Ki = [];
      }
      if (initObj.hasOwnProperty('Kd')) {
        this.Kd = initObj.Kd
      }
      else {
        this.Kd = [];
      }
      if (initObj.hasOwnProperty('deadband')) {
        this.deadband = initObj.deadband
      }
      else {
        this.deadband = [];
      }
      if (initObj.hasOwnProperty('IntegralLimit')) {
        this.IntegralLimit = initObj.IntegralLimit
      }
      else {
        this.IntegralLimit = [];
      }
      if (initObj.hasOwnProperty('PWMLimit')) {
        this.PWMLimit = initObj.PWMLimit
      }
      else {
        this.PWMLimit = [];
      }
      if (initObj.hasOwnProperty('pwm')) {
        this.pwm = initObj.pwm
      }
      else {
        this.pwm = [];
      }
      if (initObj.hasOwnProperty('communication_quality')) {
        this.communication_quality = initObj.communication_quality
      }
      else {
        this.communication_quality = [];
      }
      if (initObj.hasOwnProperty('error_code')) {
        this.error_code = initObj.error_code
      }
      else {
        this.error_code = [];
      }
      if (initObj.hasOwnProperty('neopixelColor')) {
        this.neopixelColor = initObj.neopixelColor
      }
      else {
        this.neopixelColor = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MotorInfo
    // Serialize message field [setpoint]
    bufferOffset = _arraySerializer.int32(obj.setpoint, buffer, bufferOffset, null);
    // Serialize message field [control_mode]
    bufferOffset = _arraySerializer.uint8(obj.control_mode, buffer, bufferOffset, null);
    // Serialize message field [Kp]
    bufferOffset = _arraySerializer.int32(obj.Kp, buffer, bufferOffset, null);
    // Serialize message field [Ki]
    bufferOffset = _arraySerializer.int32(obj.Ki, buffer, bufferOffset, null);
    // Serialize message field [Kd]
    bufferOffset = _arraySerializer.int32(obj.Kd, buffer, bufferOffset, null);
    // Serialize message field [deadband]
    bufferOffset = _arraySerializer.int32(obj.deadband, buffer, bufferOffset, null);
    // Serialize message field [IntegralLimit]
    bufferOffset = _arraySerializer.int32(obj.IntegralLimit, buffer, bufferOffset, null);
    // Serialize message field [PWMLimit]
    bufferOffset = _arraySerializer.int32(obj.PWMLimit, buffer, bufferOffset, null);
    // Serialize message field [pwm]
    bufferOffset = _arraySerializer.int32(obj.pwm, buffer, bufferOffset, null);
    // Serialize message field [communication_quality]
    bufferOffset = _arraySerializer.int32(obj.communication_quality, buffer, bufferOffset, null);
    // Serialize message field [error_code]
    bufferOffset = _arraySerializer.int32(obj.error_code, buffer, bufferOffset, null);
    // Serialize message field [neopixelColor]
    bufferOffset = _arraySerializer.int32(obj.neopixelColor, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MotorInfo
    let len;
    let data = new MotorInfo(null);
    // Deserialize message field [setpoint]
    data.setpoint = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [control_mode]
    data.control_mode = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [Kp]
    data.Kp = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [Ki]
    data.Ki = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [Kd]
    data.Kd = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [deadband]
    data.deadband = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [IntegralLimit]
    data.IntegralLimit = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [PWMLimit]
    data.PWMLimit = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [pwm]
    data.pwm = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [communication_quality]
    data.communication_quality = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [error_code]
    data.error_code = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [neopixelColor]
    data.neopixelColor = _arrayDeserializer.int32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.setpoint.length;
    length += object.control_mode.length;
    length += 4 * object.Kp.length;
    length += 4 * object.Ki.length;
    length += 4 * object.Kd.length;
    length += 4 * object.deadband.length;
    length += 4 * object.IntegralLimit.length;
    length += 4 * object.PWMLimit.length;
    length += 4 * object.pwm.length;
    length += 4 * object.communication_quality.length;
    length += 4 * object.error_code.length;
    length += 4 * object.neopixelColor.length;
    return length + 48;
  }

  static datatype() {
    // Returns string type for a message object
    return 'roboy_middleware_msgs/MotorInfo';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1504e08ef7bdc51358f095019de21feb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32[] setpoint
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
    int32[] neopixelColor
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MotorInfo(null);
    if (msg.setpoint !== undefined) {
      resolved.setpoint = msg.setpoint;
    }
    else {
      resolved.setpoint = []
    }

    if (msg.control_mode !== undefined) {
      resolved.control_mode = msg.control_mode;
    }
    else {
      resolved.control_mode = []
    }

    if (msg.Kp !== undefined) {
      resolved.Kp = msg.Kp;
    }
    else {
      resolved.Kp = []
    }

    if (msg.Ki !== undefined) {
      resolved.Ki = msg.Ki;
    }
    else {
      resolved.Ki = []
    }

    if (msg.Kd !== undefined) {
      resolved.Kd = msg.Kd;
    }
    else {
      resolved.Kd = []
    }

    if (msg.deadband !== undefined) {
      resolved.deadband = msg.deadband;
    }
    else {
      resolved.deadband = []
    }

    if (msg.IntegralLimit !== undefined) {
      resolved.IntegralLimit = msg.IntegralLimit;
    }
    else {
      resolved.IntegralLimit = []
    }

    if (msg.PWMLimit !== undefined) {
      resolved.PWMLimit = msg.PWMLimit;
    }
    else {
      resolved.PWMLimit = []
    }

    if (msg.pwm !== undefined) {
      resolved.pwm = msg.pwm;
    }
    else {
      resolved.pwm = []
    }

    if (msg.communication_quality !== undefined) {
      resolved.communication_quality = msg.communication_quality;
    }
    else {
      resolved.communication_quality = []
    }

    if (msg.error_code !== undefined) {
      resolved.error_code = msg.error_code;
    }
    else {
      resolved.error_code = []
    }

    if (msg.neopixelColor !== undefined) {
      resolved.neopixelColor = msg.neopixelColor;
    }
    else {
      resolved.neopixelColor = []
    }

    return resolved;
    }
};

module.exports = MotorInfo;
