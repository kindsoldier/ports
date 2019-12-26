--- ./ltmain.sh.orig	2016-01-20 17:50:05.000000000 +0200
+++ ./ltmain.sh	2016-02-04 20:50:14.220761000 +0200
@@ -8805,17 +8805,12 @@
 	  #
 	  case $version_type in
 	  # correct linux to gnu/linux during the next big refactor
-	  darwin|freebsd-elf|linux|osf|windows|none)
+	  darwin|freebsd*|linux|osf|windows|none)
 	    func_arith $number_major + $number_minor
 	    current=$func_arith_result
 	    age=$number_minor
 	    revision=$number_revision
 	    ;;
-	  freebsd-aout|qnx|sunos)
-	    current=$number_major
-	    revision=$number_minor
-	    age=0
-	    ;;
 	  irix|nonstopux)
 	    func_arith $number_major + $number_minor
 	    current=$func_arith_result
@@ -8891,15 +8886,17 @@
           esac
 	  ;;
 
-	freebsd-aout)
+#	freebsd-aout)
+#	  major=.$current
+#	  versuffix=.$current.$revision
+#	  ;;
+
+	freebsd*)
+#	  func_arith $current - $age
+#	  major=.$func_arith_result
+#	  versuffix=$major
 	  major=.$current
-	  versuffix=.$current.$revision
-	  ;;
-
-	freebsd-elf)
-	  func_arith $current - $age
-	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
+	  versuffix=.$current
 	  ;;
 
 	irix | nonstopux)
