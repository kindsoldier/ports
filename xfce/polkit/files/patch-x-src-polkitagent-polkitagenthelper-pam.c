--- ./src/polkitagent/polkitagenthelper-pam.c.orig	2015-06-19 22:31:02.000000000 +0200
+++ ./src/polkitagent/polkitagenthelper-pam.c	2016-03-11 11:38:28.201483000 +0200
@@ -40,22 +40,22 @@
                 const gchar *str2)
 {
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: writing `%s' to stdout\n", str1);
+  fprintf (stderr, "polkit-agent-helper: writing `%s' to stdout\n", str1);
 #endif /* PAH_DEBUG */
   fprintf (stdout, "%s", str1);
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: writing `%s' to stdout\n", str2);
+  fprintf (stderr, "polkit-agent-helper: writing `%s' to stdout\n", str2);
 #endif /* PAH_DEBUG */
   fprintf (stdout, "%s", str2);
   if (strlen (str2) > 0 && str2[strlen (str2) - 1] != '\n')
     {
 #ifdef PAH_DEBUG
-      fprintf (stderr, "polkit-agent-helper-1: writing newline to stdout\n");
+      fprintf (stderr, "polkit-agent-helper: writing newline to stdout\n");
 #endif /* PAH_DEBUG */
       fputc ('\n', stdout);
     }
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: flushing stdout\n");
+  fprintf (stderr, "polkit-agent-helper: flushing stdout\n");
 #endif /* PAH_DEBUG */
   fflush (stdout);
 }
@@ -85,7 +85,7 @@
     {
       gchar *s;
 
-      fprintf (stderr, "polkit-agent-helper-1: needs to be setuid root\n");
+      fprintf (stderr, "polkit-agent-helper: needs to be setuid root\n");
 
       /* Special-case a very common error triggered in jhbuild setups */
       s = g_strdup_printf ("Incorrect permissions on %s (needs to be setuid root)", argv[0]);
@@ -94,13 +94,13 @@
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
 
@@ -116,26 +116,26 @@
       if (isatty (STDIN_FILENO) != 0)
         {
           syslog (LOG_NOTICE, "inappropriate use of helper, stdin is a tty [uid=%d]", getuid ());
-          fprintf (stderr, "polkit-agent-helper-1: inappropriate use of helper, stdin is a tty. This incident has been logged.\n");
+          fprintf (stderr, "polkit-agent-helper: inappropriate use of helper, stdin is a tty. This incident has been logged.\n");
           goto error;
         }
     }
 
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: user to auth is '%s'.\n", user_to_auth);
+  fprintf (stderr, "polkit-agent-helper: user to auth is '%s'.\n", user_to_auth);
 #endif /* PAH_DEBUG */
 
   pam_conversation.conv        = conversation_function;
   pam_conversation.appdata_ptr = NULL;
 
   /* start the pam stack */
