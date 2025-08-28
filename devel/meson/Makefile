# Created by: Ting-Wei Lan <lantw44@gmail.com>

PORTNAME=	meson
PORTVERSION=	0.58.1
CATEGORIES=	devel python
MASTER_SITES=	https://github.com/mesonbuild/${PORTNAME}/releases/download/${PORTVERSION}/

MAINTAINER=	desktop@FreeBSD.org
COMMENT=	High performance build system

USES=		ninja python:3.6+ shebangfix
USE_PYTHON=	autoplist distutils noflavors
SHEBANG_FILES=	mesonbuild/rewriter.py mesonbuild/scripts/cmake_run_ctgt.py
NO_ARCH=	yes

.include <bsd.port.mk>
