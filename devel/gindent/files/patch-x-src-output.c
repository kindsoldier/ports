--- ./src/output.c.orig	2018-09-05 18:47:56.000000000 +0200
+++ ./src/output.c	2022-07-31 10:20:19.045491000 +0200
@@ -74,7 +74,7 @@
 
 RCSTAG_CC ("$Id$");
 
-static FILE            * output       = NULL;
+FILE                   * output       = NULL;
 static BOOLEAN           inhibited    = 0;
 static buf_break_st_ty * buf_break_list = NULL;
 buf_break_st_ty * buf_break = NULL;
@@ -840,7 +840,7 @@
     BOOLEAN * pbreak_line,
     int       target_col_break)
 {
-   int paren_level   = 0;
+   int paren_level   = 0;
 
    if (s_code != e_code)
    {                       /* print code section, if any */
