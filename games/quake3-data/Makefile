#
# $Id$
#
PORTNAME=	data
DISTVERSION=	1.32b-3
MASTER_SITES=	IDSOFTWARE/quake3/linux
DISTNAME+=	linuxq3apoint-${DISTVERSION}.x86
EXTRACT_SUFX=	.run
PKGNAMEPREFIX=	quake3-
CATEGORIES=	games
DIST_SUBDIR=	quake3

MASTER_SITES+=	http://files.theabyss.ru/quake3:pak0
MASTER_SITES+=	http://www.teamclick.org/ronin/quake3/baseq3/:pak0
MASTER_SITES+=	http://game.pioneernet.ru/dl/q3/files/pk3/:pak0
MASTER_SITES+=	http://ftp.muse-gaming.org/baseq3/:pak0

DISTFILES+=	${DISTNAME}${EXTRACT_SUFX}
DISTFILES+=	pak0.pk3:pak0

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Quake III Arena data files

Q3DIR=		${LOCALBASE}/share/quake3

DATADIR=	${Q3DIR}
NO_BUILD=	yes
NO_WRKSUBDIR=	yes
NO_ARCH=	yes

PKG_NOCOMPRESS=	yes

SUB_FILES=	pkg-message

a:
	echo ${DISTFILES}

do-extract:
	${RM} -rf ${WRKSRC}
	${MKDIR} ${WRKSRC}
	${TAIL} +356 ${_DISTDIR}/${DISTNAME}${EXTRACT_SUFX} | \
		${TAR} xzf - -C ${WRKSRC}

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${CP} -a ${WRKSRC}/baseq3 ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/quake3.xpm ${STAGEDIR}${PREFIX}/share/pixmaps
	${CP} -a ${WRKSRC}/missionpack ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${DISTDIR}/${DIST_SUBDIR}/pak0.pk3 ${STAGEDIR}${DATADIR}/baseq3

.include <bsd.port.mk>
#EOF
