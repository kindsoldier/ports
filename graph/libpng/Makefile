# Created by: ache
# $FreeBSD: head/graphics/png/Makefile 436720 2017-03-22 19:14:55Z antoine $

PORTNAME=	png
PORTVERSION=	1.6.29
CATEGORIES=	graphics
#MASTER_SITES+=	SF/lib${PORTNAME}/lib${PORTNAME}16/${PORTVERSION}
MASTER_SITES+=	ftp://ftp.simplesystems.org/pub/lib${PORTNAME}/${PORTNAME}/src/lib${PORTNAME}16/
PATCH_SITES=	SF/apng/lib${PORTNAME}/lib${PORTNAME}16/
DISTNAME=	lib${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=  lib

MAINTAINER=	portmgr@FreeBSD.org
COMMENT=	Library for manipulating PNG images

USES=		tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pkgconfigdir=${PREFIX}/lib/pkgconfig
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --enable-unversioned-libpng-config
CONFIGURE_ARGS+= --enable-unversioned-libpng-pc
CONFIGURE_ARGS+= --enable-unversioned-links


.include <bsd.port.mk>
#EOF

