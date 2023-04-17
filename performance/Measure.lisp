(load "~/.quicklisp/setup.lisp")
(ql:quickload "local-time" :silent t)
(add-package-local-nickname :lt :local-time)

(defun lsearch (v k)
    (loop :for i :in v
          :when (eq i k) return i))

(defvar n (parse-integer (nth 1 sb-ext:*posix-argv*)))
(defvar v (loop :for i :below n :collect i))
(defvar a)
(defvar b)

(setq b (lt:now))
(lsearch v n)
(setq a (lt:now))

(setq b (+ (* (lt:timestamp-to-unix b) 1000000000) (lt:nsec-of b)))
(setq a (+ (* (lt:timestamp-to-unix a) 1000000000) (lt:nsec-of a)))

(write (- a b))
(terpri)

(quit)
