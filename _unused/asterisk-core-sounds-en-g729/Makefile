#
# $Id$
#
PORTNAME=	asterisk-core-sounds-${LANG}-${TYPE}
PORTVERSION=	1.4.27
CATEGORIES=	net
MASTER_SITES+=	http://downloads.asterisk.org/pub/telephony/asterisk/
MASTER_SITES+=	http://downloads.asterisk.org/pub/telephony/asterisk/old-releases/
MASTER_SITES+=	http://downloads.asterisk.org/pub/telephony/sounds/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	An Open Source PBX and telephony toolkit

TYPE=	g729
LANG=	en
SOUNDDIR=	${PREFIX}/share/asterisk/sounds/${LANG}

NO_BUILD=	yes
NO_ARCH=	yes

.include <bsd.port.pre.mk>


do-extract:
	${MKDIR} ${WRKSRC}
	cd ${WRKSRC} && ${TAR} xzpf ${DISTDIR}/${DIST_SUBDIR}/${DISTNAME}${EXTRACT_SUFX}

do-install:
	${MKDIR} ${STAGEDIR}${SOUNDDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${SOUNDDIR}

.include <bsd.port.post.mk>
#EOF
