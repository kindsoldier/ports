--- ./setup.py.orig	2018-11-04 17:55:52.520653000 +0200
+++ ./setup.py	2018-11-04 18:03:27.561775000 +0200
@@ -163,13 +163,13 @@
     def initialize_options(self):
         _install.initialize_options(self)
         self.no_scons_script = 0
-        self.no_version_script = 0
+        self.no_version_script = 1
         self.install_bat = 0
         self.no_install_bat = not is_win32
-        self.install_man = 0
+        self.install_man = 1
         self.no_install_man = is_win32
         self.standard_lib = 0
-        self.standalone_lib = 0
+        self.standalone_lib = 1
         self.version_lib = 0
         self.hardlink_scons = 0
         self.symlink_scons = 0
