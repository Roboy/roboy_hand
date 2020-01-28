;; Auto-generated. Do not edit!


(when (boundp 'roboy_middleware_msgs::MotorCommand)
  (if (not (find-package "ROBOY_MIDDLEWARE_MSGS"))
    (make-package "ROBOY_MIDDLEWARE_MSGS"))
  (shadow 'MotorCommand (find-package "ROBOY_MIDDLEWARE_MSGS")))
(unless (find-package "ROBOY_MIDDLEWARE_MSGS::MOTORCOMMAND")
  (make-package "ROBOY_MIDDLEWARE_MSGS::MOTORCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude MotorCommand.msg.html


(defclass roboy_middleware_msgs::MotorCommand
  :super ros::object
  :slots (_legacy _motor _setpoint ))

(defmethod roboy_middleware_msgs::MotorCommand
  (:init
   (&key
    ((:legacy __legacy) nil)
    ((:motor __motor) (make-array 0 :initial-element 0 :element-type :integer))
    ((:setpoint __setpoint) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _legacy __legacy)
   (setq _motor __motor)
   (setq _setpoint __setpoint)
   self)
  (:legacy
   (&optional __legacy)
   (if __legacy (setq _legacy __legacy)) _legacy)
  (:motor
   (&optional __motor)
   (if __motor (setq _motor __motor)) _motor)
  (:setpoint
   (&optional __setpoint)
   (if __setpoint (setq _setpoint __setpoint)) _setpoint)
  (:serialization-length
   ()
   (+
    ;; bool _legacy
    1
    ;; int32[] _motor
    (* 4    (length _motor)) 4
    ;; float32[] _setpoint
    (* 4    (length _setpoint)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _legacy
       (if _legacy (write-byte -1 s) (write-byte 0 s))
     ;; int32[] _motor
     (write-long (length _motor) s)
     (dotimes (i (length _motor))
       (write-long (elt _motor i) s)
       )
     ;; float32[] _setpoint
     (write-long (length _setpoint) s)
     (dotimes (i (length _setpoint))
       (sys::poke (elt _setpoint i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _legacy
     (setq _legacy (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int32[] _motor
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _motor (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _motor i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; float32[] _setpoint
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _setpoint (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _setpoint i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get roboy_middleware_msgs::MotorCommand :md5sum-) "369abc22b1f32cd3aeb8a04b68b8326d")
(setf (get roboy_middleware_msgs::MotorCommand :datatype-) "roboy_middleware_msgs/MotorCommand")
(setf (get roboy_middleware_msgs::MotorCommand :definition-)
      "bool legacy
int32[] motor
float32[] setpoint

")



(provide :roboy_middleware_msgs/MotorCommand "369abc22b1f32cd3aeb8a04b68b8326d")


