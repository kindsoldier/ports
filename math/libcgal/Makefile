# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: head/math/cgal/Makefile 534326 2020-05-08 05:35:11Z lbartoletti $

PORTNAME=	cgal
PORTVERSION=	5.0.2
CATEGORIES=	math
MASTER_SITES=	https://github.com/${PORTNAME:tu}/${PORTNAME}/releases/download/releases/${DISTNAME}/
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}
PKGNAMEPREFIX=  lib

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Computational geometry library
CMAKE_ARGS+=     -DBoost_INCLUDE_DIR=${LOCALBASE}/boost72/include

BUILD_DEPENDS=	${LOCALBASE}/lib/libntl.a:math/libntl
LIB_DEPENDS+=	libboost_system.so:devel/libboost72
LIB_DEPENDS+=	libmpfr.so:math/libmpfr
LIB_DEPENDS+=	libgmp.so:math/libgmp

USES=		cmake shebangfix tar:xz
USE_LDCONFIG=	yes
SHEBANG_FILES=	scripts/cgal_create_CMakeLists scripts/cgal_create_cmake_script

CMAKE_ARGS+=	-DWITH_CGAL_Qt5=OFF

.include <bsd.port.mk>
