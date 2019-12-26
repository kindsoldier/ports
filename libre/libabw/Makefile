#
# $Id$
#
PORTNAME=	libabw
PORTVERSION=	0.1.1
CATEGORIES=	textproc
MASTER_SITES=	http://dev-www.libreoffice.org/src/${PORTNAME}/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library providing ability to interpret Abiword documents

BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/algorithm/string.hpp:devel/libboost
LIB_DEPENDS+=	librevenge.so:libre/librevenge
LIB_DEPENDS+=	libxml2.so:text/libxml2

USES+=		tar:xz gmake perl5
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

CPPFLAGS=	-I${LOCALBASE}/include
CONFIGURE_ARGS=	-disable-werror --without-docs

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
	${REINPLACE_CMD} -e 's,-@ABW_MAJOR_VERSION@.@ABW_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@ABW_MAJOR_VERSION@_@ABW_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$ABW_MAJOR_VERSION.$$ABW_MINOR_VERSION,,g' ${FILES}

.include <bsd.port.mk>
#EOF
