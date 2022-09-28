--- ./main/features.c.orig	2014-07-26 02:13:48.000000000 +0300
+++ ./main/features.c	2014-09-26 14:04:50.000000000 +0300
@@ -112,7 +112,7 @@
  * party B channel technology in the channel bridge to complete
  * hanging up the channel technology.
  */
-//#define ATXFER_NULL_TECH	1
+#define ATXFER_NULL_TECH	1
 
 /*** DOCUMENTATION
 	<application name="Bridge" language="en_US">
