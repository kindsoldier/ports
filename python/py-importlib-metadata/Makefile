PORTNAME=	importlib-metadata
DISTVERSION=	6.0.0
CATEGORIES=	devel
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	importlib_metadata-${PORTVERSION}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Read metadata from Python packages
WWW=		https://github.com/python/importlib_metadata

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=56:python/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:python/py-setuptools_scm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:python/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zipp>=0.5:python/py-zipp@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils autoplist pytest

NO_ARCH=	yes

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 30800
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}typing-extensions>=3.6.4:python/py-typing-extensions@${PY_FLAVOR}
.endif

pre-configure: # importlib-metadata introduces circular dependency when built with USE_PYTHON=pep517, see bug#269363
	@( \
		${ECHO} "from setuptools import setup" && \
		${ECHO} "setup()" \
	) > ${WRKSRC}/setup.py

.include <bsd.port.post.mk>
