--- ./libs/install.c.orig	2003-09-03 13:33:52.000000000 +0300
+++ ./libs/install.c	2015-10-21 08:50:54.316859000 +0200
@@ -517,11 +517,10 @@
     /* these should all be <sect> nodes */	    
     for(node = sect_node; node != NULL; node = node->next)
     {
+	xmlChar *categorycode;
     	if (xmlStrcmp(node->name, (xmlChar *)"sect"))
 	    continue;
 	
-	xmlChar *categorycode;
-	
 	categorycode = xmlGetProp(node, (xmlChar *)"categorycode");
 	if (categorycode == NULL)
 	    continue;
