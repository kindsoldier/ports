#
# $Id$
#
PORTNAME=	gegl
PORTVERSION=	0.2.0
CATEGORIES=	x11
MASTER_SITES+=	http://ftp.gimp.org/pub/%SUBDIR%/
MASTER_SITES+=	http://gimp.mirrors.hoobly.com/%SUBDIR%/
MASTER_SITES+=	http://ftp.gwdg.de/pub/misc/grafik/gimp/%SUBDIR%/
MASTER_SITES+=	http://www.mirrorservice.org/sites/ftp.gimp.org/pub/%SUBDIR%/
MASTER_SITES+=	${MASTER_SITE_RINGSERVER:S,%SUBDIR%,graphics/%SUBDIR%,}
MASTER_SITE_SUBDIR=	gegl/${PORTVERSION:R}
PKGNAMEPREFIX=	lib
#PKGNAMESUFFIX=	2

MAINTAINER=	onborodin@gmail.com
COMMENT=	Dynamic pixel format conversion library

LIB_DEPENDS+=	libcairo.so:gnome/libcairo
LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libpango.so:gnome/libpango
LIB_DEPENDS+=	librsvg.so:graph/librsvg
LIB_DEPENDS+=	libexiv2.so:graph/libexiv2
LIB_DEPENDS+=	libbabl.so:graph/libbabl

USE_LDCONFIG=	yes
USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --enable-static
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I. -I${LOCALBASE}/include
CONFIGURE_ENV=	ac_cv_header_execinfo_h=no


# CONFIGURE_ARGS+= --enable-gtk-doc 
# CONFIGURE_ARGS+= --enable-maintainer-mode 
# CONFIGURE_ARGS+= --enable-workshop 
# CONFIGURE_ARGS+= --without-cairo 
# CONFIGURE_ARGS+= --without-gdk-pixbuf 
# CONFIGURE_ARGS+= --without-gio 
# CONFIGURE_ARGS+= --without-gtk 
# CONFIGURE_ARGS+= --without-libjpeg 
# CONFIGURE_ARGS+= --without-libpng 
# CONFIGURE_ARGS+= --without-librsvg 
# CONFIGURE_ARGS+= --without-pango 
# CONFIGURE_ARGS+= --without-pangocairo 
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-mmx
CONFIGURE_ARGS+= --disable-sse
CONFIGURE_ARGS+= --without-graphviz
CONFIGURE_ARGS+= --without-libavformat
CONFIGURE_ARGS+= --without-libopenraw
CONFIGURE_ARGS+= --without-libspiro
CONFIGURE_ARGS+= --without-libv4l
CONFIGURE_ARGS+= --without-lua
CONFIGURE_ARGS+= --without-openexr
CONFIGURE_ARGS+= --without-sdl


FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|module-2.0|module|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}
	${REINPLACE_CMD} -e 's|librsvg-2.0|librsvg|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${FILES}

	${REINPLACE_CMD} -e 's|-$$(GEGL_API_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-$$GEGL_API_VERSION||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-@GEGL_API_VERSION@||g' 	${FILES}
	${REINPLACE_CMD} -e 's|_@GEGL_API_VERSION@||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-$${GEGL_API_VERSION}||g' 	${FILES}
	${REINPLACE_CMD} -e 's|_$${GEGL_API_VERSION}||g' 	${FILES}

	${REINPLACE_CMD} -e 's|GEGL_LIBRARY_VERSION=.*|GEGL_LIBRARY_VERSION=1:0:1|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|docs$$||g' ${WRKSRC}/Makefile.in

	${REINPLACE_CMD} -e 's|gegl-0.2|gegl|g' ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF
