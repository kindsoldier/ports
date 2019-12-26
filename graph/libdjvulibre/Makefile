#
# $Id$
#
PORTNAME=	djvulibre
PORTVERSION=	3.5.25.3
CATEGORIES=	graphics www
#MASTER_SITES=	SF/djvu/DjVuLibre/${PORTVERSION:R}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	DjVu base libraries and utilities


LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libtiff.so:graph/libtiff
RUN_DEPENDS+=	curl:net/libcurl
WRKSRC=		${WRKDIR}/${DISTNAME:R}

#WITH_FBSD10_FIX=yes
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ENV+=	JPEG_CFLAGS="-I${LOCALBASE}/include"
CONFIGURE_ENV+=	JPEG_LIBS="-L${LOCALBASE}/lib -ljpeg"
CONFIGURE_ENV+=	TIFF_CFLAGS="-I${LOCALBASE}/include"
CONFIGURE_ENV+=	TIFF_LIBS="-L${LOCALBASE}/lib -ltiff"
CONFIGURE_ENV+=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}"
CONFIGURE_ENV+=	PTHREAD_LIBS="${PTHREAD_LIBS}"
CONFIGURE_ENV+=	LOCALBASE="${LOCALBASE}"
CONFIGURE_ENV+=	CXX="${CXX}"

CONFIGURE_ARGS+= --enable-threads=pthread
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --disable-djview
CONFIGURE_ARGS+= --without-x
USE_LDCONFIG=	yes

LDFLAGS+= -pthread
CFLAGS+= -pthread

post-patch:
	${REINPLACE_CMD} -e \
		'/-[Og]\*)/d ; \
		s|$$OPTS -O[[:digit:]]*|$$OPTS|g ; \
		s|$$OPTS $$opt|$$OPTS|g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e \
		's|$${FLAGS}|| ; \
		s|@CPPFLAGS@|$${FLAGS} &|' \
		${WRKSRC}/tools/jb2cmp/Makefile.in
	${REINPLACE_CMD} -e \
		's|_PROGRAM} -m 0755|_SCRIPT}|' \
		${WRKSRC}/tools/Makefile.in
#	${REINPLACE_CMD} -e 's,any2djvu,,' ${WRKSRC}/tools/Makefile.in


post-install:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  djvuxml.1 djvutoxml.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  djvuxml.1 djvuxmlparser.1

.include <bsd.port.mk>
#EOF
