#
# $Id$
#
PORTNAME=	libetonyek
PORTVERSION=	0.1.6
CATEGORIES=	graphics
MASTER_SITES=	http://dev-www.libreoffice.org/src/${PORTNAME}/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library to interpret and import Apple Keynote presentations


LIB_DEPENDS+=	libboost_filesystem.so:devel/libboost64
LIB_DEPENDS+=	librevenge.so:libre/librevenge
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	liblangtag.so:libre/liblangtag
BUILD_DEPENDS+=	libglm>=0:libre/libglm
BUILD_DEPENDS+=	libmdds>=0:libre/libmdds


CONFIGURE_ARGS=	--disable-werror --without-docs --enable-static
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=       -L${LOCALBASE}/lib -lboost_system

LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include


USES+=		tar:xz
GNU_CONFIGURE=	yes
USES=		gmake
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
USES+=		gmake

CONFIGURE_ARGS+=	--disable-tests


FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in
FILES+=	${WRKSRC}/configure


post-patch:
	${REINPLACE_CMD} -e "s,zlib,,g" ${WRKSRC}/libetonyek.pc.in
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@ETONYEK_MAJOR_VERSION@.@ETONYEK_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@ETONYEK_MAJOR_VERSION@_@ETONYEK_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$ETONYEK_MAJOR_VERSION.$$ETONYEK_MINOR_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwpd-0.10,libwpd,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwpd-stream-0.10,libwpd-stream,g' ${FILES}
	${REINPLACE_CMD} -e 's,mdds-1.0,mdds,g' ${FILES}

.include <bsd.port.mk>
#EOF
