#
# $Id$
#
PORTNAME_BASE=	ImageMagick
PORTNAME=	imagemagick
DISTVERSION=	6.9.3-3
CATEGORIES=	graphics perl5
DISTNAME=	${PORTNAME_BASE}-${DISTVERSION}
PORTVERSION=	${DISTVERSION:S/-/./}

MASTER_SITES+=	http://www.imagemagick.org/download/
MASTER_SITES+=	http://www.imagemagick.org/download/legacy/
MASTER_SITES+=	http://servingzone.com/mirrors/ImageMagick/
MASTER_SITES+=	http://mirror.checkdomain.de/imagemagick/
MASTER_SITES+=	http://image_magick.veidrodis.com/image_magick/
MASTER_SITES+=	http://imagemagick.spd.co.il/
MASTER_SITES+=	http://www.champground.com/imagemagick/
MASTER_SITES+=	http://ftp.surfnet.nl/pub/ImageMagick/
MASTER_SITES+=	http://mirror.searchdaimon.com/ImageMagick/
MASTER_SITES+=	http://mirror.is.co.za/pub/imagemagick/
MASTER_SITES+=	http://imagemagick.mirrorcatalogs.com/
MASTER_SITES+=	ftp://ftp.imagemagick.org/pub/ImageMagick/
MASTER_SITES+=	ftp://mirror.aarnet.edu.au/pub/imagemagick/
MASTER_SITES+=	ftp://mirror.checkdomain.de/imagemagick/
MASTER_SITES+=	ftp://ftp.kddlabs.co.jp/graphics/ImageMagick/
MASTER_SITES+=	ftp://ftp.u-aizu.ac.jp/pub/graphics/image/ImageMagick/imagemagick.org/
MASTER_SITES+=	ftp://ftp.nluug.nl/pub/ImageMagick/
MASTER_SITES+=	ftp://mirror.searchdaimon.com/ImageMagick/
MASTER_SITES+=	ftp://sunsite.icm.edu.pl/packages/ImageMagick/
MASTER_SITES+=	ftp://ftp.tpnet.pl/pub/graphics/ImageMagick/
MASTER_SITES+=	ftp://ftp.sunet.se/pub/multimedia/graphics/ImageMagick/
MASTER_SITES+=	ftp://ftp.is.co.za/pub/imagemagick/
MASTER_SITES+=	ftp://ftp.fifi.org/pub/ImageMagick/

MASTER_SITES+=	http://www.imagemagick.org/download/
MASTER_SITES+=	http://www.imagemagick.org/download/releases/
MASTER_SITES+=	http://www.imagemagick.org/download/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Image processing tools

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libltdl.so:devel/libtool

LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	liblcms2.so:graph/liblcms2
LIB_DEPENDS+=	libpng.so:graph/libpng
#LIB_DEPENDS+=	librsvg.so:graph/librsvg
LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libfftw3.so:math/libfftw3
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libxml2.so:text/libxml2

USES+=	gmake tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	MAKE=${MAKE_CMD}
CONFIGURE_ARGS=	--without-dps --without-lcms
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=	--with-modules

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libpng
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --disable-hdri
CONFIGURE_ARGS+= --without-perl
CONFIGURE_ENV+=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}" PTHREAD_LIBS="${PTHREAD_LIBS}"
LDFLAGS+= 	${PTHREAD_LIBS}

CPPFLAGS+=	-isystem${LOCALBASE}/include
LDFLAGS+=	-Wl,-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --disable-openmp
CONFIGURE_ARGS+= --with-threads
CONFIGURE_ARGS+= --with-gs-font-dir=${LOCALBASE}/share/ghostscript/fonts
CONFIGURE_ARGS+= --with-bzlib
CONFIGURE_ARGS+= --with-fftw
CONFIGURE_ARGS+= --with-freetype
CONFIGURE_ARGS+= --with-jpeg
CONFIGURE_ARGS+= --with-lcms2
CONFIGURE_ARGS+= --with-openjp2
CONFIGURE_ARGS+= --with-png
CONFIGURE_ARGS+= --with-quantum-depth=16
CONFIGURE_ARGS+= --with-tiff

CONFIGURE_ARGS+= --without-rsvg --without-xml
CONFIGURE_ARGS+= --without-djvu
CONFIGURE_ARGS+= --without-fontconfig
CONFIGURE_ARGS+= --without-fpx
CONFIGURE_ARGS+= --without-gslib
CONFIGURE_ARGS+= --without-gvc
CONFIGURE_ARGS+= --without-jbig
CONFIGURE_ARGS+= --without-lqr
CONFIGURE_ARGS+= --with-lzma
CONFIGURE_ARGS+= --without-openexr
CONFIGURE_ARGS+= --without-pango
CONFIGURE_ARGS+= --without-webp
CONFIGURE_ARGS+= --without-wmf
CONFIGURE_ARGS+= --without-x
CONFIGURE_ARGS+= --disable-silent-rules

CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/lib/${PORTNAME_BASE}/etc/

INSTALL_TARGET=	install-strip

post-install:
#	${TOUCH} ${STAGEDIR}${PREFIX}/lib/ImageMagick/modules/coders/.keep
#	${TOUCH} ${STAGEDIR}${PREFIX}/lib/ImageMagick/modules/filters/.keep

FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/*.in
FILES+= ${WRKSRC}/*/*.in

post-patch:
	${REINPLACE_CMD} -e 's,librsvg-2.0,librsvg,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,-@MAGICK_MAJOR_VERSION@.@MAGICK_MINOR_VERSION@.@MAGICK_MICRO_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@MAGICK_MAJOR_VERSION@.@MAGICK_ABI_SUFFIX@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@MAGICK_MAJOR_VERSION@.@MAGICK_ABI_SUFFIX@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@MAGICK_MAJOR_VERSION@_@MAGICK_ABI_SUFFIX@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@MAGICK_MAJOR_VERSION@_@MAGICK_ABI_SUFFIX@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@MAGICK_MAJOR_VERSION@,,g'  ${FILES}
	${REINPLACE_CMD} -e 's,-@MAGICK_ABI_SUFFIX@,,g'  ${FILES}
	${REINPLACE_CMD} -e 's,-$${MAGICK_ABI_SUFFIX},,g'  ${FILES}
	${REINPLACE_CMD} -e 's,-$${MAGICK_MAJOR_VERSION},,g'  ${FILES}
	${REINPLACE_CMD} -e '/LIBRARY_RELATIVE_PATH/s,$${PACKAGE_NAME}-$${PACKAGE_VERSION},$${PACKAGE_NAME},'  ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF

