#
# $Id$
#
PORTNAME=	powerdns
PORTVERSION=	4.1.10
CATEGORIES=	dns
MASTER_SITES=	http://downloads.powerdns.com/releases/
DISTNAME=	pdns-${PORTVERSION}

MAINTAINER=	tremere@cainites.net
COMMENT=	Advanced DNS server with multiple backends including SQL

BUILD_DEPENDS+=	${LOCALBASE}/lib/libboost_serialization.a:devel/libboost
USES+=	pgsql
LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext

USES=		gmake tar:bzip2
USE_LDCONFIG=	yes
USE_SUBMAKE=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

CXXFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --disable-static
CONFIGURE_ARGS+= --with-modules=""
CONFIGURE_ARGS+= --with-dynmodules="pipe bind ${MODULES}"
CONFIGURE_ARGS+= --docdir="${PREFIX}/share/pdns"
CONFIGURE_ARGS+= --sysconfdir="${PREFIX}/etc/pdns"
CONFIGURE_ARGS+= --with-boost="${LOCALBASE}"
CONFIGURE_ARGS+= --with-pgsql=${LOCALBASE}
CONFIGURE_ARGS+= --without-mysql
#CONFIGURE_ARGS+= --without-system-polarssl
CONFIGURE_ARGS+= --enable-static-boost
CONFIGURE_ARGS+= --with-sqlite3
CONFIGURE_ARGS+= --with-pgsql-includes=${LOCALBASE}/include/postgresql
#CONFIGURE_ARGS+= --with-pgsql-config=${LOCALBASE}/bin/pg_config
#CONFIGURE_ARGS+= --enable-tools


MODULES+=	gpgsql gsqlite3 bind

SCRIPTS_ENV+=	WRKDIRPREFIX="${WRKDIRPREFIX}"
SCRIPTS_ENV+=	CURDIR2="${.CURDIR}"
SCRIPTS_ENV+=	MKDIR="${MKDIR}"
SCRIPTS_ENV+=	DISTNAME="${DISTNAME}"
SCRIPTS_ENV+=	POWERDNS_OPTIONS="${POWERDNS_OPTIONS}"

SUB_FILES=	pkg-message

USE_RC_SUBR=	pdns

PDNS_OWNER=	pdns
PDNS_GROUP=	pdns
PDNS_OWNER_ID=	120
PDNS_GROUP_ID=	120

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall

SUB_LIST+= PDNS_OWNER=${PDNS_OWNER}
SUB_LIST+= PDNS_GROUP=${PDNS_GROUP}
SUB_LIST+= PDNS_OWNER_ID=${PDNS_OWNER_ID}
SUB_LIST+= PDNS_GROUP_ID=${PDNS_GROUP_ID}
SUB_LIST+= PREFIX=${PREFIX}


PORTEXAMPLES=	*

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${FILESDIR}/pdns.conf ${STAGEDIR}${EXAMPLESDIR}/pdns.conf.example

.include <bsd.port.mk>
#EOF