--- ./xsltproc/xsltproc.c.orig	2012-09-04 17:26:23.000000000 +0300
+++ ./xsltproc/xsltproc.c	2014-11-29 17:23:25.000000000 +0200
@@ -531,7 +531,7 @@
 #ifdef LIBXML_CATALOG_ENABLED
     printf("\t--catalogs : use SGML catalogs from $SGML_CATALOG_FILES\n");
     printf("\t             otherwise XML Catalogs starting from \n");
-    printf("\t         file:///etc/xml/catalog are activated by default\n");
+    printf("\t         file:///usr/local/share/xml/catalog.xml are activated by default\n");
 #endif
 #ifdef LIBXML_XINCLUDE_ENABLED
     printf("\t--xinclude : do XInclude processing on document input\n");
