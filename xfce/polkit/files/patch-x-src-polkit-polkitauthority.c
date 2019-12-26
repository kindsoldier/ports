--- ./src/polkit/polkitauthority.c.orig	2015-06-19 22:31:02.000000000 +0200
+++ ./src/polkit/polkitauthority.c	2016-03-11 11:39:38.051224000 +0200
@@ -1513,7 +1513,7 @@
 {
   GVariant *identity_value;
   /* Note that in reality, this API is only accessible to root, and
-   * only called from the setuid helper `polkit-agent-helper-1`.
+   * only called from the setuid helper `polkit-agent-helper`.
    *
    * However, because this is currently public API, we avoid
    * triggering warnings from ABI diff type programs by just grabbing
