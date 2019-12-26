--- ./src/libjasper/include/jasper/jas_types.h.orig	2007-01-19 23:43:04.000000000 +0200
+++ ./src/libjasper/include/jasper/jas_types.h	2009-09-08 08:58:37.000000000 +0300
@@ -179,13 +179,13 @@
 #endif
 /**********/
 #if !defined(INT_FAST64_MIN)
-typedef longlong int_fast64_t;
+typedef long long int_fast64_t;
 #define INT_FAST64_MIN	LLONG_MIN
 #define INT_FAST64_MAX	LLONG_MAX
 #endif
 /**********/
 #if !defined(UINT_FAST64_MAX)
-typedef ulonglong uint_fast64_t;
+typedef unsigned long long uint_fast64_t;
 #define UINT_FAST64_MAX	ULLONG_MAX
 #endif
 /**********/
