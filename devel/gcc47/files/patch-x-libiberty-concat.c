--- ./libiberty/concat.c.orig	2011-02-03 09:23:20.000000000 +0200
+++ ./libiberty/concat.c	2016-03-22 06:16:17.796526000 +0200
@@ -48,7 +48,6 @@
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif
-#include "ansidecl.h"
 #include "libiberty.h"
 #include <sys/types.h>		/* size_t */
 
@@ -66,6 +65,9 @@
 #include <stdlib.h>
 #endif
 
+#include "ansidecl.h"
+
+
 static inline unsigned long vconcat_length (const char *, va_list);
 static inline unsigned long
 vconcat_length (const char *first, va_list args)
