;; Auto-generated. Do not edit!


(when (boundp 'roboy_middleware_msgs::MotorConfig)
  (if (not (find-package "ROBOY_MIDDLEWARE_MSGS"))
    (make-package "ROBOY_MIDDLEWARE_MSGS"))
  (shadow 'MotorConfig (find-package "ROBOY_MIDDLEWARE_MSGS")))
(unless (find-package "ROBOY_MIDDLEWARE_MSGS::MOTORCONFIG")
  (make-package "ROBOY_MIDDLEWARE_MSGS::MOTORCONFIG"))

(in-package "ROS")
;;//! \htmlinclude MotorConfig.msg.html


(defclass roboy_middleware_msgs::MotorConfig
  :super ros::object
  :slots (_update_frequency _motor _control_mode _PWMLimit _IntegralLimit _Kp _Ki _Kd _deadband _setpoint _gearBoxRatio ))

(defmethod roboy_middleware_msgs::MotorConfig
  (:init
   (&key
    ((:update_frequency __update_frequency) (make-array 0 :initial-element 0 :element-type :integer))
    ((:motor __motor) (make-array 0 :initial-element 0 :element-type :char))
    ((:control_mode __control_mode) (make-array 0 :initial-element 0 :element-type :char))
    ((:PWMLimit __PWMLimit) (make-array 0 :initial-element 0 :element-type :integer))
    ((:IntegralLimit __IntegralLimit) (make-array 0 :initial-element 0 :element-type :integer))
    ((:Kp __Kp) (make-array 0 :initial-element 0 :element-type :integer))
    ((:Ki __Ki) (make-array 0 :initial-element 0 :element-type :integer))
    ((:Kd __Kd) (make-array 0 :initial-element 0 :element-type :integer))
    ((:deadband __deadband) (make-array 0 :initial-element 0 :element-type :integer))
    ((:setpoint __setpoint) (make-array 0 :initial-element 0 :element-type :integer))
    ((:gearBoxRatio __gearBoxRatio) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _update_frequency __update_frequency)
   (setq _motor __motor)
   (setq _control_mode __control_mode)
   (setq _PWMLimit __PWMLimit)
   (setq _IntegralLimit __IntegralLimit)
   (setq _Kp __Kp)
   (setq _Ki __Ki)
   (setq _Kd __Kd)
   (setq _deadband __deadband)
   (setq _setpoint __setpoint)
   (setq _gearBoxRatio __gearBoxRatio)
   self)
  (:update_frequency
   (&optional __update_frequency)
   (if __update_frequency (setq _update_frequency __update_frequency)) _update_frequency)
  (:motor
   (&optional __motor)
   (if __motor (setq _motor __motor)) _motor)
  (:control_mode
   (&optional __control_mode)
   (if __control_mode (setq _control_mode __control_mode)) _control_mode)
  (:PWMLimit
   (&optional __PWMLimit)
   (if __PWMLimit (setq _PWMLimit __PWMLimit)) _PWMLimit)
  (:IntegralLimit
   (&optional __IntegralLimit)
   (if __IntegralLimit (setq _IntegralLimit __IntegralLimit)) _IntegralLimit)
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
  (:setpoint
   (&optional __setpoint)
   (if __setpoint (setq _setpoint __setpoint)) _setpoint)
  (:gearBoxRatio
   (&optional __gearBoxRatio)
   (if __gearBoxRatio (setq _gearBoxRatio __gearBoxRatio)) _gearBoxRatio)
  (:serialization-length
   ()
   (+
    ;; int32[] _update_frequency
    (* 4    (length _update_frequency)) 4
    ;; uint8[] _motor
    (* 1    (length _motor)) 4
    ;; uint8[] _control_mode
    (* 1    (length _control_mode)) 4
    ;; int32[] _PWMLimit
    (* 4    (length _PWMLimit)) 4
    ;; int32[] _IntegralLimit
    (* 4    (length _IntegralLimit)) 4
    ;; int32[] _Kp
    (* 4    (length _Kp)) 4
    ;; int32[] _Ki
    (* 4    (length _Ki)) 4
    ;; int32[] _Kd
    (* 4    (length _Kd)) 4
    ;; int32[] _deadband
    (* 4    (length _deadband)) 4
    ;; int32[] _setpoint
    (* 4    (length _setpoint)) 4
    ;; int32[] _gearBoxRatio
    (* 4    (length _gearBoxRatio)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32[] _update_frequency
     (write-long (length _update_frequency) s)
     (dotimes (i (length _update_frequency))
       (write-long (elt _update_frequency i) s)
       )
     ;; uint8[] _motor
     (write-long (length _motor) s)
     (princ _motor s)
     ;; uint8[] _control_mode
     (write-long (length _control_mode) s)
     (princ _control_mode s)
     ;; int32[] _PWMLimit
     (write-long (length _PWMLimit) s)
     (dotimes (i (length _PWMLimit))
       (write-long (elt _PWMLimit i) s)
       )
     ;; int32[] _IntegralLimit
     (write-long (length _IntegralLimit) s)
     (dotimes (i (length _IntegralLimit))
       (write-long (elt _IntegralLimit i) s)
       )
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
     ;; int32[] _setpoint
     (write-long (length _setpoint) s)
     (dotimes (i (length _setpoint))
       (write-long (elt _setpoint i) s)
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
   ;; int32[] _update_frequency
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _update_frequency (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _update_frequency i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; uint8[] _motor
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _motor (make-array n :element-type :char))
     (replace _motor buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _control_mode
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _control_mode (make-array n :element-type :char))
     (replace _control_mode buf :start2 ptr-) (incf ptr- n))
   ;; int32[] _PWMLimit
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _PWMLimit (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _PWMLimit i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; int32[] _IntegralLimit
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _IntegralLimit (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _IntegralLimit i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
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
   ;; int32[] _setpoint
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _setpoint (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _setpoint i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
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

(setf (get roboy_middleware_msgs::MotorConfig :md5sum-) "e8035a85d6754846f143f80bcf9f5f79")
(setf (get roboy_middleware_msgs::MotorConfig :datatype-) "roboy_middleware_msgs/MotorConfig")
(setf (get roboy_middleware_msgs::MotorConfig :definition-)
      "int32[] update_frequency
uint8[] motor
uint8[] control_mode
int32[] PWMLimit
int32[] IntegralLimit
int32[] Kp
int32[] Ki
int32[] Kd
int32[] deadband
int32[] setpoint
int32[] gearBoxRatio
")



(provide :roboy_middleware_msgs/MotorConfig "e8035a85d6754846f143f80bcf9f5f79")


