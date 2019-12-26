#
# $Id: Makefile 2621 2009-09-28 06:39:57Z root $
# $URL: file:///usr2/svn/ports5/x11-toolkits/libgtk2/Makefile $
#
PORTNAME=	gtk+ 
PORTVERSION= 	2.24.31
CATEGORIES=	devel
MASTER_SITES+=	http://mirror.yandex.ru/mirrors/ftp.gnome.org/sources/gtk+/${PORTVERSION:R}/
MASTER_SITES+=	http://ftp.gnome.org/pub/GNOME/sources/gtk+/${PORTVERSION:R}/
MASTER_SITES+=	http://ftp.gtk.org/pub/gtk/${PORTVERSION:R}/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Gimp Toolkit for X11 GUI (current stable version)

LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib

LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libcups.so:print/cups-base
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXcomposite.so:x11/libXcomposite
LIB_DEPENDS+=	libXcursor.so:x11/libXcursor
LIB_DEPENDS+=	libXdamage.so:x11/libXdamage
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes
LIB_DEPENDS+=	libXi.so:x11/libXi
LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender

LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
#LIB_DEPENDS+=	libxcb.so:x11/libxcb

LIB_DEPENDS+=	libatk.so:gnome/libatk
LIB_DEPENDS+=	libcairo.so:gnome/libcairo
LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgdk-pixbuf

LIB_DEPENDS+=	libpango.so:gnome/libpango
LIB_DEPENDS+=	libpangocairo.so:gnome/libpango
LIB_DEPENDS+=	libpangoft2.so:gnome/libpango

#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontsproto.pc:xproto/fontsproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/randrproto.pc:xproto/randrproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/kbproto.pc:xproto/kbproto

USES+=		tar:xz
USES+=		gmake
INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --enable-cups
CONFIGURE_ARGS+= --disable-papi
CONFIGURE_ARGS+= --enable-shm
CONFIGURE_ARGS+= --enable-xinerama
CONFIGURE_ARGS+= --enable-xkb
CONFIGURE_ARGS+= --with-gdktarget=x11
#CONFIGURE_ARGS+= --with-libjasper
#CONFIGURE_ARGS+= --with-libjpeg
#CONFIGURE_ARGS+= --with-libpng
#CONFIGURE_ARGS+= --with-libtiff
CONFIGURE_ARGS+= --with-xinput=yes
CONFIGURE_ARGS+= --enable-man


CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc
CPPFLAGS+=	-I${LOCABASE}/include/freetype2 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
ALL_TARGET=	all
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc/gtk2/
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
INSTALLS_SHLIB=	yes

CONFIGURE_ARGS+= --enable-dependency-tracking
CONFIGURE_ARGS+= --disable-silent-rules 


PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES+= pkg-install pkg-deinstall

pre-build:
	${RM} -rf ${WRKSRC}/docs/gtk.info*

FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/Makefile.in 
FILES+= ${WRKSRC}/*/Makefile.in 
FILES+= ${WRKSRC}/*/*/Makefile.in  
FILES+= ${WRKSRC}/*/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in 
FILES+= ${WRKSRC}/m4macros/*.m4
FILES+= ${WRKSRC}/po*/*.in.in

post-patch:
#a:
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 		${FILES}
	${REINPLACE_CMD} -e 's,module-2.0,module,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-export-2.0,gmodule-export,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-no-export-2.0,gmodule-no-export,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gio-unix-2.0,gio-unix,g' 		${FILES}
	${REINPLACE_CMD} -e 's,libgdk-x11-2.0,libgdk-x11,g' 	${FILES}
	${REINPLACE_CMD} -e 's,libgdk-win32-2.0,libgdk-win32,g' ${FILES}
	${REINPLACE_CMD} -e 's,libgdk-quartz-2.0,libgdk-quartz,g' ${FILES}
	${REINPLACE_CMD} -e 's,libgdk-directfb-2.0,libgdk-directfb-2.0,g' ${FILES}
	${REINPLACE_CMD} -e 's,gdk-pixbuf-2.0,gdk-pixbuf,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gdk-2.0,gdk,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gtk-2.0,gtk,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gtk-unix-print-2.0,gtk-unix-print,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gtk+-unix-print-2.0,gtk+-unix-print,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gail-1.0,gail,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk,g' ${FILES}
	${REINPLACE_CMD} -e 's,gdk-2.0,gdk,g' ${FILES}
	${REINPLACE_CMD} -e 's,gtk-2.0,gtk,g' ${FILES}

	${REINPLACE_CMD} -e 's,-2.0.pc,.pc,g' ${FILES}
	${REINPLACE_CMD} -e 's,-2.0-uninstalled.pc,-uninstalled.pc,g' ${FILES}
	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+-2.0,g' ${FILES}
	cd ${WRKSRC} && ${CP} gdk-2.0-uninstalled.pc.in  gdk-uninstalled.pc.in
	cd ${WRKSRC} && ${CP} gdk-2.0.pc.in  gdk.pc.in
	cd ${WRKSRC} && ${CP} gtk+-2.0-uninstalled.pc.in gtk+-uninstalled.pc.in
	cd ${WRKSRC} && ${CP} gtk+-2.0.pc.in gtk+.pc.in
	cd ${WRKSRC} && ${CP} gtk+-unix-print-2.0.pc.in gtk+-unix-print.pc.in
	cd ${WRKSRC}/m4macros && ${CP} gtk-2.0.m4 gtk.m4
#b:
	${REINPLACE_CMD} -e 's,-2\.0,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,_2_0,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,-1\.0,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,_1_0,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,-$$(GTK_API_VERSION),,g' 		${FILES}
	${REINPLACE_CMD} -e 's,_$$(GTK_API_VERSION),,g' 		${FILES}
	${REINPLACE_CMD} -e 's,-$$GTK_API_VERSION,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,_$$GTK_API_VERSION,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,-@GTK_API_VERSION@,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,_@GTK_API_VERSION@,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,/$$(GTK_BINARY_VERSION)/,/,g' 	${FILES}
	${REINPLACE_CMD} -e 's,/$$(GTK_BINARY_VERSION),,g' 	${FILES}
#c:
	cd ${WRKSRC}/modules/engines/ms-windows/Theme/&& ${CP} -R gtk-2.0/ gtk/
	${REINPLACE_CMD} -e 's/^LT_VERSION_INFO=.*/LT_VERSION_INFO="2:0:2"/g' ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF

