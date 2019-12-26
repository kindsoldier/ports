# $FreeBSD: head/textproc/libvisio01/Makefile 370332 2014-10-07 13:33:25Z bapt $

PORTNAME=	libvisio
PORTVERSION=	0.1.5
CATEGORIES=	textproc devel
MASTER_SITES=	http://dev-www.libreoffice.org/src/${PORTNAME}/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library and tools for parsing the visio file format structure


BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/spirit/include/classic_core.hpp:devel/libboost
LIB_DEPENDS+=	librevenge.so:libre/librevenge
LIB_DEPENDS+=	libicui18n.so:devel/libicu
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libcppunit.so:libre/libcppunit



CONFIGURE_ARGS=	--disable-werror --without-docs
CPPFLAGS+=	-I${LOCALBASE}/include
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES+=		gmake
USES+=		tar:xz
INSTALL_TARGET=	install-strip


LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include

FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in
FILES+=	${WRKSRC}/configure


post-patch:
	${REINPLACE_CMD} -e "s,zlib,,g" ${WRKSRC}/libvisio.pc.in
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@VSD_MAJOR_VERSION@.@VSD_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@VSD_MAJOR_VERSION@_@VSD_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$VSD_MAJOR_VERSION.$$VSD_MINOR_VERSION,,g' ${FILES}



.include <bsd.port.mk>
