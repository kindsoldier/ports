# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/gradle/Makefile 524011 2020-01-25 05:16:02Z tobik $

PORTNAME=	gradle
PORTVERSION=	6.3 #6.1.1
CATEGORIES=	devel java
MASTER_SITES=	https://downloads.gradle.org/distributions/
EXTRACT_SUFX=	-bin.zip

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Project automation tool

USES=		zip
USE_JAVA=	yes

NO_ARCH=	yes
NO_BUILD=	yes

SUB_FILES=	gradle
SUB_LIST=	JAVA=${JAVA} PORTVERSION=${PORTVERSION}
#PLIST_FILES=	bin/gradle
#PORTDATA=	*

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/gradle ${STAGEDIR}${PREFIX}/bin/gradle
	cd ${WRKSRC} && ${COPYTREE_SHARE} lib ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
