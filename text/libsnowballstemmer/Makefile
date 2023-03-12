PORTNAME=	snowballstemmer
PORTVERSION=	2.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc
PKGNAMEPREFIX=  lib

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Snowball stemmer library for C
WWW=		https://snowballstem.org/

USES=		gmake perl5
USE_PERL5=	build
USE_LDCONFIG=	yes

MAKEFILE=	GNUmakefile

USE_GITHUB=	yes
GH_ACCOUNT=	snowballstem
GH_PROJECT=	snowball

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/stemwords ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/include/libstemmer.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_LIB} ${WRKSRC}/libstemmer.so.0 ${STAGEDIR}${PREFIX}/lib
	${RLN} ${STAGEDIR}${PREFIX}/lib/libstemmer.so.0 \
		${STAGEDIR}${PREFIX}/lib/libstemmer.so

.include <bsd.port.mk>
