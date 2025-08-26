--- ./ltmain.sh.orig	2015-02-28 18:50:58.000000000 +0200
+++ ./ltmain.sh	2015-08-12 17:22:19.429971000 +0200
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
