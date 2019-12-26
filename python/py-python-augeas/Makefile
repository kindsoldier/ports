# $FreeBSD: head/textproc/py-python-augeas/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	python-augeas
PORTVERSION=	1.0.3
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johan@stromnet.se
COMMENT=	Pure python bindings for Augeas

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.1.0:python/py-cffi@${PY_FLAVOR}
LIB_DEPENDS=	libaugeas.so:text/augeas

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	distutils py3kplist

GH_ACCOUNT=	hercules-team

.include <bsd.port.mk>
