#
# $Id$
#
PORTNAME=	libxspf
PORTVERSION=	1.2.0
CATEGORIES=	multimedia
MASTER_SITES=	SF/libspiff/Sources/${PORTVERSION}

MAINTAINER=	ed@FreeBSD.org
COMMENT=	XSPF parsing library

LIB_DEPENDS=	libexpat.so:textproc/expat2
LIB_DEPENDS=	liburiparser.so:net/liburiparser

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-expat=${LOCALBASE} --disable-test

USES=		tar:bzip2 gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
LIBS+=		-L${LOCALBASE}/lib -luriparser

post-patch:

.include <bsd.port.mk>
#EOF

