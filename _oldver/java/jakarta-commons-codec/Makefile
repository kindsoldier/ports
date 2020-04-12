# $FreeBSD: head/java/jakarta-commons-codec/Makefile 403333 2015-12-08 18:33:24Z amdmi3 $

PORTNAME=	commons-codec
PORTVERSION=	1.10
CATEGORIES=	java converters
MASTER_SITES=	APACHE_COMMONS_SOURCE
PKGNAMEPREFIX=	jakarta-
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Implementations of common encoders and decoders

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USE_ANT=	yes

ALL_TARGET=	dist

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar

post-patch:
	${REINPLACE_CMD} 's/1.9-SNAPSHOT/1.10/' ${WRKSRC}/default.properties

do-install:
	${INSTALL_DATA} ${WRKSRC}/dist/${PORTNAME}-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

.include <bsd.port.mk>
