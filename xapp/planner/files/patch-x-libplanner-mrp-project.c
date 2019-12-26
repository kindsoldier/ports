--- ./libplanner/mrp-project.c.orig	2011-09-29 17:15:45.000000000 +0300
+++ ./libplanner/mrp-project.c	2013-10-03 09:48:17.000000000 +0300
@@ -651,7 +651,7 @@
 
 	priv->app = app;
 
-	project_set_storage (project, "mrproject-1");
+	project_set_storage (project, "mrproject");
 
 	project->priv->app = app;
 
@@ -780,7 +780,7 @@
 			return FALSE;
 		}
 	} else {
-		project_set_storage (project, "mrproject-1");
+		project_set_storage (project, "mrproject");
 	}
 
 	return mrp_storage_module_save (priv->primary_storage, uri, force, error);
