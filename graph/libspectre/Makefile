#
# $Id$
#
PORTNAME=	libspectre
PORTVERSION=	0.2.7
CATEGORIES=	print
MASTER_SITES=	http://libspectre.freedesktop.org/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A small library for rendering Postscript documents

LIB_DEPENDS+=	libgs.so:print/ghostscript

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
#EOF

