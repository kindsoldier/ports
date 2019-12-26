# Created by: Palle Girgensohn <girgen@pingpong.net>
# $FreeBSD: head/databases/postgresql-libpqxx4/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	libpqxx
PORTVERSION=	6.3.0
CATEGORIES=	databases
DIST_SUBDIR=	postgresql

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	New C++ interface for PostgreSQL

USE_GITHUB=	yes
GH_ACCOUNT=	jtv

LIB_DEPENDS=	libpq.so:data/postgresql

USES+=		gmake pathfix python:2.7,build shebangfix
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
SHEBANG_FILES=	${WRKSRC}/tools/splitconfig

CONFIGURE_ARGS=	--enable-shared --disable-dependency-tracking
CONFIGURE_ARGS+= --disable-documentation

.include <bsd.port.mk>
