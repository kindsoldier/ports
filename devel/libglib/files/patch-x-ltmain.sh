--- ./ltmain.sh.orig	2018-09-21 11:46:46.000000000 +0200
+++ ./ltmain.sh	2019-01-26 10:27:37.671144000 +0200
@@ -8891,16 +8891,16 @@
           esac
 	  ;;
 
-	freebsd-aout)
-	  major=.$current
-	  versuffix=.$current.$revision
+	freebsd*)
+	  major=.$age
+	  versuffix=.$age
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
