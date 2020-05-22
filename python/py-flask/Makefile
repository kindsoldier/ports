# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/www/py-flask/Makefile 532893 2020-04-24 20:39:14Z rm $

PORTNAME=	Flask
DISTVERSION=	1.1.2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Micro web framework

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}werkzeug>=0.15:python/py-werkzeug@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=2.10.1:python/py-Jinja2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}itsdangerous>=0.24:python/py-itsdangerous@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click>=5.1:python/py-click@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
