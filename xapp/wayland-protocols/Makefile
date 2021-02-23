# $FreeBSD: head/graphics/wayland-protocols/Makefile 492698 2019-02-11 16:05:56Z zeising $

PORTNAME=	wayland-protocols
PORTVERSION=	1.20
CATEGORIES=	graphics
MASTER_SITES=	https://wayland.freedesktop.org/releases/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Wayland protocols

BUILD_DEPENDS=	wayland-scanner:xapp/wayland

USES=		tar:xz
NO_ARCH=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-noarch-pkgconfigdir='$${prefix}/lib/pkgconfig'

.include <bsd.port.mk>
