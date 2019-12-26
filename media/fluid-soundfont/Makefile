# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/audio/fluid-soundfont/Makefile 417926 2016-07-02 11:27:30Z danfe $

PORTNAME=	fluid-soundfont
PORTVERSION=	3.1
CATEGORIES=	audio
MASTER_SITES=	GENTOO
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Fluid R3 sound fonts (GM/GS)

NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/sounds/sf2
	${INSTALL_DATA} ${WRKSRC}/FluidR3_G?.sf2 ${STAGEDIR}${PREFIX}/share/sounds/sf2

	${MKDIR} ${STAGEDIR}${PREFIX}/share/timidity
	${INSTALL_DATA} ${FILESDIR}/*.cfg ${STAGEDIR}${PREFIX}/share/timidity

	cd ${STAGEDIR}${PREFIX}/share/sounds/sf2 && ${LN} -s FluidR3_GM.sf2 default.sf2


.include <bsd.port.mk>
