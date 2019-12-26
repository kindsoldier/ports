# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: head/multimedia/gstreamer1-plugins/Makefile 441503 2017-05-23 05:03:14Z rezny $


PORTNAME=	gst-plugins-good
PORTVERSION?=	1.8.3
CATEGORIES?=	multimedia audio
MASTER_SITES+=	http://gstreamer.freedesktop.org/src/gst-plugins-good/
PKGNAMEPREFIX=  lib

MAINTAINER=	multimedia@FreeBSD.org
COMMENT?=	GStreamer written collection of plugins handling several media types

BUILD_DEPENDS=  iso-codes>=0:misc/iso-codes
RUN_DEPENDS+=   iso-codes>=0:misc/iso-codes

LIB_DEPENDS+= libcairo.so:gnome/libcairo

LIB_DEPENDS+= libexpat.so:text/libexpat

LIB_DEPENDS+= libffi.so:devel/libffi
LIB_DEPENDS+= libFLAC.so:media/libflac

LIB_DEPENDS+= libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+= libfreetype.so:graph/libfreetype2
LIB_DEPENDS+= libgio.so:devel/libglib
LIB_DEPENDS+= libglib.so:devel/libglib
LIB_DEPENDS+= libgmodule.so:devel/libglib
LIB_DEPENDS+= libgobject.so:devel/libglib

LIB_DEPENDS+= libgstbase.so:media/libgstreamer
LIB_DEPENDS+= libgstreamer.so:media/libgstreamer

LIB_DEPENDS+= libgstaudio.so:media/libgst-plugins-base
#LIB_DEPENDS+= libgstnetbuffer.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstpbutils.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstfft.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstriff.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstrtp.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstrtsp.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstsdp.so:media/libgst-plugins-base
LIB_DEPENDS+= libgsttag.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstvideo.so:media/libgst-plugins-base

LIB_DEPENDS+= libgthread.so:devel/libglib

LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libintl.so:devel/gettext

LIB_DEPENDS+= libjpeg.so:graph/libjpeg

LIB_DEPENDS+= libogg.so:media/libogg
LIB_DEPENDS+= liboggkate.so:media/libkate
LIB_DEPENDS+= liboggz.so:media/liboggz

LIB_DEPENDS+= liborc.so:devel/liborc

LIB_DEPENDS+= liborcus-parser.so:libre/liborcus
LIB_DEPENDS+= liborcus.so:libre/liborcus

LIB_DEPENDS+= libpcre.so:text/libpcre

LIB_DEPENDS+= libpixman.so:x11/libpixman
LIB_DEPENDS+= libpng16.so:graph/libpng

LIB_DEPENDS+= libshout.so:media/libshout

LIB_DEPENDS+= libspeex.so:media/libspeex
LIB_DEPENDS+= libspeexdsp.so:media/libspeexdsp

LIB_DEPENDS+= libtag.so:media/libtag

LIB_DEPENDS+= libtheora.so:media/libtheora
LIB_DEPENDS+= libtheoradec.so:media/libtheora
LIB_DEPENDS+= libtheoraenc.so:media/libtheora

LIB_DEPENDS+= libvorbis.so:media/libvorbis
LIB_DEPENDS+= libvorbisenc.so:media/libvorbis
LIB_DEPENDS+= libvorbisfile.so:media/libvorbis

LIB_DEPENDS+= libvpx.so:media/libvpx

LIB_DEPENDS+= libwavpack.so:media/libwavpack

LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau
LIB_DEPENDS+= libXdamage.so:x11/libXdamage
LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXext.so:x11/libXext
LIB_DEPENDS+= libXfixes.so:x11/libXfixes
LIB_DEPENDS+= libXrender.so:x11/libXrender
LIB_DEPENDS+= liborc.so:devel/liborc
LIB_DEPENDS+= libsoup.so:gnome/libsoup


PORTSCOUT=	limitw:1,even

USES+=		gmake pkgconfig tar:xz
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CFLAGS:=	${CFLAGS} -O2 -Wno-format
CPPFLAGS+=	-I${LOCALBASE}/include 
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib ${EXTRA_LIBS}

#BOOST_PREFIX=   ${LOCALBASE}/boost64
#CPPFLAGS+=	-I${BOOST_PREFIX}/include
#LDFLAGS+=	-L${BOOST_PREFIX}/lib

CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --disable-libcaca
CONFIGURE_ARGS+= --disable-aalib
CONFIGURE_ARGS+= --disable-directsound
CONFIGURE_ARGS+= --disable-dv1394
#CONFIGURE_ARGS+= --disable-gdk_pixbuf
CONFIGURE_ARGS+= --disable-gst_v4l2
CONFIGURE_ARGS+= --disable-jack
CONFIGURE_ARGS+= --disable-libdv
CONFIGURE_ARGS+= --disable-pulse
#CONFIGURE_ARGS+= --disable-soup
CONFIGURE_ARGS+= --disable-sunaudio
CONFIGURE_ARGS+= --disable-waveform
CONFIGURE_ARGS+= --enable-v4l2-probe

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in
FILES+= ${WRKSRC}/pkgconfig/*.pc.in
FILES+= ${WRKSRC}/po/Makevars


post-patch:
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-no-export-2.0,gmodule-no-export,g' 	${FILES}

	${REINPLACE_CMD} -e 's,soup-2.4,soup,g' 	${FILES}

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

	${REINPLACE_CMD} -e 's,gir-1.0,gir,g' 	${FILES}
	${REINPLACE_CMD} -e 's,girepository-1.0,girepository,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gst-plugins-base-1.0,gst-plugins-base,g'	${FILES}

	${REINPLACE_CMD} -e 's,orc-0.4,orc,g' 	${FILES}
	${REINPLACE_CMD} -e 's,orc-test-0.4,orc-test,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gdk-pixbuf-2.0,gdk-pixbuf,g' 	${FILES}


pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/gstreamer

.include <bsd.port.mk>
