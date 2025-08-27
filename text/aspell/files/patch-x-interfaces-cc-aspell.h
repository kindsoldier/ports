--- ./interfaces/cc/aspell.h.orig	2011-07-03 00:53:27.000000000 +0300
+++ ./interfaces/cc/aspell.h	2014-12-23 09:52:46.000000000 +0200
@@ -236,7 +236,7 @@
 
 /******************************** errors ********************************/
 
-
+#ifndef ASPELL_ERRORS__HPP
 extern const struct AspellErrorInfo * const aerror_other;
 extern const struct AspellErrorInfo * const aerror_operation_not_supported;
 extern const struct AspellErrorInfo * const   aerror_cant_copy;
@@ -322,7 +322,7 @@
 extern const struct AspellErrorInfo * const   aerror_bad_magic;
 extern const struct AspellErrorInfo * const aerror_expression;
 extern const struct AspellErrorInfo * const   aerror_invalid_expression;
-
+#endif
 
 /******************************* speller *******************************/
 
