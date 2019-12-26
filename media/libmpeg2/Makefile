# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: head/multimedia/libmpeg2/Makefile 366350 2014-08-27 20:42:25Z amdmi3 $

PORTNAME=	libmpeg2
PORTVERSION=	0.5.1
CATEGORIES=	multimedia
MASTER_SITES=	http://libmpeg2.sourceforge.net/files/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Free library for decoding MPEG-2 and MPEG-1 video streams

#USES=		libtool
USES=   gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--enable-shared

.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} -e 's| -O3|| ; s|<termio|&s|' \
		${WRKSRC}/configure
# AMD64 prefers position independent code
.if ${ARCH:tl} == "amd64"
	${REINPLACE_CMD} -e '/CFLAGS/s| -prefer-non-pic||' \
		${WRKSRC}/configure
.endif

post-install:
	${INSTALL_DATA} ${WRKSRC}/libvo/libvo.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/include/video_out.h \
		${STAGEDIR}${PREFIX}/include/mpeg2dec
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libmpeg2convert.so.?
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libmpeg2.so.?

.include <bsd.port.mk>
#EOF
