#
# $Id$
#
PORTNAME=	libx264
PORTVERSION=	0.${X264_BUILD}.${X264_REV}
CATEGORIES=	multimedia
MASTER_SITES+=	ftp://ftp.videolan.org/pub/videolan/x264/snapshots/
#MASTER_SITES+=	http://samples.mplayerhq.hu/yuv4mpeg2/:pgo
DISTNAME=	x264-snapshot-${X264_SNAPSHOT}-2245-stable
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}
DIST_SUBDIR=	libx264
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library for encoding H.264/MPEG-4 AVC video

#BUILD_DEPENDS+=	yasm:devel/yasm
BUILD_DEPENDS+=	bash:lang/bash

#X264_BUILD=	142
#X264_REV=	2455
#X264_COMMIT=	021c0dc6c95c1bc239c9db78a80dd85fc856a4dd
#X264_GITVER=	${X264_COMMIT:C/^(.......).*$/\1/g}
#X264_SNAPSHOT=	20140827

#X264_BUILD=	148
#X264_REV=	2728
#X264_COMMIT=	4d5c8b01a48f72f9c40651e92c39294326a0863f
#X264_GITVER=	${X264_COMMIT:C/^(.......).*$/\1/g}
#X264_SNAPSHOT=	20161202

#X264_BUILD=	155
#X264_REV=	2917
#X264_COMMIT=	0a84d986e7020f8344f00752e3600b9769cc1e85
#X264_GITVER=	${X264_COMMIT:C/^(.......).*$/\1/g}
#X264_SNAPSHOT=	20180807

X264_BUILD=	148
X264_REV=	2795
X264_COMMIT=	aaa9aa83a111ed6f1db253d5afa91c5fc844583f
X264_GITVER=	${X264_COMMIT:C/^(.......).*$/\1/g}
X264_SNAPSHOT=	20170626




USES+=		gmake
USES+=		tar:bzip2
USE_LDCONFIG=	yes
HAS_CONFIGURE=	yes

CONFIGURE_ARGS+= --disable-asm
#CONFIGURE_ARGS+= --enable-debug
CONFIGURE_ARGS+= --bit-depth=10

CONFIGURE_ARGS+= --extra-cflags="-I${LOCALBASE}/include"
CONFIGURE_ARGS+= --extra-ldflags="-L${LOCALBASE}/lib"
CONFIGURE_ARGS+= --enable-static --enable-shared
CONFIGURE_ARGS+= --disable-opencl

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|; \
		s|-lpthread|${PTHREAD_LIBS}|g; \
		s|/bin/bash|${LOCALBASE}/bin/bash|; \
		s|gpac_static|gpac|g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|bash|sh|; \
		s|VER="x"|VER="${X264_REV} ${X264_GITVER}"|; \
		s|VERSION=""|VERSION=" r${X264_REV} ${X264_GITVER}"|' \
		${WRKSRC}/version.sh

#post-install:
#	${RM} ${PREFIX}/bin/x264
#	${STRIP_CMD} ${PREFIX}/lib/libx264.so.*

.include <bsd.port.mk>
#EOF
