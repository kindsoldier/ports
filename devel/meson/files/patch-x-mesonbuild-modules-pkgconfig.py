--- ./mesonbuild/modules/pkgconfig.py.orig	2021-06-07 19:35:31.000000000 +0200
+++ ./mesonbuild/modules/pkgconfig.py	2021-07-29 14:56:28.019384000 +0200
@@ -540,7 +540,7 @@
         pkgroot = kwargs.get('install_dir', default_install_dir)
         if pkgroot is None:
             if mesonlib.is_freebsd():
-                pkgroot = os.path.join(state.environment.coredata.get_option(mesonlib.OptionKey('prefix')), 'libdata', 'pkgconfig')
+                pkgroot = os.path.join(state.environment.coredata.get_option(mesonlib.OptionKey('prefix')), 'lib', 'pkgconfig')
             else:
                 pkgroot = os.path.join(state.environment.coredata.get_option(mesonlib.OptionKey('libdir')), 'pkgconfig')
         if not isinstance(pkgroot, str):
