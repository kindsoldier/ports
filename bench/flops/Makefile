# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/benchmarks/flops/Makefile 386929 2015-05-21 12:45:40Z amdmi3 $

PORTNAME=	flops
PORTVERSION=	2.1
CATEGORIES=	benchmarks

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Floating point benchmark to give your MFLOPS rating

USE_GITHUB=	yes
GH_ACCOUNT=	AMDmi3

PLIST_FILES=	bin/flops

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/flops ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
#EOF
