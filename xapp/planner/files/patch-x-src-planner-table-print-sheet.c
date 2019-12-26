--- ./src/planner-table-print-sheet.c.orig	2011-09-29 16:33:42.000000000 +0300
+++ ./src/planner-table-print-sheet.c	2013-10-03 10:40:20.000000000 +0300
@@ -177,7 +177,7 @@
 	}
 
 	if (weight == PANGO_WEIGHT_BOLD) {
-		planner_print_job_set_font_bold (sheet->job);
+/*		planner_print_job_set_font_bold (sheet->job); */
 	}
 
 	d(g_print ("Writing: [%s]\n", str));
