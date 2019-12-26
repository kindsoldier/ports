--- ./config-top.h.orig	2016-05-19 20:34:02.000000000 +0200
+++ ./config-top.h	2017-12-21 21:37:10.458046000 +0200
@@ -74,7 +74,7 @@
 #endif
 
 /* Default primary and secondary prompt strings. */
-#define PPROMPT "\\s-\\v\\$ "
+#define PPROMPT "\\s\\$ "
 #define SPROMPT "> "
 
 /* Undefine this if you don't want the ksh-compatible behavior of reprinting
@@ -87,7 +87,7 @@
 #define DEFAULT_BASHRC "~/.bashrc"
 
 /* System-wide .bashrc file for interactive shells. */
-/* #define SYS_BASHRC "/etc/bash.bashrc" */
+/* #define SYS_BASHRC "/usr/local/etc/bashrc" */
 
 /* System-wide .bash_logout for login shells. */
 /* #define SYS_BASH_LOGOUT "/etc/bash.bash_logout" */
