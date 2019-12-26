#
# $Id$
#
PORTNAME=	exim
PORTVERSION=	4.92.3
CATEGORIES=	mail
MASTER_SITES=	EXIM/exim4/:exim EXIM/exim4/old/:exim
DISTNAME=	${PORTNAME}-${PORTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:exim
DIST_SUBDIR=	exim
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	High performance MTA for Unix systems on the Internet

LIB_DEPENDS+=	libspf2.so:net/libspf2
LIB_DEPENDS+=	libsrs_alt.so:net/libsrs_alt
LIB_DEPENDS+=	libidn.so:net/libidn
LIB_DEPENDS+=	libiconv.so:text/libiconv

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
USES+=	pgsql
#LIB_DEPENDS+=	libmysqlclient.so:data/mariadb

LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libsasl2.so:crypto/libcyrus-sasl2


EXIM_SPOOLDIR=		/var/spool/exim
EXIM_LOGDIR=		/var/log/exim
EXIM_LOGFILE=		${EXIM_LOGDIR}/%s.log
EXIM_CONFIGFILE=	${EXIM_CONFDIR}exim.conf
EXIM_CONFDIR=	${PREFIX}/etc/exim/

EXIM_DYNAMIC_LDFLAGS=	-fPIC -rdynamic -export-dynamic
EXIM_DEFAULT_CHARSET=	ISO-8859-1
#EXIM_INSTALL_ARG+=	"-no_chown"
EXIM_INSTALL_ARG+=	"-no_symlink"

MAKE_ENV+=	OSTYPE="${OPSYS}"
MAKE_ENV+=	ARCHTYPE="${ARCH}"
#MAKE_ENV+=	DUMMY_LDFLAGS="${DUMMY_LDFLAGS}"
MAKE_ENV+=	STRIP_COMMAND="${STRIP_CMD}"
MAKE_ENV+=	INSTALL_ARG="${EXIM_INSTALL_ARG}"
MAKE_ARGS+=	FE=""
MAKE_JOBS_UNSAFE=yes
USES=		tar:bz2 #perl5
USE_PERL5=	run

EXIM_OWNER=	exim
EXIM_GROUP=	mail
EXIM_OWNERID=	522
EXIM_GROUPID=	6

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
#PKGMESSAGE=	${WRKDIR}/pkg-message

USE_RC_SUBR=	exim

SUB_FILES+= pkg-install pkg-deinstall

SUB_LIST+=	EXIM_OWNER=${EXIM_OWNER}
SUB_LIST+=	EXIM_GROUP=${EXIM_GROUP}
SUB_LIST+=	EXIM_OWNERID=${EXIM_OWNERID}
SUB_LIST+=	EXIM_GROUPID=${EXIM_GROUPID}
SUB_LIST+=	EXIM_SPOOLDIR=${EXIM_SPOOLDIR}
SUB_LIST+=	EXIM_CONFDIR=${EXIM_CONFDIR}
SUB_LIST+=	EXIM_LOGDIR=${EXIM_LOGDIR}

PORTDOCS=	*


#post-extract:
#	cd ${WRKDIR} && ${TAR} ${EXTRACT_BEFORE_ARGS} ${_DISTDIR}/sa-exim-${SA_EXIM_VERSION}.tar.gz ${EXTRACT_AFTER_ARGS}

do-configure:
	${MKDIR} ${WRKSRC}/Local
	rm -f ${WRKSRC}/Local/Makefile
	touch ${WRKSRC}/Local/Makefile

	echo "BIN_DIRECTORY=${PREFIX}/sbin"	>> ${WRKSRC}/Local/Makefile
	echo "CONFIGURE_FILE=${EXIM_CONFIGFILE}"	>> ${WRKSRC}/Local/Makefile
	echo "EXIM_USER=ref:${EXIM_OWNER}"	>> ${WRKSRC}/Local/Makefile
	echo "EXIM_GROUP=ref:${EXIM_GROUP}"	>> ${WRKSRC}/Local/Makefile

	echo "SPOOL_DIRECTORY=${EXIM_SPOOLDIR}"	>> ${WRKSRC}/Local/Makefile
	echo "SYSTEM_ALIASES_FILE=/etc/aliases"	>> ${WRKSRC}/Local/Makefile
	echo "INFO_DIRECTORY=${PREFIX}/info"	>> ${WRKSRC}/Local/Makefile
	echo "LOG_FILE_PATH=${EXIM_LOGFILE}"	>> ${WRKSRC}/Local/Makefile
	echo "ALT_CONFIG_PREFIX=${EXIM_CONFDIR}"	>> ${WRKSRC}/Local/Makefile

#	echo "TRUSTED_CONFIG_LIST="	>> ${WRKSRC}/Local/Makefile

##	echo "EXIMDB_DIRECTORY_MODE=0750"	>> ${WRKSRC}/Local/Makefile
##	echo "EXIMDB_MODE=0640"	>> ${WRKSRC}/Local/Makefile
##	echo "EXIMDB_LOCKFILE_MODE=0640"	>> ${WRKSRC}/Local/Makefile
##	echo "HEADER_MAXSIZE=\"(1024*1024)\""	>> ${WRKSRC}/Local/Makefile
##	echo "INPUT_DIRECTORY_MODE=0750"	>> ${WRKSRC}/Local/Makefile
##	echo "LOG_DIRECTORY_MODE=0750"	>> ${WRKSRC}/Local/Makefile
##	echo "LOG_MODE=0640"	>> ${WRKSRC}/Local/Makefile
##	echo "MSGLOG_DIRECTORY_MODE=0750"	>> ${WRKSRC}/Local/Makefile
	echo "PID_FILE_PATH=/var/run/exim.pid"	>> ${WRKSRC}/Local/Makefile
##	echo "SPOOL_DIRECTORY_MODE=0750"	>> ${WRKSRC}/Local/Makefile
##	echo "SPOOL_MODE=0640"	>> ${WRKSRC}/Local/Makefile

	echo "EXPAND_LISTMATCH_RHS=yes"	>> ${WRKSRC}/Local/Makefile

	echo "USE_READLINE=yes"	>> ${WRKSRC}/Local/Makefile
	echo "HAVE_IPV6=yes"	>> ${WRKSRC}/Local/Makefile

	echo "HEADERS_CHARSET=\"UTF-8\""	>> ${WRKSRC}/Local/Makefile

	echo "HAVE_ICONV=yes"	>> ${WRKSRC}/Local/Makefile
	echo "CFLAGS+= -I${LOCALBASE}/include"	>> ${WRKSRC}/Local/Makefile
	echo "EXTRALIBS_EXIM+= -L${LOCALBASE}/lib -liconv"	>> ${WRKSRC}/Local/Makefile


	echo "ROUTER_ACCEPT=yes"	>> ${WRKSRC}/Local/Makefile
	echo "ROUTER_DNSLOOKUP=yes"	>> ${WRKSRC}/Local/Makefile
	echo "ROUTER_IPLITERAL=yes"	>> ${WRKSRC}/Local/Makefile
	echo "ROUTER_MANUALROUTE=yes"	>> ${WRKSRC}/Local/Makefile
#	echo "ROUTER_QUERYPROGRAM=yes"	>> ${WRKSRC}/Local/Makefile
	echo "ROUTER_REDIRECT=yes"	>> ${WRKSRC}/Local/Makefile

	echo "TRANSPORT_APPENDFILE=yes"	>> ${WRKSRC}/Local/Makefile
	echo "TRANSPORT_AUTOREPLY=yes"	>> ${WRKSRC}/Local/Makefile
	echo "TRANSPORT_PIPE=yes"	>> ${WRKSRC}/Local/Makefile
	echo "TRANSPORT_SMTP=yes"	>> ${WRKSRC}/Local/Makefile
	echo "TRANSPORT_LMTP=yes"	>> ${WRKSRC}/Local/Makefile

	echo "SUPPORT_MAILDIR=yes"	>> ${WRKSRC}/Local/Makefile
	echo "SUPPORT_MAILSTORE=yes"	>> ${WRKSRC}/Local/Makefile
	echo "SUPPORT_MBX=yes"	>> ${WRKSRC}/Local/Makefile

	echo "LOOKUP_DBM=yes"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_LSEARCH=yes"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_DNSDB=yes"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_CDB=yes"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_PASSWD=yes"	>> ${WRKSRC}/Local/Makefile

	echo "LOOKUP_SQLITE=yes"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_SQLITE_PC=sqlite3"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_INCLUDE+= -I${LOCALBASE}/include"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_LIBS+= -L${LOCALBASE}/lib -lsqlite3"	>> ${WRKSRC}/Local/Makefile

##	echo "LOOKUP_LDAP=yes"	>> ${WRKSRC}/Local/Makefile

#	echo "LOOKUP_MYSQL=yes"	>> ${WRKSRC}/Local/Makefile
#	echo "LOOKUP_INCLUDE+= -I${LOCALBASE}/include/mysql"	>> ${WRKSRC}/Local/Makefile
#	echo "LOOKUP_LIBS+= -L${LOCALBASE}/lib/mysql -lmysqlclient"	>> ${WRKSRC}/Local/Makefile

	echo "LOOKUP_PGSQL=yes"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_INCLUDE+= -I${LOCALBASE}/include/postgresql"	>> ${WRKSRC}/Local/Makefile
	echo "LOOKUP_LIBS+= -L${LOCALBASE}/lib -lpq"	>> ${WRKSRC}/Local/Makefile
##	echo "DBMLIB="	>> ${WRKSRC}/Local/Makefile

	echo "PCRE_CONFIG=yes"	>> ${WRKSRC}/Local/Makefile
	echo "PCRE_LIBS= -lpcre"	>> ${WRKSRC}/Local/Makefile
	echo "INCLUDE+=	-I${LOCALBASE}/include"	>> ${WRKSRC}/Local/Makefile

####	echo "EXIM_MONITOR=eximon.bin"	>> ${WRKSRC}/Local/Makefile
	echo "WITH_CONTENT_SCAN=yes"	>> ${WRKSRC}/Local/Makefile
	echo "WITH_OLD_DEMIME=yes"	>> ${WRKSRC}/Local/Makefile

##	echo "DISABLE_DKIM=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "DISABLE_PRDR=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "DISABLE_OCSP=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "DISABLE_DNSSEC=yes"	>> ${WRKSRC}/Local/Makefile

##	echo "EXPERIMENTAL_DCC=yes"	>> ${WRKSRC}/Local/Makefile
	echo "EXPERIMENTAL_SPF=yes"	>> ${WRKSRC}/Local/Makefile
	echo "CFLAGS+= -I${LOCALBASE}/include -DSPF"	>> ${WRKSRC}/Local/Makefile
	echo "EXTRALIBS_EXIM+= -L${LOCALBASE}/lib -lspf2"	>> ${WRKSRC}/Local/Makefile

	echo "EXPERIMENTAL_SRS=yes"	>> ${WRKSRC}/Local/Makefile
	echo "CFLAGS += -I${LOCALBASE}/include ${CFLAGS}"	>> ${WRKSRC}/Local/Makefile
	echo "EXTRALIBS_EXIM+= -L${LOCALBASE}/lib -lsrs_alt"	>> ${WRKSRC}/Local/Makefile

##	echo "EXPERIMENTAL_DMARC=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "EXPERIMENTAL_EVENT=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "EXPERIMENTAL_PROXY=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "EXPERIMENTAL_CERTNAMES=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "EXPERIMENTAL_DANE=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "EXPERIMENTAL_SOCKS=yes"	>> ${WRKSRC}/Local/Makefile

	echo "EXPERIMENTAL_DSN_INFO=yes"	>> ${WRKSRC}/Local/Makefile
	echo "SUPPORT_I18N=yes"	>> ${WRKSRC}/Local/Makefile
	echo "EXTRALIBS_EXIM+= -L${LOCALBASE}/lib -lidn"	>> ${WRKSRC}/Local/Makefile

#	echo "FIXED_NEVER_USERS=root"	>> ${WRKSRC}/Local/Makefile

#	echo "DISABLE_D_OPTION=yes"	>> ${WRKSRC}/Local/Makefile
#	echo "WHITELIST_D_MACROS="	>> ${WRKSRC}/Local/Makefile

	echo "AUTH_CRAM_MD5=yes"	>> ${WRKSRC}/Local/Makefile
	echo "AUTH_CYRUS_SASL=yes"	>> ${WRKSRC}/Local/Makefile
	echo "CYRUS_SASLAUTHD_SOCKET=/var/run/saslauthd/mux"	>> ${WRKSRC}/Local/Makefile
	echo "AUTH_LIBS+= -L${LOCALBASE}/lib -lsasl2 -lcrypt"	>> ${WRKSRC}/Local/Makefile
	echo "AUTH_DOVECOT=yes"	>> ${WRKSRC}/Local/Makefile
	echo "AUTH_PLAINTEXT=yes"	>> ${WRKSRC}/Local/Makefile
	echo "AUTH_SPA=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "AUTH_TLS=yes"	>> ${WRKSRC}/Local/Makefile

	echo "SUPPORT_PAM=yes"	>> ${WRKSRC}/Local/Makefile
	echo "EXTRALIBS_EXIM+= -lpam"	>> ${WRKSRC}/Local/Makefile


	echo "SUPPORT_TLS=yes"	>> ${WRKSRC}/Local/Makefile
	echo "TLS_LIBS+= -L${LOCALBASE}/lib -lssl -lcrypto"	>> ${WRKSRC}/Local/Makefile
##	echo "USE_GNUTLS=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "USE_GNUTLS_PC=gnutls"	>> ${WRKSRC}/Local/Makefile
##	echo "TLS_LIBS=-lgnutls -ltasn1 -lgcrypt"	>> ${WRKSRC}/Local/Makefile
##	echo "TLS_LIBS=-L${LOCALBASE}/lib -lgnutls -ltasn1 -lgcrypt"	>> ${WRKSRC}/Local/Makefile
##	echo "TLS_INCLUDE=-I${LOCALBASE}/include/"	>> ${WRKSRC}/Local/Makefile

	echo "SYSLOG_LONG_LINES=yes"	>> ${WRKSRC}/Local/Makefile

	echo "SYSLOG_LOG_PID=yes"	>> ${WRKSRC}/Local/Makefile
	echo "EXICYCLOG_MAX=10"	>> ${WRKSRC}/Local/Makefile
	echo "EXPAND_DLFUNC=yes"	>> ${WRKSRC}/Local/Makefile

	echo "SUPPORT_MOVE_FROZEN_MESSAGES=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "USE_TCP_WRAPPERS=yes"	>> ${WRKSRC}/Local/Makefile
##	echo "EXTRALIBS_EXIM+=-L${LOCALBASE}/lib -lwrap"	>> ${WRKSRC}/Local/Makefile

	echo "EXTRALIBS+= -lpthread"	>> ${WRKSRC}/Local/Makefile

	echo "CFLAGS+=  ${CFLAGS}"	>> ${WRKSRC}/Local/Makefile
	echo "LDFLAGS+= -L${LOCALBASE}/lib ${EXIM_DYNAMIC_LDFLAGS}"	>> ${WRKSRC}/Local/Makefile

	echo "COMPRESS_COMMAND=/usr/bin/gzip"	>> ${WRKSRC}/Local/Makefile
	echo "COMPRESS_SUFFIX=gz"	>> ${WRKSRC}/Local/Makefile
	echo "ZCAT_COMMAND=/usr/bin/zcat"	>> ${WRKSRC}/Local/Makefile
	echo "CHOWN_COMMAND=/usr/sbin/chown"	>> ${WRKSRC}/Local/Makefile
	echo "CHGRP_COMMAND=/usr/bin/chgrp"	>> ${WRKSRC}/Local/Makefile
	echo "CHMOD_COMMAND=/bin/chmod"	>> ${WRKSRC}/Local/Makefile
	echo "MV_COMMAND=/bin/mv"	>> ${WRKSRC}/Local/Makefile
	echo "RM_COMMAND=/bin/rm"	>> ${WRKSRC}/Local/Makefile
	echo "TOUCH_COMMAND=/usr/bin/touch"	>> ${WRKSRC}/Local/Makefile
	echo "PERL_COMMAND=${LOCALBASE}/bin/perl"	>> ${WRKSRC}/Local/Makefile
	echo "TMPDIR=\"/tmp\""	>> ${WRKSRC}/Local/Makefile

	${REINPLACE_CMD} -e 's/"(Exim $$version_number)\\n\\t"/"(Exim $$version_number (${OPSYS}))\\n\\t"/' \
		${WRKSRC}/src/globals.c
	${REINPLACE_CMD} -e 's/Exim version %s \(#%s \)\{0,1\}/&(${OPSYS} ${OSREL}) /' ${WRKSRC}/src/exim.c
	${REINPLACE_CMD} -e 's/^#include "cnumber\.h"$$/${PORTREVISION}/' ${WRKSRC}/src/version.c
	${REINPLACE_CMD} -E -e 's/^(PERL_COMMAND=).*/\1${PERL:S,/,\/,g}/' \
		-e 's/^(CC=).*/\1${CC:S,/,\/,g}/' ${WRKSRC}/OS/Makefile-Default

	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} configure

EXIM_DOCS+= doc/OptionLists.txt
EXIM_DOCS+= doc/experimental-spec.txt
EXIM_DOCS+= doc/filter.txt
EXIM_DOCS+= doc/spec.txt

EXIM_EXAMPLES+= src/configure.default
EXIM_EXAMPLES+= src/aliases.default

PORTEXAMPLES=	*

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man8
	${INSTALL_DATA} ${WRKSRC}/doc/exim.8 ${STAGEDIR}${PREFIX}/man/man8
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for F in ${EXIM_DOCS}
	${INSTALL_DATA} ${WRKSRC}/${F} ${STAGEDIR}${DOCSDIR}
.endfor
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
.for F in ${EXIM_EXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/${F} ${STAGEDIR}${EXAMPLESDIR}
.endfor

.include <bsd.port.mk>
#EOF

