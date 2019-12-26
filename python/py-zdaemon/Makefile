# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/sysutils/py-zdaemon/Makefile 413424 2016-04-16 10:06:16Z rm $

PORTNAME=	zdaemon
PORTVERSION=	4.1.0
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Daemon Process Control Library and Tools for Unix-bases Systems

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zconfig>0:python/py-zconfig@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
