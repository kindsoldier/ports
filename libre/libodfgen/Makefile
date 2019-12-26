#
# $Id$
#
PORTNAME=	libodfgen
PORTVERSION=	0.1.6
CATEGORIES=	textproc
MASTER_SITES=	SF/libwpd/${PORTNAME}/${PORTNAME}-${PORTVERSION}
#PKGNAMESUFFIX=	01

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library for generating documents in Open Document Format (ODF)


LIB_DEPENDS+=	libetonyek.so:libre/libetonyek
LIB_DEPENDS+=	librevenge.so:libre/librevenge


CONFIGURE_ARGS=	--disable-werror --without-docs
CPPFLAGS+=	-I${LOCALBASE}/include

GNU_CONFIGURE=	yes
USES+=		compiler:features gperf tar:xz
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
USES+=		gmake

#CONFIGURE_ARGS+=	--with-sharedptr=c++11
BUILD_DEPENDS+=	${LOCALBASE}/boost64/include/boost/shared_ptr.hpp:devel/libboost64
CONFIGURE_ARGS+=	--with-sharedptr=boost

LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include


FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
#FILES+=	${WRKSRC}/*/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in
FILES+=	${WRKSRC}/configure


post-patch:
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@LIBODFGEN_MAJOR_VERSION@.@LIBODFGEN_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@LIBODFGEN_MAJOR_VERSION@_@LIBODFGEN_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$LIBODFGEN_MAJOR_VERSION.$$LIBODFGEN_MINOR_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwpd-0.10,libwpd,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwpd-stream-0.10,libwpd-stream,g' ${FILES}

.include <bsd.port.mk>
#EOF

