# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/devel/ninja/Makefile 488579 2018-12-27 23:03:59Z gblach $

PORTNAME=	ninja
PORTVERSION=	1.11.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Ninja is a small build system closest in spirit to Make

USE_GITHUB=	yes
GH_ACCOUNT=	ninja-build

BUILD_DEPENDS = re2c:devel/re2c

USES=		python

post-patch:
	${REINPLACE_CMD} "s/'-g', //" ${WRKSRC}/configure.py

do-build:
	cd ${WRKSRC} && \
		CXX="${CXX}" CFLAGS="${CXXFLAGS}" ${PYTHON_CMD} configure.py --bootstrap

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ninja ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
#EOF

