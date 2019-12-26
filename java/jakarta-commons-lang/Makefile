# Created by: Ernst de Haan <znerd@FreeBSD.org>
# $FreeBSD: head/java/jakarta-commons-lang/Makefile 386097 2015-05-11 18:34:57Z mat $

PORTNAME=	commons-lang
PORTVERSION=	2.6
CATEGORIES=	java devel
MASTER_SITES=	APACHE_COMMONS_SOURCE
PKGNAMEPREFIX=	jakarta-
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Jakarta library with helper utilities for the java.lang API

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USE_ANT=	yes
ALL_TARGET=	jar

JARFILE=	${PORTNAME}-${PORTVERSION}.jar
DESTJARFILE=	${PORTNAME}.jar
PLIST_FILES=	%%JAVAJARDIR%%/${DESTJARFILE}


.include <bsd.port.pre.mk>


JDK_API!=	(${FIND} -s ${LOCALBASE}/share/doc/jdk1.? -maxdepth 1 -name api -type d 2>/dev/null || ${ECHO_CMD}) | ${TAIL} -n 1

.if ${JDK_API} != ""
MAKE_ARGS+=	-Djdk.javadoc=${JDK_API}
.endif

do-install:
	${INSTALL_DATA} ${WRKSRC}/target/${JARFILE} \
		${STAGEDIR}${JAVAJARDIR}/${DESTJARFILE}

.include <bsd.port.post.mk>
