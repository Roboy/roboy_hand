
(cl:in-package :asdf)

(defsystem "roboy_middleware_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :roboy_middleware_msgs-msg
)
  :components ((:file "_package")
    (:file "ControlMode" :depends-on ("_package_ControlMode"))
    (:file "_package_ControlMode" :depends-on ("_package"))
    (:file "DanceTrajectory" :depends-on ("_package_DanceTrajectory"))
    (:file "_package_DanceTrajectory" :depends-on ("_package"))
    (:file "EmergencyStop" :depends-on ("_package_EmergencyStop"))
    (:file "_package_EmergencyStop" :depends-on ("_package"))
    (:file "ForwardKinematics" :depends-on ("_package_ForwardKinematics"))
    (:file "_package_ForwardKinematics" :depends-on ("_package"))
    (:file "FrameIK" :depends-on ("_package_FrameIK"))
    (:file "_package_FrameIK" :depends-on ("_package"))
    (:file "Initialize" :depends-on ("_package_Initialize"))
    (:file "_package_Initialize" :depends-on ("_package"))
    (:file "InverseKinematics" :depends-on ("_package_InverseKinematics"))
    (:file "_package_InverseKinematics" :depends-on ("_package"))
    (:file "InverseKinematicsMultipleFrames" :depends-on ("_package_InverseKinematicsMultipleFrames"))
    (:file "_package_InverseKinematicsMultipleFrames" :depends-on ("_package"))
    (:file "JointController" :depends-on ("_package_JointController"))
    (:file "_package_JointController" :depends-on ("_package"))
    (:file "MotorCalibrationService" :depends-on ("_package_MotorCalibrationService"))
    (:file "_package_MotorCalibrationService" :depends-on ("_package"))
    (:file "MotorConfigService" :depends-on ("_package_MotorConfigService"))
    (:file "_package_MotorConfigService" :depends-on ("_package"))
    (:file "MyoBrickCalibrationService" :depends-on ("_package_MyoBrickCalibrationService"))
    (:file "_package_MyoBrickCalibrationService" :depends-on ("_package"))
    (:file "SetInt16" :depends-on ("_package_SetInt16"))
    (:file "_package_SetInt16" :depends-on ("_package"))
    (:file "SystemCheck" :depends-on ("_package_SystemCheck"))
    (:file "_package_SystemCheck" :depends-on ("_package"))
    (:file "TargetUpdate" :depends-on ("_package_TargetUpdate"))
    (:file "_package_TargetUpdate" :depends-on ("_package"))
    (:file "TorqueControl" :depends-on ("_package_TorqueControl"))
    (:file "_package_TorqueControl" :depends-on ("_package"))
    (:file "XL320" :depends-on ("_package_XL320"))
    (:file "_package_XL320" :depends-on ("_package"))
  ))