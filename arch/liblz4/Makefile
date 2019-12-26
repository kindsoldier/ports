# Created by: adamw
# $FreeBSD: head/archivers/liblz4/Makefile 469954 2018-05-14 19:12:46Z bapt $

PORTNAME=	lz4
PORTVERSION=	1.8.2
DISTVERSIONPREFIX=	v
CATEGORIES=	archivers
PKGNAMEPREFIX=	lib

MAINTAINER=	martin@waschbuesch.de
COMMENT=	LZ4 compression library, lossless and very fast

USES=		gmake pkgconfig
USE_GITHUB=	yes
USE_LDCONFIG=	yes

MAKE_ARGS=	PREFIX="${PREFIX}"
MAKE_ARGS=	LIBDIR="${PREFIX}/lib"

MAKE_ARGS+=	INSTALL_PROGRAM="${INSTALL_PROGRAM}"
MAKE_ARGS+=	MANDIR="${MAN1PREFIX}/man"
MAKE_ARGS+=     V=1

.include <bsd.port.mk>
#EOF

