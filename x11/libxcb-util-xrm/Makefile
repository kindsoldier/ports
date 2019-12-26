# $FreeBSD: head/x11/xcb-util-xrm/Makefile 427548 2016-12-02 09:21:58Z mat $

PORTNAME=	xcb-util-xrm
PORTVERSION=	1.0
CATEGORIES=	x11 devel
MASTER_SITES=	https://github.com/Airblader/xcb-util-xrm/releases/download/v${PORTVERSION}/
PKGNAMEPREFIX=  lib

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XCB utility functions for the X resource manager

LIB_DEPENDS=	libxcb-util.so:x11/libxcb-util

USES=		libtool pkgconfig tar:bzip2
INSTALL_TARGET=	install-strip
GNU_CONFIGURE=	yes
USES+=          gmake
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


.include <bsd.port.mk>
