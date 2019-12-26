--- ./src/polkitagent/polkitagenthelper-shadow.c.orig	2015-06-19 22:31:02.000000000 +0200
+++ ./src/polkitagent/polkitagenthelper-shadow.c	2016-03-11 11:37:43.525524000 +0200
@@ -60,17 +60,17 @@
   /* check that we are setuid root */
   if (geteuid () != 0)
     {
-      fprintf (stderr, "polkit-agent-helper-1: needs to be setuid root\n");
+      fprintf (stderr, "polkit-agent-helper: needs to be setuid root\n");
       goto error;
     }
 
-  openlog ("polkit-agent-helper-1", LOG_CONS | LOG_PID, LOG_AUTHPRIV);
+  openlog ("polkit-agent-helper", LOG_CONS | LOG_PID, LOG_AUTHPRIV);
 
   /* check for correct invocation */
   if (!(argc == 2 || argc == 3))
     {
       syslog (LOG_NOTICE, "inappropriate use of helper, wrong number of arguments [uid=%d]", getuid ());
-      fprintf (stderr, "polkit-agent-helper-1: wrong number of arguments. This incident has been logged.\n");
+      fprintf (stderr, "polkit-agent-helper: wrong number of arguments. This incident has been logged.\n");
       goto error;
     }
 
@@ -80,7 +80,7 @@
     if (isatty (STDIN_FILENO) != 0)
       {
         syslog (LOG_NOTICE, "inappropriate use of helper, stdin is a tty [uid=%d]", getuid ());
-        fprintf (stderr, "polkit-agent-helper-1: inappropriate use of helper, stdin is a tty. This incident has been logged.\n");
+        fprintf (stderr, "polkit-agent-helper: inappropriate use of helper, stdin is a tty. This incident has been logged.\n");
         goto error;
       }
     }
@@ -92,7 +92,7 @@
     goto error;
 
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: user to auth is '%s'.\n", user_to_auth);
+  fprintf (stderr, "polkit-agent-helper: user to auth is '%s'.\n", user_to_auth);
 #endif /* PAH_DEBUG */
 
 
@@ -102,7 +102,7 @@
   if (shadow == NULL)
     {
       syslog (LOG_NOTICE, "shadow file data information request for user '%s' [uid=%d] failed", user_to_auth, getuid ());
-      fprintf(stderr, "polkit-agent-helper-1: could not get shadow information for '%s'", user_to_auth);
+      fprintf(stderr, "polkit-agent-helper: could not get shadow information for '%s'", user_to_auth);
       goto error;
     }
 
@@ -110,7 +110,7 @@
   if (shadow_authenticate (shadow) == FALSE)
     {
       syslog (LOG_NOTICE, "authentication failure [uid=%d] trying to authenticate '%s'", getuid (), user_to_auth);
-      fprintf (stderr, "polkit-agent-helper-1: authentication failure. This incident has been logged.\n");
+      fprintf (stderr, "polkit-agent-helper: authentication failure. This incident has been logged.\n");
       goto error;
     }
 
@@ -119,7 +119,7 @@
   if (shadow->sp_max >= 0 && (shadow->sp_lstchg + shadow->sp_max) * 60 * 60 * 24 <= now)
     {
       syslog (LOG_NOTICE, "password expired for user '%s' [uid=%d] trying to authenticate", user_to_auth, getuid ());
-      fprintf (stderr, "polkit-agent-helper-1: authorization failure. This incident has been logged.\n");
+      fprintf (stderr, "polkit-agent-helper: authorization failure. This incident has been logged.\n");
       goto error;
     }
 
@@ -129,7 +129,7 @@
   if (shadow->sp_inact >= 0 && (shadow->sp_lstchg + shadow->sp_max + shadow->sp_inact) * 60 * 60 * 24 <= now)
     {
       syslog (LOG_NOTICE, "password aged for user '%s' [uid=%d] trying to authenticate", user_to_auth, getuid ());
-      fprintf (stderr, "polkit-agent-helper-1: authorization failure. This incident has been logged.\n");
+      fprintf (stderr, "polkit-agent-helper: authorization failure. This incident has been logged.\n");
       goto error;
     }
 
@@ -137,12 +137,12 @@
   if (shadow->sp_expire >= 0 && shadow->sp_expire * 60 * 60 * 24 <= now)
     {
       syslog (LOG_NOTICE, "account expired for user '%s' [uid=%d] trying to authenticate", user_to_auth, getuid ());
-      fprintf (stderr, "polkit-agent-helper-1: authorization failure. This incident has been logged.\n");
+      fprintf (stderr, "polkit-agent-helper: authorization failure. This incident has been logged.\n");
       goto error;
     }
 
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: sending D-Bus message to PolicyKit daemon\n");
+  fprintf (stderr, "polkit-agent-helper: sending D-Bus message to PolicyKit daemon\n");
 #endif /* PAH_DEBUG */
 
   /* now send a D-Bus message to the PolicyKit daemon that
@@ -151,7 +151,7 @@
   if (!send_dbus_message (cookie, user_to_auth))
     {
 #ifdef PAH_DEBUG
-      fprintf (stderr, "polkit-agent-helper-1: error sending D-Bus message to PolicyKit daemon\n");
+      fprintf (stderr, "polkit-agent-helper: error sending D-Bus message to PolicyKit daemon\n");
 #endif /* PAH_DEBUG */
       goto error;
     }
@@ -159,7 +159,7 @@
   free (cookie);
 
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: successfully sent D-Bus message to PolicyKit daemon\n");
+  fprintf (stderr, "polkit-agent-helper: successfully sent D-Bus message to PolicyKit daemon\n");
 #endif /* PAH_DEBUG */
 
   fprintf (stdout, "SUCCESS\n");
