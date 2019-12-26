# Created by: Greg Lewis <glewis@FreeBSD.org>
# $FreeBSD: head/java/java-zoneinfo/Makefile 507476 2019-07-27 21:12:52Z glewis $

PORTNAME=	zoneinfo
DISTVERSION=	2019b
CATEGORIES=	java misc
MASTER_SITES=	LOCAL/glewis/javazi
PKGNAMEPREFIX=	java-
DISTNAME=	javazi-${DISTVERSION}

MAINTAINER=	glewis@FreeBSD.org
COMMENT=	Updated Java timezone definitions


WRKSRC=		${WRKDIR}
NO_BUILD=	yes

JAVASHAREDIR=	${PREFIX}/share/java

do-install:
	${MKDIR} ${STAGEDIR}${JAVASHAREDIR}/zi
	cd ${WRKSRC}/zi && ${COPYTREE_SHARE} . ${STAGEDIR}${JAVASHAREDIR}/zi

.include <bsd.port.mk>
