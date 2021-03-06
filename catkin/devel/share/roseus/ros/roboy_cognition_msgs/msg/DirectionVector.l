;; Auto-generated. Do not edit!


(when (boundp 'roboy_cognition_msgs::DirectionVector)
  (if (not (find-package "ROBOY_COGNITION_MSGS"))
    (make-package "ROBOY_COGNITION_MSGS"))
  (shadow 'DirectionVector (find-package "ROBOY_COGNITION_MSGS")))
(unless (find-package "ROBOY_COGNITION_MSGS::DIRECTIONVECTOR")
  (make-package "ROBOY_COGNITION_MSGS::DIRECTIONVECTOR"))

(in-package "ROS")
;;//! \htmlinclude DirectionVector.msg.html


(defclass roboy_cognition_msgs::DirectionVector
  :super ros::object
  :slots (_azimutal_angle _polar_angle ))

(defmethod roboy_cognition_msgs::DirectionVector
  (:init
   (&key
    ((:azimutal_angle __azimutal_angle) 0.0)
    ((:polar_angle __polar_angle) 0.0)
    )
   (send-super :init)
   (setq _azimutal_angle (float __azimutal_angle))
   (setq _polar_angle (float __polar_angle))
   self)
  (:azimutal_angle
   (&optional __azimutal_angle)
   (if __azimutal_angle (setq _azimutal_angle __azimutal_angle)) _azimutal_angle)
  (:polar_angle
   (&optional __polar_angle)
   (if __polar_angle (setq _polar_angle __polar_angle)) _polar_angle)
  (:serialization-length
   ()
   (+
    ;; float64 _azimutal_angle
    8
    ;; float64 _polar_angle
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _azimutal_angle
       (sys::poke _azimutal_angle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _polar_angle
       (sys::poke _polar_angle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _azimutal_angle
     (setq _azimutal_angle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _polar_angle
     (setq _polar_angle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get roboy_cognition_msgs::DirectionVector :md5sum-) "32f7ac1c3ed95e6c1aa8e7777879079b")
(setf (get roboy_cognition_msgs::DirectionVector :datatype-) "roboy_cognition_msgs/DirectionVector")
(setf (get roboy_cognition_msgs::DirectionVector :definition-)
      "float64 azimutal_angle
float64 polar_angle

")



(provide :roboy_cognition_msgs/DirectionVector "32f7ac1c3ed95e6c1aa8e7777879079b")


