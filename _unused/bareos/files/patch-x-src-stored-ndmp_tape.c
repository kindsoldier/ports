--- ./src/stored/ndmp_tape.c.orig	2016-09-09 15:11:35.000000000 +0200
+++ ./src/stored/ndmp_tape.c	2016-10-31 13:27:35.600975000 +0200
@@ -483,6 +483,16 @@
    statp.st_blksize = 4096;
    statp.st_blocks = 1;
 
+   if (!dcr) {
+      Dmsg0(100, "No dcr defined, bailing out\n");
+      return retval;
+   }
+
+   if (!dcr->rec) {
+      Dmsg0(100, "No dcr->rec defined, bailing out\n");
+      return retval;
+   }
+
    /*
     * Encode a stat structure into an ASCII string.
     */
