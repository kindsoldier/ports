--- ./srfi/srfi-60.scm.orig	2010-12-13 19:24:40.000000000 +0200
+++ ./srfi/srfi-60.scm	2014-01-06 21:26:21.000000000 +0300
@@ -44,7 +44,7 @@
 	       logbit?
 	       ash))
 
-(load-extension "libguile-srfi-srfi-60-v-2" "scm_init_srfi_60")
+(load-extension "libguile-srfi-srfi-60" "scm_init_srfi_60")
 
 (define bitwise-and logand)
 (define bitwise-ior logior)
