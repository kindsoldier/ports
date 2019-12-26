# $FreeBSD: head/net-mgmt/icingaweb2-module-map/Makefile 507372 2019-07-26 20:46:53Z gerald $

PORTNAME=	icingaweb2-module-map
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.0
CATEGORIES=	net-mgmt www

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Display hosts on OpenStreetMap


RUN_DEPENDS=	icingaweb2>=2.4.1:net/icingaweb2

USE_GITHUB=	yes
GH_ACCOUNT=	nbuchwitz

NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR?=	${PREFIX}/www/icingaweb2/modules/${PORTNAME:C/^.*-//}

do-install:
	${RM} -r ${WRKSRC}/.github
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && \
		${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
