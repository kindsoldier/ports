# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/textproc/utf8proc/Makefile 429723 2016-12-28 08:00:30Z hrs $

PORTNAME=	utf8proc
PORTVERSION=	2.4.0
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc devel
PKGNAMEPREFIX=	lib

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	UTF-8 processing library

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	JuliaLang
USE_LDCONFIG=	yes
MAKE_ARGS=	prefix=${PREFIX}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libutf8proc.so

.include <bsd.port.mk>
#EOF
