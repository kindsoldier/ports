#
# $Id$
#
PORTNAME=	ffmpeg
PORTVERSION=	4.3.1
CATEGORIES=	multimedia audio net
MASTER_SITES=	http://ffmpeg.org/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Realtime audio/video encoder/converter and streaming server

BUILD_DEPENDS=	yasm:devel/yasm

LIB_DEPENDS+= libSDL2.so:devel/libSDL2

#LIB_DEPENDS+= libdrm.so:system/libdrm
LIB_DEPENDS+= libfreetype.so:graph/libfreetype2
LIB_DEPENDS+= libgmp.so:math/libgmp
LIB_DEPENDS+= libgnutls.so:crypto/libgnutls
LIB_DEPENDS+= libgsm.so:media/libgsm
LIB_DEPENDS+= libhogweed.so:crypto/libnettle
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libidn2.so:net/libidn2
LIB_DEPENDS+= libintl.so:devel/gettext
LIB_DEPENDS+= libmodplug.so:media/libmodplug
LIB_DEPENDS+= libmp3lame.so:media/lame
LIB_DEPENDS+= libnettle.so:crypto/libnettle
LIB_DEPENDS+= libogg.so:media/libogg

LIB_DEPENDS+= libopencore-amrnb.so:media/libopencore-amr
LIB_DEPENDS+= libopencore-amrwb.so:media/libopencore-amr

LIB_DEPENDS+= libopenh264.so:media/libopenh264
LIB_DEPENDS+= libopus.so:media/libopus
LIB_DEPENDS+= libp11-kit.so:crypto/libp11-kit
LIB_DEPENDS+= libpng16.so:graph/libpng
LIB_DEPENDS+= libspeex.so:media/libspeex

LIB_DEPENDS+= libtasn1.so:crypto/libtasn1

LIB_DEPENDS+= libtheoradec.so:media/libtheora
LIB_DEPENDS+= libtheoraenc.so:media/libtheora

LIB_DEPENDS+= libva-drm.so:media/libva
LIB_DEPENDS+= libva-x11.so:media/libva
LIB_DEPENDS+= libva.so:media/libva

LIB_DEPENDS+= libvorbis.so:media/libvorbis
LIB_DEPENDS+= libvorbisenc.so:media/libvorbis
LIB_DEPENDS+= libwavpack.so:media/libwavpack
LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libx264.so:media/libx264
LIB_DEPENDS+= libx265.so:media/libx265
LIB_DEPENDS+= libXau.so:x11/libXau

LIB_DEPENDS+= libxcb-shape.so:x11/libxcb
LIB_DEPENDS+= libxcb-shm.so:x11/libxcb
LIB_DEPENDS+= libxcb-xfixes.so:x11/libxcb
LIB_DEPENDS+= libxcb.so:x11/libxcb

LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXext.so:x11/libXext
LIB_DEPENDS+= libXfixes.so:x11/libXfixes
LIB_DEPENDS+= libXv.so:x11/libXv
LIB_DEPENDS+= libxvidcore.so:media/libxvid


BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xau.pc:x11/libXau
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xdmcp.pc:x11/libXdmcp
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

HAS_CONFIGURE=	yes
USE_LDCONFIG=	yes
HAS_CONFIGURE=	yes

USES=		compiler:c11 gmake localbase:ldflags perl5 pkgconfig shebangfix tar:xz
USE_LDCONFIG=	yes
USE_PERL5=	build
SHEBANG_FILES=	doc/texi2pod.pl
NOPRECIOUSMAKEVARS=	yes # ARCH

CPPFLAGS+=	-I${LOCALBASE}/include/vorbis
CPPFLAGS+=	-I${LOCALBASE}/include

CONFIGURE_ARGS+= --disable-libsoxr

CONFIGURE_ARGS+= --disable-indev=alsa
CONFIGURE_ARGS+= --disable-outdev=alsa
CONFIGURE_ARGS+= --disable-vdpau

CONFIGURE_ARGS+= --enable-postproc
CONFIGURE_ARGS+= --enable-avfilter
CONFIGURE_ARGS+= --enable-avresample

CONFIGURE_ARGS+= --enable-ffplay


CONFIGURE_ARGS+= --cc="${CC}"

