# $FreeBSD: head/x11/xcb-util-renderutil/Makefile 472774 2018-06-19 09:04:36Z amdmi3 $

PORTNAME=	xcb-util-renderutil
PORTVERSION=	0.3.9
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/
PKGNAMEPREFIX=  lib

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Convenience functions for the Render extension

LIB_DEPENDS=	libxcb-util.so:x11/libxcb-util

GNU_CONFIGURE=  yes
USES+=          gmake
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
