#
# $Id$
#
PORTNAME=	exif
PORTVERSION=	0.6.21
CATEGORIES=	graphics
MASTER_SITES=	SF/lib${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command line utility to read and manipulate EXIF data

LIB_DEPENDS+=	libexif.so:graph/libexif
LIB_DEPENDS+=	libpopt.so:devel/libpopt

CONFIGURE_ENV+=	POPT_CFLAGS="-I${LOCALBASE}/include "
CONFIGURE_ENV+= POPT_LIBS="-L${LOCALBASE}/lib -lpopt"
GNU_CONFIGURE=	yes
USES=		gmake
NLS_CONFIGURE_ON=	--enable-nls
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
#EOF
