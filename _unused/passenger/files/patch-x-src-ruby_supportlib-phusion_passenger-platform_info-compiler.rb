--- ./src/ruby_supportlib/phusion_passenger/platform_info/compiler.rb.orig	2018-07-09 21:01:20.313857000 +0200
+++ ./src/ruby_supportlib/phusion_passenger/platform_info/compiler.rb	2018-07-09 21:04:49.055508000 +0200
@@ -527,9 +527,9 @@
       #
       # In any case we'll always want to use -ggdb for better GDB debugging.
       if cc_is_gcc?
-        result = '-ggdb'
+        result = ' '
       else
-        result = '-g'
+        result = ' '
       end
       if cc_supports_fno_limit_debug_info_flag?
         result << ' -fno-limit-debug-info'
@@ -545,12 +545,12 @@
       #
       # In any case we'll always want to use -ggdb for better GDB debugging.
       if cc_is_gcc?
-        result = '-ggdb'
+        result = ' '
       else
-        result = '-g'
+        result = ' '
       end
       if cxx_supports_fno_limit_debug_info_flag?
-        result << ' -fno-limit-debug-info'
+        result << ' '
       end
       result
     end
