;; Auto-generated. Do not edit!


(when (boundp 'roboy_middleware_msgs::HandStatus)
  (if (not (find-package "ROBOY_MIDDLEWARE_MSGS"))
    (make-package "ROBOY_MIDDLEWARE_MSGS"))
  (shadow 'HandStatus (find-package "ROBOY_MIDDLEWARE_MSGS")))
(unless (find-package "ROBOY_MIDDLEWARE_MSGS::HANDSTATUS")
  (make-package "ROBOY_MIDDLEWARE_MSGS::HANDSTATUS"))

(in-package "ROS")
;;//! \htmlinclude HandStatus.msg.html


(defclass roboy_middleware_msgs::HandStatus
  :super ros::object
  :slots (_hand_id _finger_pos _finger_current _gyro_data _imu_data ))

(defmethod roboy_middleware_msgs::HandStatus
  (:init
   (&key
    ((:hand_id __hand_id) 0)
    ((:finger_pos __finger_pos) (make-array 0 :initial-element 0 :element-type :integer))
    ((:finger_current __finger_current) (make-array 0 :initial-element 0 :element-type :integer))
    ((:gyro_data __gyro_data) (make-array 0 :initial-element 0 :element-type :integer))
    ((:imu_data __imu_data) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _hand_id (round __hand_id))
   (setq _finger_pos __finger_pos)
   (setq _finger_current __finger_current)
   (setq _gyro_data __gyro_data)
   (setq _imu_data __imu_data)
   self)
  (:hand_id
   (&optional __hand_id)
   (if __hand_id (setq _hand_id __hand_id)) _hand_id)
  (:finger_pos
   (&optional __finger_pos)
   (if __finger_pos (setq _finger_pos __finger_pos)) _finger_pos)
  (:finger_current
   (&optional __finger_current)
   (if __finger_current (setq _finger_current __finger_current)) _finger_current)
  (:gyro_data
   (&optional __gyro_data)
   (if __gyro_data (setq _gyro_data __gyro_data)) _gyro_data)
  (:imu_data
   (&optional __imu_data)
   (if __imu_data (setq _imu_data __imu_data)) _imu_data)
  (:serialization-length
   ()
   (+
    ;; uint8 _hand_id
    1
    ;; uint16[] _finger_pos
    (* 2    (length _finger_pos)) 4
    ;; uint32[] _finger_current
    (* 4    (length _finger_current)) 4
    ;; uint32[] _gyro_data
    (* 4    (length _gyro_data)) 4
    ;; uint32[] _imu_data
    (* 4    (length _imu_data)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _hand_id
       (write-byte _hand_id s)
     ;; uint16[] _finger_pos
     (write-long (length _finger_pos) s)
     (dotimes (i (length _finger_pos))
       (write-word (elt _finger_pos i) s)
       )
     ;; uint32[] _finger_current
     (write-long (length _finger_current) s)
     (dotimes (i (length _finger_current))
       (write-long (elt _finger_current i) s)
       )
     ;; uint32[] _gyro_data
     (write-long (length _gyro_data) s)
     (dotimes (i (length _gyro_data))
       (write-long (elt _gyro_data i) s)
       )
     ;; uint32[] _imu_data
     (write-long (length _imu_data) s)
     (dotimes (i (length _imu_data))
       (write-long (elt _imu_data i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _hand_id
     (setq _hand_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint16[] _finger_pos
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _finger_pos (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _finger_pos i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     ))
   ;; uint32[] _finger_current
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _finger_current (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _finger_current i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; uint32[] _gyro_data
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _gyro_data (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _gyro_data i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; uint32[] _imu_data
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _imu_data (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _imu_data i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get roboy_middleware_msgs::HandStatus :md5sum-) "e0e7307277d4dcab3439944624663fb0")
(setf (get roboy_middleware_msgs::HandStatus :datatype-) "roboy_middleware_msgs/HandStatus")
(setf (get roboy_middleware_msgs::HandStatus :definition-)
      "uint8 hand_id
uint16[] finger_pos
uint32[] finger_current
uint32[] gyro_data
uint32[] imu_data

")



(provide :roboy_middleware_msgs/HandStatus "e0e7307277d4dcab3439944624663fb0")


