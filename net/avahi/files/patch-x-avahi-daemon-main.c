--- ./avahi-daemon/main.c.orig	2010-11-18 05:00:26.288465000 +0200
+++ ./avahi-daemon/main.c	2015-01-02 15:33:56.000000000 +0200
@@ -320,6 +320,11 @@
         return;
     }
 
+    if (!resolv_conf_search_domains) {
+	    avahi_server_set_browse_domains(avahi_server, NULL);
+	    return;
+    }
+
     l = avahi_string_list_copy(config.server_config.browse_domains);
 
     for (p = resolv_conf_search_domains, n = 0; *p && n < BROWSE_DOMAINS_MAX; p++, n++) {
