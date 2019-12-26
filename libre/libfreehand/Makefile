#
# $Id$
#
PORTNAME=	libfreehand
PORTVERSION=	0.1.1
CATEGORIES=	graphics
MASTER_SITES=	LODEV

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library providing ability to interpret and import Adobe/Macromedia drawings

LIB_DEPENDS+=	librevenge.so:libre/librevenge

GNU_CONFIGURE=	yes
USES+=		tar:xz
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--disable-werror --without-docs --enable-static
INSTALL_TARGET=	install-strip

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
	${REINPLACE_CMD} -e 's,-@FH_MAJOR_VERSION@.@FH_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@FH_MAJOR_VERSION@_@FH_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$FH_MAJOR_VERSION.$$FH_MINOR_VERSION,,g' ${FILES}


.include <bsd.port.mk>
#EOF

