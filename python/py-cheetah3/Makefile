# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-cheetah3/Makefile 528099 2020-03-09 09:32:07Z amdmi3 $

PORTNAME=	cheetah
DISTVERSION=	3.2.4
CATEGORIES=	devel textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	3
DISTNAME=	Cheetah3-${DISTVERSION}

MAINTAINER=	FreeBSD@ShaneWare.Biz
COMMENT=	HTML template engine for Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}markdown>=2.0.3:python/py-markdown@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/Cheetah/*.so

.include <bsd.port.mk>
