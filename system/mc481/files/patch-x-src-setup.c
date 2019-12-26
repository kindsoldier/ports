--- ./src/setup.c.orig	2012-12-28 11:47:48.000000000 +0300
+++ ./src/setup.c	2015-10-12 23:33:18.831858000 +0200
@@ -132,13 +132,13 @@
     .kilobyte_si = FALSE,
     .mix_all_files = FALSE,
     .show_backups = TRUE,
-    .show_dot_files = TRUE,
+    .show_dot_files = FALSE,
     .fast_reload = FALSE,
     .fast_reload_msg_shown = FALSE,
     .mark_moves_down = TRUE,
     .reverse_files_only = TRUE,
     .auto_save_setup = FALSE,
-    .navigate_with_arrows = FALSE,
+    .navigate_with_arrows = TRUE,
     .scroll_pages = TRUE,
     .mouse_move_pages = TRUE,
     .filetype_mode = TRUE,
