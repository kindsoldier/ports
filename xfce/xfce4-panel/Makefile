#
# $Id$
#
PORTNAME=	xfce4-panel
PORTVERSION=	4.12.2
CATEGORIES=	x11-wm xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4
MASTER_SITE_SUBDIR=	src/xfce/${PORTNAME}/${PORTVERSION:R}


MAINTAINER=	onborodin@gmail.com
COMMENT=	XFce 4 panel module

LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib

LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libXcomposite.so:x11/libXcomposite
LIB_DEPENDS+=	libXcursor.so:x11/libXcursor
LIB_DEPENDS+=	libXdamage.so:x11/libXdamage
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXRes.so:x11/libXres

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libexo.so:xfce/libexo
LIB_DEPENDS+=	libgarcon.so:xfce/libgarcon
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification
LIB_DEPENDS+=	libwnck.so:gnome/libwnck

LIB_DEPENDS+=	libxfconf.so:xfce/libxfce4conf
LIB_DEPENDS+=	libxfce4ui.so:xfce/libxfce4ui
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util


CONFLICTS=	xfce4-systray-*
GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake perl5
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CPPFLAGS+=	 -I${LOCALBASE}/include 
LDFLAGS+=	-L${LOCALBASE}/lib
CPPFLAGS+= 	-UGTK_DISABLE_DEPRECATED
CFLAGS+=	${CPPFLAGS}
CONFIGURE_ARGS=	--enable-gtk-doc-html=no --disable-debug
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --enable-gio-unix


FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/*/*.pc.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in


post-patch:
	${REINPLACE_CMD} -e 's| manual||g' ${WRKSRC}/docs/Makefile.in
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
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
	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|exo-0.3|exo|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|install:.*|install:|' $$(${FIND} ${WRKSRC}/docs -name Makefile.in)
	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	cd ${WRKSRC}/libxfce4panel && ${CP}  libxfce4panel-1.0.pc.in libxfce4panel.pc.in
	${REINPLACE_CMD} -e 's|garcon-1|garcon|g' ${FILES}
	${REINPLACE_CMD} -e 's|exo-1|exo|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4ui-1|libxfce4ui|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4kbd-private-2|libxfce4kbd-private|g' ${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	cd ${WRKSRC}/libxfce4panel && ${CP} libxfce4panel-1.0.pc.in libxfce4panel.pc.in
	${REINPLACE_CMD} -e 's|-@LIBXFCE4PANEL_VERSION_API@||' ${FILES}
	${REINPLACE_CMD} -e 's|-$$(LIBXFCE4PANEL_VERSION_API)||' ${FILES}
#	${REINPLACE_CMD} -e 's|_1_0_la|_la|' ${FILES}
	${REINPLACE_CMD} -e 's|-1.0||' ${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 		${FILES}
	${REINPLACE_CMD} -e 's|garcon-gtk2-1|garcon-gtk2|g' 		${FILES}


.include <bsd.port.mk>
#EOF
