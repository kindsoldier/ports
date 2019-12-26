# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/archivers/ucl/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	ucl
PORTVERSION=	1.03
CATEGORIES=	archivers devel
MASTER_SITES=	http://www.oberhumer.com/opensource/ucl/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Data compression library with low memory usage

CONFLICTS_INSTALL=	libucl

USES=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/examples/.libs/uclpack ${STAGEDIR}${PREFIX}/bin
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libucl.so.1 libucl.so

.include <bsd.port.mk>
