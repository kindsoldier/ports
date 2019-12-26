--- ./Makefile.PL.orig	2013-12-01 01:41:25.000000000 +0300
+++ ./Makefile.PL	2017-03-03 15:56:09.538850000 +0200
@@ -11,11 +11,11 @@
 repository 'https://github.com/dsully/perl-crypt-openssl-pkcs12';
 bugtracker 'https://github.com/dsully/perl-crypt-openssl-pkcs12/issues';
 
-test_requires 'Test::Pod::Coverage' => '1.08';
-test_requires 'Pod::Coverage' => '0.19';
-test_requires 'Test::More' => '0.47';
+#test_requires 'Test::Pod::Coverage' => '1.08';
+#test_requires 'Pod::Coverage' => '0.19';
+#test_requires 'Test::More' => '0.47';
 
-requires_external_cc();
+#requires_external_cc();
 
 cc_inc_paths('/usr/include/openssl', '/usr/local/include/ssl', '/usr/local/ssl/include');
 cc_lib_paths('/usr/lib', '/usr/local/lib', '/usr/local/ssl/lib');
