--- ./CMakeModules/UseCompat.cmake.orig	2022-05-06 08:57:14.000000000 +0200
+++ ./CMakeModules/UseCompat.cmake	2022-09-23 14:54:58.764665000 +0200
@@ -49,7 +49,7 @@
 
     include(CheckStructHasMember)
     check_struct_has_member("struct tm" tm_gmtoff time.h HAVE_TM_GMTOFF)
-    check_symbol_exists(timezone time.h HAVE_TIME_H_TIMEZONE)
+#    check_symbol_exists(timezone time.h HAVE_TIME_H_TIMEZONE)
 
     check_symbol_exists(realpath "stdlib.h" HAVE_REALPATH)
     check_symbol_exists(localtime_r "time.h" HAVE_LOCALTIME_R)
