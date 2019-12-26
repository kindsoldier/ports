--- ./libguile/__scm.h.orig	2010-12-13 19:25:01.000000000 +0200
+++ ./libguile/__scm.h	2014-01-06 21:26:21.000000000 +0300
@@ -434,7 +434,8 @@
  * that all the state of the process is contained in the stack.
  */
 
-#if defined (sparc) || defined (__sparc__) || defined (__sparc)
+#if (defined (sparc) || defined (__sparc__) || defined (__sparc)) && \
+    (!defined(__FreeBSD__))
 # define SCM_FLUSH_REGISTER_WINDOWS asm("ta 3")
 #else
 # define SCM_FLUSH_REGISTER_WINDOWS /* empty */
