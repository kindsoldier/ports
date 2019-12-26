--- ./unix/unix.c.orig	2009-01-24 01:31:26.000000000 +0200
+++ ./unix/unix.c	2015-10-10 07:26:16.762993000 +0200
@@ -1239,6 +1239,16 @@
     if (fchmod(fileno(G.outfile), filtattr(__G__ G.pInfo->file_attr)))
         perror("fchmod (file attributes) error");
 
+/*---------------------------------------------------------------------------
+    Change the file permissions from default ones to those stored in the
+    zipfile.
+  ---------------------------------------------------------------------------*/
+	  
+#ifndef NO_CHMOD
+    if (fchmod(fileno(G.outfile), filtattr(__G__ G.pInfo->file_attr)))
+        perror("fchmod (file attributes) error");
+#endif
+
     fclose(G.outfile);
 #endif /* !NO_FCHOWN && !NO_FCHMOD */
 
