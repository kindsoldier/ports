--- ./lib/mktime.c.orig	2005-09-19 19:16:56.000000000 +0300
+++ ./lib/mktime.c	2016-02-03 13:55:27.441929000 +0200
@@ -166,10 +166,12 @@
 ydhms_diff (long int year1, long int yday1, int hour1, int min1, int sec1,
 	    int year0, int yday0, int hour0, int min0, int sec0)
 {
+
+#if 0
   verify (C99_integer_division, -1 / 2 == 0);
   verify (long_int_year_and_yday_are_wide_enough,
 	  INT_MAX <= LONG_MAX / 2 || TIME_T_MAX <= UINT_MAX);
-
+#endif
   /* Compute intervening leap days correctly even if year is negative.
      Take care to avoid integer overflow here.  */
   int a4 = SHR (year1, 2) + SHR (TM_YEAR_BASE, 2) - ! (year1 & 3);
