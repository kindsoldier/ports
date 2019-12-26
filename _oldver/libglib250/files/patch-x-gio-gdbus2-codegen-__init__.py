--- ./gio/gdbus-2.0/codegen/__init__.py.orig	2014-12-19 23:49:48.000000000 +0200
+++ ./gio/gdbus-2.0/codegen/__init__.py	2015-11-02 01:34:44.791050000 +0200
@@ -24,4 +24,4 @@
 builddir = os.environ.get('UNINSTALLED_GLIB_BUILDDIR')
 
 if builddir is not None:
-    __path__.append(os.path.abspath(os.path.join(builddir, 'gio', 'gdbus-2.0', 'codegen')))
+    __path__.append(os.path.abspath(os.path.join(builddir, 'gio', 'gdbus2', 'codegen')))
