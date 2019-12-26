--- ./libguile/numbers.c.orig	2010-12-13 19:25:01.000000000 +0200
+++ ./libguile/numbers.c	2019-01-20 20:28:47.686400000 +0200
@@ -160,7 +160,7 @@
 }
 
 #if defined (GUILE_I)
-#if HAVE_COMPLEX_DOUBLE
+#if HAVE_COMPLEX_DOUBLE && (HAVE_CLOG || HAVE_CLOG10 || HAVE_CEXP || HAVE_USABLE_CSQRT) && defined (SCM_COMPLEX_VALUE)
 
 /* For an SCM object Z which is a complex number (ie. satisfies
    SCM_COMPLEXP), return its value as a C level "complex double". */
