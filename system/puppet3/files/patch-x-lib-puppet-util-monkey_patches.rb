--- ./lib/puppet/util/monkey_patches.rb.orig	2016-04-25 20:52:09.000000000 +0200
+++ ./lib/puppet/util/monkey_patches.rb	2019-09-09 14:47:22.108502000 +0200
@@ -175,7 +175,10 @@
   else
     DEFAULT_PARAMS[:options] = OpenSSL::SSL::OP_NO_SSLv2 | OpenSSL::SSL::OP_NO_SSLv3
   end
-  DEFAULT_PARAMS[:ciphers] << ':!SSLv2'
+
+  if DEFAULT_PARAMS[:ciphers]
+    DEFAULT_PARAMS[:ciphers] << ':!SSLv2'
+  end
 
   alias __original_initialize initialize
   private :__original_initialize
