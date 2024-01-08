# Created by: Andrew Thompson <thompsa@FreeBSD.org>
# $FreeBSD: head/multimedia/libv4l/Makefile 422052 2016-09-13 18:10:12Z kwm $
# Check v4l_compat and v4l-utils slave ports

PORTNAME?=	libv4l
PORTVERSION=	1.6.3
CATEGORIES=	multimedia
MASTER_SITES=	http://linuxtv.org/downloads/v4l-utils/:master LOCAL/kwm:local
DISTFILES+=	v4l-utils-${PORTVERSION}.tar.bz2:master
DISTFILES+=	linux-3.16.7-dvb-headers.tar.xz:local

MAINTAINER=	multimedia@FreeBSD.org
COMMENT?=	Video4Linux library

USES=		tar:bzip2
WRKSRC=		${WRKDIR}/v4l-utils-${PORTVERSION}

USES+=		compiler:c11

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include -I${WRKSRC}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USES+=		gmake pkgconfig
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--enable-libdvbv5 \
		--disable-qv4l2 \
		--without-libudev --with-gnu-ld
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+=--disable-v4l-utils --enable-libv4l
EXTRA_PATCHES+=	${PATCHDIR}/extra-patch-configure

HEADER_PATCHES=	extra-linux_dvb_ca.h \
		extra-linux_dvb_osd.h \
		patch-include_linux_dvb_frontend.h \
		patch-include_linux_dvb_video.h

post-patch:
# fix weird types, except a few headers which have compat code for these types.
	${FIND} ${WRKDIR} -type f \( -iname "*.h" ! -iname "input.h" ! -iname "videodev2.h" \) | \
		${XARGS} -n 10 ${REINPLACE_CMD} \
		-e 's|linux/types.h|sys/types.h|g; s|__user||g; \
		s|__u8|uint8_t|g; s|__s8|int8_t|g; \
		s|__u16|uint16_t|g; s|__s16|int16_t|g; \
		s|__u32|uint32_t|g; s|__s32|int32_t|g; \
		s|__u64|uint64_t|g; s|__s64|int64_t|g'
.for patch in ${HEADER_PATCHES}
	cd ${WRKDIR}/linux && ${PATCH} -p2 < ${FILESDIR}/${patch}
.endfor

BASE_HEADERS=	input.h uinput.h ivtv.h v4l2-controls.h \
		v4l2-common.h videodev2.h
DVB_HEADERS=	audio.h dmx.h frontend.h video.h
EXTRA_HEADERS=	ca.h osd.h version.h

EXTRADIR= ${WRKDIR}/linux

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/linux/dvb/
.for i in ${BASE_HEADERS}
	${INSTALL_DATA} ${WRKSRC}/contrib/freebsd/include/linux/${i} ${STAGEDIR}${PREFIX}/include/linux/
.endfor
.for i in ${DVB_HEADERS}
	${INSTALL_DATA} ${WRKSRC}/include/linux/dvb/${i} ${STAGEDIR}${PREFIX}/include/linux/dvb
.endfor
# V4L1 is dead in linux, however webcamd still supports it.
	${INSTALL_DATA} ${FILESDIR}/videodev.h ${STAGEDIR}${PREFIX}/include/linux/
# Extra dvb headers supplied taken from the linux kernel distfile.
# vdr and the gst dvb plugin need them at least
.for i in ${EXTRA_HEADERS}
	${INSTALL_DATA} ${EXTRADIR}/dvb/${i} ${STAGEDIR}${PREFIX}/include/linux/dvb/
.endfor

.include <bsd.port.mk>
#EOF

