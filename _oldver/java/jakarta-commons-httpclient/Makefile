# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/java/jakarta-commons-httpclient/Makefile 431796 2017-01-18 13:20:31Z tijl $

PORTNAME=	commons-httpclient
DISTVERSION=	3.1
CATEGORIES=	java www
MASTER_SITES=	APACHE/httpcomponents/${PORTNAME}/source
PKGNAMEPREFIX=	jakarta-
DISTNAME=	${PORTNAME}-${DISTVERSION}-src

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Package implementing the client side of the HTTP standard

BUILD_DEPENDS=	${JAVALIBDIR}/commons-logging.jar:java/jakarta-commons-logging
BUILD_DEPENDS+=	${JAVALIBDIR}/commons-codec.jar:java/jakarta-commons-codec
RUN_DEPENDS=	${JAVALIBDIR}/commons-logging.jar:java/jakarta-commons-logging
RUN_DEPENDS+=	${JAVALIBDIR}/commons-codec.jar:java/jakarta-commons-codec

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USE_ANT=	yes
MAKE_ENV=	ANT_INCLUDE_SHARED_JARS=YES
NO_ARCH=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}
ALL_TARGET=	dist

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar

post-patch:
	${REINPLACE_CMD} 's/Ortwin Gl.*ck/Ortwin Glueck/' \
		${WRKSRC}/src/java/org/apache/commons/httpclient/*.java \
		${WRKSRC}/src/java/org/apache/commons/httpclient/*/*.java

do-install:
	${INSTALL_DATA} ${WRKSRC}/dist/${PORTNAME}.jar ${STAGEDIR}${JAVAJARDIR}/

.include <bsd.port.mk>
