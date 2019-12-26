#
# $Id$
#
PORTNAME=	libtheora
PORTVERSION= 1.1.1
#PORTVERSION_MIN= 3
#PORTVERSION= ${PORTVERSION_MAJ}.${PORTVERSION_MIN}
#DISTNAME=	${PORTNAME}-${PORTVERSION_MAJ}beta${PORTVERSION_MIN}

CATEGORIES=	multimedia
MASTER_SITES+=	http://downloads.xiph.org/releases/theora/ 
MASTER_SITES+=	http://distfiles.master.finkmirrors.net/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Theora video codec for the Ogg multimedia streaming system

LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libogg.so:media/libogg

USES+=		tar:bzip2
INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ENV+=	LIBS="${PTHEAD_LIBS}"
CONFIGURE_ARGS+= --disable-sdltest
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --disable-examples
CONFIGURE_ARGS+= --disable-asm

#post-patch:
#	${REINPLACE_CMD} -e 's|doc||g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
