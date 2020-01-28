; Auto-generated. Do not edit!


(cl:in-package roboy_middleware_msgs-msg)


;//! \htmlinclude HandCommand.msg.html

(cl:defclass <HandCommand> (roslisp-msg-protocol:ros-message)
  ((hand_id
    :reader hand_id
    :initarg :hand_id
    :type cl:fixnum
    :initform 0)
   (gesture
    :reader gesture
    :initarg :gesture
    :type cl:fixnum
    :initform 0)
   (finger_pos
    :reader finger_pos
    :initarg :finger_pos
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (finger_speed
    :reader finger_speed
    :initarg :finger_speed
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass HandCommand (<HandCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <HandCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'HandCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name roboy_middleware_msgs-msg:<HandCommand> is deprecated: use roboy_middleware_msgs-msg:HandCommand instead.")))

(cl:ensure-generic-function 'hand_id-val :lambda-list '(m))
(cl:defmethod hand_id-val ((m <HandCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:hand_id-val is deprecated.  Use roboy_middleware_msgs-msg:hand_id instead.")
  (hand_id m))

(cl:ensure-generic-function 'gesture-val :lambda-list '(m))
(cl:defmethod gesture-val ((m <HandCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:gesture-val is deprecated.  Use roboy_middleware_msgs-msg:gesture instead.")
  (gesture m))

(cl:ensure-generic-function 'finger_pos-val :lambda-list '(m))
(cl:defmethod finger_pos-val ((m <HandCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:finger_pos-val is deprecated.  Use roboy_middleware_msgs-msg:finger_pos instead.")
  (finger_pos m))

(cl:ensure-generic-function 'finger_speed-val :lambda-list '(m))
(cl:defmethod finger_speed-val ((m <HandCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:finger_speed-val is deprecated.  Use roboy_middleware_msgs-msg:finger_speed instead.")
  (finger_speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <HandCommand>) ostream)
  "Serializes a message object of type '<HandCommand>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'hand_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gesture)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'finger_pos))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream))
   (cl:slot-value msg 'finger_pos))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'finger_speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'finger_speed))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <HandCommand>) istream)
  "Deserializes a message object of type '<HandCommand>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'hand_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'gesture)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'finger_pos) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'finger_pos)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'finger_speed) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'finger_speed)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<HandCommand>)))
  "Returns string type for a message object of type '<HandCommand>"
  "roboy_middleware_msgs/HandCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'HandCommand)))
  "Returns string type for a message object of type 'HandCommand"
  "roboy_middleware_msgs/HandCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<HandCommand>)))
  "Returns md5sum for a message object of type '<HandCommand>"
  "67aa5bc29db86e2d5f7f09f60811f24e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'HandCommand)))
  "Returns md5sum for a message object of type 'HandCommand"
  "67aa5bc29db86e2d5f7f09f60811f24e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<HandCommand>)))
  "Returns full string definition for message of type '<HandCommand>"
  (cl:format cl:nil "uint8 hand_id~%uint8 gesture~%uint16[] finger_pos~%uint8[] finger_speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'HandCommand)))
  "Returns full string definition for message of type 'HandCommand"
  (cl:format cl:nil "uint8 hand_id~%uint8 gesture~%uint16[] finger_pos~%uint8[] finger_speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <HandCommand>))
  (cl:+ 0
     1
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'finger_pos) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'finger_speed) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <HandCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'HandCommand
    (cl:cons ':hand_id (hand_id msg))
    (cl:cons ':gesture (gesture msg))
    (cl:cons ':finger_pos (finger_pos msg))
    (cl:cons ':finger_speed (finger_speed msg))
))
