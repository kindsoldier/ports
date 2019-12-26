# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: head/multimedia/gstreamer1-plugins/Makefile 441503 2017-05-23 05:03:14Z rezny $


PORTNAME=	gst-plugins-ugly
PORTVERSION?=	1.8.3
CATEGORIES?=	multimedia audio
MASTER_SITES+=	http://gstreamer.freedesktop.org/src/gst-plugins-ugly/
PKGNAMEPREFIX=  lib

MAINTAINER=	multimedia@FreeBSD.org
COMMENT?=	GStreamer written collection of plugins handling several media types

BUILD_DEPENDS=  iso-codes>=0:misc/iso-codes
RUN_DEPENDS+=   iso-codes>=0:misc/iso-codes

LIB_DEPENDS+= libmpeg2.so:media/libmpeg2

LIB_DEPENDS+= liba52.so:media/liba52
LIB_DEPENDS+= libffi.so:devel/libffi

LIB_DEPENDS+= libgio.so:devel/libglib
LIB_DEPENDS+= libglib.so:devel/libglib
LIB_DEPENDS+= libgmodule.so:devel/libglib
LIB_DEPENDS+= libgobject.so:devel/libglib

LIB_DEPENDS+= libgstaudio.so:media/libgst-plugins-base

LIB_DEPENDS+= libgstbase.so:media/libgstreamer
LIB_DEPENDS+= libgstreamer.so:media/libgstreamer

LIB_DEPENDS+= libgstpbutils.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstriff.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstrtp.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstrtp01.so:media/libgst-plugins-base01
LIB_DEPENDS+= libgstrtsp.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstsdp.so:media/libgst-plugins-base
LIB_DEPENDS+= libgsttag.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstvideo.so:media/libgst-plugins-base

LIB_DEPENDS+= libgthread.so:devel/libglib
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libintl.so:devel/gettext

LIB_DEPENDS+= libmad.so:media/libmad
LIB_DEPENDS+= libmp3lame.so:media/lame

LIB_DEPENDS+= libopencore-amrnb.so:media/libopencore-amr
LIB_DEPENDS+= libopencore-amrwb.so:media/libopencore-amr

LIB_DEPENDS+= liborc.so:devel/liborc

LIB_DEPENDS+= liborcus-parser.so:libre/liborcus
LIB_DEPENDS+= liborcus.so:libre/liborcus

LIB_DEPENDS+= libpcre.so:text/libpcre

LIB_DEPENDS+= libtwolame.so:media/libtwolame
LIB_DEPENDS+= libx264.so:media/libx264

LIB_DEPENDS+= liborc.so:devel/liborc


PORTSCOUT=	limitw:1,even

USES+=		gmake pkgconfig tar:xz
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CFLAGS:=	${CFLAGS} -O2 -Wno-format
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib ${EXTRA_LIBS}

CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --disable-cdio
CONFIGURE_ARGS+= --disable-dvdlpcmdec
CONFIGURE_ARGS+= --disable-dvdread
CONFIGURE_ARGS+= --disable-dvdsub
CONFIGURE_ARGS+= --disable-mpg123
CONFIGURE_ARGS+= --disable-realmedia
CONFIGURE_ARGS+= --enable-orc



FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/pkgconfig/*.pc.in
FILES+= ${WRKSRC}/po/Makevars


post-patch:
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

	${REINPLACE_CMD} -e 's,gir-1.0,gir,g' 	${FILES}
	${REINPLACE_CMD} -e 's,girepository-1.0,girepository,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gst-plugins-base-1.0,gst-plugins-base,g'	${FILES}
	${REINPLACE_CMD} -e 's,gst-plugins-ugly-1.0,gst-plugins-ugly,g'	${FILES}


	${REINPLACE_CMD} -e 's,orc-0.4,orc,g' 	${FILES}
	${REINPLACE_CMD} -e 's,orc-test-0.4,orc-test,g' 	${FILES}



.include <bsd.port.mk>
