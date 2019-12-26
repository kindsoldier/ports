# $FreeBSD: head/x11/xcb-util-errors/Makefile 489559 2019-01-07 06:41:41Z jbeich $

PORTNAME=	xcb-util-errors
PORTVERSION=	1.0
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/
PKGNAMEPREFIX=  lib

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Pretty-print XCB codes

BUILD_DEPENDS=	xcb-proto>=1.6:xproto/xcb-proto

GNU_CONFIGURE=  yes
USES+=          gmake
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
#EOF
