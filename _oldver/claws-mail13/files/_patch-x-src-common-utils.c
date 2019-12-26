--- ./src/common/utils.c.orig	2015-10-11 10:19:33.000000000 +0200
+++ ./src/common/utils.c	2015-10-24 19:48:44.533572000 +0200
@@ -49,6 +49,7 @@
 #include <ctype.h>
 #include <errno.h>
 #include <sys/param.h>
+#include <sys/socket.h>
 
 #if (HAVE_WCTYPE_H && HAVE_WCHAR_H)
 #  include <wchar.h>
