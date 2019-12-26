--- ./include/ldap_defaults.h.orig	2015-08-14 17:25:28.000000000 +0200
+++ ./include/ldap_defaults.h	2015-09-22 04:39:14.571416000 +0200
@@ -34,20 +34,30 @@
 
 #include <ldap_config.h>
 
+#ifndef LDAP_CONF_FILE
 #define LDAP_CONF_FILE	 LDAP_SYSCONFDIR LDAP_DIRSEP "ldap.conf"
-#define LDAP_USERRC_FILE "ldaprc"
+#endif
+#ifndef LDAP_USERRC_FILE
+#define LDAP_USERRC_FILE ".ldaprc"
+#endif
 #define LDAP_ENV_PREFIX "LDAP"
 
 /* default ldapi:// socket */
-#define LDAPI_SOCK LDAP_RUNDIR LDAP_DIRSEP "run" LDAP_DIRSEP "ldapi"
+#ifndef LDAPI_SOCK
+#define LDAPI_SOCK LDAP_RUNDIR LDAP_DIRSEP "run" LDAP_DIRSEP "openldap" LDAP_DIRSEP "ldapi"
+#endif
 
 /*
  * SLAPD DEFINITIONS
  */
 	/* location of the default slapd config file */
+#ifndef	SLAPD_DEFAULT_CONFIGFILE
 #define SLAPD_DEFAULT_CONFIGFILE	LDAP_SYSCONFDIR LDAP_DIRSEP "slapd.conf"
+#endif
 #define SLAPD_DEFAULT_CONFIGDIR		LDAP_SYSCONFDIR LDAP_DIRSEP "slapd.d"
-#define SLAPD_DEFAULT_DB_DIR		LDAP_RUNDIR LDAP_DIRSEP "openldap-data"
+#ifndef SLAPD_DEFAULT_DB_DIR
+#define SLAPD_DEFAULT_DB_DIR		LDAP_RUNDIR LDAP_DIRSEP "db" LDAP_DIRSEP "openldap"
+#endif
 #define SLAPD_DEFAULT_DB_MODE		0600
 #define SLAPD_DEFAULT_UCDATA		LDAP_DATADIR LDAP_DIRSEP "ucdata"
 	/* default max deref depth for aliases */
