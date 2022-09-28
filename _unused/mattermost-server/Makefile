# $FreeBSD: head/www/mattermost-server/Makefile 514522 2019-10-15 13:09:38Z swills $

PORTNAME=	mattermost-server
PORTVERSION=	5.15.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www

MAINTAINER=	loic.blot@unix-experience.fr
COMMENT=	Open source Slack-alternative in Golang and React

ONLY_FOR_ARCHS=	amd64 armv6 armv7 i386

#RUN_DEPENDS=	${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss \
RUN_DEPENDS=	mattermost-webapp>=${PORTVERSION}:net/mattermost-webapp

USES=		go:modules

GO_TARGET=	./cmd/mattermost
GO_BUILDFLAGS=	-ldflags="-X github.com/mattermost/mattermost-server/model.BuildNumber=${PORTVERSION}"

USE_RC_SUBR=	mattermostd

USE_GITHUB=	yes
GH_ACCOUNT=	mattermost

WWWDIR=		${PREFIX}/www/mattermost

MATTERMOST_OWNER=	mattermost
MATTERMOST_GROUP=	mattermost

MATTERMOST_OWNER_ID=	889
MATTERMOST_GROUP_ID=	889


SUB_FILES=	mattermostd pkg-install pkg-deinstall 

SUB_LIST+=	MATTERMOST_OWNER=${MATTERMOST_OWNER}
SUB_LIST+=	MATTERMOST_GROUP=${MATTERMOST_GROUP}
SUB_LIST+=	MATTERMOST_OWNER_ID=${MATTERMOST_OWNER_ID}
SUB_LIST+=	MATTERMOST_GROUP_ID=${MATTERMOST_GROUP_ID}

post-install:
	${MV} ${STAGEDIR}${PREFIX}/bin/mattermost ${STAGEDIR}${PREFIX}/bin/mattermostd
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${GO_WRKSRC} && ${COPYTREE_SHARE} 'fonts i18n templates' ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
