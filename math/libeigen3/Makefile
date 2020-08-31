# $FreeBSD: head/math/eigen3/Makefile 488363 2018-12-26 09:06:34Z tcberner $

PORTNAME=	eigen
DISTVERSION=	3.3.7
CATEGORIES=	math
MASTER_SITES=	https://bitbucket.org/${PORTNAME}/${PORTNAME}/get/
DISTNAME=	${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}
PKGNAMEPREFIX=  lib

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Lightweight library for vector and matrix math

CMAKE_ARGS=	-DPKGCONFIG_INSTALL_DIR:PATH="${PREFIX}/lib/pkgconfig"
USES=		cmake tar:bzip2
NO_BUILD=	yes
NO_ARCH=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTNAME}-323c052e1731

.include <bsd.port.mk>
