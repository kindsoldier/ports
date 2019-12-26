--- ./src/oss.c.orig	2011-02-23 03:51:00.000000000 +0200
+++ ./src/oss.c	2014-12-27 13:57:14.000000000 +0200
@@ -259,7 +259,7 @@
                 val = AFMT_S16_NE;
                 break;
         case CA_SAMPLE_S16RE:
-#if __BYTE_ORDER == __LITTLE_ENDIAN
+#if _BYTE_ORDER == _LITTLE_ENDIAN
                 val = AFMT_S16_BE;
 #else
                 val = AFMT_S16_LE;
