--- ./build/make/configure.sh.orig	2017-05-08 10:05:46.776322000 +0200
+++ ./build/make/configure.sh	2017-05-08 10:07:46.435874000 +0200
@@ -1363,7 +1363,7 @@
     if enabled rvct; then
       enabled small && check_add_cflags -Ospace || check_add_cflags -Otime
     else
-      enabled small && check_add_cflags -O2 ||  check_add_cflags -O3
+      enabled small && check_add_cflags -O2 ||  check_add_cflags -O2
     fi
   fi
 
