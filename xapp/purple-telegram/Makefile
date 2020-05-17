# Created by: Kris Moore <kmoore@freebsd.org>
# $FreeBSD: head/net-im/telegram-purple/Makefile 517179 2019-11-10 05:58:18Z linimon $

PORTNAME=	telegram-purple
PORTVERSION=	1.4.1
DISTVERSIONPREFIX=	v
CATEGORIES=	net-im

MAINTAINER=	jjuanino@gmail.com
COMMENT=	Libpurple plugin for Telegram messenger

BROKEN_armv6=		fails to link: undefined reference to 'backtrace'
BROKEN_powerpc64=	fails to compile: Assertion failed: (get_int () == TLS_SCHEMA_V2), function parse_tlo_file, file generate.c, line 2832.
BROKEN_sparc64=		fails to compile: assertion fails

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libwebp.so:graphics/webp \
		libpurple.so:net-im/libpurple \
		libpng.so:graphics/png

USES=		gettext gmake pkgconfig

GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib

USE_GITHUB=	yes
GH_ACCOUNT=	majn
GH_PROJECT=	tgl:tgl
GH_TAGNAME?=	bec2e6d:tgl
GH_SUBDIR=	tgl:tgl

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/purple/telegram-purple.so

.include <bsd.port.mk>
