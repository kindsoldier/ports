# $FreeBSD: head/graphics/libcdr01/Makefile 439934 2017-05-02 06:48:10Z jbeich $

PORTNAME=	libcdr
PORTVERSION=	0.1.3
CATEGORIES=	graphics devel
MASTER_SITES=	LODEV

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library and tools for parsing Corel Draw file format

BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/optional.hpp:devel/libboost
LIB_DEPENDS+=	libicui18n.so:devel/libicu 
LIB_DEPENDS+=	librevenge.so:libre/librevenge
LIB_DEPENDS+=	liblcms2.so:graph/liblcms2


LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include


GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-tests --disable-werror --without-docs
USES=		compiler:c++11-lib pathfix pkgconfig tar:xz
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

CPPFLAGS+=	-I${LOCALBASE}/include
CXXFLAGS+=	-Wno-long-long

FILES= ${WRKSRC}/configure ${WRKSRC}/*.pc.in ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in

post-patch:
	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@CDR_MAJOR_VERSION@.@CDR_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@CDR_MAJOR_VERSION@_@CDR_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$CDR_MAJOR_VERSION.$$CDR_MINOR_VERSION,,g' ${FILES}



.include <bsd.port.mk>
#EOF
