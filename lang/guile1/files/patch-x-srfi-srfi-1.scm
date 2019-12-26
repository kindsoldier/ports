--- ./srfi/srfi-1.scm.orig	2010-12-13 19:24:40.000000000 +0200
+++ ./srfi/srfi-1.scm	2014-01-06 21:26:21.000000000 +0300
@@ -220,7 +220,7 @@
 
 ;; Load the compiled primitives from the shared library.
 ;;
-(load-extension "libguile-srfi-srfi-1-v-3" "scm_init_srfi_1")
+(load-extension "libguile-srfi-srfi-1" "scm_init_srfi_1")
 
 
 ;;; Constructors
