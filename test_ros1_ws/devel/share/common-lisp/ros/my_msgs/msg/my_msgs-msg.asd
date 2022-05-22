
(cl:in-package :asdf)

(defsystem "my_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "CustomString" :depends-on ("_package_CustomString"))
    (:file "_package_CustomString" :depends-on ("_package"))
  ))