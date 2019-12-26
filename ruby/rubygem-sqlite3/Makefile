# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/databases/rubygem-sqlite3/Makefile 508771 2019-08-12 19:45:05Z sunpoet $

PORTNAME=	sqlite3
PORTVERSION=	1.4.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby interface to the SQLite DB engine version 3

LIB_DEPENDS=	libsqlite3.so:data/sqlite3

USES=		gem
USE_RUBY=	yes

CONFIGURE_ARGS=	--with-sqlite3-dir=${LOCALBASE}

.include <bsd.port.mk>
