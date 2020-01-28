; Auto-generated. Do not edit!


(cl:in-package roboy_middleware_msgs-msg)


;//! \htmlinclude HandStatus.msg.html

(cl:defclass <HandStatus> (roslisp-msg-protocol:ros-message)
  ((hand_id
    :reader hand_id
    :initarg :hand_id
    :type cl:fixnum
    :initform 0)
   (finger_pos
    :reader finger_pos
    :initarg :finger_pos
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (finger_current
    :reader finger_current
    :initarg :finger_current
    :type (cl:vector cl:integer)
   :initform (cl:make-array 0 :element-type 'cl:integer :initial-element 0))
   (gyro_data
    :reader gyro_data
    :initarg :gyro_data
    :type (cl:vector cl:integer)
   :initform (cl:make-array 0 :element-type 'cl:integer :initial-element 0))
   (imu_data
    :reader imu_data
    :initarg :imu_data
    :type (cl:vector cl:integer)
   :initform (cl:make-array 0 :element-type 'cl:integer :initial-element 0)))
)

(cl:defclass HandStatus (<HandStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <HandStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'HandStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name roboy_middleware_msgs-msg:<HandStatus> is deprecated: use roboy_middleware_msgs-msg:HandStatus instead.")))

(cl:ensure-generic-function 'hand_id-val :lambda-list '(m))
(cl:defmethod hand_id-val ((m <HandStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:hand_id-val is deprecated.  Use roboy_middleware_msgs-msg:hand_id instead.")
  (hand_id m))

(cl:ensure-generic-function 'finger_pos-val :lambda-list '(m))
(cl:defmethod finger_pos-val ((m <HandStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:finger_pos-val is deprecated.  Use roboy_middleware_msgs-msg:finger_pos instead.")
  (finger_pos m))

(cl:ensure-generic-function 'finger_current-val :lambda-list '(m))
(cl:defmethod finger_current-val ((m <HandStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:finger_current-val is deprecated.  Use roboy_middleware_msgs-msg:finger_current instead.")
  (finger_current m))

(cl:ensure-generic-function 'gyro_data-val :lambda-list '(m))
(cl:defmethod gyro_data-val ((m <HandStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:gyro_data-val is deprecated.  Use roboy_middleware_msgs-msg:gyro_data instead.")
  (gyro_data m))

(cl:ensure-generic-function 'imu_data-val :lambda-list '(m))
(cl:defmethod imu_data-val ((m <HandStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:imu_data-val is deprecated.  Use roboy_middleware_msgs-msg:imu_data instead.")
  (imu_data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <HandStatus>) ostream)
  "Serializes a message object of type '<HandStatus>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'hand_id)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'finger_pos))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream))
   (cl:slot-value msg 'finger_pos))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'finger_current))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) ele) ostream))
   (cl:slot-value msg 'finger_current))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'gyro_data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) ele) ostream))
   (cl:slot-value msg 'gyro_data))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'imu_data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) ele) ostream))
   (cl:slot-value msg 'imu_data))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <HandStatus>) istream)
  "Deserializes a message object of type '<HandStatus>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'hand_id)) (cl:read-byte istream))
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
  (cl:setf (cl:slot-value msg 'finger_current) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'finger_current)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'gyro_data) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'gyro_data)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'imu_data) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'imu_data)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:aref vals i)) (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<HandStatus>)))
  "Returns string type for a message object of type '<HandStatus>"
  "roboy_middleware_msgs/HandStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'HandStatus)))
  "Returns string type for a message object of type 'HandStatus"
  "roboy_middleware_msgs/HandStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<HandStatus>)))
  "Returns md5sum for a message object of type '<HandStatus>"
  "e0e7307277d4dcab3439944624663fb0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'HandStatus)))
  "Returns md5sum for a message object of type 'HandStatus"
  "e0e7307277d4dcab3439944624663fb0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<HandStatus>)))
  "Returns full string definition for message of type '<HandStatus>"
  (cl:format cl:nil "uint8 hand_id~%uint16[] finger_pos~%uint32[] finger_current~%uint32[] gyro_data~%uint32[] imu_data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'HandStatus)))
  "Returns full string definition for message of type 'HandStatus"
  (cl:format cl:nil "uint8 hand_id~%uint16[] finger_pos~%uint32[] finger_current~%uint32[] gyro_data~%uint32[] imu_data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <HandStatus>))
  (cl:+ 0
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'finger_pos) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'finger_current) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'gyro_data) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'imu_data) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <HandStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'HandStatus
    (cl:cons ':hand_id (hand_id msg))
    (cl:cons ':finger_pos (finger_pos msg))
    (cl:cons ':finger_current (finger_current msg))
    (cl:cons ':gyro_data (gyro_data msg))
    (cl:cons ':imu_data (imu_data msg))
))
