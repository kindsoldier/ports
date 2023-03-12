PORTNAME=	packaging
PORTVERSION=	23.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Core utilities for Python packages
WWW=		https://github.com/pypa/packaging

USES=		python
USE_PYTHON=	allflavors autoplist concurrent pep517

NO_ARCH=	yes

PEP517_BUILD_CMD=	${PYTHON_CMD} -m flit_core.wheel
PEP517_BUILD_DEPEND=	${PYTHON_PKGNAMEPREFIX}flit-core>=3.3:python/py-flit-core@${PY_FLAVOR}

.include <bsd.port.mk>
