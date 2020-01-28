;; Auto-generated. Do not edit!


(when (boundp 'roboy_middleware_msgs::MotorInfo)
  (if (not (find-package "ROBOY_MIDDLEWARE_MSGS"))
    (make-package "ROBOY_MIDDLEWARE_MSGS"))
  (shadow 'MotorInfo (find-package "ROBOY_MIDDLEWARE_MSGS")))
(unless (find-package "ROBOY_MIDDLEWARE_MSGS::MOTORINFO")
  (make-package "ROBOY_MIDDLEWARE_MSGS::MOTORINFO"))

(in-package "ROS")
;;//! \htmlinclude MotorInfo.msg.html


(defclass roboy_middleware_msgs::MotorInfo
  :super ros::object
  :slots (_setpoint _control_mode _Kp _Ki _Kd _deadband _IntegralLimit _PWMLimit _pwm _communication_quality _gearBoxRatio ))

(defmethod roboy_middleware_msgs::MotorInfo
  (:init
   (&key
    ((:setpoint __setpoint) (make-array 0 :initial-element 0 :element-type :integer))
    ((:control_mode __control_mode) (make-array 0 :initial-element 0 :element-type :char))
    ((:Kp __Kp) (make-array 0 :initial-element 0 :element-type :integer))
    ((:Ki __Ki) (make-array 0 :initial-element 0 :element-type :integer))
    ((:Kd __Kd) (make-array 0 :initial-element 0 :element-type :integer))
    ((:deadband __deadband) (make-array 0 :initial-element 0 :element-type :integer))
    ((:IntegralLimit __IntegralLimit) (make-array 0 :initial-element 0 :element-type :integer))
    ((:PWMLimit __PWMLimit) (make-array 0 :initial-element 0 :element-type :integer))
    ((:pwm __pwm) (make-array 0 :initial-element 0 :element-type :integer))
    ((:communication_quality __communication_quality) (make-array 0 :initial-element 0 :element-type :integer))
    ((:gearBoxRatio __gearBoxRatio) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _setpoint __setpoint)
   (setq _control_mode __control_mode)
   (setq _Kp __Kp)
   (setq _Ki __Ki)
   (setq _Kd __Kd)
   (setq _deadband __deadband)
   (setq _IntegralLimit __IntegralLimit)
   (setq _PWMLimit __PWMLimit)
   (setq _pwm __pwm)
   (setq _communication_quality __communication_quality)
   (setq _gearBoxRatio __gearBoxRatio)
   self)
  (:setpoint
   (&optional __setpoint)
   (if __setpoint (setq _setpoint __setpoint)) _setpoint)
  (:control_mode
   (&optional __control_mode)
   (if __control_mode (setq _control_mode __control_mode)) _control_mode)
  (:Kp
   (&optional __Kp)
   (if __Kp (setq _Kp __Kp)) _Kp)
  (:Ki
   (&optional __Ki)
   (if __Ki (setq _Ki __Ki)) _Ki)
  (:Kd
   (&optional __Kd)
   (if __Kd (setq _Kd __Kd)) _Kd)
  (:deadband
   (&optional __deadband)
   (if __deadband (setq _deadband __deadband)) _deadband)
  (:IntegralLimit
   (&optional __IntegralLimit)
   (if __IntegralLimit (setq _IntegralLimit __IntegralLimit)) _IntegralLimit)
  (:PWMLimit
   (&optional __PWMLimit)
   (if __PWMLimit (setq _PWMLimit __PWMLimit)) _PWMLimit)
  (:pwm
   (&optional __pwm)
   (if __pwm (setq _pwm __pwm)) _pwm)
  (:communication_quality
   (&optional __communication_quality)
   (if __communication_quality (setq _communication_quality __communication_quality)) _communication_quality)
  (:gearBoxRatio
   (&optional __gearBoxRatio)
   (if __gearBoxRatio (setq _gearBoxRatio __gearBoxRatio)) _gearBoxRatio)
  (:serialization-length
   ()
   (+
    ;; int32[] _setpoint
    (* 4    (length _setpoint)) 4
    ;; uint8[] _control_mode
    (* 1    (length _control_mode)) 4
    ;; int32[] _Kp
    (* 4    (length _Kp)) 4
    ;; int32[] _Ki
    (* 4    (length _Ki)) 4
    ;; int32[] _Kd
    (* 4    (length _Kd)) 4
    ;; int32[] _deadband
    (* 4    (length _deadband)) 4
    ;; int32[] _IntegralLimit
    (* 4    (length _IntegralLimit)) 4
    ;; int32[] _PWMLimit
    (* 4    (length _PWMLimit)) 4
    ;; int32[] _pwm
    (* 4    (length _pwm)) 4
    ;; int32[] _communication_quality
    (* 4    (length _communication_quality)) 4
    ;; int32[] _gearBoxRatio
    (* 4    (length _gearBoxRatio)) 4
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
     ;; uint8[] _control_mode
     (write-long (length _control_mode) s)
     (princ _control_mode s)
     ;; int32[] _Kp
     (write-long (length _Kp) s)
     (dotimes (i (length _Kp))
       (write-long (elt _Kp i) s)
       )
     ;; int32[] _Ki
     (write-long (length _Ki) s)
     (dotimes (i (length _Ki))
       (write-long (elt _Ki i) s)
       )
     ;; int32[] _Kd
     (write-long (length _Kd) s)
     (dotimes (i (length _Kd))
       (write-long (elt _Kd i) s)
       )
     ;; int32[] _deadband
     (write-long (length _deadband) s)
     (dotimes (i (length _deadband))
       (write-long (elt _deadband i) s)
       )
     ;; int32[] _IntegralLimit
     (write-long (length _IntegralLimit) s)
     (dotimes (i (length _IntegralLimit))
       (write-long (elt _IntegralLimit i) s)
       )
     ;; int32[] _PWMLimit
     (write-long (length _PWMLimit) s)
     (dotimes (i (length _PWMLimit))
       (write-long (elt _PWMLimit i) s)
       )
     ;; int32[] _pwm
     (write-long (length _pwm) s)
     (dotimes (i (length _pwm))
       (write-long (elt _pwm i) s)
       )
     ;; int32[] _communication_quality
     (write-long (length _communication_quality) s)
     (dotimes (i (length _communication_quality))
       (write-long (elt _communication_quality i) s)
       )
     ;; int32[] _gearBoxRatio
     (write-long (length _gearBoxRatio) s)
     (dotimes (i (length _gearBoxRatio))
       (write-long (elt _gearBoxRatio i) s)
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
   ;; uint8[] _control_mode
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _control_mode (make-array n :element-type :char))
     (replace _control_mode buf :start2 ptr-) (incf ptr- n))
   ;; int32[] _Kp
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _Kp (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _Kp i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _Ki
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _Ki (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _Ki i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _Kd
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _Kd (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _Kd i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _deadband
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _deadband (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _deadband i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _IntegralLimit
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _IntegralLimit (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _IntegralLimit i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _PWMLimit
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _PWMLimit (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _PWMLimit i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _pwm
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _pwm (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _pwm i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _communication_quality
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _communication_quality (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _communication_quality i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _gearBoxRatio
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _gearBoxRatio (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _gearBoxRatio i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get roboy_middleware_msgs::MotorInfo :md5sum-) "909c2f506ccb6dd86a9edc36c33290ad")
(setf (get roboy_middleware_msgs::MotorInfo :datatype-) "roboy_middleware_msgs/MotorInfo")
(setf (get roboy_middleware_msgs::MotorInfo :definition-)
      "int32[] setpoint
uint8[] control_mode
int32[] Kp
int32[] Ki
int32[] Kd
int32[] deadband
int32[] IntegralLimit
int32[] PWMLimit
int32[] pwm
int32[] communication_quality
int32[] gearBoxRatio
")



(provide :roboy_middleware_msgs/MotorInfo "909c2f506ccb6dd86a9edc36c33290ad")


