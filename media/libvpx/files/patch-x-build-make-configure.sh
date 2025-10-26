--- ./build/make/configure.sh.orig	2024-10-23 20:24:57.000000000 +0200
+++ ./build/make/configure.sh	2025-08-26 09:44:23.221334000 +0200
@@ -1592,7 +1592,7 @@
     if enabled rvct; then
       enabled small && check_add_cflags -Ospace || check_add_cflags -Otime
     else
-      enabled small && check_add_cflags -O2 ||  check_add_cflags -O3
+      enabled small && check_add_cflags -O2 ||  check_add_cflags -O2
     fi
   fi
 
