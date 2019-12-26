# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/devel/libevent/Makefile 478104 2018-08-26 07:56:39Z delphij $

PORTNAME=	libevent
PORTVERSION=	2.1.10
DISTVERSIONPREFIX=	release-
DISTVERSIONSUFFIX=	-stable
CATEGORIES=	devel

MAINTAINER=	mm@FreeBSD.org
COMMENT=	API for executing callback functions on events or timeouts

USES=		autoreconf gmake pathfix python:2.7,env shebangfix
GNU_CONFIGURE=	yes
SHEBANG_FILES=	event_rpcgen.py
USE_GITHUB=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--enable-openssl
CONFIGURE_ARGS=	--enable-thread-support

.include <bsd.port.mk>
