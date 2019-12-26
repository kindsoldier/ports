#
# $Id$
#
PORTNAME=	libwpg
PORTVERSION=	0.3.1
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library and tools to work with WordPerfect Graphics (WPG) files

LIB_DEPENDS+=	libwpd.so:libre/libwpd
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	librevenge.so:libre/librevenge


#USES=		libtool:keepla pathfix perl5 pkgconfig shebangfix tar:bzip2
USES+=		tar:bzip2 perl5 shebangfix
SHEBANG_FILES=	${WRKSRC}/src/conv/svg/wpg2svgbatch.pl
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--disable-werror --without-docs


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
	${REINPLACE_CMD} -e 's,-@WPG_MAJOR_VERSION@.@WPG_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@WPG_MAJOR_VERSION@_@WPG_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$WPG_MAJOR_VERSION.$$WPG_MINOR_VERSION,,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwpd-0.10,libwpd,g' ${FILES}
	${REINPLACE_CMD} -e 's,libwpd-stream-0.10,libwpd-stream,g' ${FILES}

#	${REINPLACE_CMD} -e 's,libwpg-0.2,libwpg,g' ${FILES}
#	cd ${WRKSRC} && ${CP} libwpg-0.2.pc.in libwpg.pc.in

.include <bsd.port.mk>
