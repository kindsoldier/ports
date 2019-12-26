--- ./src/secp256k1/src/tests.c.orig	2018-05-23 04:04:24.000000000 +0200
+++ ./src/secp256k1/src/tests.c	2018-09-01 04:37:44.214407000 +0200
@@ -12,6 +12,8 @@
 #include <stdlib.h>
 #include <string.h>
 
+#include <sys/signal.h>
+
 #include <time.h>
 
 #include "secp256k1.c"
