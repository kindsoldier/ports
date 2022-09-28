--- ./channels/chan_sip.c.orig	2017-04-07 17:49:39.000000000 +0200
+++ ./channels/chan_sip.c	2017-04-19 07:14:39.240850000 +0200
@@ -21325,8 +21325,8 @@
 /*! \brief  Show SIP Registry (registrations with other SIP proxies */
 static char *sip_show_registry(struct ast_cli_entry *e, int cmd, struct ast_cli_args *a)
 {
-#define FORMAT2 "%-39.39s %-6.6s %-12.12s  %8.8s %-20.20s %-25.25s\n"
-#define FORMAT  "%-39.39s %-6.6s %-12.12s  %8d %-20.20s %-25.25s\n"
+#define FORMAT2 "%-39.39s %-6.6s %-16.16s  %8.8s %-20.20s %-25.25s\n"
+#define FORMAT  "%-39.39s %-6.6s %-16.16s  %8d %-20.20s %-25.25s\n"
 	char host[80];
 	char user[80];
 	char tmpdat[256];
