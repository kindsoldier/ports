#
# $Id$
#
PORTNAME=	librevenge
PORTVERSION=	0.0.4
CATEGORIES=	textproc
MASTER_SITES=	SF/libwpd/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Base library for writing document import filters


LIB_DEPENDS+=	libboost_context.so:devel/libboost

USES+=		tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
INSTALL_TARGET=	install-strip
LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib -lboost_system
#BUILD_DEPENDS=	${LOCALBASE}/include/boost/algorithm/string.hpp:devel/boost-libs

CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include
CONFIGURE_ARGS=	-disable-werror --disable-tests

DOCS_CONFIGURE_OFF=	--without-docs


FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's,_@RVNG_MAJOR_VERSION@_@RVNG_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@RVNG_MAJOR_VERSION@.@RVNG_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$RVNG_MAJOR_VERSION.$$RVNG_MINOR_VERSION,,g' ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF
