PORTNAME=	build
PORTVERSION=	0.10.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEP517 package builder
WWW=		https://github.com/pypa/build

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}packaging>=19.0:python/py-packaging@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyproject_hooks>=0:python/py-pyproject_hooks@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

PEP517_BUILD_CMD=	${PYTHON_CMD} -m flit_core.wheel
PEP517_BUILD_DEPEND=	${PYTHON_PKGNAMEPREFIX}flit-core>=3.4:python/py-flit-core@${PY_FLAVOR}

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 30800
RUN_DEPENDS+= ${PYTHON_PKGNAMEPREFIX}importlib-metadata>=0.22:python/py-importlib-metadata@${PY_FLAVOR}
.endif

.if ${PYTHON_REL} < 31100
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}tomli>=1.1.0:python/py-tomli@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
