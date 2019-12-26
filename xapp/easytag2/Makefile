#
# $Id$
#
PORTNAME=	easytag
PORTVERSION=	2.4.3
CATEGORIES=	audio
MASTER_SITES=	GNOME

MAINTAINER=	onborodin@gmail.com
COMMENT=	GTK Tag editor for audio files

#LIB_DEPENDS+= glib.2:${PORTSDIR}/devel/libglib
#LIB_DEPENDS+= gtk-x11.2:${PORTSDIR}/gnome/libgtk2
#LIB_DEPENDS+= FLAC.10:${PORTSDIR}/media/libflac
#LIB_DEPENDS+= id3tag.0:${PORTSDIR}/media/libid3tag
#LIB_DEPENDS+= ogg.8:${PORTSDIR}/media/libogg
#LIB_DEPENDS+= speex.6:${PORTSDIR}/media/libspeex
#LIB_DEPENDS+= vorbis.4:${PORTSDIR}/media/libvorbis
#LIB_DEPENDS+= wavpack.2:${PORTSDIR}/media/libwavpack


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
