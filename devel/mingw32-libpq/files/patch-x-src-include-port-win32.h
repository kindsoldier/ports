--- ./src/include/port/win32.h.orig	2015-10-05 21:12:06.000000000 +0200
+++ ./src/include/port/win32.h	2019-02-24 07:51:49.111106000 +0200
@@ -4,6 +4,7 @@
 #define WIN32_ONLY_COMPILER
 #endif
 
+#include <winerror.h>
 /*
  * Make sure _WIN32_WINNT has the minimum required value.
  * Leave a higher value in place.
@@ -317,6 +318,9 @@
  * Extended locale functions with gratuitous underscore prefixes.
  * (These APIs are nevertheless fully documented by Microsoft.)
  */
+
+#include <locale.h>
+
 #define locale_t _locale_t
 #define tolower_l _tolower_l
 #define toupper_l _toupper_l
