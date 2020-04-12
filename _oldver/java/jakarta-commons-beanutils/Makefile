# Created by: Ernst de Haan <znerd@FreeBSD.org>
# $FreeBSD: head/java/jakarta-commons-beanutils/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	commons-beanutils
PORTVERSION=	1.9.2
CATEGORIES=	java devel
MASTER_SITES=	APACHE_COMMONS_SOURCE
PKGNAMEPREFIX=	jakarta-
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	JavaBeans utility library

BUILD_DEPENDS=	${JAVALIBDIR}/commons-logging.jar:java/jakarta-commons-logging \
		${JAVALIBDIR}/commons-collections.jar:java/jakarta-commons-collections
RUN_DEPENDS=	${JAVALIBDIR}/commons-logging.jar:java/jakarta-commons-logging \
		${JAVALIBDIR}/commons-collections.jar:java/jakarta-commons-collections

USES=		dos2unix
USE_JAVA=	yes
USE_ANT=	yes
DOS2UNIX_FILES=	build.xml
JAVA_VERSION=	1.6+
ALL_TARGET=	dist
MAKE_ARGS+=	-Dcommons-collections.jar=${JAVALIBDIR}/commons-collections.jar \
		-Dcommons-logging.jar=${JAVALIBDIR}/commons-logging.jar

JARFILE=	${PORTNAME}.jar
PLIST_FILES=	%%JAVAJARDIR%%/${JARFILE}

.include <bsd.port.options.mk>


do-install:
	${INSTALL_DATA} ${WRKSRC}/dist/${PORTNAME}-${PORTVERSION}.jar ${STAGEDIR}${JAVALIBDIR}/${JARFILE}

.include <bsd.port.mk>
