PORTNAME=	cheetah
DISTVERSION=	3.2.6
CATEGORIES=	devel textproc www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	3
DISTNAME=	Cheetah3-${DISTVERSION}

MAINTAINER=	FreeBSD@ShaneWare.Biz
COMMENT=	HTML template engine for Python
WWW=		https://cheetahtemplate.org/

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}markdown>=2.0.3:python/py-markdown@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/Cheetah/*.so

.include <bsd.port.mk>
