#
# $Id$
#
PORTNAME=	postgresql
PORTVERSION=	09.05.0210
CATEGORIES=	databases
MASTER_SITES=	PGSQL/odbc/versions/src
PKGNAMESUFFIX=	-odbc
DISTNAME=	psqlodbc-${PORTVERSION}
DIST_SUBDIR=	postgresql

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	PostgreSQL ODBC driver

LIB_DEPENDS=	libodbc.so:data/unixODBC
USES+=	pgsql

USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-unixodbc=${LOCALBASE}
#CONFIGURE_ARGS+= --disable-unicode
INSTALL_TARGET=	install-strip
USES+=		gmake

PORTEXAMPLES=	*

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/*.sql ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
#EOF
