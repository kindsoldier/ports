# Created by: Anton Yudin <toha@toha.org.ua>
# $FreeBSD: head/java/jakarta-commons-pool/Makefile 417166 2016-06-20 16:23:28Z mat $

PORTNAME=	commons-pool
PORTVERSION=	1.6
CATEGORIES=	java devel
MASTER_SITES=	APACHE_COMMONS_SOURCE
PKGNAMEPREFIX=	jakarta-
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Jakarta Object-pooling API

USES=		dos2unix
DOS2UNIX_GLOB=	*.xml *.java
USE_JAVA=	yes
JAVA_VERSION=	1.6+

USE_ANT=	yes
ALL_TARGET=	build-jar

PLIST_FILES=	${JAVAJARDIR}/${PORTNAME}.jar

.include <bsd.port.options.mk>

do-install:
	${INSTALL_DATA} ${WRKSRC}/dist/${PORTNAME}-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

.include <bsd.port.mk>
