# Created by: Jon M. Dugan <jdugan@x1024.net>
# $FreeBSD: head/devel/py-thrift/Makefile 559531 2020-12-28 23:02:12Z antoine $

PORTNAME=	thrift
PORTVERSION=	0.14.1
CATEGORIES=	devel python
MASTER_SITES=	APACHE/thrift/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	komarov@valerka.net
COMMENT=	Python interface to Thrift

USES=		python:3.6+
USE_PYTHON=	distutils autoplist

WRKSRC=		${WRKDIR}/${DISTNAME}/lib/py

post-patch:
	${REINPLACE_CMD} -e 's|setuptools|do_not_use_&|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
