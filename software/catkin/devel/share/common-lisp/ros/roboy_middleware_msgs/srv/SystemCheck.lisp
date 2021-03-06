; Auto-generated. Do not edit!


(cl:in-package roboy_middleware_msgs-srv)


;//! \htmlinclude SystemCheck-request.msg.html

(cl:defclass <SystemCheck-request> (roslisp-msg-protocol:ros-message)
  ((motorids
    :reader motorids
    :initarg :motorids
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass SystemCheck-request (<SystemCheck-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemCheck-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemCheck-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name roboy_middleware_msgs-srv:<SystemCheck-request> is deprecated: use roboy_middleware_msgs-srv:SystemCheck-request instead.")))

(cl:ensure-generic-function 'motorids-val :lambda-list '(m))
(cl:defmethod motorids-val ((m <SystemCheck-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-srv:motorids-val is deprecated.  Use roboy_middleware_msgs-srv:motorids instead.")
  (motorids m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemCheck-request>) ostream)
  "Serializes a message object of type '<SystemCheck-request>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'motorids))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'motorids))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemCheck-request>) istream)
  "Deserializes a message object of type '<SystemCheck-request>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'motorids) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'motorids)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemCheck-request>)))
  "Returns string type for a service object of type '<SystemCheck-request>"
  "roboy_middleware_msgs/SystemCheckRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemCheck-request)))
  "Returns string type for a service object of type 'SystemCheck-request"
  "roboy_middleware_msgs/SystemCheckRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemCheck-request>)))
  "Returns md5sum for a message object of type '<SystemCheck-request>"
  "d2bdc9a40e1feeae452cdda757d15ee0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemCheck-request)))
  "Returns md5sum for a message object of type 'SystemCheck-request"
  "d2bdc9a40e1feeae452cdda757d15ee0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemCheck-request>)))
  "Returns full string definition for message of type '<SystemCheck-request>"
  (cl:format cl:nil "~%uint8[] motorids~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemCheck-request)))
  "Returns full string definition for message of type 'SystemCheck-request"
  (cl:format cl:nil "~%uint8[] motorids~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemCheck-request>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'motorids) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemCheck-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemCheck-request
    (cl:cons ':motorids (motorids msg))
))
;//! \htmlinclude SystemCheck-response.msg.html

(cl:defclass <SystemCheck-response> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil))
   (displacement
    :reader displacement
    :initarg :displacement
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil)))
)

(cl:defclass SystemCheck-response (<SystemCheck-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemCheck-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemCheck-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name roboy_middleware_msgs-srv:<SystemCheck-response> is deprecated: use roboy_middleware_msgs-srv:SystemCheck-response instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <SystemCheck-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-srv:position-val is deprecated.  Use roboy_middleware_msgs-srv:position instead.")
  (position m))

(cl:ensure-generic-function 'displacement-val :lambda-list '(m))
(cl:defmethod displacement-val ((m <SystemCheck-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_middleware_msgs-srv:displacement-val is deprecated.  Use roboy_middleware_msgs-srv:displacement instead.")
  (displacement m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemCheck-response>) ostream)
  "Serializes a message object of type '<SystemCheck-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'position))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'position))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'displacement))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'displacement))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemCheck-response>) istream)
  "Deserializes a message object of type '<SystemCheck-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'position) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'position)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'displacement) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'displacement)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemCheck-response>)))
  "Returns string type for a service object of type '<SystemCheck-response>"
  "roboy_middleware_msgs/SystemCheckResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemCheck-response)))
  "Returns string type for a service object of type 'SystemCheck-response"
  "roboy_middleware_msgs/SystemCheckResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemCheck-response>)))
  "Returns md5sum for a message object of type '<SystemCheck-response>"
  "d2bdc9a40e1feeae452cdda757d15ee0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemCheck-response)))
  "Returns md5sum for a message object of type 'SystemCheck-response"
  "d2bdc9a40e1feeae452cdda757d15ee0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemCheck-response>)))
  "Returns full string definition for message of type '<SystemCheck-response>"
  (cl:format cl:nil "~%bool[] position~%bool[] displacement~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemCheck-response)))
  "Returns full string definition for message of type 'SystemCheck-response"
  (cl:format cl:nil "~%bool[] position~%bool[] displacement~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemCheck-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'position) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'displacement) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemCheck-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemCheck-response
    (cl:cons ':position (position msg))
    (cl:cons ':displacement (displacement msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SystemCheck)))
  'SystemCheck-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SystemCheck)))
  'SystemCheck-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemCheck)))
  "Returns string type for a service object of type '<SystemCheck>"
  "roboy_middleware_msgs/SystemCheck")