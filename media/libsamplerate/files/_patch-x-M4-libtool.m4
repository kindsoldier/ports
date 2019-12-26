--- ./M4/libtool.m4.orig	2016-08-20 14:34:31.000000000 +0200
+++ ./M4/libtool.m4	2017-03-15 17:28:43.110418000 +0200
@@ -2667,13 +2667,7 @@
   fi
   version_type=freebsd-$objformat
   case $version_type in
-    freebsd-elf*)
-      library_names_spec='$libname$release$shared_ext$versuffix $libname$release$shared_ext$major $libname$shared_ext'
-      soname_spec='$libname$release$shared_ext$major'
-      need_version=no
-      need_lib_prefix=no
-      ;;
-    freebsd-*)
+    freebsd*)
       library_names_spec='$libname$release$shared_ext$versuffix $libname$shared_ext$versuffix'
       need_version=yes
       ;;
