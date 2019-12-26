# $FreeBSD: head/graphics/libzmf/Makefile 441119 2017-05-17 21:03:28Z jkim $

PORTNAME=	libzmf
PORTVERSION=	0.0.1
CATEGORIES=	graphics
MASTER_SITES=	LODEV

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library that parses the file format of Zoner Callisto/Draw documents

BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/cstdint.hpp:devel/libboost
LIB_DEPENDS+=	libicui18n.so:devel/libicu
LIB_DEPENDS+=		libpng.so:graph/libpng
LIB_DEPENDS+=		librevenge.so:libre/librevenge

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES=		compiler:c++11-lang pkgconfig tar:xz

CONFIGURE_ARGS=	--disable-tests --disable-werror --without-docs
CPPFLAGS+=	-I${LOCALBASE}/include

LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include


FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in




post-patch:
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}

	${REINPLACE_CMD} -e 's,zmf-@ZMF_MAJOR_VERSION@.@ZMF_MINOR_VERSION@,zmf,g' ${FILES}
	${REINPLACE_CMD} -e 's,zmf-$$ZMF_MAJOR_VERSION.$$ZMF_MINOR_VERSION,zmf,g' ${FILES}

	${REINPLACE_CMD} -e 's,zmf_@ZMF_MAJOR_VERSION@_@ZMF_MINOR_VERSION@,zmf,g' ${FILES}
	${REINPLACE_CMD} -e 's,zmf-@ZMF_MAJOR_VERSION@.@ZMF_MINOR_VERSION@,zmf,g' ${FILES}

.include <bsd.port.mk>
