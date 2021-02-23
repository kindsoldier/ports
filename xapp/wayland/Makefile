# Created by: kwm@FreeBSD.org
# $FreeBSD: head/graphics/wayland/Makefile 490980 2019-01-22 20:51:38Z zeising $

PORTNAME=	wayland
PORTVERSION=	1.19.0
CATEGORIES=	graphics
MASTER_SITES=	https://wayland.freedesktop.org/releases/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Wayland composite "server"

LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libffi.so:devel/libffi
LIB_DEPENDS+=   libepoll-shim.so:devel/libepoll-shim

CFLAGS+=	-I${LOCALBASE}/include/libepoll-shim
CFLAGS+=	-DHAVE_SYS_UCRED_H=1
CFLAGS+=	-DHAVE_SYS_EPOLL_H=1
LDFLAGS+=       -L${LOCALBASE}/lib -lepoll-shim

USES=		autoreconf gmake libtool localbase pathfix pkgconfig tar:xz

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-documentation


INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
