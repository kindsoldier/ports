--- ./shell.c.orig	2016-01-20 17:50:03.000000000 +0200
+++ ./shell.c	2016-02-04 20:41:23.654611000 +0200
@@ -68,7 +68,7 @@
 #endif
 
 #if HAVE_EDITLINE
-# include <editline/readline.h>
+# include <edit/readline/readline.h>
 #endif
 
 #if HAVE_EDITLINE || HAVE_READLINE
