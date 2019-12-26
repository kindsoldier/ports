#
# $Id$
#
PORTNAME=	pjsip
PORTVERSION=	2.7.2
CATEGORIES=	net
MASTER_SITES=	http://www.pjsip.org/release/${PORTVERSION}/
DISTNAME=	pjproject-${DISTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Multimedia communication library written in C language

LIB_DEPENDS=	libportaudio.so:media/libportaudio
LIB_DEPENDS+=	libasound.so:media/libalsa
LIB_DEPENDS+=	libsamplerate.so:media/libsamplerate
LIB_DEPENDS+=	libspeex.so:media/libspeex
LIB_DEPENDS+=	libspeexdsp.so:media/libspeexdsp
LIB_DEPENDS+=	libgsm.so:media/libgsm
LIB_DEPENDS+=	libsrtp.so:net/libsrtp

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-external-pa
USES=		gmake tar:bz2
USE_LDCONFIG=	yes
MAKE_JOBS_UNSAFE=	yes
CFLAGS+=	-DPJ_HAS_IPV6=1 -DNDEBUG=0
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CC=	gcc
#CXX=	g++
#CPP=	gcpp

#CONFIGURE_ARGS+= --enable-g711-codec
#CONFIGURE_ARGS+= --enable-g722-codec
#CONFIGURE_ARGS+= --enable-g7221-codec
#CONFIGURE_ARGS+= --enable-gsm-codec
#CONFIGURE_ARGS+= --enable-speex-aec

CONFIGURE_ARGS+= --disable-ffmpeg
CONFIGURE_ARGS+= --disable-g722-codec
CONFIGURE_ARGS+= --disable-g7221-codec
CONFIGURE_ARGS+= --disable-gsm-codec
CONFIGURE_ARGS+= --disable-ilbc-codec
CONFIGURE_ARGS+= --disable-l16-codec
CONFIGURE_ARGS+= --disable-l16-codec
CONFIGURE_ARGS+= --disable-openh264
CONFIGURE_ARGS+= --disable-sdl
CONFIGURE_ARGS+= --disable-v4l2
CONFIGURE_ARGS+= --disable-video
CONFIGURE_ARGS+= --disable-silk

CONFIGURE_ARGS+= --enable-g711-codec
CONFIGURE_ARGS+= --disable-libsamplerate
CONFIGURE_ARGS+= --enable-opencore-amr
CONFIGURE_ARGS+= --disable-resample
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --enable-sound
CONFIGURE_ARGS+= --enable-speex-codec
CONFIGURE_ARGS+= --with-external-gsm
CONFIGURE_ARGS+= --with-external-speex
CONFIGURE_ARGS+= --with-external-srtp


PLIST_SUB+=	TARGET=${CONFIGURE_TARGET}


post-patch:
	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/pkgconfig.py

	${REINPLACE_CMD} -e 's/$$(APP_LDFLAGS) \{0,1\}//' \
		-e 's/$$(OS_LDFLAGS)/$$(APP_LDFLAGS) &/' \
		${WRKSRC}/*/build/Makefile

	${ECHO} "#include <sys/select.h>" > ${WRKSRC}/pjlib/include/pj/config_site.h
	${ECHO} "#define PJ_IOQUEUE_MAX_HANDLES (FD_SETSIZE)" >> ${WRKSRC}/pjlib/include/pj/config_site.h
#	${ECHO} "#define PJ_HAS_SOCKLEN_T 1" >> ${WRKSRC}/pjlib/include/pj/config_site.h


.include <bsd.port.mk>
#EOF
