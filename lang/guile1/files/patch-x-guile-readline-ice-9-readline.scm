--- ./guile-readline/ice-9/readline.scm.orig	2010-12-13 19:24:39.000000000 +0200
+++ ./guile-readline/ice-9/readline.scm	2014-01-06 21:26:21.000000000 +0300
@@ -36,7 +36,7 @@
 ;;; but only when it isn't already present.
 
 (if (not (provided? 'readline))
-    (load-extension "libguilereadline-v-17" "scm_init_readline"))
+    (load-extension "libguilereadline" "scm_init_readline"))
 
 (if (not (provided? 'readline))
     (scm-error 'misc-error
