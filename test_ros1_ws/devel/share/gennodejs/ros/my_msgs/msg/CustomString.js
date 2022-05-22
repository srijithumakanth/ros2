// Auto-generated. Do not edit!

// (in-package my_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class CustomString {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.my_data = null;
    }
    else {
      if (initObj.hasOwnProperty('my_data')) {
        this.my_data = initObj.my_data
      }
      else {
        this.my_data = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CustomString
    // Serialize message field [my_data]
    bufferOffset = _serializer.string(obj.my_data, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CustomString
    let len;
    let data = new CustomString(null);
    // Deserialize message field [my_data]
    data.my_data = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.my_data);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'my_msgs/CustomString';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '812e5b0223ac4003b51dc6f4c4f8fcbf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string my_data
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CustomString(null);
    if (msg.my_data !== undefined) {
      resolved.my_data = msg.my_data;
    }
    else {
      resolved.my_data = ''
    }

    return resolved;
    }
};

module.exports = CustomString;
