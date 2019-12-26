--- ./test/polkitbackend/test-polkitbackendjsauthority.c.orig	2015-06-18 22:20:50.000000000 +0200
+++ ./test/polkitbackend/test-polkitbackendjsauthority.c	2016-03-11 10:32:32.937800000 +0200
@@ -31,7 +31,7 @@
 #include <polkitbackend/polkitbackendjsauthority.h>
 #include <polkittesthelper.h>
 
-/* see test/data/etc/polkit-1/rules.d/10-testing.rules */
+/* see test/data/etc/polkit/rules.d/10-testing.rules */
 
 /* Test helper types */
 
@@ -43,8 +43,8 @@
   gchar *rules_dirs[3] = {0};
   PolkitBackendJsAuthority *authority;
 
-  rules_dirs[0] = polkit_test_get_data_path ("etc/polkit-1/rules.d");
-  rules_dirs[1] = polkit_test_get_data_path ("usr/share/polkit-1/rules.d");
+  rules_dirs[0] = polkit_test_get_data_path ("etc/polkit/rules.d");
+  rules_dirs[1] = polkit_test_get_data_path ("usr/share/polkit/rules.d");
   rules_dirs[2] = NULL;
   g_assert (rules_dirs[0] != NULL);
   g_assert (rules_dirs[1] != NULL);
@@ -186,10 +186,10 @@
   /* Ordering tests ... we have four rules files, check they are
    * evaluated in order by checking the detail set by each rules
    *
-   * -       etc/polkit-1/rules.d/10-testing.rules (file a)
-   * - usr/share/polkit-1/rules.d/10-testing.rules (file b)
-   * -       etc/polkit-1/rules.d/15-testing.rules (file c)
-   * - usr/share/polkit-1/rules.d/20-testing.rules (file d)
+   * -       etc/polkit/rules.d/10-testing.rules (file a)
+   * - usr/share/polkit/rules.d/10-testing.rules (file b)
+   * -       etc/polkit/rules.d/15-testing.rules (file c)
+   * - usr/share/polkit/rules.d/20-testing.rules (file d)
    *
    * file.
    */
