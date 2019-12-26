# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/databases/rubygem-pg/Makefile 507372 2019-07-26 20:46:53Z gerald $

PORTNAME=	pg
PORTVERSION=	1.1.4
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface to PostgreSQL library

USES=		gem pgsql
USE_RUBY=	yes

CONFIGURE_ARGS=	--with-pgsql-include-dir=$$(${PG_CONFIG} --includedir) \
		--with-pgsql-lib-dir=$$(${PG_CONFIG} --libdir)
PG_CONFIG=	${LOCALBASE}/bin/pg_config

.include <bsd.port.mk>
