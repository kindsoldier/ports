# Created by: Ernst de Haan <znerd@FreeBSD.org>
# $FreeBSD: head/java/jakarta-commons-cli/Makefile 436134 2017-03-14 08:53:21Z vanilla $

PORTNAME=	commons-cli
PORTVERSION=	1.4
CATEGORIES=	java devel
MASTER_SITES=	APACHE_COMMONS_BINARIES
PKGNAMEPREFIX=	jakarta-
DISTNAME=	${PORTNAME}-${PORTVERSION}-bin

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java library for command line arguments and options

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

JARFILE=	${PORTNAME}-${PORTVERSION}.jar
DESTJARFILE=	${PORTNAME}.jar
PLIST_FILES=	%%JAVAJARDIR%%/${DESTJARFILE}

do-install:
	${INSTALL_DATA} ${WRKSRC}/${JARFILE} \
		${STAGEDIR}${JAVAJARDIR}/${DESTJARFILE}

.include <bsd.port.mk>
