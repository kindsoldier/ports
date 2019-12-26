--- ./libgnomevfs/xdgmimecache.h.orig	2010-02-09 14:16:14.000000000 +0200
+++ ./libgnomevfs/xdgmimecache.h	2015-01-05 21:19:08.000000000 +0200
@@ -46,6 +46,9 @@
 #define _xdg_mime_cache_get_icon                      XDG_RESERVED_ENTRY(cache_get_icon)
 #define _xdg_mime_cache_get_generic_icon              XDG_RESERVED_ENTRY(cache_get_generic_icon)
 #define _xdg_mime_cache_glob_dump                     XDG_RESERVED_ENTRY(cache_glob_dump)
+#define _xdg_mime_cache_is_valid_mime_type            XDG_RESERVED_ENTRY(cache_is_valid_mime_type)
+#define _xdg_mime_cache_mime_type_equal               XDG_RESERVED_ENTRY(cache_mime_type_equal)
+#define _xdg_mime_cache_media_type_equal              XDG_RESERVED_ENTRY(cache_media_type_equal)
 #endif
 
 extern XdgMimeCache **_caches;
