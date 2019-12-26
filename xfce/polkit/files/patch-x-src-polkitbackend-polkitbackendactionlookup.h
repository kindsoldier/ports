--- ./src/polkitbackend/polkitbackendactionlookup.h.orig	2014-01-15 01:42:25.000000000 +0300
+++ ./src/polkitbackend/polkitbackendactionlookup.h	2016-03-11 11:41:57.813081000 +0200
@@ -38,7 +38,7 @@
  *
  * Extension point name for looking up action information.
  */
-#define POLKIT_BACKEND_ACTION_LOOKUP_EXTENSION_POINT_NAME "polkit-backend-action-lookup-1"
+#define POLKIT_BACKEND_ACTION_LOOKUP_EXTENSION_POINT_NAME "polkit-backend-action-lookup"
 
 #define POLKIT_BACKEND_TYPE_ACTION_LOOKUP         (polkit_backend_action_lookup_get_type())
 #define POLKIT_BACKEND_ACTION_LOOKUP(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), POLKIT_BACKEND_TYPE_ACTION_LOOKUP, PolkitBackendActionLookup))
