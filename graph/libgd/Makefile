#
# $Id$
#
PORTNAME=	libgd
PORTVERSION=	2.2.4
CATEGORIES+=	graphics
MASTER_SITES+=	https://bitbucket.org/libgd/gd-libgd/downloads/
MASTER_SITES+=	http://cdn.bitbucket.org/libgd/gd-libgd/downloads/

MAINTAINER=	onborodin@gmail.com
COMMENT?=	Graphics library for fast creation of images

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig

LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libvpx.so:media/libvpx
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2



USES+=		gmake tar:xz
#USES+=		perl5
#USE_PERL5=	build

#SHEBANG_FILES=	${WRKSRC}/src/bdftogd
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-vpx=${LOCALBASE}
CONFIGURE_ARGS+= --with-x=${LOCALBASE}
CONFIGURE_ARGS+= --with-fontconfig=${LOCALBASE}
CONFIGURE_ARGS+= --with-xpm=${LOCALBASE}
CONFIGURE_ARGS+= --with-tiff=${LOCALBASE}

pre-configure:
	${REINPLACE_CMD} \
		-e 's|^GDLIB_LT_CURRENT=3|GDLIB_LT_CURRENT=5|' \
		${WRKSRC}/configure

post-install:
	${INSTALL_DATA} ${WRKSRC}/src/gdhelpers.h ${STAGEDIR}${PREFIX}/include/
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libgd.so.*

.include <bsd.port.mk>
#EOF
