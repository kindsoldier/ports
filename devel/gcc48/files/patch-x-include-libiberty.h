--- ./include/libiberty.h.orig	2011-09-28 22:04:30.000000000 +0300
+++ ./include/libiberty.h	2016-03-22 06:10:12.476899000 +0200
@@ -40,7 +40,6 @@
 extern "C" {
 #endif
 
-#include "ansidecl.h"
 
 /* Get a definition for size_t.  */
 #include <stddef.h>
@@ -49,6 +48,9 @@
 
 #include <stdio.h>
 
+#include "ansidecl.h"
+
+
 /* If the OS supports it, ensure that the supplied stream is setup to
    avoid any multi-threaded locking.  Otherwise leave the FILE pointer
    unchanged.  If the stream is NULL do nothing.  */
@@ -85,11 +87,11 @@
 
 /* Expand "@file" arguments in argv.  */
 
-extern void expandargv PARAMS ((int *, char ***));
+extern void expandargv (int *, char ***);
 
 /* Write argv to an @-file, inserting necessary quoting.  */
 
-extern int writeargv PARAMS ((char **, FILE *));
+extern int writeargv (char **, FILE *);
 
 /* Return the number of elements in argv.  */
 