-  rc = pam_start ("polkit-1",
+  rc = pam_start ("polkit",
                   user_to_auth,
                   &pam_conversation,
                   &pam_h);
   if (rc != PAM_SUCCESS)
     {
-      fprintf (stderr, "polkit-agent-helper-1: pam_start failed: %s\n", pam_strerror (pam_h, rc));
+      fprintf (stderr, "polkit-agent-helper: pam_start failed: %s\n", pam_strerror (pam_h, rc));
       goto error;
     }
 
@@ -143,7 +143,7 @@
   rc = pam_set_item (pam_h, PAM_RUSER, user_to_auth);
   if (rc != PAM_SUCCESS)
     {
-      fprintf (stderr, "polkit-agent-helper-1: pam_set_item failed: %s\n", pam_strerror (pam_h, rc));
+      fprintf (stderr, "polkit-agent-helper: pam_set_item failed: %s\n", pam_strerror (pam_h, rc));
       goto error;
     }
 
@@ -153,7 +153,7 @@
     {
       const char *err;
       err = pam_strerror (pam_h, rc);
-      fprintf (stderr, "polkit-agent-helper-1: pam_authenticate failed: %s\n", err);
+      fprintf (stderr, "polkit-agent-helper: pam_authenticate failed: %s\n", err);
       goto error;
     }
 
@@ -163,7 +163,7 @@
     {
       const char *err;
       err = pam_strerror (pam_h, rc);
-      fprintf (stderr, "polkit-agent-helper-1: pam_acct_mgmt failed: %s\n", err);
+      fprintf (stderr, "polkit-agent-helper: pam_acct_mgmt failed: %s\n", err);
       goto error;
     }
 
@@ -173,26 +173,26 @@
     {
       const char *err;
       err = pam_strerror (pam_h, rc);
-      fprintf (stderr, "polkit-agent-helper-1: pam_get_item failed: %s\n", err);
+      fprintf (stderr, "polkit-agent-helper: pam_get_item failed: %s\n", err);
       goto error;
     }
 
   if (strcmp (authed_user, user_to_auth) != 0)
     {
-      fprintf (stderr, "polkit-agent-helper-1: Tried to auth user '%s' but we got auth for user '%s' instead",
+      fprintf (stderr, "polkit-agent-helper: Tried to auth user '%s' but we got auth for user '%s' instead",
                user_to_auth, (const char *) authed_user);
       goto error;
     }
 
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: successfully authenticated user '%s'.\n", user_to_auth);
+  fprintf (stderr, "polkit-agent-helper: successfully authenticated user '%s'.\n", user_to_auth);
 #endif /* PAH_DEBUG */
 
   pam_end (pam_h, rc);
   pam_h = NULL;
 
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: sending D-Bus message to PolicyKit daemon\n");
+  fprintf (stderr, "polkit-agent-helper: sending D-Bus message to PolicyKit daemon\n");
 #endif /* PAH_DEBUG */
 
   /* now send a D-Bus message to the PolicyKit daemon that
@@ -201,7 +201,7 @@
   if (!send_dbus_message (cookie, user_to_auth))
     {
 #ifdef PAH_DEBUG
-      fprintf (stderr, "polkit-agent-helper-1: error sending D-Bus message to PolicyKit daemon\n");
+      fprintf (stderr, "polkit-agent-helper: error sending D-Bus message to PolicyKit daemon\n");
 #endif /* PAH_DEBUG */
       goto error;
     }
@@ -209,7 +209,7 @@
   free (cookie);
 
 #ifdef PAH_DEBUG
-  fprintf (stderr, "polkit-agent-helper-1: successfully sent D-Bus message to PolicyKit daemon\n");
+  fprintf (stderr, "polkit-agent-helper: successfully sent D-Bus message to PolicyKit daemon\n");
 #endif /* PAH_DEBUG */
 
   fprintf (stdout, "SUCCESS\n");
@@ -252,19 +252,19 @@
 
         case PAM_PROMPT_ECHO_OFF:
 #ifdef PAH_DEBUG
-          fprintf (stderr, "polkit-agent-helper-1: writing `PAM_PROMPT_ECHO_OFF ' to stdout\n");
+          fprintf (stderr, "polkit-agent-helper: writing `PAM_PROMPT_ECHO_OFF ' to stdout\n");
 #endif /* PAH_DEBUG */
           fprintf (stdout, "PAM_PROMPT_ECHO_OFF ");
           goto conv1;
 
         case PAM_PROMPT_ECHO_ON:
 #ifdef PAH_DEBUG
-          fprintf (stderr, "polkit-agent-helper-1: writing `PAM_PROMPT_ECHO_ON ' to stdout\n");
+          fprintf (stderr, "polkit-agent-helper: writing `PAM_PROMPT_ECHO_ON ' to stdout\n");
 #endif /* PAH_DEBUG */
           fprintf (stdout, "PAM_PROMPT_ECHO_ON ");
         conv1:
 #ifdef PAH_DEBUG
-          fprintf (stderr, "polkit-agent-helper-1: writing `%s' to stdout\n", msg[i]->msg);
+          fprintf (stderr, "polkit-agent-helper: writing `%s' to stdout\n", msg[i]->msg);
 #endif /* PAH_DEBUG */
           tmp = g_strdup (msg[i]->msg);
           len = strlen (tmp);
@@ -275,11 +275,11 @@
           fputs (escaped, stdout);
           g_free (escaped);
 #ifdef PAH_DEBUG
-          fprintf (stderr, "polkit-agent-helper-1: writing newline to stdout\n");
+          fprintf (stderr, "polkit-agent-helper: writing newline to stdout\n");
 #endif /* PAH_DEBUG */
           fputc ('\n', stdout);
 #ifdef PAH_DEBUG
-          fprintf (stderr, "polkit-agent-helper-1: flushing stdout\n");
+          fprintf (stderr, "polkit-agent-helper: flushing stdout\n");
 #endif /* PAH_DEBUG */
           fflush (stdout);
 
