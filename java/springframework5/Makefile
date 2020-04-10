# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: head/java/springframework/Makefile 518482 2019-11-26 21:46:12Z jkim $

PORTNAME=	springframework
PORTVERSION=	5.2.5
CATEGORIES=	java devel
MASTER_SITES=	http://repo.springsource.org/libs-release-local/org/springframework/spring/${PORTVERSION}.RELEASE/
DISTNAME=	spring-${PORTVERSION}.RELEASE-dist

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	The Spring Framework for Java

WRKSRC=		${WRKDIR}/spring-framework-${PORTVERSION}.RELEASE

CONFLICTS=	springframework-3.1.*

NO_BUILD=	yes
USE_JAVA=	yes
USES=		zip

JAR_FILES+=	spring-aop.jar
JAR_FILES+=	spring-aspects.jar
JAR_FILES+=	spring-beans.jar
JAR_FILES+=	spring-context.jar
JAR_FILES+=	spring-context-indexer.jar
JAR_FILES+=	spring-context-support.jar
JAR_FILES+=	spring-core.jar
JAR_FILES+=	spring-expression.jar
JAR_FILES+=	spring-instrument.jar
JAR_FILES+=	spring-jcl.jar
JAR_FILES+=	spring-jdbc.jar
JAR_FILES+=	spring-jms.jar
JAR_FILES+=	spring-messaging.jar
JAR_FILES+=	spring-orm.jar
JAR_FILES+=	spring-oxm.jar
JAR_FILES+=	spring-test.jar
JAR_FILES+=	spring-tx.jar
JAR_FILES+=	spring-web.jar
JAR_FILES+=	spring-webflux.jar
JAR_FILES+=	spring-webmvc.jar
JAR_FILES+=	spring-websocket.jar

JAVADOC+=	spring-aop-javadoc.jar
JAVADOC+=	spring-aspects-javadoc.jar
JAVADOC+=	spring-beans-javadoc.jar
JAVADOC+=	spring-context-javadoc.jar
JAVADOC+=	spring-context-indexer-javadoc.jar
JAVADOC+=	spring-context-support-javadoc.jar
JAVADOC+=	spring-core-javadoc.jar
JAVADOC+=	spring-expression-javadoc.jar
JAVADOC+=	spring-instrument-javadoc.jar
JAVADOC+=	spring-jcl-javadoc.jar
JAVADOC+=	spring-jdbc-javadoc.jar
JAVADOC+=	spring-jms-javadoc.jar
JAVADOC+=	spring-messaging-javadoc.jar
JAVADOC+=	spring-orm-javadoc.jar
JAVADOC+=	spring-oxm-javadoc.jar
JAVADOC+=	spring-test-javadoc.jar
JAVADOC+=	spring-tx-javadoc.jar
JAVADOC+=	spring-web-javadoc.jar
JAVADOC+=	spring-webflux-javadoc.jar
JAVADOC+=	spring-webmvc-javadoc.jar
JAVADOC+=	spring-websocket-javadoc.jar

SOURCES+=       spring-aop-sources.jar
SOURCES+=	spring-aspects-sources.jar
SOURCES+=	spring-beans-sources.jar
SOURCES+=	spring-context-sources.jar
SOURCES+=	spring-context-indexer-sources.jar
SOURCES+=	spring-context-support-sources.jar
SOURCES+=	spring-core-sources.jar
SOURCES+=	spring-expression-sources.jar
SOURCES+=	spring-instrument-sources.jar
SOURCES+=	spring-jcl-sources.jar
SOURCES+=	spring-jdbc-sources.jar
SOURCES+=	spring-jms-sources.jar
SOURCES+=	spring-messaging-sources.jar
SOURCES+=	spring-orm-sources.jar
SOURCES+=	spring-oxm-sources.jar
SOURCES+=	spring-test-sources.jar
SOURCES+=	spring-tx-sources.jar
SOURCES+=	spring-web-sources.jar
SOURCES+=	spring-webflux-sources.jar
SOURCES+=	spring-webmvc-sources.jar
SOURCES+=	spring-websocket-sources.jar


do-install:
	${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${MKDIR} ${STAGEDIR}${JAVASHAREDIR}
.for FILE in ${JAR_FILES}
	${INSTALL_DATA} ${WRKSRC}/libs/${FILE:S/.jar/-${PORTVERSION}.RELEASE.jar/} \
		${STAGEDIR}${JAVAJARDIR}/${FILE}
.endfor
.for FILE in ${SOURCES}
	${INSTALL_DATA} ${WRKSRC}/libs/${FILE:S/-sources.jar/-${PORTVERSION}.RELEASE-sources.jar/} \
		${STAGEDIR}${JAVAJARDIR}/${FILE}
.endfor
.for FILE in ${JAVADOC}
	${INSTALL_DATA} ${WRKSRC}/libs/${FILE:S/-javadoc.jar/-${PORTVERSION}.RELEASE-javadoc.jar/} \
		${STAGEDIR}${JAVAJARDIR}/${FILE}
.endfor
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/license.txt ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/notice.txt ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/readme.txt ${STAGEDIR}${DOCSDIR}
#	cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
