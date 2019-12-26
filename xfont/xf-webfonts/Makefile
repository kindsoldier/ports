# Created by: Konstantinos Konstantinidis <kkonstan@daemon.gr>
# $FreeBSD: head/x11-fonts/webfonts/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	webfonts
PORTVERSION=	0.30
CATEGORIES=	x11-fonts
MASTER_SITES+=	SF/corefonts/the%20fonts/final:group1
MASTER_SITES+=	ftp://ftp.botik.ru/rented/znamensk/distributions/ftp.vsu.ru/pub/tex/font-packs/mscore/:group1
MASTER_SITES+=	SF/corefonts/OldFiles/:group2
MASTER_SITES+=	SF/mscorefonts2/cabs:group3
DISTFILES=	andale32.exe:group1 arialb32.exe:group1 comic32.exe:group1
MASTER_SITES+=	courie32.exe:group1 georgi32.exe:group1 impact32.exe:group1
MASTER_SITES+=	verdan32.exe:group1 webdin32.exe:group1 EUupdate.EXE:group3
DIST_SUBDIR=	${PORTNAME}
PKGNAMEPREFIX=  xf-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	TrueType core fonts for the Web

EXTRACT_DEPENDS=        cabextract:arch/cabextract

NO_BUILD=	yes
RESTRICTED=	Restrictive license - cannot sell for profit or distribute in modified form

EXTRACT_CMD=		${LOCALBASE}/bin/cabextract
EXTRACT_BEFORE_ARGS=	-qLF '[a-uw-z]*.ttf' -d ${WRKSRC}
EXTRACT_AFTER_ARGS=

FONTSDIR = ${PREFIX}/share/fonts/X11/TTF


.include <bsd.port.options.mk>

post-extract:
	${EXTRACT_CMD} -qLF '*.txt' -d ${WRKSRC} ${_DISTDIR}/webdin32.exe
	${EXTRACT_CMD} -qLF '*.cab' -d ${WRKSRC} ${_DISTDIR}/PowerPointViewer.exe
	${EXTRACT_CMD} -qLF '*.txt' -d ${WRKSRC} ${_DISTDIR}/PowerPointViewer.exe
	${EXTRACT_CMD} -qLF '*.ttf' -d ${WRKSRC} ${WRKSRC}/ppviewer.cab
#	${EXTRACT_CMD} -qLF '*.ttf' -d ${WRKSRC} ${_DISTDIR}/verdan32.exe
	${EXTRACT_CMD} -qLF 'v*.ttf' -d ${WRKSRC} ${_DISTDIR}/EUupdate.EXE

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}


.include <bsd.port.mk>
