--- ./clients/tools/common.c.orig	2015-08-14 17:25:28.000000000 +0200
+++ ./clients/tools/common.c	2015-09-22 04:45:28.677312000 +0200
@@ -337,25 +337,35 @@
    "             not really controls)\n")
 N_("  -h host    LDAP server\n"),
 N_("  -H URI     LDAP Uniform Resource Identifier(s)\n"),
+#ifdef HAVE_CYRUS_SASL
 N_("  -I         use SASL Interactive mode\n"),
+#endif
 N_("  -n         show what would be done but don't actually do it\n"),
 N_("  -N         do not use reverse DNS to canonicalize SASL host name\n"),
+#ifdef HAVE_CYRUS_SASL
 N_("  -O props   SASL security properties\n"),
+#endif
 N_("  -o <opt>[=<optparam>] general options\n"),
 N_("             nettimeout=<timeout> (in seconds, or \"none\" or \"max\")\n"),
 N_("             ldif-wrap=<width> (in columns, or \"no\" for no wrapping)\n"),
 N_("  -p port    port on LDAP server\n"),
+#ifdef HAVE_CYRUS_SASL
 N_("  -Q         use SASL Quiet mode\n"),
 N_("  -R realm   SASL realm\n"),
 N_("  -U authcid SASL authentication identity\n"),
 N_("  -v         run in verbose mode (diagnostics to standard output)\n"),
+#endif
 N_("  -V         print version info (-VV only)\n"),
 N_("  -w passwd  bind password (for simple authentication)\n"),
 N_("  -W         prompt for bind password\n"),
 N_("  -x         Simple authentication\n"),
+#ifdef HAVE_CYRUS_SASL
 N_("  -X authzid SASL authorization identity (\"dn:<dn>\" or \"u:<user>\")\n"),
+#endif
 N_("  -y file    Read password from file\n"),
+#ifdef HAVE_CYRUS_SASL
 N_("  -Y mech    SASL mechanism\n"),
+#endif
 N_("  -Z         Start TLS request (-ZZ to require successful response)\n"),
 NULL
 	};
