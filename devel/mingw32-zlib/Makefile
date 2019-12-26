# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/devel/mingw32-zlib/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	zlib
PORTVERSION=	1.2.8
CATEGORIES=	devel archivers
MASTER_SITES=	http://zlib.net/ SF/libpng/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${TARGET}-

MAINTAINER=	knu@FreeBSD.org
COMMENT=	The zlib library cross-compiled for MinGW32

TARGET= mingw32

BUILD_DEPENDS+=	${PKGNAMEPREFIX}gcc:devel/${TARGET}-gcc 
BUILD_DEPENDS+=	${LOCALBASE}/mingw32/include/stdlib.h:devel/${TARGET}-bin-msvcrt

USES=		tar:xz gmake
MAKEFILE=	win32/Makefile.gcc
MAKE_ARGS+=	PREFIX=${PKGNAMEPREFIX}
MAKE_ARGS+=	BINARY_PATH=${CROSS_BASE}/bin
MAKE_ARGS+=	INCLUDE_PATH=${CROSS_BASE}/include
MAKE_ARGS+=	LIBRARY_PATH=${CROSS_BASE}/lib
CROSS_BASE=	${PREFIX}/mingw32

.include <bsd.port.mk>
