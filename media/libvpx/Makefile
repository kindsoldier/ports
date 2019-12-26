# Created by: Ashish SHUKLA <ashish@FreeBSD.org>
# $FreeBSD: head/multimedia/libvpx/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	libvpx
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.1
CATEGORIES=	multimedia

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	VP8/VP9 Codec SDK

BUILD_DEPENDS=	yasm:devel/yasm

USE_GITHUB=	yes
GH_ACCOUNT=	webmproject

USES=		compiler:c11 cpe gmake perl5 shebangfix
HAS_CONFIGURE=	yes
USE_PERL5=	build
USE_LDCONFIG=	yes
SHEBANG_FILES=	build/make/ads2gas.pl
CONFIGURE_ENV=	ASFLAGS="${ASFLAGS}"
# Only explicitly list ARCHs with SIMD optimizations
CONFIGURE_ARGS_aarch64=	--target=arm64-linux-gcc
CONFIGURE_ARGS_amd64=	--target=x86_64-linux-gcc
CONFIGURE_ARGS_i386=	--target=x86-linux-gcc

.if ${CFLAGS:M-march=armv[78]*}
CONFIGURE_ARGS+=	--target=armv7-linux-gcc
ASFLAGS+=		-meabi=5
.endif

CONFIGURE_ARGS+=${CONFIGURE_ARGS_${ARCH}}
CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --disable-install-docs
CONFIGURE_ARGS+= --disable-install-srcs
CONFIGURE_ARGS+= --enable-pic
CONFIGURE_ARGS+= --enable-vp8
CONFIGURE_ARGS+= --enable-vp9
MAKE_ARGS+=	verbose=yes
ALL_TARGET=	# empty

#CONFIGURE_ARGS+= --disable-multithread
CONFIGURE_ARGS+= --disable-unit-tests
#CONFIGURE_ARGS+= --enable-debug
CONFIGURE_ARGS+= --enable-multi-res-encoding
CONFIGURE_ARGS+= --enable-postproc --enable-vp9-postproc --enable-vp9-temporal-denoising
CONFIGURE_ARGS+= --disable-runtime-cpu-detect
CONFIGURE_ARGS+= --enable-shared

post-patch:
	${REINPLACE_CMD} 's|\(link_with_cc\)=gcc|\1=$${CC}|' \
		${WRKSRC}/build/make/configure.sh

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/vpx*

.include <bsd.port.mk>
