#
# $Id$
#
PORTNAME=	postgresql
PORTVERSION=	9.2.1004
DISTVERSIONSUFFIX=.src
CATEGORIES=	databases java
MASTER_SITES=	http://jdbc.postgresql.org/download/
PKGNAMESUFFIX=	-jdbc
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${DISTVERSION:C/.([0-9][0-9][0-9]*)/-\1/g}${DISTVERSIONSUFFIX}

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	The Java JDBC implementation for PostgreSQL

DIST_SUBDIR=	postgresql

USE_ANT=	yes
USE_JAVA=	yes
NO_ARCH=	yes

PLIST_FILES=	%%JAVAJARDIR%%/postgresql.jar
SUB_FILES=	pkg-message


post-patch:
	${REINPLACE_CMD} 's,/usr/local/pgsql/share/java,${JAVAJARDIR},' ${WRKSRC}/README

do-install:
	${INSTALL_DATA} ${WRKSRC}/jars/postgresql.jar ${STAGEDIR}${JAVAJARDIR}/postgresql.jar

.include <bsd.port.mk>
#EOF
