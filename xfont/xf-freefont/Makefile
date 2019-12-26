# Created by: Andreas Kohn <andreas@syndrom23.de>
# $FreeBSD: head/x11-fonts/freefont-ttf/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	freefont-ttf
PORTVERSION=	20120503
CATEGORIES=	x11-fonts
MASTER_SITES=	GNU/freefont
PKGNAMEPREFIX=  xf-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free UCS Outline Fonts

USES=	zip

WRKSRC=		${WRKDIR}/freefont-${PORTVERSION}
NO_BUILD=	yes

FONTSDIR = ${PREFIX}//share/fonts/X11/TTF

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
