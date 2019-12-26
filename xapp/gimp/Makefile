#
# $Id: Makefile 2621 2009-09-28 06:39:57Z root $
# $URL: file:///usr2/svn/ports5/applications/gimp/Makefile $
#
PORTNAME=	gimp
PORTVERSION=	2.8.16
CATEGORIES=	graphics gnome
MASTER_SITES+=	http://ftp.gimp.org/pub/%SUBDIR%/
MASTER_SITES+=	http://gimp.mirrors.hoobly.com/%SUBDIR%/
MASTER_SITES+=	http://ftp.gwdg.de/pub/misc/grafik/gimp/%SUBDIR%/
MASTER_SITES+=	http://www.mirrorservice.org/sites/ftp.gimp.org/pub/%SUBDIR%/
MASTER_SITES+=	${MASTER_SITE_RINGSERVER:S,%SUBDIR%,graphics/%SUBDIR%,}
MASTER_SITE_SUBDIR=	gimp/v${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	A GNU Image Manipulation Program

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXmuu.so:x11/libXmu
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libbabl.so:graph/libbabl
LIB_DEPENDS+=	libcairo.so:gnome/libcairo
LIB_DEPENDS+=	libcroco.so:text/libcroco
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libenchant.so:text/libenchant
LIB_DEPENDS+=	libexif.so:graph/libexif
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgdk-pixbuf

LIB_DEPENDS+=	libgegl.so:graph/libgegl

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg

LIB_DEPENDS+=	libjasper.so:graph/libjasper
LIB_DEPENDS+=	libgs.so:print/ghostscript


LIB_DEPENDS+=	liblcms.so:graph/liblcms
LIB_DEPENDS+=	libpango.so:gnome/libpango
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libpoppler-glib.so:graph/libpoppler-glib
LIB_DEPENDS+=	librsvg.so:graph/librsvg
LIB_DEPENDS+=	libsoup.so:gnome/libsoup
LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libwebkitgtk.so:gnome/libwebkit-gtk2

BUILD_DEPENDS+=	intltool-extract:devel/intltool
BUILD_DEPENDS+=	gnome-doc-tool:gnome/gnome-doc-utils
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils
RUN_DEPENDS+=	gconftool:gnome/gconf2


SSP_UNSAFE=	yes

USES+=		tar:bzip2
USES+=		gmake  perl5
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
INSTALL_TARGET=	install-strip
CFLAGS+=	-I${LOCALBASE}/include/glib -I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include/glib -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc/gimp
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --disable-gtk-doc 
CONFIGURE_ARGS+= --disable-python
CONFIGURE_ARGS+= --with-gimpdir=.gimp
#CONFIGURE_ARGS+= --disable-mmx
#CONFIGURE_ARGS+= --disable-sse
#CONFIGURE_ARGS+= --with-gimpdir=DIR
#CONFIGURE_ARGS+= --with-sendmail=DIR
#CONFIGURE_ARGS+= --with-shm=none|sysv|posix|auto
#CONFIGURE_ARGS+= --without-lcms
#CONFIGURE_ARGS+= --without-libexif
#CONFIGURE_ARGS+= --without-libjpeg
CONFIGURE_ARGS+= --without-libmng
#CONFIGURE_ARGS+= --without-libpng
#CONFIGURE_ARGS+= --without-librsvg
#CONFIGURE_ARGS+= --without-libtiff
#CONFIGURE_ARGS+= --without-poppler
#CONFIGURE_ARGS+= --without-print
#CONFIGURE_ARGS+= --without-script-fu
#CONFIGURE_ARGS+= --disable-glibtest
CONFIGURE_ARGS+= --enable-gimp-console
CONFIGURE_ARGS+= --enable-static

CONFIGURE_ARGS+= --with-dbus
CONFIGURE_ARGS+= --with-libcurl
CONFIGURE_ARGS+= --with-webkit

CONFIGURE_ARGS+= --without-aa
CONFIGURE_ARGS+= --without-alsa
CONFIGURE_ARGS+= --without-gvfs
CONFIGURE_ARGS+= --without-linux-input
CONFIGURE_ARGS+= --without-wmf

CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --with-print
CONFIGURE_ARGS+= --enable-default-binary
CONFIGURE_ARGS+= --with-lcms=lcms2
CONFIGURE_ARGS+= --with-desktop-dir=${PREFIX}/share
CONFIGURE_ENV+=	GIMP_THREAD_LIBS="-lpthread"


#PLIST_FILES+=	man/man1/gimp-console.1.gz
#PLIST_FILES+=	man/man1/gimp.1.gz
#PLIST_FILES+=	man/man1/gimptool.1.gz
#PLIST_FILES+=	man/man5/gimprc.5.gz


FILES_1+= ${WRKSRC}/configure
FILES_1+= ${WRKSRC}/tools/gimptool.c
FILES_1+= ${WRKSRC}/*.pc.in

FILES_1+= ${WRKSRC}/Makefile.in 
FILES_1+= ${WRKSRC}/*/Makefile.in 
FILES_1+= ${WRKSRC}/*/*/Makefile.in 
FILES_1+= ${WRKSRC}/*/*/*/Makefile.in 
FILES_1+= ${WRKSRC}/*/gimp.desktop.in.in


post-patch:
	${REINPLACE_CMD} -e 's|gegl-0.2|gegl|g' 	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES_1}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES_1}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES_1}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|module-2.0|module|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES_1}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${FILES_1}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|librsvg-2.0|librsvg|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|-$$(GIMP_API_VERSION)||g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|-@GIMP_API_VERSION@||g' 	${FILES_1}

	${REINPLACE_CMD} -e 's|-@GIMP_APP_VERSION@||g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|-$$(GIMP_APP_VERSION)||g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|-$$(GIMP_TOOL_VERSION)||g' 	${FILES_1}
	${REINPLACE_CMD} -e 's|-2.0.pc|.pc|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|_2_0_la_|_la_|g'		${FILES_1}
	${REINPLACE_CMD} -e 's|-2.0.la|.la|g'		${FILES_1}
	${REINPLACE_CMD} -e 's|_2_8_|_|g'		${FILES_1}
	${REINPLACE_CMD} -e 's|_2_8-|-|g'		${FILES_1}
	${REINPLACE_CMD} -e 's|_2_8$$|$$|g'		${FILES_1}
	${REINPLACE_CMD} -e 's|gimptool-2.0|gimptool|g'		${FILES_1}
	${REINPLACE_CMD} -e 's|-2.8\$$|\$$|g'		${FILES_1}
	${REINPLACE_CMD} -e 's|-$$(GIMP_APP_VERSION)||g' ${FILES_1}
	${REINPLACE_CMD} -e 's|-$$(GIMP_TOOL_VERSION)||g' ${FILES_1}
	${REINPLACE_CMD} -e 's|gimp-2.8|gimp|g' ${FILES_1}
	${REINPLACE_CMD} -e 's|gimprc-2.8|gimprc|g' ${FILES_1}
	${REINPLACE_CMD} -e 's|-2.0.pc|.pcc|g' ${FILES_1}
	${REINPLACE_CMD} -e 's|-@GIMP_PKGCONFIG_VERSION@||g' ${FILES_1}
	${REINPLACE_CMD} -e 's|-@GIMP_APP_VERSION@||g' ${FILES_1}
	${REINPLACE_CMD} -e 's|$$PACKAGE/2.2|$$PACKAGE|g' ${FILES_1}
	${REINPLACE_CMD} -e 's|webkit-1.0|webkit|g'        ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'        ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' 	${FILES_1}

	${REINPLACE_CMD} -e 's|-u |-Wl,-u,|' 	${WRKSRC}/app/Makefile.in
	${REINPLACE_CMD} -e 's,^LT_VERSION_INFO=".*",LT_VERSION_INFO="2:0:2",' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,^GETTEXT_PACKAGE=gimp20,GETTEXT_PACKAGE=gimp,' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,^install-data-am: install-m4dataDATA,install-data-am:,' \
	    ${WRKSRC}/m4macros/Makefile.in


.include <bsd.port.mk>
#EOF
