#
# $Id: Makefile 2416 2009-09-12 16:31:45Z root $
# $URL: file:///usr2/svn/ports5/graphics-libs/liblcms/Makefile $
#
PORTNAME=	lcms
PORTVERSION=	1.19
CATEGORIES=	graphics
MASTER_SITES=	http://www.littlecms.com/ SF/${PORTNAME}/${PORTNAME}/${PORTVERSION} 
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Light Color Management System -- a color management library

LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libtiff.so:graph/libtiff

GNU_CONFIGURE=	yes
USES+=		gmake
CFLAGS+= -I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --includedir=${PREFIX}/include/lcms
MAKE_ARGS+=	program_transform_name=''
INSTALLS_SHLIB=	yes

.include <bsd.port.mk>
#EOF

