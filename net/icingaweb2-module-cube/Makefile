# $FreeBSD: head/net-mgmt/icingaweb2-module-cube/Makefile 507709 2019-07-31 13:02:07Z lme $

PORTNAME=	icingaweb2-module-cube
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.0
CATEGORIES=	net-mgmt www

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Drill-down view for Icinga web 2 based on custom variables

RUN_DEPENDS=	icingaweb2>=2.4.1:net/icingaweb2

USE_GITHUB=	yes
GH_ACCOUNT=	icinga

NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR?=	${PREFIX}/www/icingaweb2/modules/${PORTNAME:C/^.*-//}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && \
		${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
