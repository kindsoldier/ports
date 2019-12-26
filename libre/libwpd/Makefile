#
# $Id$
#
PORTNAME=	libwpd
PORTVERSION=	0.10.1
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Tools for importing and exporting WordPerfect(tm) documents

LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	librevenge.so:libre/librevenge

USES+=		tar:bzip2
GNU_CONFIGURE=	yes
#USE_GNOME=	libgsf
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS=	--without-docs

#post-install:
#	${RM} ${STAGEDIR}${PREFIX}/bin/wpd*


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
	${REINPLACE_CMD} -e 's,-@WPD_MAJOR_VERSION@.@WPD_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@WPD_MAJOR_VERSION@_@WPD_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$WPD_MAJOR_VERSION.$$WPD_MINOR_VERSION,,g' ${FILES}

.include <bsd.port.mk>
#EOF

