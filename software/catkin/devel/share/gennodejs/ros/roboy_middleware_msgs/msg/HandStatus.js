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

class HandStatus {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.hand_id = null;
      this.finger_pos = null;
      this.finger_current = null;
      this.gyro_data = null;
      this.imu_data = null;
    }
    else {
      if (initObj.hasOwnProperty('hand_id')) {
        this.hand_id = initObj.hand_id
      }
      else {
        this.hand_id = 0;
      }
      if (initObj.hasOwnProperty('finger_pos')) {
        this.finger_pos = initObj.finger_pos
      }
      else {
        this.finger_pos = [];
      }
      if (initObj.hasOwnProperty('finger_current')) {
        this.finger_current = initObj.finger_current
      }
      else {
        this.finger_current = [];
      }
      if (initObj.hasOwnProperty('gyro_data')) {
        this.gyro_data = initObj.gyro_data
      }
      else {
        this.gyro_data = [];
      }
      if (initObj.hasOwnProperty('imu_data')) {
        this.imu_data = initObj.imu_data
      }
      else {
        this.imu_data = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type HandStatus
    // Serialize message field [hand_id]
    bufferOffset = _serializer.uint8(obj.hand_id, buffer, bufferOffset);
    // Serialize message field [finger_pos]
    bufferOffset = _arraySerializer.uint16(obj.finger_pos, buffer, bufferOffset, null);
    // Serialize message field [finger_current]
    bufferOffset = _arraySerializer.uint32(obj.finger_current, buffer, bufferOffset, null);
    // Serialize message field [gyro_data]
    bufferOffset = _arraySerializer.uint32(obj.gyro_data, buffer, bufferOffset, null);
    // Serialize message field [imu_data]
    bufferOffset = _arraySerializer.uint32(obj.imu_data, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type HandStatus
    let len;
    let data = new HandStatus(null);
    // Deserialize message field [hand_id]
    data.hand_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [finger_pos]
    data.finger_pos = _arrayDeserializer.uint16(buffer, bufferOffset, null)
    // Deserialize message field [finger_current]
    data.finger_current = _arrayDeserializer.uint32(buffer, bufferOffset, null)
    // Deserialize message field [gyro_data]
    data.gyro_data = _arrayDeserializer.uint32(buffer, bufferOffset, null)
    // Deserialize message field [imu_data]
    data.imu_data = _arrayDeserializer.uint32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 2 * object.finger_pos.length;
    length += 4 * object.finger_current.length;
    length += 4 * object.gyro_data.length;
    length += 4 * object.imu_data.length;
    return length + 17;
  }

  static datatype() {
    // Returns string type for a message object
    return 'roboy_middleware_msgs/HandStatus';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e0e7307277d4dcab3439944624663fb0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 hand_id
    uint16[] finger_pos
    uint32[] finger_current
    uint32[] gyro_data
    uint32[] imu_data
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new HandStatus(null);
    if (msg.hand_id !== undefined) {
      resolved.hand_id = msg.hand_id;
    }
    else {
      resolved.hand_id = 0
    }

    if (msg.finger_pos !== undefined) {
      resolved.finger_pos = msg.finger_pos;
    }
    else {
      resolved.finger_pos = []
    }

    if (msg.finger_current !== undefined) {
      resolved.finger_current = msg.finger_current;
    }
    else {
      resolved.finger_current = []
    }

    if (msg.gyro_data !== undefined) {
      resolved.gyro_data = msg.gyro_data;
    }
    else {
      resolved.gyro_data = []
    }

    if (msg.imu_data !== undefined) {
      resolved.imu_data = msg.imu_data;
    }
    else {
      resolved.imu_data = []
    }

    return resolved;
    }
};

module.exports = HandStatus;
