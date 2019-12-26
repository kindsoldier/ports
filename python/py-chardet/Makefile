# Created by: arved
# $FreeBSD: head/textproc/py-chardet/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	chardet
PORTVERSION=	3.0.4
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
MASTER_SITES=	CHEESESHOP

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Universal encoding detector for Python 2 and 3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>0:python/py-pytest-runner@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
