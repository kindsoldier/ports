# $FreeBSD: head/graphics/libepoxy/Makefile 433287 2017-02-04 07:57:42Z danfe $

PORTNAME=	libepoxy
PORTVERSION=	1.4.3
#DISTVERSIONPREFIX=	v
CATEGORIES=	graphics
MASTER_SITES=	https://github.com/anholt/${PORTNAME}/releases/download/${PORTVERSION}/


MAINTAINER=	x11@FreeBSD.org
COMMENT=	Library to handle OpenGL function pointer management

USE_GITHUB=	yes
GH_ACCOUNT=	anholt

USES=		autoreconf libtool pkgconfig python:build gmake tar:xz

#USE_XORG=	xorg-macros x11
#USE_GL=		egl glesv2

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --enable-shared


.include <bsd.port.mk>
#EOF
