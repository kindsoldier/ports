# Created by: Anton Yudin <toha@toha.org.ua>
# $FreeBSD: head/java/jakarta-commons-dbcp/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	commons-dbcp
PORTVERSION=	1.4
CATEGORIES=	java databases
MASTER_SITES=	APACHE_COMMONS_SOURCE
PKGNAMEPREFIX=	jakarta-
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ale@FreeBSD.org
COMMENT=	The DBCP Component

BUILD_DEPENDS=	${JAVALIBDIR}/commons-pool.jar:java/jakarta-commons-pool \
		${JAVALIBDIR}/jta.jar:java/jta
RUN_DEPENDS=	${JAVALIBDIR}/commons-pool.jar:java/jakarta-commons-pool \
		${JAVALIBDIR}/jta.jar:java/jta

USE_JAVA=	yes
JAVA_VERSION=	1.6

USE_ANT=	yes
MAKE_ENV=	ANT_INCLUDE_SHARED_JARS=YES
ALL_TARGET=	build-jar

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar

.include <bsd.port.options.mk>

do-install:
	${INSTALL_DATA} ${WRKSRC}/dist/${PORTNAME}.jar ${STAGEDIR}${JAVAJARDIR}/

.include <bsd.port.mk>
