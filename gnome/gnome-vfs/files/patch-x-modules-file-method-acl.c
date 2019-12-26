--- ./modules/file-method-acl.c.orig	2010-02-09 14:16:14.000000000 +0200
+++ ./modules/file-method-acl.c	2015-01-05 21:19:09.000000000 +0200
@@ -47,7 +47,7 @@
 #endif
 
 #ifdef HAVE_POSIX_ACL
-# include <acl/libacl.h>
+# include <sys/acl.h>
 #define HAVE_ACL 1
 #endif
 
