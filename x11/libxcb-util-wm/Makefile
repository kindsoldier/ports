# $FreeBSD: head/x11/xcb-util-wm/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	xcb-util-wm
PORTVERSION=	0.4.1
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/
PKGNAMEPREFIX=  lib

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Framework for window manager implementation


LIB_DEPENDS=	libxcb-util.so:x11/libxcb-util

GNU_CONFIGURE=  yes
USES+=          gmake
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
