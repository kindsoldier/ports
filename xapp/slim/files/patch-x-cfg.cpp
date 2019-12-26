--- ./cfg.cpp.orig	2013-10-02 01:38:05.000000000 +0300
+++ ./cfg.cpp	2017-04-30 14:44:05.957026000 +0200
@@ -30,12 +30,12 @@
 {
 	/* Configuration options */
 	options.insert(option("default_path","/bin:/usr/bin:/usr/local/bin"));
-	options.insert(option("default_xserver","/usr/bin/X"));
+	options.insert(option("default_xserver","/usr/local/sbin/X"));
 	options.insert(option("xserver_arguments",""));
 	options.insert(option("numlock",""));
 	options.insert(option("daemon",""));
-	options.insert(option("xauth_path","/usr/bin/xauth"));
-	options.insert(option("login_cmd","exec /bin/bash -login ~/.xinitrc %session"));
+	options.insert(option("xauth_path","/usr/local/bin/xauth"));
+	options.insert(option("login_cmd","exec /bin/sh -login ~/.xinitrc %session"));
 	options.insert(option("halt_cmd","/sbin/shutdown -h now"));
 	options.insert(option("reboot_cmd","/sbin/shutdown -r now"));
 	options.insert(option("suspend_cmd",""));
