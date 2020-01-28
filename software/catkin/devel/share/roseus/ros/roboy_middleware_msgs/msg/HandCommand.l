;; Auto-generated. Do not edit!


(when (boundp 'roboy_middleware_msgs::HandCommand)
  (if (not (find-package "ROBOY_MIDDLEWARE_MSGS"))
    (make-package "ROBOY_MIDDLEWARE_MSGS"))
  (shadow 'HandCommand (find-package "ROBOY_MIDDLEWARE_MSGS")))
(unless (find-package "ROBOY_MIDDLEWARE_MSGS::HANDCOMMAND")
  (make-package "ROBOY_MIDDLEWARE_MSGS::HANDCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude HandCommand.msg.html


(defclass roboy_middleware_msgs::HandCommand
  :super ros::object
  :slots (_hand_id _gesture _finger_pos _finger_speed ))

(defmethod roboy_middleware_msgs::HandCommand
  (:init
   (&key
    ((:hand_id __hand_id) 0)
    ((:gesture __gesture) 0)
    ((:finger_pos __finger_pos) (make-array 0 :initial-element 0 :element-type :integer))
    ((:finger_speed __finger_speed) (make-array 0 :initial-element 0 :element-type :char))
    )
   (send-super :init)
   (setq _hand_id (round __hand_id))
   (setq _gesture (round __gesture))
   (setq _finger_pos __finger_pos)
   (setq _finger_speed __finger_speed)
   self)
  (:hand_id
   (&optional __hand_id)
   (if __hand_id (setq _hand_id __hand_id)) _hand_id)
  (:gesture
   (&optional __gesture)
   (if __gesture (setq _gesture __gesture)) _gesture)
  (:finger_pos
   (&optional __finger_pos)
   (if __finger_pos (setq _finger_pos __finger_pos)) _finger_pos)
  (:finger_speed
   (&optional __finger_speed)
   (if __finger_speed (setq _finger_speed __finger_speed)) _finger_speed)
  (:serialization-length
   ()
   (+
    ;; uint8 _hand_id
    1
    ;; uint8 _gesture
    1
    ;; uint16[] _finger_pos
    (* 2    (length _finger_pos)) 4
    ;; uint8[] _finger_speed
    (* 1    (length _finger_speed)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _hand_id
       (write-byte _hand_id s)
     ;; uint8 _gesture
       (write-byte _gesture s)
     ;; uint16[] _finger_pos
     (write-long (length _finger_pos) s)
     (dotimes (i (length _finger_pos))
       (write-word (elt _finger_pos i) s)
       )
     ;; uint8[] _finger_speed
     (write-long (length _finger_speed) s)
     (princ _finger_speed s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _hand_id
     (setq _hand_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _gesture
     (setq _gesture (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint16[] _finger_pos
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _finger_pos (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _finger_pos i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     ))
   ;; uint8[] _finger_speed
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _finger_speed (make-array n :element-type :char))
     (replace _finger_speed buf :start2 ptr-) (incf ptr- n))
   ;;
   self)
  )

(setf (get roboy_middleware_msgs::HandCommand :md5sum-) "67aa5bc29db86e2d5f7f09f60811f24e")
(setf (get roboy_middleware_msgs::HandCommand :datatype-) "roboy_middleware_msgs/HandCommand")
(setf (get roboy_middleware_msgs::HandCommand :definition-)
      "uint8 hand_id
uint8 gesture
uint16[] finger_pos
uint8[] finger_speed

")



(provide :roboy_middleware_msgs/HandCommand "67aa5bc29db86e2d5f7f09f60811f24e")


