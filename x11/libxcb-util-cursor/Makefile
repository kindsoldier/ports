# $FreeBSD: head/x11/xcb-util-cursor/Makefile 425431 2016-11-05 19:06:20Z bapt $

PORTNAME=	xcb-util-cursor
PORTVERSION=	0.1.3
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/
PKGNAMEPREFIX=  lib

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XCB cursor library


LIB_DEPENDS+=	libxcb-util.so:x11/libxcb-util
LIB_DEPENDS+=	libxcb-render-util.so:x11/libxcb-util-renderutil
LIB_DEPENDS+=	libxcb-image.so:x11/libxcb-util-image
#BUILD_DEPENDS+= ${RUN_DEPENDS}

GNU_CONFIGURE=  yes
USES+=          gmake
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


.include <bsd.port.mk>
