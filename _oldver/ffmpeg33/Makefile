#
# $Id$
#
PORTNAME=	ffmpeg
PORTVERSION=	3.3.4 #3.3.1
CATEGORIES=	multimedia audio net
MASTER_SITES=	http://ffmpeg.org/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Realtime audio/video encoder/converter and streaming server

BUILD_DEPENDS=	yasm:devel/yasm

LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libSDL.so:devel/libSDL

LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libmp3lame.so:media/lame
LIB_DEPENDS+=	libfaac.so:media/libfaac
LIB_DEPENDS+=	libgsm.so:media/libgsm
LIB_DEPENDS+=	libogg.so:media/libogg

LIB_DEPENDS+=	libopencore-amrnb.so:media/libopencore-amr
LIB_DEPENDS+=	libopencore-amrwb.so:media/libopencore-amr

LIB_DEPENDS+=	libspeex.so:media/libspeex
LIB_DEPENDS+=	libtheoradec.so:media/libtheora
LIB_DEPENDS+=	libtheoraenc.so:media/libtheora
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisenc.so:media/libvorbis
LIB_DEPENDS+=	libwavpack.so:media/libwavpack
LIB_DEPENDS+=	libx264.so:media/libx264
LIB_DEPENDS+=	libxvidcore.so:media/libxvid
LIB_DEPENDS+=	libiconv.so:text/libiconv

LIB_DEPENDS+=	libmodplug.so:media/libmodplug
LIB_DEPENDS+=	libopus.so:media/libopus

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXv.so:x11/libXv

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

CONFIGURE_ARGS+= --cc="${CC}"
CONFIGURE_ARGS+= --disable-ffserver

CONFIGURE_ARGS+= --prefix="${PREFIX}"
CONFIGURE_ARGS+= --mandir="${PREFIX}/man"
CONFIGURE_ARGS+= --datadir="${DATADIR}"
CONFIGURE_ARGS+= --extra-ldflags="-L${LOCALBASE}/lib"
CONFIGURE_ARGS+= --enable-pthreads
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --disable-debug

CONFIGURE_ARGS+= --disable-outdev=sdl

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
#CONFIGURE_ARGS+= --disable-inline-asm

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
	${REINPLACE_CMD} -e 's|/etc/ffserver.conf|${PREFIX}/etc/ffserver.conf|' \
		${WRKSRC}/ffserver.c
	${REINPLACE_CMD} -E \
		-e 's|require_pkg_config opencv|require_pkg_config opencv-core|g' \
		${CONFIGURE_WRKSRC}/${CONFIGURE_SCRIPT}

post-install:
	cd ${WRKSRC} && ${GMAKE} install-man CONFIG_MANPAGES=yes DESTDIR=${STAGEDIR}


.include <bsd.port.post.mk>
#EOF
