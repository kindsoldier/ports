--- ./src/3rdparty/webkit/Source/WebCore/platform/text/qt/TextCodecQt.cpp.orig	2015-05-07 16:14:47.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/platform/text/qt/TextCodecQt.cpp	2019-03-22 13:54:51.742886000 +0200
@@ -64,7 +64,7 @@
 
 static PassOwnPtr<TextCodec> newTextCodecQt(const TextEncoding& encoding, const void*)
 {
-    return new TextCodecQt(encoding);
+    return adoptPtr(new TextCodecQt(encoding));
 }
 
 void TextCodecQt::registerCodecs(TextCodecRegistrar registrar)
