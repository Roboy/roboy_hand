; Auto-generated. Do not edit!


(cl:in-package roboy_middleware_msgs-msg)


;//! \htmlinclude DarkRoomStatistics.msg.html

(cl:defclass <DarkRoomStatistics> (roslisp-msg-protocol:ros-message)
  ((object_name
    :reader object_name
    :initarg :object_name
    :type cl:string
    :initform "")
   (lighthouse
    :reader lighthouse
    :initarg :lighthouse
    :type cl:integer
    :initform 0)
   (update_frequency_horizontal
    :reader update_frequency_horizontal
    :initarg :update_frequency_horizontal
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (update_frequency_vertical
    :reader update_frequency_vertical
    :initarg :update_frequency_vertical
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass DarkRoomStatistics (<DarkRoomStatistics>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DarkRoomStatistics>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DarkRoomStatistics)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name roboy_middleware_msgs-msg:<DarkRoomStatistics> is deprecated: use roboy_middleware_msgs-msg:DarkRoomStatistics instead.")))

(cl:ensure-generic-function 'object_name-val :lambda-list '(m))
(cl:defmethod object_name-val ((m <DarkRoomStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:object_name-val is deprecated.  Use roboy_middleware_msgs-msg:object_name instead.")
  (object_name m))

(cl:ensure-generic-function 'lighthouse-val :lambda-list '(m))
(cl:defmethod lighthouse-val ((m <DarkRoomStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:lighthouse-val is deprecated.  Use roboy_middleware_msgs-msg:lighthouse instead.")
  (lighthouse m))

(cl:ensure-generic-function 'update_frequency_horizontal-val :lambda-list '(m))
(cl:defmethod update_frequency_horizontal-val ((m <DarkRoomStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:update_frequency_horizontal-val is deprecated.  Use roboy_middleware_msgs-msg:update_frequency_horizontal instead.")
  (update_frequency_horizontal m))

(cl:ensure-generic-function 'update_frequency_vertical-val :lambda-list '(m))
(cl:defmethod update_frequency_vertical-val ((m <DarkRoomStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-msg:update_frequency_vertical-val is deprecated.  Use roboy_middleware_msgs-msg:update_frequency_vertical instead.")
  (update_frequency_vertical m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DarkRoomStatistics>) ostream)
  "Serializes a message object of type '<DarkRoomStatistics>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'object_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'object_name))
  (cl:let* ((signed (cl:slot-value msg 'lighthouse)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'update_frequency_horizontal))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'update_frequency_horizontal))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'update_frequency_vertical))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'update_frequency_vertical))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DarkRoomStatistics>) istream)
  "Deserializes a message object of type '<DarkRoomStatistics>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'object_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'object_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'lighthouse) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'update_frequency_horizontal) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'update_frequency_horizontal)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'update_frequency_vertical) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'update_frequency_vertical)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DarkRoomStatistics>)))
  "Returns string type for a message object of type '<DarkRoomStatistics>"
  "roboy_middleware_msgs/DarkRoomStatistics")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DarkRoomStatistics)))
  "Returns string type for a message object of type 'DarkRoomStatistics"
  "roboy_middleware_msgs/DarkRoomStatistics")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DarkRoomStatistics>)))
  "Returns md5sum for a message object of type '<DarkRoomStatistics>"
  "7e96c4c9ae71be87963c0b1fcc870765")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DarkRoomStatistics)))
  "Returns md5sum for a message object of type 'DarkRoomStatistics"
  "7e96c4c9ae71be87963c0b1fcc870765")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DarkRoomStatistics>)))
  "Returns full string definition for message of type '<DarkRoomStatistics>"
  (cl:format cl:nil "string object_name~%int32 lighthouse~%float32[] update_frequency_horizontal~%float32[] update_frequency_vertical~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DarkRoomStatistics)))
  "Returns full string definition for message of type 'DarkRoomStatistics"
  (cl:format cl:nil "string object_name~%int32 lighthouse~%float32[] update_frequency_horizontal~%float32[] update_frequency_vertical~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DarkRoomStatistics>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'object_name))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'update_frequency_horizontal) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'update_frequency_vertical) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DarkRoomStatistics>))
  "Converts a ROS message object to a list"
  (cl:list 'DarkRoomStatistics
    (cl:cons ':object_name (object_name msg))
    (cl:cons ':lighthouse (lighthouse msg))
    (cl:cons ':update_frequency_horizontal (update_frequency_horizontal msg))
    (cl:cons ':update_frequency_vertical (update_frequency_vertical msg))
))
