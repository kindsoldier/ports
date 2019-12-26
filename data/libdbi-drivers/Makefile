#
# $Id$
#
PORTNAME=	libdbi-drivers
PORTVERSION=	0.9.0
CATEGORIES=	databases devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Drivers for libdbi

#LIB_DEPENDS=	libdbi.so:databases/libdbi
LIB_DEPENDS+=	libdbi.so:data/libdbi
#LIB_DEPENDS+=	libmysqlclient.so:data/mariadb
USES+=	pgsql

USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--disable-static
CONFIGURE_ARGS+=	--with-dbi-incdir=${LOCALBASE}/include
#DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}-${DISTVERSION}
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+= --without-mysql
CONFIGURE_ARGS+= --with-pgsql
CONFIGURE_ARGS+= --without-sqlite3
CONFIGURE_ARGS+= --without-firebird
CONFIGURE_ARGS+= --without-freetds
CONFIGURE_ARGS+= --without-oracle
#CONFIGURE_ARGS+= --without-sqlite
CONFIGURE_ARGS+= --disable-docs


post-patch:
	${REINPLACE_CMD} -e 's|-O20|${CFLAGS}|g' \
		-e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/configure
	${TOUCH} ${WRKSRC}/drivers/*/dbd_*/*

.include <bsd.port.mk>
#EOF
