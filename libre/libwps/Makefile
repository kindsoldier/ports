#
# $Id$
#
PORTNAME=	libwps
PORTVERSION=	0.4.6
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Microsoft file word processor format import filter library

LIB_DEPENDS+=	librevenge.so:libre/librevenge

CONFIGURE_ARGS=	--disable-werror --without-docs
USES+=		gmake
CPPFLAGS+=	-I${LOCALBASE}/include
GNU_CONFIGURE=	yes
#USES=		compiler:features libtool:keepla pathfix pkgconfig
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

#CONFIGURE_ARGS+=	--with-sharedptr=c++11
BUILD_DEPENDS+=	${LOCALBASE}/boost64/include/boost/shared_ptr.hpp:devel/libboost
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
	${REINPLACE_CMD} -e 's,-@WPS_MAJOR_VERSION@.@WPS_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@WPS_MAJOR_VERSION@_@WPS_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$WPS_MAJOR_VERSION.$$WPS_MINOR_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwpd-0.10,libwpd,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwpd-stream-0.10,libwpd-stream,g' ${FILES}

#	${REINPLACE_CMD} -e 's,libwpg-0.2,libwpg,g' ${FILES}
#	cd ${WRKSRC} && ${CP} libwpg-0.2.pc.in libwpg.pc.in

.include <bsd.port.mk>
#EOF

