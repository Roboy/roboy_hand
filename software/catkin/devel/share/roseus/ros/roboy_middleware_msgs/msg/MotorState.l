;; Auto-generated. Do not edit!


(when (boundp 'roboy_middleware_msgs::MotorState)
  (if (not (find-package "ROBOY_MIDDLEWARE_MSGS"))
    (make-package "ROBOY_MIDDLEWARE_MSGS"))
  (shadow 'MotorState (find-package "ROBOY_MIDDLEWARE_MSGS")))
(unless (find-package "ROBOY_MIDDLEWARE_MSGS::MOTORSTATE")
  (make-package "ROBOY_MIDDLEWARE_MSGS::MOTORSTATE"))

(in-package "ROS")
;;//! \htmlinclude MotorState.msg.html


(defclass roboy_middleware_msgs::MotorState
  :super ros::object
  :slots (_setpoint _encoder0_pos _encoder1_pos _displacement _current ))

(defmethod roboy_middleware_msgs::MotorState
  (:init
   (&key
    ((:setpoint __setpoint) (make-array 0 :initial-element 0 :element-type :integer))
    ((:encoder0_pos __encoder0_pos) (make-array 0 :initial-element 0 :element-type :integer))
    ((:encoder1_pos __encoder1_pos) (make-array 0 :initial-element 0 :element-type :integer))
    ((:displacement __displacement) (make-array 0 :initial-element 0 :element-type :integer))
    ((:current __current) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _setpoint __setpoint)
   (setq _encoder0_pos __encoder0_pos)
   (setq _encoder1_pos __encoder1_pos)
   (setq _displacement __displacement)
   (setq _current __current)
   self)
  (:setpoint
   (&optional __setpoint)
   (if __setpoint (setq _setpoint __setpoint)) _setpoint)
  (:encoder0_pos
   (&optional __encoder0_pos)
   (if __encoder0_pos (setq _encoder0_pos __encoder0_pos)) _encoder0_pos)
  (:encoder1_pos
   (&optional __encoder1_pos)
   (if __encoder1_pos (setq _encoder1_pos __encoder1_pos)) _encoder1_pos)
  (:displacement
   (&optional __displacement)
   (if __displacement (setq _displacement __displacement)) _displacement)
  (:current
   (&optional __current)
   (if __current (setq _current __current)) _current)
  (:serialization-length
   ()
   (+
    ;; int32[] _setpoint
    (* 4    (length _setpoint)) 4
    ;; int32[] _encoder0_pos
    (* 4    (length _encoder0_pos)) 4
    ;; int32[] _encoder1_pos
    (* 4    (length _encoder1_pos)) 4
    ;; int32[] _displacement
    (* 4    (length _displacement)) 4
    ;; int32[] _current
    (* 4    (length _current)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32[] _setpoint
     (write-long (length _setpoint) s)
     (dotimes (i (length _setpoint))
       (write-long (elt _setpoint i) s)
       )
     ;; int32[] _encoder0_pos
     (write-long (length _encoder0_pos) s)
     (dotimes (i (length _encoder0_pos))
       (write-long (elt _encoder0_pos i) s)
       )
     ;; int32[] _encoder1_pos
     (write-long (length _encoder1_pos) s)
     (dotimes (i (length _encoder1_pos))
       (write-long (elt _encoder1_pos i) s)
       )
     ;; int32[] _displacement
     (write-long (length _displacement) s)
     (dotimes (i (length _displacement))
       (write-long (elt _displacement i) s)
       )
     ;; int32[] _current
     (write-long (length _current) s)
     (dotimes (i (length _current))
       (write-long (elt _current i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32[] _setpoint
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _setpoint (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _setpoint i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _encoder0_pos
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _encoder0_pos (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _encoder0_pos i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _encoder1_pos
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _encoder1_pos (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _encoder1_pos i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _displacement
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _displacement (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _displacement i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _current
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _current (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _current i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get roboy_middleware_msgs::MotorState :md5sum-) "43b4e124c55bb2ff5cc2fe10577476dd")
(setf (get roboy_middleware_msgs::MotorState :datatype-) "roboy_middleware_msgs/MotorState")
(setf (get roboy_middleware_msgs::MotorState :definition-)
      "int32[] setpoint
int32[] encoder0_pos
int32[] encoder1_pos
int32[] displacement
int32[] current
")



(provide :roboy_middleware_msgs/MotorState "43b4e124c55bb2ff5cc2fe10577476dd")


