--- ./src/planner-gantt-model.c.orig	2011-12-25 05:54:01.000000000 +0300
+++ ./src/planner-gantt-model.c	2013-10-03 10:40:40.000000000 +0300
@@ -861,7 +861,8 @@
 	case COL_WEIGHT:
 		g_value_init (value, G_TYPE_INT);
 		if (g_node_n_children (node) > 0) {
-			g_value_set_int (value, PANGO_WEIGHT_BOLD);
+/*			g_value_set_int (value, PANGO_WEIGHT_BOLD); */
+			g_value_set_int (value, PANGO_WEIGHT_NORMAL);
 		} else {
 			g_value_set_int (value, PANGO_WEIGHT_NORMAL);
 		}
