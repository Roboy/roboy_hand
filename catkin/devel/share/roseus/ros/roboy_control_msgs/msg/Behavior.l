;; Auto-generated. Do not edit!


(when (boundp 'roboy_control_msgs::Behavior)
  (if (not (find-package "ROBOY_CONTROL_MSGS"))
    (make-package "ROBOY_CONTROL_MSGS"))
  (shadow 'Behavior (find-package "ROBOY_CONTROL_MSGS")))
(unless (find-package "ROBOY_CONTROL_MSGS::BEHAVIOR")
  (make-package "ROBOY_CONTROL_MSGS::BEHAVIOR"))

(in-package "ROS")
;;//! \htmlinclude Behavior.msg.html


(defclass roboy_control_msgs::Behavior
  :super ros::object
  :slots (_name _actions ))

(defmethod roboy_control_msgs::Behavior
  (:init
   (&key
    ((:name __name) "")
    ((:actions __actions) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _actions __actions)
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:actions
   (&optional __actions)
   (if __actions (setq _actions __actions)) _actions)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; string[] _actions
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _actions)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; string[] _actions
     (write-long (length _actions) s)
     (dolist (elem _actions)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string[] _actions
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _actions (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _actions i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(setf (get roboy_control_msgs::Behavior :md5sum-) "1439b42a51d7a5af5bda5f56b4e3897d")
(setf (get roboy_control_msgs::Behavior :datatype-) "roboy_control_msgs/Behavior")
(setf (get roboy_control_msgs::Behavior :definition-)
      "string name
string[] actions
")



(provide :roboy_control_msgs/Behavior "1439b42a51d7a5af5bda5f56b4e3897d")


