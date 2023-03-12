PORTNAME=	typing-extensions
PORTVERSION=	4.4.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	typing_extensions-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Backported and Experimental Type Hints for Python 3.5+
WWW=		https://github.com/python/typing_extensions

USES=		python:3.7+
USE_PYTHON=	allflavors autoplist concurrent pep517

PEP517_BUILD_CMD=	${PYTHON_CMD} -m flit_core.wheel
PEP517_BUILD_DEPEND=	${PYTHON_PKGNAMEPREFIX}flit-core>=3.4<4:python/py-flit-core@${PY_FLAVOR}

NO_ARCH=	yes

.include <bsd.port.mk>
