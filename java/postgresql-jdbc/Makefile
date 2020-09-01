# Created by: Palle Girgensohn <girgen@partitur.se>
# $FreeBSD: head/databases/postgresql-jdbc/Makefile 538860 2020-06-15 08:07:32Z girgen $

PORTNAME=	postgresql
PORTVERSION=	42.2.14
CATEGORIES=	databases java
MASTER_SITES=	http://jdbc.postgresql.org/download/
PKGNAMESUFFIX=	-jdbc
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	Java JDBC implementation for PostgreSQL

USE_JAVA=	yes
NO_ARCH=	yes
PLIST_FILES=	%%JAVAJARDIR%%/postgresql.jar

NO_EXTRACT=     yes
NO_BUILD=       yes

do-install:
	${INSTALL_DATA} ${DISTDIR}/${DISTFILES} ${STAGEDIR}${JAVAJARDIR}/postgresql.jar

.include <bsd.port.mk>
