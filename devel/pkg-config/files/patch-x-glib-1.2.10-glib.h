--- ./glib-1.2.10/glib.h.orig	2001-02-27 05:44:38.000000000 +0200
+++ ./glib-1.2.10/glib.h	2013-11-02 22:39:31.000000000 +0300
@@ -218,6 +218,9 @@
 #  endif /* !__GNUC__ */
 #endif /* !G_INLINE_FUNC */
 
+#undef G_INLINE_FUNC
+#define G_INLINE_FUNC static inline
+
 
 /* Provide simple macro statement wrappers (adapted from Perl):
  *  G_STMT_START { statements; } G_STMT_END;
