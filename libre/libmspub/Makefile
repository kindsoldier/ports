# $FreeBSD: head/print/libmspub01/Makefile 439934 2017-05-02 06:48:10Z jbeich $

PORTNAME=	libmspub
PORTVERSION=	0.1.2
CATEGORIES=	print graphics devel
MASTER_SITES=	http://dev-www.libreoffice.org/src/${PORTNAME}/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library and tools for parsing Microsoft Publisher file format

BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/ptr_container/ptr_map.hpp:devel/libboost64
LIB_DEPENDS=	libicui18n.so:devel/libicu
LIB_DEPENDS+=	librevenge.so:libre/librevenge

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		compiler:c++0x pathfix pkgconfig tar:xz
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS=	--disable-werror --without-docs
CPPFLAGS+=	-I${LOCALBASE}/include


LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include


FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in
FILES+=	${WRKSRC}/configure


post-patch:
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@MSPUB_MAJOR_VERSION@.@MSPUB_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@MSPUB_MAJOR_VERSION@_@MSPUB_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$MSPUB_MAJOR_VERSION.$$MSPUB_MINOR_VERSION,,g' ${FILES}


.include <bsd.port.mk>
