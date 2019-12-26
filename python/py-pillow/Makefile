# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/graphics/py-pillow/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pillow
PORTVERSION=	3.4.2
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Fork of the Python Imaging Library (PIL)


PYDISTUTILS_BUILDARGS+= --disable-jpeg2000
PYDISTUTILS_BUILDARGS+= --disable-lcms
PYDISTUTILS_BUILDARGS+= --disable-webp --disable-webpmux
PYDISTUTILS_BUILDARGS+= --enable-zlib
PYDISTUTILS_BUILDARGS+= --enable-freetype
PYDISTUTILS_BUILDARGS+= --enable-jpeg
PYDISTUTILS_BUILDARGS+= --enable-tiff

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	autoplist  distutils

GH_ACCOUNT=	python-${PORTNAME}
GH_PROJECT=	${PORTNAME:C/p/P/}

CONFLICTS_INSTALL=	py*-imaging-*

.include <bsd.port.pre.mk>

PYDISTUTILS_BUILD_TARGET=	build build_ext
PYDISTUTILS_BUILDARGS+=		saveopts

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/PIL/*.so

do-test:
	@cd ${WRKSRC} && \
	${PYTHON_CMD} ${PYSETUP} build_ext -i && \
	${PYTHON_CMD} selftest.py && \
	${PYTHON_CMD} -m nose -vx Tests/test_*.py

.include <bsd.port.post.mk>
