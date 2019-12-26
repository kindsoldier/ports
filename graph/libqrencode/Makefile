#
# $Id$
#
PORTNAME=	qrencode
PORTVERSION=	3.4.4
CATEGORIES=	graphics
MASTER_SITES=	http://fukuchi.org/works/qrencode/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	C library for encoding data in a QR Code symbol

LIB_DEPENDS+=	libpng.so:graph/libpng

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
INSTALL_TARGET=	install-strip
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include


post-patch:
	${REINPLACE_CMD} -e 's,libpng12,libpng,' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
