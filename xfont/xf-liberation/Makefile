# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/x11-fonts/liberation-fonts-ttf/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	liberation-fonts-ttf
PORTVERSION=	2.00.5
CATEGORIES=	x11-fonts
MASTER_SITES=	https://github.com/liberationfonts/liberation-fonts/files/2926169/
PKGNAMEPREFIX=  xf-

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Liberation fonts from Red Hat to replace MS TTF fonts

NO_ARCH=	yes
NO_BUILD=	yes
SUB_FILES=	pkg-message

FONTSDIR = ${PREFIX}/share/fonts/X11/TTF

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
