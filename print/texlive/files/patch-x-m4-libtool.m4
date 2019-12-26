--- ./m4/libtool.m4.orig	2015-02-16 16:34:50.000000000 +0200
+++ ./m4/libtool.m4	2015-11-08 16:52:03.254154000 +0200
@@ -2668,16 +2668,12 @@
   fi
   version_type=freebsd-$objformat
   case $version_type in
-    freebsd-elf*)
+    freebsd-*)
       library_names_spec='$libname$release$shared_ext$versuffix $libname$release$shared_ext$major $libname$shared_ext'
       soname_spec='$libname$release$shared_ext$major'
       need_version=no
       need_lib_prefix=no
       ;;
-    freebsd-*)
-      library_names_spec='$libname$release$shared_ext$versuffix $libname$shared_ext$versuffix'
-      need_version=yes
-      ;;
   esac
   shlibpath_var=LD_LIBRARY_PATH
   case $host_os in
