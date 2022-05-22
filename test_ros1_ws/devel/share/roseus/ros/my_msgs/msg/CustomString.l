;; Auto-generated. Do not edit!


(when (boundp 'my_msgs::CustomString)
  (if (not (find-package "MY_MSGS"))
    (make-package "MY_MSGS"))
  (shadow 'CustomString (find-package "MY_MSGS")))
(unless (find-package "MY_MSGS::CUSTOMSTRING")
  (make-package "MY_MSGS::CUSTOMSTRING"))

(in-package "ROS")
;;//! \htmlinclude CustomString.msg.html


(defclass my_msgs::CustomString
  :super ros::object
  :slots (_my_data ))

(defmethod my_msgs::CustomString
  (:init
   (&key
    ((:my_data __my_data) "")
    )
   (send-super :init)
   (setq _my_data (string __my_data))
   self)
  (:my_data
   (&optional __my_data)
   (if __my_data (setq _my_data __my_data)) _my_data)
  (:serialization-length
   ()
   (+
    ;; string _my_data
    4 (length _my_data)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _my_data
       (write-long (length _my_data) s) (princ _my_data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _my_data
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _my_data (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get my_msgs::CustomString :md5sum-) "812e5b0223ac4003b51dc6f4c4f8fcbf")
(setf (get my_msgs::CustomString :datatype-) "my_msgs/CustomString")
(setf (get my_msgs::CustomString :definition-)
      "string my_data
")



(provide :my_msgs/CustomString "812e5b0223ac4003b51dc6f4c4f8fcbf")


