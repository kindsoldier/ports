--- ./src/LYCharSets.c.orig	2009-05-26 00:05:31.000000000 +0300
+++ ./src/LYCharSets.c	2009-09-01 22:08:16.000000000 +0300
@@ -872,7 +872,7 @@
  */
 UCode_t HTMLGetEntityUCValue(const char *name)
 {
-#include <entities.h>
+#include "chrtrans/entities.h"
 
     UCode_t value = 0;
     size_t i, high, low;
