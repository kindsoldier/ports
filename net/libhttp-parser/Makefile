# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/www/http-parser/Makefile 529086 2020-03-25 09:46:27Z danfe $

PORTNAME=	http-parser
PORTVERSION=	2.9.4
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=  lib

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	HTTP request/response parser written in C

USE_GITHUB=	yes
GH_ACCOUNT=	nodejs

USES=		gmake
USE_LDCONFIG=	yes
MAKE_ENV=	STRIP="${STRIP}"
ALL_TARGET=	library
INSTALL_TARGET=	install-strip
TEST_TARGET=	test

.include <bsd.port.mk>
