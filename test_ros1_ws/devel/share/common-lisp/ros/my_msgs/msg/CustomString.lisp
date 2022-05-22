; Auto-generated. Do not edit!


(cl:in-package my_msgs-msg)


;//! \htmlinclude CustomString.msg.html

(cl:defclass <CustomString> (roslisp-msg-protocol:ros-message)
  ((my_data
    :reader my_data
    :initarg :my_data
    :type cl:string
    :initform ""))
)

(cl:defclass CustomString (<CustomString>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CustomString>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CustomString)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name my_msgs-msg:<CustomString> is deprecated: use my_msgs-msg:CustomString instead.")))

(cl:ensure-generic-function 'my_data-val :lambda-list '(m))
(cl:defmethod my_data-val ((m <CustomString>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader my_msgs-msg:my_data-val is deprecated.  Use my_msgs-msg:my_data instead.")
  (my_data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CustomString>) ostream)
  "Serializes a message object of type '<CustomString>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'my_data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'my_data))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CustomString>) istream)
  "Deserializes a message object of type '<CustomString>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'my_data) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'my_data) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CustomString>)))
  "Returns string type for a message object of type '<CustomString>"
  "my_msgs/CustomString")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CustomString)))
  "Returns string type for a message object of type 'CustomString"
  "my_msgs/CustomString")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CustomString>)))
  "Returns md5sum for a message object of type '<CustomString>"
  "812e5b0223ac4003b51dc6f4c4f8fcbf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CustomString)))
  "Returns md5sum for a message object of type 'CustomString"
  "812e5b0223ac4003b51dc6f4c4f8fcbf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CustomString>)))
  "Returns full string definition for message of type '<CustomString>"
  (cl:format cl:nil "string my_data~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CustomString)))
  "Returns full string definition for message of type 'CustomString"
  (cl:format cl:nil "string my_data~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CustomString>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'my_data))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CustomString>))
  "Converts a ROS message object to a list"
  (cl:list 'CustomString
    (cl:cons ':my_data (my_data msg))
))
