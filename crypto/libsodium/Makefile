# $FreeBSD: head/security/libsodium/Makefile 489687 2019-01-08 13:31:51Z tobik $

PORTNAME=	libsodium
PORTVERSION=	1.0.16
CATEGORIES=	security
MASTER_SITES=	https://download.libsodium.org/libsodium/releases/

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Library to build higher-level cryptographic tools

GNU_CONFIGURE=	yes
USES=		pathfix pkgconfig gmake
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=	--enable-blocking-random
INSTALL_TARGET?=	install-strip
TEST_TARGET=		check

.include <bsd.port.mk>
