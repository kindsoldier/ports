--- ./secmem/secmem.c.orig	2013-03-21 11:43:50.000000000 +0300
+++ ./secmem/secmem.c	2014-12-29 18:50:33.000000000 +0200
@@ -87,7 +87,7 @@
 #  define MAP_ANONYMOUS MAP_ANON
 #endif
 
-#define DEFAULT_POOLSIZE 16384
+#define DEFAULT_POOLSIZE 16384*4
 
 typedef struct memblock_struct MEMBLOCK;
 struct memblock_struct {