CONFIGURE_ARGS+= --prefix="${PREFIX}"
CONFIGURE_ARGS+= --mandir="${PREFIX}/man"
CONFIGURE_ARGS+= --datadir="${DATADIR}"
CONFIGURE_ARGS+= --extra-ldflags="-L${LOCALBASE}/lib"
CONFIGURE_ARGS+= --enable-pthreads
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --disable-debug

#CONFIGURE_ARGS+= --disable-outdev=sdl

CONFIGURE_ARGS+= --disable-htmlpages
CONFIGURE_ARGS+= --disable-podpages
CONFIGURE_ARGS+= --disable-txtpages

CONFIGURE_ARGS+= --enable-bzlib
CONFIGURE_ARGS+= --enable-gnutls
CONFIGURE_ARGS+= --enable-libfreetype
CONFIGURE_ARGS+= --enable-libgsm
CONFIGURE_ARGS+= --enable-libmp3lame
CONFIGURE_ARGS+= --enable-libopencore-amrnb
CONFIGURE_ARGS+= --enable-libopencore-amrwb
CONFIGURE_ARGS+= --enable-libspeex
CONFIGURE_ARGS+= --enable-libtheora
CONFIGURE_ARGS+= --enable-libvorbis
CONFIGURE_ARGS+= --enable-libwavpack
CONFIGURE_ARGS+= --enable-libx264
CONFIGURE_ARGS+= --enable-libx265
CONFIGURE_ARGS+= --enable-libxvid
CONFIGURE_ARGS+= --enable-zlib

CONFIGURE_ARGS+= --enable-libopenh264
CONFIGURE_ARGS+= --disable-libaom


CONFIGURE_ARGS+= --enable-version3
CONFIGURE_ARGS+= --enable-gpl

CONFIGURE_ARGS+= --enable-libmodplug
CONFIGURE_ARGS+= --enable-libopus

CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --enable-pic
CONFIGURE_ARGS+= --disable-optimizations


.include <bsd.port.pre.mk>

.if ${ARCH} == "amd64"

CONFIGURE_ARGS+= --enable-runtime-cpudetect
CONFIGURE_ARGS+= --disable-inline-asm

.elif ${ARCH} == "i386"

CONFIGURE_ARGS+= --extra-cflags=-m32
CONFIGURE_ARGS+= --enable-runtime-cpudetect
#CONFIGURE_ARGS+= --disable-inline-asm

.elif (${ARCH} == "armv6" || ${ARCH} == "armv6hf")

CONFIGURE_ENV+=	COMPILER_PATH=${LOCALBASE}/bin
MAKE_ENV=	COMPILER_PATH=${LOCALBASE}/bin

CONFIGURE_ENV+=	ASFLAGS=-no-integrated-as
CONFIGURE_ARGS+= --disable-fast-unaligned

CONFIGURE_ARGS+= --disable-armv5te
#CONFIGURE_ARGS+= --disable-armv6
CONFIGURE_ARGS+= --disable-armv6t2
CONFIGURE_ARGS+= --disable-vfp
CONFIGURE_ARGS+= --disable-neon
.endif

INSTALL_TARGET= install-progs install-data
INSTALL_TARGET+= install-libs install-headers

CONFIGURE_ENV+=	${CONFIGURE_ENV_${ARCH}_${CHOSEN_COMPILER_TYPE}}
CONFIGURE_ARGS+=${CONFIGURE_ARGS_${OPSYS}_${OSREL:R}}
CONFIGURE_ARGS+=${CONFIGURE_ARGS_${ARCH}}

post-patch:
# {C,LD}FLAGS safeness
#	${REINPLACE_CMD} -e 's|/etc/ffserver.conf|${PREFIX}/etc/ffserver.conf|' \
#		${WRKSRC}/fftools/ffserver.c
	${REINPLACE_CMD} -E \
		-e 's|require_pkg_config opencv|require_pkg_config opencv-core|g' \
		${CONFIGURE_WRKSRC}/${CONFIGURE_SCRIPT}


post-install:
	cd ${WRKSRC} && ${GMAKE} install-man CONFIG_MANPAGES=yes DESTDIR=${STAGEDIR}


.include <bsd.port.post.mk>
#EOF
