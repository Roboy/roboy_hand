; Auto-generated. Do not edit!


(cl:in-package roboy_cognition_msgs-msg)


;//! \htmlinclude FacialFeatures.msg.html

(cl:defclass <FacialFeatures> (roslisp-msg-protocol:ros-message)
  ((speaking
    :reader speaking
    :initarg :speaking
    :type cl:boolean
    :initform cl:nil)
   (ff
    :reader ff
    :initarg :ff
    :type (cl:vector cl:float)
   :initform (cl:make-array 128 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass FacialFeatures (<FacialFeatures>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FacialFeatures>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FacialFeatures)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name roboy_cognition_msgs-msg:<FacialFeatures> is deprecated: use roboy_cognition_msgs-msg:FacialFeatures instead.")))

(cl:ensure-generic-function 'speaking-val :lambda-list '(m))
(cl:defmethod speaking-val ((m <FacialFeatures>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_cognition_msgs-msg:speaking-val is deprecated.  Use roboy_cognition_msgs-msg:speaking instead.")
  (speaking m))

(cl:ensure-generic-function 'ff-val :lambda-list '(m))
(cl:defmethod ff-val ((m <FacialFeatures>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader roboy_cognition_msgs-msg:ff-val is deprecated.  Use roboy_cognition_msgs-msg:ff instead.")
  (ff m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FacialFeatures>) ostream)
  "Serializes a message object of type '<FacialFeatures>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'speaking) 1 0)) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'ff))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FacialFeatures>) istream)
  "Deserializes a message object of type '<FacialFeatures>"
    (cl:setf (cl:slot-value msg 'speaking) (cl:not (cl:zerop (cl:read-byte istream))))
  (cl:setf (cl:slot-value msg 'ff) (cl:make-array 128))
  (cl:let ((vals (cl:slot-value msg 'ff)))
    (cl:dotimes (i 128)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FacialFeatures>)))
  "Returns string type for a message object of type '<FacialFeatures>"
  "roboy_cognition_msgs/FacialFeatures")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FacialFeatures)))
  "Returns string type for a message object of type 'FacialFeatures"
  "roboy_cognition_msgs/FacialFeatures")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FacialFeatures>)))
  "Returns md5sum for a message object of type '<FacialFeatures>"
  "782758a9ad871ad0f7c61033e6a9c6cf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FacialFeatures)))
  "Returns md5sum for a message object of type 'FacialFeatures"
  "782758a9ad871ad0f7c61033e6a9c6cf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FacialFeatures>)))
  "Returns full string definition for message of type '<FacialFeatures>"
  (cl:format cl:nil "#only for unrecognized faces~%#is person speaking?~%bool speaking~%#facial features (128x1 vector)~%float64[128] ff~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FacialFeatures)))
  "Returns full string definition for message of type 'FacialFeatures"
  (cl:format cl:nil "#only for unrecognized faces~%#is person speaking?~%bool speaking~%#facial features (128x1 vector)~%float64[128] ff~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FacialFeatures>))
  (cl:+ 0
     1
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'ff) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FacialFeatures>))
  "Converts a ROS message object to a list"
  (cl:list 'FacialFeatures
    (cl:cons ':speaking (speaking msg))
    (cl:cons ':ff (ff msg))
))
