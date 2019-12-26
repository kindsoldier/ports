--- ./Modules/_hashopenssl.c~	2019-12-25 16:27:31.838225000 +0200
+++ ./Modules/_hashopenssl.c	2019-12-25 16:33:11.145818000 +0200
@@ -955,7 +955,7 @@
 #define INIT_CONSTRUCTOR_CONSTANTS(NAME)  do {    \
     init_constructor_constant(&cached_info_ ## NAME, #NAME); \
 } while (0);
-static void
+static int
 init_constructor_constant(EVPCachedInfo *cached_info, const char *name)
 {
     assert(cached_info);
