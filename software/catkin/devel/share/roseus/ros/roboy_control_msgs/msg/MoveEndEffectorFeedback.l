;; Auto-generated. Do not edit!


(when (boundp 'roboy_control_msgs::MoveEndEffectorFeedback)
  (if (not (find-package "ROBOY_CONTROL_MSGS"))
    (make-package "ROBOY_CONTROL_MSGS"))
  (shadow 'MoveEndEffectorFeedback (find-package "ROBOY_CONTROL_MSGS")))
(unless (find-package "ROBOY_CONTROL_MSGS::MOVEENDEFFECTORFEEDBACK")
  (make-package "ROBOY_CONTROL_MSGS::MOVEENDEFFECTORFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude MoveEndEffectorFeedback.msg.html


(defclass roboy_control_msgs::MoveEndEffectorFeedback
  :super ros::object
  :slots (_error ))

(defmethod roboy_control_msgs::MoveEndEffectorFeedback
  (:init
   (&key
    ((:error __error) 0.0)
    )
   (send-super :init)
   (setq _error (float __error))
   self)
  (:error
   (&optional __error)
   (if __error (setq _error __error)) _error)
  (:serialization-length
   ()
   (+
    ;; float32 _error
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _error
       (sys::poke _error (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _error
     (setq _error (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get roboy_control_msgs::MoveEndEffectorFeedback :md5sum-) "417c68e466c6131d4fed652219a9ccb7")
(setf (get roboy_control_msgs::MoveEndEffectorFeedback :datatype-) "roboy_control_msgs/MoveEndEffectorFeedback")
(setf (get roboy_control_msgs::MoveEndEffectorFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
float32 error


")



(provide :roboy_control_msgs/MoveEndEffectorFeedback "417c68e466c6131d4fed652219a9ccb7")


