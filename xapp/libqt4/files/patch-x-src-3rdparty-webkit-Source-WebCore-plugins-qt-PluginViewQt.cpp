--- ./src/3rdparty/webkit/Source/WebCore/plugins/qt/PluginViewQt.cpp.orig	2015-05-07 16:14:47.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/plugins/qt/PluginViewQt.cpp	2019-03-22 13:54:51.745088000 +0200
@@ -950,7 +950,7 @@
 
 #if USE(ACCELERATED_COMPOSITING) && !USE(TEXTURE_MAPPER)
         if (shouldUseAcceleratedCompositing()) {
-            m_platformLayer = new PluginGraphicsLayerQt(this);
+            m_platformLayer = adoptPtr(new PluginGraphicsLayerQt(this));
             // Trigger layer computation in RenderLayerCompositor
             m_element->setNeedsStyleRecalc(SyntheticStyleChange);
         }
