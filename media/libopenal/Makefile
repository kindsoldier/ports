#
# $id$
#
PORTNAME=	openal
PORTVERSION=	20060211
CATEGORIES=	audio
MASTER_SITES=	GENTOO
DISTVERSION=	0.0.8
PKGNAMEPREFIX=	lib

MAINTAINER=	erik@bz.bzflag.bz
COMMENT=	3D positional spatialized sound library

LIB_DEPENDS+=	libSDL.so:devel/libSDL

CONFLICTS=	openal-soft-[0-9]*

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-Wno-return-type -fPIC
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --enable-capture --disable-arts
CONFIGURE_ARGS+= --disable-alsa
CONFIGURE_ARGS+= --disable-vorbis
USES=		gmake
USE_LDCONFIG=	yes

NOT_FOR_ARCHS=	ia64
NOT_FOR_ARCHS_REASON_ia64=	does not compile

post-patch:
	${REINPLACE_CMD} -e 's/x86_64\*/amd64\* | \*ia64\*/g; \
		/CPPFLAGS=/ d; s/ \*linux\*)/ \*bsd\*)/' ${WRKSRC}/configure
	${REINPLACE_CMD} -e '/#include/ s|SDL/||' \
		${WRKSRC}/src/extensions/al_ext_mp3.c
	${REINPLACE_CMD} -e 's|"mixaudio16_mmx_prk.h"|"arch/i386/mixaudio16_mmx_prk.h"|' \
		${WRKSRC}/src/mixaudio16.h
	${REINPLACE_CMD} -e 's|@requirements@||' \
		${WRKSRC}/admin/pkgconfig/openal.pc.in
	${REINPLACE_CMD} -e '/^NASM=/ s|=.*|=no|' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF

