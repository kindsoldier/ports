# $FreeBSD: head/devel/binaryen/Makefile 523067 2020-01-14 21:16:30Z yuri $

PORTNAME=	binaryen
DISTVERSIONPREFIX=	version_
DISTVERSION=	90
CATEGORIES=	devel

MAINTAINER=	greg@unrelenting.technology
COMMENT=	Compiler infrastructure and toolchain library for WebAssembly

USES=		cmake gmake python:2.7,build compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	WebAssembly
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBINARYEN_VERSION_INFO=${DISTVERSION}

BINARY_ALIAS=	python=${PYTHON_CMD}

.include <bsd.port.mk>
