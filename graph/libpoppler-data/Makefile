#
# $Id: Makefile 2424 2009-09-14 17:42:01Z root $
# $URL: file:///usr2/svn/ports5/graphics-libs/libpoppler-data/Makefile $
#
PORTNAME=	poppler-data
PORTVERSION=	0.4.7
CATEGORIES=	graphics
MASTER_SITES=	http://poppler.freedesktop.org/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Poppler encoding data

NO_BUILD=	yes

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/Makefile

.include <bsd.port.mk>
#EOF
