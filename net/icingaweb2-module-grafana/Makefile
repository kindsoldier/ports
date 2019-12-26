# $FreeBSD: head/net-mgmt/icingaweb2-module-grafana/Makefile 512261 2019-09-18 09:19:49Z lme $

PORTNAME=	icingaweb2-module-grafana
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.6
CATEGORIES=	net-mgmt www

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Add Grafana graphs into Icinga Web 2 to display performance metrics

RUN_DEPENDS=	icingaweb2>=2.4.1:net/icingaweb2

USE_GITHUB=	yes
GH_ACCOUNT=	mikesch-mp

NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR?=	${PREFIX}/www/icingaweb2/modules/${PORTNAME:C/^.*-//}

do-install:
	${RM} -r ${WRKSRC}/.idea ${WRKSRC}/.github
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>

