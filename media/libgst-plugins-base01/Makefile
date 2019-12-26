#
# $Id#
#
PORTNAME=	gst-plugins-base
PORTVERSION=	0.10.36

CATEGORIES=	multimedia
MASTER_SITES=	http://gstreamer.freedesktop.org/src/${PORTNAME}/ GNOME
PKGNAMEPREFIX=	lib
PKGNAMESUFFIX=  01

MAINTAINER=	onborodin@gmail.com
COMMENT=	Development framework for creating media applications

BUILD_DEPENDS=	gflex:devel/gflex
BUILD_DEPENDS=	bison:devel/bison

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgstreamer01.so:media/libgstreamer01

LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libtheoradec.so:media/libtheora
LIB_DEPENDS+=	libtheoraenc.so:media/libtheora

LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libXv.so:x11/libXv

LIB_DEPENDS+=	libcairo.so:gnome/libcairo
LIB_DEPENDS+=	libpango.so:gnome/libpango


USES+=		tar:xz
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-tests
CONFIGURE_ARGS+= --disable-examples
CONFIGURE_ARGS+= --disable-failing-tests
CONFIGURE_ARGS+= --disable-gtk-doc

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libxml2
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

MAKE_ARGS+= INSTALL_PROGRAM="install -o root -g wheel -m 555"
MAKE_ARGS+= INSTALL_SCRIPT="install  -o root -g wheel -m 555"

CONFIGURE_ARGS+= --without-check
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFIGURE_ARGS+= --disable-alsa
CONFIGURE_ARGS+= --disable-cdparanoia
CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --disable-examples
CONFIGURE_ARGS+= --disable-gnome_vfs
CONFIGURE_ARGS+= --disable-gst_v4l
CONFIGURE_ARGS+= --disable-libvisual
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-valgrind
CONFIGURE_ARGS+= --disable-ivorbis

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

	${REINPLACE_CMD} -e 's,-@GST_MAJORMINOR@,01,g' 	${FILES}
	${REINPLACE_CMD} -e 's,_@GST_MAJORMINOR@,01,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$(GST_MAJORMINOR),01,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$GST_MAJORMINOR,01,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gir-1.0,gir,g' 	${FILES}
	${REINPLACE_CMD} -e 's,girepository-1.0,girepository,g' 	${FILES}

.include <bsd.port.mk>
#EOF
