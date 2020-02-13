# $FreeBSD: head/lang/mujs/Makefile 523250 2020-01-16 17:11:32Z yuri $

PORTNAME=	mujs
DISTVERSION=	1.0.6-16
DISTVERSIONSUFFIX=	-gfe71080
CATEGORIES=	lang devel

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${PORTNAME}/commit/
PATCHFILES=	d9a1f4c57f976eeb67d877101fcdca89ecc047ed.patch:-p1 # Enable readline on FreeBSD

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Embeddable Javascript interpreter in C

USES=		compiler:c11 gmake readline # c11 is induced by the FreeBSD headers via isnan(3), etc, otherwise the project is all c99 code
USE_GITHUB=	yes
GH_ACCOUNT=	ccxvii
USE_LDCONFIG=	yes
ALL_TARGET=	shared static
INSTALL_TARGET=	install-shared install-static

#32BIT_DESC=		32-bit address space to allow for larger programs
#32BIT_MAKE_ARGS=	XCFLAGS="-DJS_INSTRUCTION=int"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libmujs.so

.include <bsd.port.mk>
