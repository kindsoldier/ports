# Created by: Peter Haight <peterh@sapros.com>
# $FreeBSD: head/devel/scons/Makefile 536494 2020-05-25 18:31:34Z sunpoet $

PORTNAME=	scons
PORTVERSION=	3.1.2
CATEGORIES=	devel python
MASTER_SITES=	SF
PKGNAMESUFFIX=	${PYTHON_PKGNAMESUFFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Build tool alternative to make

RUN_DEPENDS=	gm4:text/gm4

USES=		python:3.5+ shebangfix
USE_PYTHON=	concurrent distutils

NO_ARCH=	yes

SHEBANG_FILES=	script/scons*

post-patch:
	@${REINPLACE_CMD} -e 's|distutils\(\.command\.install\)$$|setuptools\1|; s|distutils\(\.command\.install\.\)|setuptools\1|' ${WRKSRC}/setup.py
	@${FIND} ${WRKSRC} -name '*.orig' -delete

.include <bsd.port.pre.mk>

#PYDISTUTILS_INSTALLARGS+=	--standard-lib

.include <bsd.port.post.mk>
