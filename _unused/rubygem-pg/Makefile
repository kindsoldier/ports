# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/databases/rubygem-pg/Makefile 443513 2017-06-13 16:54:24Z sunpoet $

PORTNAME=	pg
PORTVERSION=	1.0.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface to PostgreSQL library

USES+=	pgsql

CONFIGURE_ARGS=	--with-pgsql-include-dir=${LOCALBASE}/include \
		--with-pgsql-lib-dir=${LOCALBASE}/lib
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
