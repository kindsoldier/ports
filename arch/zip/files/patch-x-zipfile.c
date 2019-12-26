--- ./zipfile.c.orig	2008-07-01 07:15:30.000000000 +0300
+++ ./zipfile.c	2009-08-17 12:24:57.000000000 +0300
@@ -27,6 +27,10 @@
 /* for toupper() */
 #include <ctype.h>
 
+#ifdef __FreeBSD__
+#include <sys/param.h>
+#endif
+
 #ifdef VMS
 #  include "vms/vms.h"
 #  include "vms/vmsmunch.h"
@@ -230,6 +234,18 @@
  local void cutpath OF((char *p, int delim));
 #endif /* !UTIL */
 
+#ifdef __FreeBSD__
+#if __FreeBSD_version < 500028
+local off_t fsize(FILE *f) {
+    struct stat s;
+
+    if (f == NULL) return 0;
+    if (fstat(fileno(f), &s) < 0) return 0;
+    return s.st_size;
+}
+#endif
+#endif
+
 /*
  * XXX end of zipfile.h
  */
