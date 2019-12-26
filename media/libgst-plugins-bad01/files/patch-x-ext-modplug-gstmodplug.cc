--- ./ext/modplug/gstmodplug.cc.orig	2017-06-01 20:28:42.471473000 +0200
+++ ./ext/modplug/gstmodplug.cc	2017-06-01 20:28:19.854670000 +0200
@@ -50,7 +50,7 @@
 #define WORDS_BIGENDIAN 0
 #endif
 
-#include <stdafx.h>
+#include <libmodplug/stdafx.h>
 #include <libmodplug/sndfile.h>
 
 #include "gstmodplug.h"
