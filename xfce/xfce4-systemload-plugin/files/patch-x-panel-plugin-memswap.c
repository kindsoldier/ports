--- ./panel-plugin/memswap.c.orig	2012-04-18 22:01:19.000000000 +0300
+++ ./panel-plugin/memswap.c	2013-09-20 16:29:03.000000000 +0300
@@ -208,7 +208,7 @@
 gint read_memswap(gulong *mem, gulong *swap, gulong *MT, gulong *MU, gulong *ST, gulong *SU)
 {
     int total_pages;
-    int free_pages;
+    u_int free_pages;
     int inactive_pages;
     int pagesize = getpagesize();
     int swap_avail;
