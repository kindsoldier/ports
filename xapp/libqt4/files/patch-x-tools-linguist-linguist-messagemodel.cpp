--- ./tools/linguist/linguist/messagemodel.cpp.orig	2015-05-07 16:14:39.000000000 +0200
+++ ./tools/linguist/linguist/messagemodel.cpp	2019-03-22 13:54:51.845676000 +0200
@@ -183,7 +183,7 @@
         if (ContextItem *c = one->findContext(oc->context())) {
             for (int j = 0; j < oc->messageCount(); ++j) {
                 MessageItem *m = oc->messageItem(j);
-                if (c->findMessage(m->text(), m->comment()) >= 0)
+                if (c->findMessage(m->text(), m->comment()) != NULL)
                     ++inBoth;
             }
         }
@@ -687,7 +687,7 @@
         if (MultiContextItem *mc = findContext(c->context())) {
             for (int j = 0; j < c->messageCount(); ++j) {
                 MessageItem *m = c->messageItem(j);
-                if (mc->findMessage(m->text(), m->comment()) >= 0)
+                if (mc->findMessage(m->text(), m->comment()) != NULL)
                     ++inBothNew;
             }
         }
