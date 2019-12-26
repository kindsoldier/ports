#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
# $URL: file:///usr2/svn/ports5/graphics-libs/libjasper/Makefile $
#
PORTNAME=	jasper
PORTVERSION=	1.900.1
CATEGORIES=	graphics
MASTER_SITES+=	http://www.ece.uvic.ca/~mdadams/jasper/software/ 
MASTER_SITES+=	${MASTER_SITE_IMAGEMAGICK}
MASTER_SITE_IMAGEMAGICK+= ftp://ftp.imagemagick.org/pub/%SUBDIR%/ 
MASTER_SITE_IMAGEMAGICK+= ${MASTER_SITE_RINGSERVER:S,%SUBDIR%,graphics/&,}
MASTER_SITE_SUBDIR=	ImageMagick/delegates
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	An implementation of the codec specified in the JPEG-2000 standard

LIB_DEPENDS+=	libjpeg.so:graph/libjpeg

USES+=		zip
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --enable-shared 
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --disable-opengl
INSTALLS_SHLIB=	yes
MAKE_ARGS+= program_transform_name="" transform=""


.include <bsd.port.mk>
#EOF

