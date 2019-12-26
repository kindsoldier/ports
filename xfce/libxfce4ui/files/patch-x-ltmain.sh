--- ./ltmain.sh.orig	2015-03-15 20:14:44.000000000 +0200
+++ ./ltmain.sh	2015-08-12 12:49:04.014674000 +0200
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
