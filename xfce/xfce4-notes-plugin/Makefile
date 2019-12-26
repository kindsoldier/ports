#
# $Id$
#
PORTNAME=	xfce4-notes-plugin
PORTVERSION=	1.7.7
#PORTEPOCH=	12
CATEGORIES=	deskutils xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}

DIST_SUBDIR=	xfce4

MAINTAINER=	onborodin@gmail.com
COMMENT=	Sticky notes panel plugin for XFce4


RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils
LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

LIB_DEPENDS+=	libunique.so:gnome/libunique
LIB_DEPENDS+=	libxfconf.so:xfce/libxfce4conf
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util
LIB_DEPENDS+=	libxfcegui4.so:xfce/libxfcegui4
LIB_DEPENDS+=	libxfce4panel.so:xfce/xfce4-panel

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/xfce4/xfconf
CFLAGS+=	${CPPFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib -lxfconf

MAKE_ARGS+= V=1

#CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" LDFLAGS=""

FILES= ${WRKSRC}/configure ${WRKSRC}/*/Makefile.in ${WRKSRC}/Makefile.in

post-patch:
	${REINPLACE_CMD} -e 's|echo aout|echo elf|g' ${WRKSRC}/configure
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
	${REINPLACE_CMD} -e 's|exo-0.3|exo|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4menu-0.1|libxfce4menu|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}
	${REINPLACE_CMD} -e 's|thunarx-1|thunarx|g' 		${FILES}
	${REINPLACE_CMD} -e 's|thunar-vfs-1|thunar-vfs|g' 	${FILES}

#	${REINPLACE_CMD} -e 's|liboil-0.3|liboil|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gstreamer-plugins-base-0.10|gstreamer-plugins-base|g'  ${FILES}
#	${REINPLACE_CMD} -e 's|gstreamer-0.10|gstreamer|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gstreamer-base-0.10|gstreamer-base|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gstreamer-control-0.10|gstreamer-control|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gstreamer-check-0.10|gstreamer-check|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gstreamer-video-0.10|gstreamer-video|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gstreamer-interfaces-0.10|gstreamer-interfaces|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gstaudio-0.10|gstaudio|g' ${FILES}
#	${REINPLACE_CMD} -e 's|gstinterfaces-0.10|gstinterfaces|g' ${FILES}
#	${REINPLACE_CMD} -e 's|-0.10||g' ${FILES}

#	${REINPLACE_CMD} -e 's|parole-0|parole|g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
#	${REINPLACE_CMD} -e 's|parole-plugins-0|parole-plugins|g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
#	${REINPLACE_CMD} -e 's|-$$(PAROLE_VERSION_API)||g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's|gtk-2.0|gtk|g' 	${WRKSRC}/lib/color.c \
	    ${WRKSRC}/data/gtk-2.0/Makefile.in ${WRKSRC}/data/gtk-2.0/*/Makefile.in 

	${REINPLACE_CMD} -e 's,unique-1.0,unique,g' ${FILES}


.include <bsd.port.mk>
#EOF
