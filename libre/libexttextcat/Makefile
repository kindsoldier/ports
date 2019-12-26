#
# $Id$
#
PORTNAME=	libexttextcat
PORTVERSION=	3.4.4
CATEGORIES=	textproc
MASTER_SITES=	http://dev-www.libreoffice.org/src/libexttextcat/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Language guessing by N-Gram-Based Text Categorization

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES+=		gmake
USES+=		tar:xz
INSTALL_TARGET=	install-strip

MAKE_ARGS=	EXEEXT=x

FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
#FILES+=	${WRKSRC}/*/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in
FILES+=	${WRKSRC}/configure


post-patch:
	${REINPLACE_CMD} -e 's,exttextcat-2.0,exttextcat,g' ${FILES}
#	${REINPLACE_CMD} -e 's,librevenge-0.0,librevenge,g' ${FILES}
#	${REINPLACE_CMD} -e 's,librevenge-stream-0.0,librevenge-stream,g' ${FILES}
#	${REINPLACE_CMD} -e 's,librevenge-generators-0.0,librevenge-generators,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@EXTTEXTCAT_MAJOR_VERSION@.@EXTTEXTCAT_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@EXTTEXTCAT_MAJOR_VERSION@_@EXTTEXTCAT_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$EXTTEXTCAT_MAJOR_VERSION.$$EXTTEXTCAT_MINOR_VERSION,,g' ${FILES}


.include <bsd.port.mk>
#EOF
