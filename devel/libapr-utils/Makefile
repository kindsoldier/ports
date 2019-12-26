#
# $Id: Makefile 2624 2009-09-28 09:26:15Z root $
#
PORTNAME=	apr-util
PORTVERSION=	1.6.1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_APACHE}
MASTER_SITE_SUBDIR= apr
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	The Apache Group's Portability Library

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libapr.so:devel/libapr
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --with-apr=${LOCALBASE}/bin/apr-config
CONFIGURE_ARGS+= --with-expat=${LOCALBASE}
CONFIGURE_ARGS+= --with-iconv=${LOCALBASE}
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --with-crypto

CONFIGURE_ARGS+= --without-pgsql
CONFIGURE_ARGS+= --without-mysql
CONFIGURE_ARGS+= --without-odbc

CONFIGURE_ARGS+= --with-sqlite3

.include <bsd.port.mk>
#EOF
