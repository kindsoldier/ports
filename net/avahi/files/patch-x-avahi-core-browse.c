--- ./avahi-core/browse.c.orig	2010-08-26 03:51:38.983153000 +0300
+++ ./avahi-core/browse.c	2015-01-02 15:33:56.000000000 +0200
@@ -68,7 +68,6 @@
 
     if (*flags & (AVAHI_LOOKUP_USE_MULTICAST|AVAHI_LOOKUP_USE_WIDE_AREA))
         return;
-
     if (!s->wide_area_lookup_engine ||
         !avahi_wide_area_has_servers(s->wide_area_lookup_engine) ||
         avahi_domain_ends_with(domain, AVAHI_MDNS_SUFFIX_LOCAL) ||
