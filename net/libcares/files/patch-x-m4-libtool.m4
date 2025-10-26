--- ./m4/libtool.m4.orig	2024-12-14 17:15:42.000000000 +0200
+++ ./m4/libtool.m4	2025-08-28 05:27:53.276478000 +0200
@@ -2667,15 +2667,11 @@
   fi
   version_type=freebsd-$objformat
   case $version_type in
-    freebsd-elf*)
-      library_names_spec='$libname$release$shared_ext$versuffix $libname$release$shared_ext$major $libname$shared_ext'
-      soname_spec='$libname$release$shared_ext$major'
+    freebsd-*)
+      library_names_spec='$libname$shared_ext$major $libname$shared_ext'
+      soname_spec='$libname$shared_ext$major'
       need_version=no
       need_lib_prefix=no
-      ;;
-    freebsd-*)
-      library_names_spec='$libname$release$shared_ext$versuffix $libname$shared_ext$versuffix'
-      need_version=yes
       ;;
   esac
   shlibpath_var=LD_LIBRARY_PATH
