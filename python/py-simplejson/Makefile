# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: head/devel/py-simplejson/Makefile 522961 2020-01-13 17:49:17Z sunpoet $

PORTNAME=	simplejson
PORTVERSION=	3.17.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Simple, fast, extensible JSON encoder/decoder

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/simplejson/_speedups.so

.include <bsd.port.mk>
