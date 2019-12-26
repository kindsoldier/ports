# $FreeBSD: head/x11/keybinder/Makefile 424427 2016-10-21 15:21:13Z mat $

PORTNAME=	keybinder
PORTVERSION=	0.3.1
DISTVERSIONPREFIX=	v
CATEGORIES=	x11
PKGNAMEPREFIX=  lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for registering keyboard shortcuts

USE_GITHUB=	yes
GH_ACCOUNT=	engla

USES=		autoreconf gmake libtool pathfix pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-gtk-doc
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --disable-lua
CONFIGURE_ARGS+= --disable-python
CONFIGURE_ARGS+= --enable-static


.include <bsd.port.mk>
#EOF
