#
# $Id$
#
PORTNAME=	slf4j
PORTVERSION=	1.7.21
CATEGORIES=	devel java
MASTER_SITES=	http://www.slf4j.org/dist/

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Simple facade or abstraction for various logging frameworks

USE_JAVA=	yes
NO_BUILD=	yes

JARFILES+=	slf4j-migrator.jar
JARFILES+=	slf4j-simple.jar
JARFILES+=	jcl-over-slf4j.jar
JARFILES+=	log4j-over-slf4j.jar
JARFILES+=	slf4j-ext.jar
JARFILES+=	slf4j-jdk14.jar
JARFILES+=	slf4j-nop.jar
JARFILES+=	jul-to-slf4j.jar
JARFILES+=	slf4j-jcl.jar
JARFILES+=	slf4j-log4j12.jar

do-install:
	${INSTALL_DATA} ${WRKSRC}/slf4j-api-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/slf4j-api.jar
	${MKDIR} ${STAGEDIR}${DATADIR}
.for J in ${JARFILES}
	${INSTALL_DATA} ${WRKSRC}/${J:S,.jar$,-${PORTVERSION}.jar,} ${STAGEDIR}${DATADIR}/${J}
.endfor

.include <bsd.port.mk>
#EOF
