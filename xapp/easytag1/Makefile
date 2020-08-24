#
# $Id$
#
PORTNAME=	easytag
PORTVERSION=	2.2.4
CATEGORIES=	audio
MASTER_SITES=	GNOME

MAINTAINER=	onborodin@gmail.com
COMMENT=	GTK Tag editor for audio files

LIB_DEPENDS+= libFLAC.so:media/libflac
LIB_DEPENDS+= libid3.so:media/libid3lib
LIB_DEPENDS+= libid3tag.so:media/libid3tag
LIB_DEPENDS+= libogg.so:media/libogg
LIB_DEPENDS+= libspeex.so:media/libspeex
LIB_DEPENDS+= libtag.so:media/libtag
LIB_DEPENDS+= libvorbis.so:media/libvorbis
LIB_DEPENDS+= libvorbisfile.so:media/libvorbis
LIB_DEPENDS+= libwavpack.so:media/libwavpack

LIB_DEPENDS+= libatk.so:gnome/libatk
LIB_DEPENDS+= libcairo.so:gnome/libcairo
LIB_DEPENDS+= libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+= libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+= libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+= libharfbuzz.so:gnome/libharfbuzz
LIB_DEPENDS+= libpango.so:gnome/libpango
LIB_DEPENDS+= libpangocairo.so:gnome/libpango
LIB_DEPENDS+= libpangoft2.so:gnome/libpango


USES+= gmake tar:xz
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include -DHAVE_GTK
LIBS+=		-L${LOCALBASE}/lib
LDFLAGS+=	-L${LOCALBASE}/lib -lc++ -liconv

CONFIGURE_ARGS+=	--disable-appdata-validate
CONFIGURE_ARGS+=	--without-help-dir
CONFIGURE_ARGS+=	--with-xml-catalog=${LOCALBASE}/share/sgml/catalog

CONFIGURE_ARGS+= --with-gtk2
CONFIGURE_ARGS+= --without-gtk3


FILES+= ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libart-2.0|libart|g' 	${FILES}
	${REINPLACE_CMD} -e 's,^DATADIRNAME = @DATADIRNAME@,DATADIRNAME = share,' \
		${WRKSRC}/po/Makefile.in.in

.include <bsd.port.mk>
#EOF
