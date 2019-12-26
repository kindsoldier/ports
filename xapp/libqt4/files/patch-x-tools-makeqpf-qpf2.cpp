--- ./tools/makeqpf/qpf2.cpp.orig	2015-05-07 16:14:40.000000000 +0200
+++ ./tools/makeqpf/qpf2.cpp	2019-03-22 13:54:51.855881000 +0200
@@ -363,6 +363,8 @@
     int startGlyphIndex;
 };
 
+#define log2(x) log(x)/log(2)
+
 static QByteArray generateTrueTypeCMap(QFontEngine *fe)
 {
     QByteArray cmap;
