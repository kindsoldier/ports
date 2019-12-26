# $FreeBSD: head/net-im/purple-slack/Makefile 517063 2019-11-08 13:34:26Z tobik $

PORTNAME=	purple-slack
PORTVERSION=	20180508
CATEGORIES=	net-im

MAINTAINER=	aou@eecs.berkeley.edu
COMMENT=	Slack plugin for libpurple

LIB_DEPENDS=	libpurple.so:xapp/pidgin
BUILD_DEPENDS=	bash:lang/bash

USES=		gmake gnome pkgconfig
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	dylex
GH_PROJECT=	slack-libpurple
GH_TAGNAME=	0179b2c

MAKE_ARGS=	CC="${CC}" SHELL="${LOCALBASE}/bin/bash"

post-install:
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/lib/purple/libslack.so

.include <bsd.port.mk>
