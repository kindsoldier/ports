# Created by: Ernst de Haan <znerd@FreeBSD.org>
# $FreeBSD: head/java/jakarta-commons-collections/Makefile 425137 2016-11-02 11:15:40Z makc $

PORTNAME=	commons-collections
PORTVERSION=	3.2.1
CATEGORIES=	java devel
MASTER_SITES=	APACHE_COMMONS_SOURCE
PKGNAMEPREFIX=	jakarta-
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Classes that extend/augment the Java Collections Framework

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USE_ANT=	yes
USES=		dos2unix
DOS2UNIX_GLOB=	Multi*.java Test*.java

ALL_TARGET=	jar
PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar

do-install:
	${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${WRKSRC}/build/${PORTNAME}-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

.include <bsd.port.mk>
