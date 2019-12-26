#
# $Id$
#
PORTNAME=	libe-book
PORTVERSION=	0.1.2
CATEGORIES=	textproc
MASTER_SITES=	SF/libebook/${PORTNAME}-${PORTVERSION}/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library for import of reflowable e-book formats


BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/algorithm/string.hpp:devel/libboost64
LIB_DEPENDS+=	librevenge.so:libre/librevenge
LIB_DEPENDS+=	libicui18n.so:devel/libicu
LIB_DEPENDS+=	libxml2.so:text/libxml2

USES+=		gmake
USES+=		tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ZLIB_CFLAGS="-DWEHAVEZLIBINBASE" ZLIB_LIBS="-DWEDOHAVEIT"
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--disable-werror --disable-tests --without-docs
LDFLAGS+=       -L${LOCALBASE}/lib -lboost_system
CPPFLAGS+=	-I${LOCALBASE}/include -DBOOST_ERROR_CODE_HEADER_ONLY

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
	${REINPLACE_CMD} -e 's,-@EBOOK_MAJOR_VERSION@.@EBOOK_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@EBOOK_MAJOR_VERSION@_@EBOOK_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$EBOOK_MAJOR_VERSION.$$EBOOK_MINOR_VERSION,,g' ${FILES}

.include <bsd.port.mk>
#EOF
