# Created by: Kimo <kimor79@yahoo.com>
# $FreeBSD: head/databases/rubygem-mysql2/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	mysql2
PORTVERSION=	0.4.10
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simple, fast MySQL library for Ruby, binding to libmysql

LIB_DEPENDS+=	libmysqlclient.so:data/mariadb


USE_RUBY=	yes
USES=		gem gmake

.include <bsd.port.mk>
