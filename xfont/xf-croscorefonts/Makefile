# Created by: Pedro Giffuni
# $FreeBSD: head/x11-fonts/croscorefonts-fonts-ttf/Makefile 496750 2019-03-24 14:33:17Z sunpoet $

PORTNAME=	croscorefonts
PORTVERSION=	1.31.0
CATEGORIES=	x11-fonts
MASTER_SITES=	https://gsdview.appspot.com/chromeos-localmirror/distfiles/ LOCAL/sunpoet
PKGNAMEPREFIX=  xf-

MAINTAINER=	office@FreeBSD.org
COMMENT=	Fonts created from by Google for ChromeOS to replace MS TTF

USES=		tar:bzip2
NO_ARCH=	yes
NO_BUILD=	yes

SUB_FILES=	pkg-message

FONTNAME=	ChromeOS
FONTSDIR = ${PREFIX}/share/fonts/X11/TTF

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}/
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
