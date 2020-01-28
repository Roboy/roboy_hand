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

class HandCommand {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.hand_id = null;
      this.gesture = null;
      this.finger_pos = null;
      this.finger_speed = null;
    }
    else {
      if (initObj.hasOwnProperty('hand_id')) {
        this.hand_id = initObj.hand_id
      }
      else {
        this.hand_id = 0;
      }
      if (initObj.hasOwnProperty('gesture')) {
        this.gesture = initObj.gesture
      }
      else {
        this.gesture = 0;
      }
      if (initObj.hasOwnProperty('finger_pos')) {
        this.finger_pos = initObj.finger_pos
      }
      else {
        this.finger_pos = [];
      }
      if (initObj.hasOwnProperty('finger_speed')) {
        this.finger_speed = initObj.finger_speed
      }
      else {
        this.finger_speed = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type HandCommand
    // Serialize message field [hand_id]
    bufferOffset = _serializer.uint8(obj.hand_id, buffer, bufferOffset);
    // Serialize message field [gesture]
    bufferOffset = _serializer.uint8(obj.gesture, buffer, bufferOffset);
    // Serialize message field [finger_pos]
    bufferOffset = _arraySerializer.uint16(obj.finger_pos, buffer, bufferOffset, null);
    // Serialize message field [finger_speed]
    bufferOffset = _arraySerializer.uint8(obj.finger_speed, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type HandCommand
    let len;
    let data = new HandCommand(null);
    // Deserialize message field [hand_id]
    data.hand_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [gesture]
    data.gesture = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [finger_pos]
    data.finger_pos = _arrayDeserializer.uint16(buffer, bufferOffset, null)
    // Deserialize message field [finger_speed]
    data.finger_speed = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 2 * object.finger_pos.length;
    length += object.finger_speed.length;
    return length + 10;
  }

  static datatype() {
    // Returns string type for a message object
    return 'roboy_middleware_msgs/HandCommand';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '67aa5bc29db86e2d5f7f09f60811f24e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 hand_id
    uint8 gesture
    uint16[] finger_pos
    uint8[] finger_speed
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new HandCommand(null);
    if (msg.hand_id !== undefined) {
      resolved.hand_id = msg.hand_id;
    }
    else {
      resolved.hand_id = 0
    }

    if (msg.gesture !== undefined) {
      resolved.gesture = msg.gesture;
    }
    else {
      resolved.gesture = 0
    }

    if (msg.finger_pos !== undefined) {
      resolved.finger_pos = msg.finger_pos;
    }
    else {
      resolved.finger_pos = []
    }

    if (msg.finger_speed !== undefined) {
      resolved.finger_speed = msg.finger_speed;
    }
    else {
      resolved.finger_speed = []
    }

    return resolved;
    }
};

module.exports = HandCommand;
