PORTNAME=	zipp
PORTVERSION=	3.4.0
CATEGORIES=	devel
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Backport of pathlib-compatible object wrapper for zip files
WWW=		https://github.com/jaraco/zipp

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:python/py-setuptools_scm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}toml>=0:python/py-toml@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
