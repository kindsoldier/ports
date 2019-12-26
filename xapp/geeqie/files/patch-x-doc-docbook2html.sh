--- ./doc/docbook2html.sh.orig	2012-08-12 23:13:40.000000000 +0300
+++ ./doc/docbook2html.sh	2014-12-29 02:21:39.000000000 +0200
@@ -4,4 +4,4 @@
 #xsltproc --xinclude -o index.html /usr/share/xml/docbook/stylesheet/nwalsh/current/html/docbook.xsl docbook/GuideIndex.xml
 
 # this requires gnome-doc-utils package
-xsltproc --xinclude -o html/GuideIndex.html /usr/share/xml/gnome/xslt/docbook/html/db2html.xsl docbook/GuideIndex.xml
\ No newline at end of file
+xsltproc --xinclude -o html/GuideIndex.html /usr/local/share/xml/gnome/xslt/docbook/html/db2html.xsl docbook/GuideIndex.xml
\ No newline at end of file
