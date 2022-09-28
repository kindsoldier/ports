# $FreeBSD: head/www/mattermost-webapp/Makefile 514522 2019-10-15 13:09:38Z swills $

PORTNAME=	mattermost-webapp
PORTVERSION=	5.15.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www
MASTER_SITES=	https://releases.mattermost.com/${PORTVERSION}/
DISTNAME=	mattermost-${PORTVERSION}-linux-amd64

MAINTAINER=	loic.blot@unix-experience.fr
COMMENT=	Webapp of Mattermost server

NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR=		${PREFIX}/www/mattermost

MATTERMOST_OWNER=	mattermost
MATTERMOST_GROUP=	mattermost

MATTERMOST_OWNER_ID=	889
MATTERMOST_GROUP_ID=	889

SUB_FILES=	pkg-install pkg-deinstall 

SUB_LIST+=	MATTERMOST_OWNER=${MATTERMOST_OWNER}
SUB_LIST+=	MATTERMOST_GROUP=${MATTERMOST_GROUP}
SUB_LIST+=	MATTERMOST_OWNER_ID=${MATTERMOST_OWNER_ID}
SUB_LIST+=	MATTERMOST_GROUP_ID=${MATTERMOST_GROUP_ID}


do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKDIR}/mattermost && ${COPYTREE_SHARE} client ${STAGEDIR}${WWWDIR}
	${MKDIR} ${STAGEDIR}${WWWDIR}/client/plugins

.include <bsd.port.mk>
