# $FreeBSD: head/devel/sdl20/Makefile 551250 2020-10-03 02:21:47Z pkubaj $

PORTNAME=       SDL2
PORTVERSION=	2.0.12
CATEGORIES=	devel
MASTER_SITES=	https://www.libsdl.org/release/
#DISTNAME=	SDL2-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Cross-platform multimedia development API

PKGNAMEPREFIX=  lib


GNU_CONFIGURE=	yes
USES=		gmake localbase:ldflags pathfix pkgconfig
USE_CSTD=	c99
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=	--disable-arts \
			--enable-diskaudio \
			--enable-dummyaudio \
			--enable-video-dummy \
			--disable-dbus \
			--disable-input-tslib \
			--disable-rpath

#CONFIGURE_ARGS+=	--disable-mmx
#CONFIGURE_ARGS+=	--disable-3dnow
#CONFIGURE_ARGS+=	--disable-sse
#CONFIGURE_ARGS+=	--disable-sse2
#CONFIGURE_ARGS+=	--disable-sse3

MAKE_ENV=	V=1

.include <bsd.port.options.mk>

# Similar to x11/pixman
.if ${ARCH} == "armv6" || ${ARCH} == "armv7"
BUILD_DEPENDS+=	${LOCALBASE}/bin/as:devel/binutils
CFLAGS+=	-B${LOCALBASE}/bin -no-integrated-as
.endif

CONFIGURE_ARGS+=	--disable-alsa --disable-alsa-shared
CONFIGURE_ARGS+=	--disable-jack --disable-jack-shared
CONFIGURE_ARGS+=	--disable-esd --disable-esd-shared
CONFIGURE_ARGS+=	--disable-nas --disable-nas-shared
CONFIGURE_ARGS+=	--enable-oss

CONFIGURE_ARGS+=	--disable-pulseaudio --disable-pulseaudio-shared
#CONFIGURE_ARGS+=	--enable-sndio --enable-sndio-shared
CONFIGURE_ARGS+=	--disable-sndio --disable-sndio-shared

#CONFIGURE_ARGS+=	--enable-video-kmsdrm --enable-kmsdrm-shared
CONFIGURE_ARGS+=	--disable-video-kmsdrm --disable-video-kmsdrm
CONFIGURE_ARGS+=	--disable-video-opengl
CONFIGURE_ARGS+=	--enable-video-x11 \
			--enable-x11-shared \
			--enable-video-x11-xcursor \
			--enable-video-x11-xinerama \
			--enable-video-x11-xinput \
			--enable-video-x11-xrandr \
			--enable-video-x11-scrnsaver \
			--enable-video-x11-xshape \
			--enable-video-x11-vm
CONFIGURE_ARGS+=	--disable-video-opengles \
			--disable-video-opengles2
CONFIGURE_ARGS+=	--disable-video-wayland \
			--disable-wayland-shared

.include <bsd.port.pre.mk>

#.if !empty(ICONV_LIB)
#CONFIGURE_ARGS+=	ac_cv_lib_iconv_iconv_open=yes ac_cv_func_iconv=yes
#.endif

post-patch:
	${REINPLACE_CMD} -e '/ CheckInputEvents$$/d' \
		-e 's/-liconv/${ICONV_LIB}/g' ${WRKSRC}/configure
# Clang does not provide _m_prefetch
	${REINPLACE_CMD} 's/_m_prefetch/__builtin_prefetch/' \
		${WRKSRC}/configure ${WRKSRC}/src/video/SDL_blit_A.c

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libSDL2.so

.include <bsd.port.post.mk>
