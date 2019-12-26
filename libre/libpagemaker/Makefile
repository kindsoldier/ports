# $FreeBSD: head/print/libpagemaker/Makefile 439934 2017-05-02 06:48:10Z jbeich $

PORTNAME=	libpagemaker
PORTVERSION=	0.0.3
CATEGORIES=	print graphics devel
MASTER_SITES=	LIBREOFFICE_DEV

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library and tools for parsing Aldus/Adobe PageMaker documents

BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/format.hpp:devel/libboost
LIB_DEPENDS=	librevenge.so:libre/librevenge

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		pathfix pkgconfig tar:xz
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
	${REINPLACE_CMD} -e 's,-@PMD_MAJOR_VERSION@.@PMD_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@PMD_MAJOR_VERSION@_@PMD_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$PMD_MAJOR_VERSION.$$PMD_MINOR_VERSION,,g' ${FILES}

#-$PMD_MAJOR_VERSION.$PMD_MINOR_VERSION


.include <bsd.port.mk>
