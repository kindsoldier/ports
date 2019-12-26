# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/devel/ninja/Makefile 488579 2018-12-27 23:03:59Z gblach $

PORTNAME=	ninja
PORTVERSION=	1.8.2
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Ninja is a small build system closest in spirit to Make

USE_GITHUB=	yes
GH_ACCOUNT=	ninja-build

USES=		python

post-patch:
	${REINPLACE_CMD} "s/'-g', //" ${WRKSRC}/configure.py

do-build:
	cd ${WRKSRC} && \
		CXX="${CXX}" CFLAGS="${CXXFLAGS}" ${PYTHON_CMD} configure.py --bootstrap

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ninja ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && \
	    ${INSTALL_DATA} HACKING.md README doc/manual.asciidoc \
	    ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
#EOF

