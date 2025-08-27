--- ./parse.c.orig	2010-05-27 23:21:36.000000000 +0300
+++ ./parse.c	2010-10-09 20:56:13.000000000 +0300
@@ -1460,19 +1460,19 @@
     }
   else
     {
-      /* Check for the module in gnome-config */
+      /* Check for the module in pkg-config */
       char *output;
       char *p;
       char *command;
 
-      debug_spew ("Calling gnome-config\n");
+      debug_spew ("Calling pkg-config\n");
       
       /* Annoyingly, --modversion doesn't return a failure
        * code if the lib is unknown, so we have to use --libs
        * for that.
        */
       
-      command = g_strdup_printf ("gnome-config --libs %s",
+      command = g_strdup_printf ("pkg-config --libs %s",
                                  name);
       
       if (!try_command (command))
@@ -1484,7 +1484,7 @@
       else
         g_free (command);
       
-      command = g_strdup_printf ("gnome-config --modversion %s",
+      command = g_strdup_printf ("pkg-config --modversion %s",
                                  name);
       
       output = backticks (command);
@@ -1495,7 +1495,7 @@
           return NULL;
         }
       
-      /* Unknown modules give "Unknown library `foo'" from gnome-config
+      /* Unknown modules give "Unknown library `foo'" from pkg-config
        * (but on stderr so this is useless, nevermind)
        */
       if (strstr (output, "Unknown") || *output == '\0')
@@ -1505,7 +1505,7 @@
           return NULL;
         }
 
-      /* gnome-config --modversion gnomeui outputs e.g. "gnome-libs-1.2.4"
+      /* pkg-config --modversion gnomeui outputs e.g. "gnome-libs-1.2.4"
        * or libglade-0.12
        */
       p = output;
@@ -1543,16 +1543,16 @@
       pkg->key = g_strdup (name);
       pkg->description = g_strdup ("No description");
 
-      command = g_strdup_printf ("gnome-config --libs %s", name);
+      command = g_strdup_printf ("pkg-config --libs %s", name);
       output = backticks (command);
       g_free (command);
-      parse_libs (pkg, output, "gnome-config");
+      parse_libs (pkg, output, "pkg-config");
       g_free (output);
 
-      command = g_strdup_printf ("gnome-config --cflags %s", name);
+      command = g_strdup_printf ("pkg-config --cflags %s", name);
       output = backticks (command);
       g_free (command);
-      parse_cflags (pkg, output, "gnome-config");
+      parse_cflags (pkg, output, "pkg-config");
       g_free (output);
 
       return pkg;
