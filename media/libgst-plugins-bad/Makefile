# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: head/multimedia/gstreamer1-plugins/Makefile 441503 2017-05-23 05:03:14Z rezny $


PORTNAME=	gst-plugins-bad
PORTVERSION?=	1.8.3
CATEGORIES?=	multimedia audio
MASTER_SITES+=	http://gstreamer.freedesktop.org/src/gst-plugins-bad/
PKGNAMEPREFIX=  lib

MAINTAINER=	multimedia@FreeBSD.org
COMMENT?=	GStreamer written collection of plugins handling several media types

BUILD_DEPENDS=  iso-codes>=0:misc/iso-codes
RUN_DEPENDS+=   iso-codes>=0:misc/iso-codes

LIB_DEPENDS+= libcurl.so:net/libcurl
LIB_DEPENDS+= libdca.so:media/libdca

LIB_DEPENDS+= libexpat.so:text/libexpat
LIB_DEPENDS+= libfaac.so:media/libfaac
LIB_DEPENDS+= libfaad.so:media/libfaad
LIB_DEPENDS+= libffi.so:devel/libffi

LIB_DEPENDS+= libFLAC.so:media/libflac
LIB_DEPENDS+= libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+= libgio.so:devel/libglib
LIB_DEPENDS+= libGL.so:graph/libmesa
LIB_DEPENDS+= libglib.so:devel/libglib

LIB_DEPENDS+= libgmodule.so:devel/libglib
LIB_DEPENDS+= libgobject.so:devel/libglib

LIB_DEPENDS+= libgsm.so:media/libgsm

LIB_DEPENDS+= libgstaudio.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstbase.so:media/libgstreamer
LIB_DEPENDS+= libgstfft.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstpbutils.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstreamer.so:media/libgstreamer
LIB_DEPENDS+= libgstrtp.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstsdp.so:media/libgst-plugins-base
LIB_DEPENDS+= libgsttag.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstvideo.so:media/libgst-plugins-base

LIB_DEPENDS+= libgthread.so:devel/libglib

LIB_DEPENDS+= libhogweed.so:crypto/libnettle

LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libintl.so:devel/gettext

LIB_DEPENDS+= libjpeg.so:graph/libjpeg
LIB_DEPENDS+= libkate.so:media/libkate
LIB_DEPENDS+= libmodplug.so:media/libmodplug
LIB_DEPENDS+= libneon.so:net/libneon
LIB_DEPENDS+= libnettle.so:crypto/libnettle
LIB_DEPENDS+= libnghttp2.so:net/libnghttp2

LIB_DEPENDS+= libogg.so:media/libogg
LIB_DEPENDS+= liboggkate.so:media/libkate
LIB_DEPENDS+= liboggz.so:media/liboggz

LIB_DEPENDS+= libopus.so:media/libopus
LIB_DEPENDS+= liborc.so:devel/liborc
LIB_DEPENDS+= liborcus-parser.so:libre/liborcus
LIB_DEPENDS+= liborcus.so:libre/liborcus
LIB_DEPENDS+= libpcre.so:text/libpcre

LIB_DEPENDS+= libpng.so:graph/libpng
LIB_DEPENDS+= libsndfile.so:media/libsndfile
LIB_DEPENDS+= libspandsp.so:net/libspandsp

LIB_DEPENDS+= libtiff.so:graph/libtiff
#LIB_DEPENDS+= libvdpau.so:media/libvdpau

LIB_DEPENDS+= libvorbis.so:media/libvorbis
LIB_DEPENDS+= libvorbisenc.so:media/libvorbis
LIB_DEPENDS+= libvorbisfile.so:media/libvorbis

LIB_DEPENDS+= libx265.so:media/libx265

LIB_DEPENDS+= libwebp.so:graph/libwebp

LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau


PORTSCOUT=	limitw:1,even

USES+=		gmake pkgconfig tar:xz
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CFLAGS:=	${CFLAGS} -O2 -Wno-format
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib ${EXTRA_LIBS}

CONFIGURE_ARGS+= --disable-vdpau

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/*/*/Makefile.in
FILES+= ${WRKSRC}/pkgconfig/*.pc.in
FILES+= ${WRKSRC}/po/Makevars


post-patch:
	${REINPLACE_CMD} -e 's|opencv <= 2.4.8|opencv <= 2.4.9|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-no-export-2.0,gmodule-no-export,g' 	${FILES}

	${REINPLACE_CMD} -e 's,-@GST_API_VERSION@,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,_@GST_API_VERSION@,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$GST_API_VERSION,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$(GST_API_VERSION),,g' 	${FILES}

	${REINPLACE_CMD} -e 's,800:0:800,8:0:8,g' 	${FILES}
	${REINPLACE_CMD} -e 's,803:0:803,8:0:8,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gstreamer-1.0,gstreamer,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstbase-1.0,gstbase,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstcheck-1.0,gstcheck,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstcontroller-1.0,gstcontroller,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstnet-1.0,gstnet,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-1.0,gstreamer,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-allocators-1.0,gstreamer-allocators,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gst-plugins-base-1.0,gst-plugins-base,g'	${FILES}
	${REINPLACE_CMD} -e 's,gst-plugins-bad-1.0,gst-plugins-bad,g'	${FILES}
	${REINPLACE_CMD} -e 's,gstaudio-1.0,gstaudio,g'	${FILES}
	${REINPLACE_CMD} -e 's,gstvideo-1.0,gstvideo,g'	${FILES}

	${REINPLACE_CMD} -e 's,gir-1.0,gir,g' 	${FILES}
	${REINPLACE_CMD} -e 's,girepository-1.0,girepository,g' 	${FILES}

	${REINPLACE_CMD} -e 's,orc-0.4,orc,g' 	${FILES}
	${REINPLACE_CMD} -e 's,orc-test-0.4,orc-test,g' 	${FILES}


LIB_DEPENDS+= liborc.so:devel/liborc

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/gstreamer

.include <bsd.port.mk>
