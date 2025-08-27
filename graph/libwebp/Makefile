#
# $Id$
#
PORTNAME=	webp
PORTVERSION=	0.4.2
CATEGORIES=	graphics
MASTER_SITES=	http://downloads.webmproject.org/releases/webp/
DISTNAME=	lib${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Google WebP image format conversion tool

LIB_DEPENDS+=	libgif.so:graph/libgif
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff


CPPFLAGS+=	-I${LOCALBASE}/include
GNU_CONFIGURE=	yes
USES+=		gmake
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	--enable-libwebpdecoder
CONFIGURE_ARGS+=	--enable-libwebpdemux
CONFIGURE_ARGS+=	--enable-libwebpmux
CONFIGURE_ARGS+=	--with-pkgconfigdir=${PREFIX}/lib/pkgconfig
USE_LDCONFIG=	yes


post-patch:
	${REINPLACE_CMD} '/build_vwebp=yes/d' ${WRKSRC}/configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libwebp*.so

.include <bsd.port.mk>
#EOF
