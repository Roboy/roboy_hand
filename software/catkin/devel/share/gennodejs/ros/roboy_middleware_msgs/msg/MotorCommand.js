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

class MotorCommand {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.legacy = null;
      this.motor = null;
      this.setpoint = null;
    }
    else {
      if (initObj.hasOwnProperty('legacy')) {
        this.legacy = initObj.legacy
      }
      else {
        this.legacy = false;
      }
      if (initObj.hasOwnProperty('motor')) {
        this.motor = initObj.motor
      }
      else {
        this.motor = [];
      }
      if (initObj.hasOwnProperty('setpoint')) {
        this.setpoint = initObj.setpoint
      }
      else {
        this.setpoint = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MotorCommand
    // Serialize message field [legacy]
    bufferOffset = _serializer.bool(obj.legacy, buffer, bufferOffset);
    // Serialize message field [motor]
    bufferOffset = _arraySerializer.int32(obj.motor, buffer, bufferOffset, null);
    // Serialize message field [setpoint]
    bufferOffset = _arraySerializer.float32(obj.setpoint, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MotorCommand
    let len;
    let data = new MotorCommand(null);
    // Deserialize message field [legacy]
    data.legacy = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [motor]
    data.motor = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [setpoint]
    data.setpoint = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.motor.length;
    length += 4 * object.setpoint.length;
    return length + 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'roboy_middleware_msgs/MotorCommand';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '369abc22b1f32cd3aeb8a04b68b8326d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool legacy
    int32[] motor
    float32[] setpoint
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MotorCommand(null);
    if (msg.legacy !== undefined) {
      resolved.legacy = msg.legacy;
    }
    else {
      resolved.legacy = false
    }

    if (msg.motor !== undefined) {
      resolved.motor = msg.motor;
    }
    else {
      resolved.motor = []
    }

    if (msg.setpoint !== undefined) {
      resolved.setpoint = msg.setpoint;
    }
    else {
      resolved.setpoint = []
    }

    return resolved;
    }
};

module.exports = MotorCommand;
