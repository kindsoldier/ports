--- ./gtk/gtksettings.c.orig	2011-08-16 05:30:52.000000000 +0300
+++ ./gtk/gtksettings.c	2011-10-26 11:01:16.000000000 +0300
@@ -782,7 +782,7 @@
                                              g_param_spec_string ("gtk-print-preview-command",
                                                                   P_("Default command to run when displaying a print preview"),
                                                                   P_("Command to run when displaying a print preview"),
-                                                                  GTK_PRINT_PREVIEW_COMMAND,
+                                                                  "epdfview %f"/* GTK_PRINT_PREVIEW_COMMAND */,
                                                                   GTK_PARAM_READWRITE),
                                              NULL); 
   g_assert (result == PROP_PRINT_PREVIEW_COMMAND);
