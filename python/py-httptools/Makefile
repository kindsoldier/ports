# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/py-httptools/Makefile 526666 2020-02-21 18:57:41Z sunpoet $

PORTNAME=	httptools
PORTVERSION=	0.1.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Collection of framework independent HTTP protocol utils

LIB_DEPENDS=	libhttp_parser.so:net/libhttp-parser

USES=		localbase python:3.5+
USE_PYTHON=	autoplist distutils

post-patch:
	@${RM} -r ${WRKSRC}/vendor/

.include <bsd.port.mk>
