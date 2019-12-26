# Created by: Aragon Gouveia <aragon@phat.za.net>
# $FreeBSD: head/audio/alsa-plugins/Makefile 428352 2016-12-11 15:22:47Z jbeich $

PORTNAME=	alsa-plugins
PORTVERSION=	1.1.1
CATEGORIES=	audio
MASTER_SITES=	ftp://ftp.alsa-project.org/pub/plugins/ GENTOO
PKGNAMEPREFIX=  lib

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	ALSA compatibility library plugins

LIB_DEPENDS+=	libasound.so:media/libalsa
LIB_DEPENDS+=	libavcodec.so:media/ffmpeg
LIB_DEPENDS+=	libsamplerate.so:media/libsamplerate
LIB_DEPENDS+=	libspeex.so:media/libspeex

GNU_CONFIGURE=	yes
USES=		alias libtool:keepla localbase pkgconfig tar:bzip2

EXTRA_PATCHES+=	${FILESDIR}/alsa-plugins.patch
INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${.CURDIR}/../alsa-lib/files

CFLAGS+= -DFREEBSD_OSS_USE_IO_PTR
CFLAGS+= -DFREEBSD_OSS_BLKCNT_P2
CFLAGS+= -DFREEBSD_OSS_BUFSZ_P2


CONFIGURE_ARGS+= --enable-avcodec
CONFIGURE_ARGS+= --enable-samplerate
CONFIGURE_ARGS+= --with-speex=lib

post-patch:	.SILENT
	${REINPLACE_CMD} -e '/LIBS/s/-ldl//g' \
		-e '/lt_cv_dlopen/s/-ldl//g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
