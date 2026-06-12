--- ./src/altlog.c.orig	2019-04-02 16:00:39.000000000 +0200
+++ ./src/altlog.c	2019-10-31 22:16:36.247262000 +0200
@@ -219,7 +219,7 @@
     if (!SNCHECK(snprintf(alloca_line, line_size,
                           "%s - %s [%s] \"%s %s\" 200 %llu\n",
                           host_, account_, date,
-                          upload == 0 ? "GET" : "PUT", quoted_filename,
+                          upload == 0 ? "GET" : "PUT", filename,
                           (unsigned long long) size), line_size)) {
         altlog_write(alloca_line);
     }
