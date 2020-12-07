#
# $Id$
#
PORTNAME=	x264
PORTVERSION=	0.${X264_BUILD}.${X264_REV}
CATEGORIES=	multimedia
DIST_SUBDIR=	libx264
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}
PKGNAMEPREFIX=  lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library for encoding H.264/MPEG-4 AVC video

BUILD_DEPENDS+=	yasm:devel/yasm
BUILD_DEPENDS+=	bash:lang/bash

X264_BUILD=	161
X264_REV=	3020
X264_GITVER=	${GL_COMMIT:C/^(.{7}).*/\1/}
X264_COMMIT=	d198931a63049db1f2c92d96c34904c69fde8117


USE_GITLAB=	yes
GL_SITE=	https://code.videolan.org
GL_ACCOUNT=	videolan
GL_COMMIT=	d198931a63049db1f2c92d96c34904c69fde8117

USES+=		gmake
USE_LDCONFIG=	yes
HAS_CONFIGURE=	yes

CONFIGURE_ARGS+= --disable-asm
#CONFIGURE_ARGS+= --enable-debug
#CONFIGURE_ARGS+= --bit-depth=10

CONFIGURE_ARGS+= --extra-cflags="-I${LOCALBASE}/include"
CONFIGURE_ARGS+= --extra-ldflags="-L${LOCALBASE}/lib"
CONFIGURE_ARGS+= --enable-static --enable-shared
CONFIGURE_ARGS+= --disable-opencl
CFLAGS+= -pthread
LDFLAGS+= -pthread


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

post-configure:
	${REINPLACE_CMD} -e 's,X264_BUILD 142,X264_BUILD 161,' ${WRKSRC}/x264.h

#post-install:
#	${RM} ${PREFIX}/bin/x264
#	${STRIP_CMD} ${PREFIX}/lib/libx264.so.*

.include <bsd.port.mk>
#EOF
