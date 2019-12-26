#
# $Id: Makefile 2563 2009-09-24 18:36:20Z root $
#
PORTNAME=	openldap
PORTVERSION=	2.4.48
PORTREVISION=	${OPENLDAP_PORTREVISION}
CATEGORIES=	net databases
MASTER_SITES+=	ftp://ftp.OpenLDAP.org/pub/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	http://public.planetmirror.com/pub/openldap/%SUBDIR%/ 
MASTER_SITES+=	ftp://gd.tuwien.ac.at/infosys/network/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.matrix.com.br/pub/openldap/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.ucr.ac.cr/pub/Unix/openldap/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.ntua.gr/mirror/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.shellhung.org/pub/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.dti.ad.jp/pub/net/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.u-aizu.ac.jp/pub/net/openldap/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.holywar.net/pub/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.nl.uu.net/pub/unix/db/openldap/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.linux.pt/pub/mirrors/OpenLDAP/%SUBDIR%/
MASTER_SITES+=	ftp://ftp.rediris.es/mirror/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	ftp://sunsite.cnlab-switch.ch/mirror/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	http://openldap.cdpa.nsysu.edu.tw/OpenLDAP/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.plig.org/pub/OpenLDAP/%SUBDIR%/

MASTER_SITE_SUBDIR=	openldap-release
EXTRACT_SUFX=	.tgz

MAINTAINER= homeunix7@gmail.com
COMMENT=	Open source LDAP server implementation


LIB_DEPENDS+= libodbc.so:data/unixODBC
LIB_DEPENDS+= libicudata.so:devel/libicu
LIB_DEPENDS+= libicuuc.so:devel/libicu


LDAP_SUBDIR=	openldap

VAR_DIR=	/var

SLURP_DIR=	${LOCALSTATE_DIR}/db/slurp

RUN_DIR=	${VAR_DIR}/run/${PORTNAME}
DB_DIR=		${VAR_DIR}/db/${PORTNAME}
CONF_DIR= 	${PREFIX}/etc/${PORTNAME}

CFLAGS+=	-DMDB_DSYNC=O_SYNC -Dfdatasync=fsync

OWNER=	ldap
GROUP=	ldap
OWNER_ID=	389
GROUP_ID=	389

GNU_CONFIGURE=  yes
USES+=	gmake

CONFIGURE_ARGS+= --enable-slapd
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --enable-shared

CONFIGURE_ARGS+= --with-threads=posix
CONFIGURE_ARGS+= --with-tls=openssl
CONFIGURE_ARGS+= --disable-dependency-tracking

CONFIGURE_ARGS+= --localstatedir=${VAR_DIR}
CONFIGURE_ARGS+= --includedir=${PREFIX}/include
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFIGURE_ARGS+= --enable-debug
CONFIGURE_ARGS+= --enable-dynamic
CONFIGURE_ARGS+= --enable-accesslog=yes
CONFIGURE_ARGS+= --enable-cleartext
CONFIGURE_ARGS+= --enable-rewrite
CONFIGURE_ARGS+= --disable-dnssrv

CONFIGURE_ARGS+= --enable-ldap
CONFIGURE_ARGS+= --enable-monitor
CONFIGURE_ARGS+= --enable-relay
CONFIGURE_ARGS+= --enable-local
CONFIGURE_ARGS+= --enable-syslog
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --enable-passwd
CONFIGURE_ARGS+= --enable-crypt
CONFIGURE_ARGS+= --enable-lmpasswd

CONFIGURE_ARGS+= --enable-sql
CONFIGURE_ARGS+= --with-odbc=unixodbc

CONFIGURE_ARGS+= --enable-bdb=no
CONFIGURE_ARGS+= --enable-hdb=no

MAKE_FLAGS+= LN_S="ln"
MAKE_ARGS+=  LN_S="ln"

LDFLAGS+= -L${LOCALBASE}/lib 
CPPFLAGS+= -I${LOCALBASE}/include
CFLAGS+= -I${LOCALBASE}/include

INSTALLS_SHLIB=	yes

PKGINSTALL=	${WRKDIR}/pkg-install
PKGDEINSTALL=	${WRKDIR}/pkg-deinstall

USE_RC_SUBR=	slapd.sh 

SUB_FILES= 	pkg-install pkg-deinstall

SUB_LIST+= OWNER=${OWNER}
SUB_LIST+= GROUP=${GROUP}
SUB_LIST+= OWNER_ID=${OWNER_ID}
SUB_LIST+= GROUP_ID=${GROUP_ID}

SUB_LIST+= CONF_DIR=${CONF_DIR}

SUB_LIST+= RUN_DIR=${RUN_DIR}
SUB_LIST+= DB_DIR=${DB_DIR}

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/libraries/libldap/ldap.conf ${STAGEDIR}${EXAMPLESDIR}/ldap.conf.sample
	${INSTALL_DATA} ${WRKSRC}/servers/slapd/slapd.conf ${STAGEDIR}${EXAMPLESDIR}/slapd.conf.sample

	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/servers/slapd/back-sql && ${COPYTREE_SHARE} rdbms_depend ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
#EOF

