--- ./ext/augeas/extconf.rb.orig	2016-11-16 17:34:46.634806000 +0200
+++ ./ext/augeas/extconf.rb	2016-11-16 17:41:14.842794000 +0200
@@ -27,7 +27,7 @@
     raise "augeas-devel not installed"
 end
 
-unless pkg_config("libxml-2.0")
+unless pkg_config("libxml2")
     raise "libxml2-devel not installed"
 end
 
