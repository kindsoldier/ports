#
# $Id$
#
PORTNAME=	scons
PORTVERSION=	3.0.1
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	gavin@16degrees.com.au
COMMENT=	Build tool alternative to make

RUN_DEPENDS=	gm4:text/gm4

USES=		python:2.7
USE_PYTHON=	distutils ##autoplist

PLIST_SUB+=	SCONS_VER=${PORTVERSION}

post-patch:
	${REINPLACE_CMD} \
		-e 's,distutils\.command\.install$$,setuptools\.command\.install,' \
		-e 's,distutils\.command\.install\.,setuptools\.command\.install\.,' \
		${WRKSRC}/setup.py
	${FIND} ${WRKSRC} -name \*.orig -delete

.include <bsd.port.mk>
#EOF
