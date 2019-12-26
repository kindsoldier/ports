--- ./init.c.orig	2018-05-14 23:51:53.000000000 +0200
+++ ./init.c	2018-07-17 23:53:31.937271000 +0200
@@ -3575,13 +3575,13 @@
      requested not to via "-n".  */
   if (!skip_sys_rc)
   {
-    snprintf (buffer, sizeof(buffer), "%s/Muttrc-%s", SYSCONFDIR, MUTT_VERSION);
+    snprintf (buffer, sizeof(buffer), "%s/muttrc", SYSCONFDIR);
     if (access (buffer, F_OK) == -1)
       snprintf (buffer, sizeof(buffer), "%s/Muttrc", SYSCONFDIR);
     if (access (buffer, F_OK) == -1)
-      snprintf (buffer, sizeof (buffer), "%s/Muttrc-%s", PKGDATADIR, MUTT_VERSION);
-    if (access (buffer, F_OK) == -1)
       snprintf (buffer, sizeof (buffer), "%s/Muttrc", PKGDATADIR);
+    if (access (buffer, F_OK) == -1)
+      snprintf (buffer, sizeof (buffer), "%s/muttrc", PKGDATADIR);
     if (access (buffer, F_OK) != -1)
     {
       if (source_rc (buffer, &err) != 0)
