--- ./src/3rdparty/webkit/Source/WebCore/dom/XMLDocumentParserQt.cpp.orig	2015-05-07 16:14:47.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/dom/XMLDocumentParserQt.cpp	2019-03-22 13:54:51.725689000 +0200
@@ -215,7 +215,7 @@
 {
 #if ENABLE(XSLT)
     if (m_sawXSLTransform) {
-        document()->setTransformSource(new TransformSource(m_originalSourceForTransform));
+        document()->setTransformSource(adoptPtr(new TransformSource(m_originalSourceForTransform)));
         document()->setParsing(false); // Make the doc think it's done, so it will apply xsl sheets.
         document()->styleSelectorChanged(RecalcStyleImmediately);
         document()->setParsing(true);
