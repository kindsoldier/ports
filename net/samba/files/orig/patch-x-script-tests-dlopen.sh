--- ./script/tests/dlopen.sh.orig	2010-06-11 14:22:12.000000000 +0300
+++ ./script/tests/dlopen.sh	2011-11-16 18:21:33.000000000 +0300
@@ -67,7 +67,7 @@
 	esac
 done
 
-${CC:-gcc} $RPM_OPT_FLAGS $CFLAGS -o $tempdir/dlopen $cflags $tempdir/dlopen.c $ldflags -ldl
+${CC:-gcc} $RPM_OPT_FLAGS $CFLAGS -o $tempdir/dlopen $cflags $tempdir/dlopen.c $ldflags
 
 retval=0
 for module in $modules ; do
