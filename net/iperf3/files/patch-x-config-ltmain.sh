--- ./config/ltmain.sh.orig	2018-06-22 21:20:47.000000000 +0000
+++ ./config/ltmain.sh	2019-02-09 08:08:07.016499000 +0000
@@ -8891,15 +8891,10 @@
           esac
 	  ;;
 
-	freebsd-aout)
-	  major=.$current
-	  versuffix=.$current.$revision
-	  ;;
-
-	freebsd-elf)
+	freebsd*)
 	  func_arith $current - $age
 	  major=.$func_arith_result
-	  versuffix=$major.$age.$revision
+	  versuffix=$major
 	  ;;
 
 	irix | nonstopux)
