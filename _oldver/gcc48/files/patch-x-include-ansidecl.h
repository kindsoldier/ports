--- ./include/ansidecl.h.orig	2011-10-22 04:35:29.000000000 +0300
+++ ./include/ansidecl.h	2016-03-22 06:15:13.229662000 +0200
@@ -141,7 +141,7 @@
 #define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
 #endif /* GCC_VERSION */
 
-#if defined (__STDC__) || defined(__cplusplus) || defined (_AIX) || (defined (__mips) && defined (_SYSTYPE_SVR4)) || defined(_WIN32)
+#if defined (__STDC__) || defined (__FreeBSD__) || defined(__cplusplus) || defined (_AIX) || (defined (__mips) && defined (_SYSTYPE_SVR4)) || defined(_WIN32)
 /* All known AIX compilers implement these things (but don't always
    define __STDC__).  The RISC/OS MIPS compiler defines these things
    in SVR4 mode, but does not define __STDC__.  */
