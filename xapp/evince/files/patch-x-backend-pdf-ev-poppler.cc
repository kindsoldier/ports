--- ./backend/pdf/ev-poppler.cc.orig	2019-12-22 21:51:19.326231000 +0200
+++ ./backend/pdf/ev-poppler.cc	2019-12-22 22:00:04.964748000 +0200
@@ -334,7 +334,7 @@
 {
 	char *label = NULL;
 
-	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), NULL);
+	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), 0);
 
 	g_object_get (G_OBJECT (page->backend_page),
 		      "label", &label,
@@ -1518,7 +1518,7 @@
 	gdouble height;
 	GList *retval = NULL;
 
-	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), NULL);
+	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), 0);
 	g_return_val_if_fail (text != NULL, NULL);
 
 	poppler_page = POPPLER_PAGE (page->backend_page);
@@ -2008,7 +2008,7 @@
 	GList *region;
 	cairo_region_t *retval;
 
-	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), NULL);
+	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), 0);
 
 	poppler_page = POPPLER_PAGE (page->backend_page);
 
@@ -2032,7 +2032,7 @@
 {
 	PopplerPage *poppler_page;
 
-	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), NULL);
+	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), 0);
 
 	poppler_page = POPPLER_PAGE (page->backend_page);
 
@@ -2046,7 +2046,7 @@
 	PopplerPage *poppler_page;
 	PopplerRectangle r;
 
-	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), NULL);
+	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), 0);
 
 	poppler_page = POPPLER_PAGE (page->backend_page);
 
@@ -2069,7 +2069,7 @@
 {
 	PopplerPage *poppler_page;
 
-	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), NULL);
+	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), 0);
 
 	poppler_page = POPPLER_PAGE (page->backend_page);
 
@@ -2285,7 +2285,7 @@
  	GList *list;
  	double height;
 
-	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), NULL);
+	g_return_val_if_fail (POPPLER_IS_PAGE (page->backend_page), 0);
 	
  	poppler_page = POPPLER_PAGE (page->backend_page);
  	fields = poppler_page_get_form_field_mapping (poppler_page);
