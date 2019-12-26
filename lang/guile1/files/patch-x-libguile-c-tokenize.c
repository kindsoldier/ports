--- ./libguile/c-tokenize.c.orig	2010-12-13 21:24:04.000000000 +0200
+++ ./libguile/c-tokenize.c	2019-01-20 20:28:47.654672000 +0200
@@ -898,13 +898,13 @@
 /* rule 3 can match eol */
 YY_RULE_SETUP
 #line 71 "./c-tokenize.lex"
-{ OUT(eol); }
+{ /*OUT(eol);*/ }
 	YY_BREAK
 case 4:
 /* rule 4 can match eol */
 YY_RULE_SETUP
 #line 73 "./c-tokenize.lex"
-{ OUT(hash); IS_NOT_COOKIE; }
+{ /*OUT(hash);*/ IS_NOT_COOKIE; }
 	YY_BREAK
 case 5:
 YY_RULE_SETUP
