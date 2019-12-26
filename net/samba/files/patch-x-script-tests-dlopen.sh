--- ./script/tests/dlopen.sh.orig	2011-07-24 22:09:38.000000000 +0300
+++ ./script/tests/dlopen.sh	2015-01-02 17:21:25.000000000 +0200
@@ -67,7 +67,7 @@
 	esac
 done
 
-${CC:-gcc} $RPM_OPT_FLAGS $CFLAGS -o $tempdir/dlopen $cflags $tempdir/dlopen.c $ldflags -ldl
+${CC:-gcc} $RPM_OPT_FLAGS $CFLAGS -o $tempdir/dlopen $cflags $tempdir/dlopen.c $ldflags
 
 retval=0
 for module in $modules ; do
