PORTNAME=	pip
PORTVERSION=	22.3.1
CATEGORIES=	devel python
MASTER_SITES=	https://files.pythonhosted.org/packages/a4/53/bfc6409447ca024558b8b19d055de94c813c3e32c0296c48a0873a161cf5/:test_setuptools \
		https://files.pythonhosted.org/packages/27/d6/003e593296a85fd6ed616ed962795b2f87709c3eee2bca4f6d0fe55c6d00/:test_wheel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTFILES=	setuptools-63.2.0-py3-none-any.whl:test_setuptools \
		wheel-0.37.1-py2.py3-none-any.whl:test_wheel
DIST_SUBDIR=	${PORTNAME}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Tool for installing and managing Python packages
WWW=		https://pip.pypa.io/en/latest/

USES=		cpe python:3.7+ shebangfix
CPE_VENDOR=	pypa
USE_PYTHON=	autoplist concurrent distutils pytest

MAKE_ENV=	PYTHONPATH=${WRKSRC}/src/
NO_ARCH=	yes
TEST_ENV=	PYTHONPATH=${STAGEDIR}${PYTHON_SITELIBDIR}

USE_GITHUB=	yes
GH_ACCOUNT=	pypa

SHEBANG_FILES=	src/pip/__init__.py

.include <bsd.port.mk>
