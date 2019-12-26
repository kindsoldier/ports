--- ./bin/ltmain.sh.orig	2017-04-01 17:33:44.000000000 +0200
+++ ./bin/ltmain.sh	2017-04-24 10:41:25.068933000 +0200
@@ -8811,13 +8811,13 @@
 	  #
 	  case $version_type in
 	  # correct linux to gnu/linux during the next big refactor
-	  darwin|freebsd-elf|linux|osf|windows|none)
+	  darwin|linux|osf|windows|none)
 	    func_arith $number_major + $number_minor
 	    current=$func_arith_result
 	    age=$number_minor
 	    revision=$number_revision
 	    ;;
-	  freebsd-aout|qnx|sunos)
+	  freebsd*|qnx|sunos)
 	    current=$number_major
 	    revision=$number_minor
 	    age=0
@@ -8900,16 +8900,16 @@
           esac
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=.$current
-	  versuffix=.$current.$revision
+	  versuffix=.$current
 	  ;;
 
-	freebsd-elf)
-	  func_arith $current - $age
-	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
-	  ;;
+#	freebsd-elf)
+#	  func_arith $current - $age
+#	  major=.$func_arith_result
+#	  versuffix=$major.$age.$revision
+#	  ;;
 
 	irix | nonstopux)
 	  if test no = "$lt_irix_increment"; then
