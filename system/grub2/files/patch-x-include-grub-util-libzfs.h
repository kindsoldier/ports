--- ./include/grub/util/libzfs.h.orig	2010-12-26 17:00:40.000000000 +0200
+++ ./include/grub/util/libzfs.h	2015-10-14 15:40:30.996093000 +0200
@@ -22,6 +22,9 @@
 #include <config.h>
 
 #ifdef HAVE_LIBZFS_H
+#ifdef __FreeBSD__
+typedef int boolean_t;
+#endif
 #include <libzfs.h>
 #else /* ! HAVE_LIBZFS_H */
 
