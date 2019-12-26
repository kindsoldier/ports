#
# $Id$
#
PORTNAME=	libmwaw
PORTVERSION=	0.3.10
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
#PKGNAMESUFFIX=	03

MAINTAINER=	office@FreeBSD.org
COMMENT=	Import library for some old mac text documents

LIB_DEPENDS+=	librevenge.so:libre/librevenge

CONFIGURE_ARGS=	--disable-werror --without-docs
CPPFLAGS+=	-I${LOCALBASE}/include

GNU_CONFIGURE=	yes
USES+=		gmake
USES+=		tar:xz
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

#CONFIGURE_ARGS+=	--with-sharedptr=c++11
BUILD_DEPENDS+=	${LOCALBASE}/boost64/include/boost/shared_ptr.hpp:devel/libboost64
CONFIGURE_ARGS+=	--with-sharedptr=boost


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
	${REINPLACE_CMD} -e 's,-@MWAW_MAJOR_VERSION@.@MWAW_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@MWAW_MAJOR_VERSION@_@MWAW_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$MWAW_MAJOR_VERSION.$$MWAW_MINOR_VERSION,,g' ${FILES}

.include <bsd.port.mk>
#EOF

