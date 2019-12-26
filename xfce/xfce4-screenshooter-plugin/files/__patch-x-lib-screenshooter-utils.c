--- ./lib/screenshooter-utils.c.orig	2010-05-21 11:11:35.000000000 +0300
+++ ./lib/screenshooter-utils.c	2015-01-19 23:49:57.000000000 +0200
@@ -289,7 +289,7 @@
 
   tm = localtime (&now);
 
-  converted = g_locale_from_utf8 ("%X", -1, NULL, NULL, NULL);
+  converted = g_locale_from_utf8 ("%H-%M-%S", -1, NULL, NULL, NULL);
   if (G_UNLIKELY (converted == NULL))
     converted = g_strdup ("");
 
@@ -318,7 +318,7 @@
 
   g_date_set_time_t (date, time (NULL));
 
-  length = g_date_strftime (buffer, sizeof (buffer), "%x", date);
+  length = g_date_strftime (buffer, sizeof (buffer), "%Y-%m-%d", date);
 
   if (G_UNLIKELY (length == 0))
     {
