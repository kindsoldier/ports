--- ./setup.py.orig	2018-04-30 00:47:33.000000000 +0200
+++ ./setup.py	2019-01-26 09:01:45.802242000 +0200
@@ -15,6 +15,7 @@
 from distutils.command.build_ext import build_ext
 from distutils.command.install import install
 from distutils.command.install_lib import install_lib
+from distutils.command.build_scripts import build_scripts
 from distutils.spawn import find_executable
 
 cross_compiling = "_PYTHON_HOST_PLATFORM" in os.environ
@@ -33,7 +34,7 @@
 COMPILED_WITH_PYDEBUG = ('--with-pydebug' in sysconfig.get_config_var("CONFIG_ARGS"))
 
 # This global variable is used to hold the list of modules to be disabled.
-disabled_module_list = []
+disabled_module_list = ["_bsddb", "_tkinter", "gdbm", "mpz", "nis"]
 
 def add_dir_to_list(dirlist, dir):
     """Add the directory 'dir' to the list 'dirlist' (at the front) if
@@ -1234,7 +1235,7 @@
                 sysroot = macosx_sdk_root()
                 f = os.path.join(sysroot, f[1:])
 
-        if os.path.exists(f) and not db_incs:
+        if os.path.exists(f):
             data = open(f).read()
             m = re.search(r"#s*define\s+HASHVERSION\s+2\s*", data)
             if m is not None:
@@ -1568,7 +1569,7 @@
             macros = dict()
             libraries = []
 
-        elif host_platform in ('freebsd4', 'freebsd5', 'freebsd6', 'freebsd7', 'freebsd8'):
+        elif host_platform in ('freebsd4', 'freebsd5', 'freebsd6', 'freebsd7', 'freebsd8', 'freebsd9', 'freebsd10', 'freebsd11'):
             # FreeBSD's P1003.1b semaphore support is very experimental
             # and has many known problems. (as of June 2008)
             macros = dict()
@@ -1619,9 +1620,10 @@
         else:
             missing.append('linuxaudiodev')
 
-        if (host_platform in ('linux2', 'freebsd4', 'freebsd5', 'freebsd6',
-                        'freebsd7', 'freebsd8')
-            or host_platform.startswith("gnukfreebsd")):
+# Initial backport of http://hg.python.org/cpython/rev/50f1922bc1d5
+
+        if any(sys.platform.startswith(prefix)
+               for prefix in ("linux", "freebsd", "gnukfreebsd")):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
@@ -2244,6 +2246,22 @@
     def is_chmod_supported(self):
         return hasattr(os, 'chmod')
 
+class PyBuildScripts(build_scripts):
+    def copy_scripts(self):
+        outfiles = build_scripts.copy_scripts(self)
+        fullversion = '{0[0]}.{0[1]}'.format(sys.version_info)
+        newoutfiles = []
+        for filename in outfiles:
+            if filename.endswith('2to3'):
+                newfilename = filename + '-' + fullversion
+            else:
+                newfilename = filename + fullversion
+            log.info('renaming {} to {}'.format(filename, newfilename))
+            os.rename(filename, newfilename)
+            newoutfiles.append(newfilename)
+        return newoutfiles
+
+
 SUMMARY = """
 Python is an interpreted, interactive, object-oriented programming
 language. It is often compared to Tcl, Perl, Scheme or Java.
@@ -2289,7 +2307,9 @@
           platforms = ["Many"],
 
           # Build info
-          cmdclass = {'build_ext':PyBuildExt, 'install':PyBuildInstall,
+          cmdclass = {'build_ext':PyBuildExt,
+                      'build_scripts':PyBuildScripts,
+                      'install':PyBuildInstall,
                       'install_lib':PyBuildInstallLib},
           # The struct module is defined here, because build_ext won't be
           # called unless there's at least one extension module defined.
@@ -2297,8 +2317,7 @@
 
           # Scripts to install
           scripts = ['Tools/scripts/pydoc', 'Tools/scripts/idle',
-                     'Tools/scripts/2to3',
-                     'Lib/smtpd.py']
+                     'Tools/scripts/2to3']
         )
 
 # --install-platlib
