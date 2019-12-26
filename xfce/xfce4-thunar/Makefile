#
# $Id$
#
PORTNAME=	Thunar
PORTVERSION=	1.6.6
#PORTEPOCH=	12
CATEGORIES=	x11-fm xfce
PKGNAMEPREFIX=	xfce4-
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/xfce/${PORTNAME:tl}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	onborodin@gmail.com
COMMENT=	XFce 4 file manager

LIB_DEPENDS+=	libintl.so:devel/gettext
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libexif.so:graph/libexif
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libexo.so:xfce/libexo
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification
LIB_DEPENDS+=	libxfconf.so:xfce/libxfce4conf
LIB_DEPENDS+=	libxfce4ui.so:xfce/libxfce4ui
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util
LIB_DEPENDS+=	libxfce4panel.so:xfce/xfce4-panel



GNU_CONFIGURE=	yes
#INSTALLS_ICONS= yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include 
LDFLAGS+= -L${LOCALBASE}/lib
CFLAGS+=	${CPPFLAGS}
CONFIGURE_ENV+=	CPPFLAGS="${CPPFLAGS}"

CONFIGURE_ARGS+= --enable-dbus
CONFIGURE_ARGS+= --enable-exif
CONFIGURE_ARGS+= --enable-gio-unix
CONFIGURE_ARGS+= --enable-startup-notification
CONFIGURE_ARGS+= --enable-pcre

CONFIGURE_ARGS+= --enable-notifications

CONFIGURE_ARGS+= --enable-apr-plugin
CONFIGURE_ARGS+= --enable-sbr-plugin
CONFIGURE_ARGS+= --enable-tpa-plugin
CONFIGURE_ARGS+= --enable-uca-plugin
CONFIGURE_ARGS+= --enable-wallpaper-plugin

CONFIGURE_ARGS+= --enable-gudev


#CONFIGURE_ARGS+= --disable-apr-plugin
#CONFIGURE_ARGS+= --disable-dbus
#CONFIGURE_ARGS+= --disable-gio-unix
#CONFIGURE_ARGS+= --disable-pcre
#CONFIGURE_ARGS+= --disable-sbr-plugin
#CONFIGURE_ARGS+= --disable-tpa-plugin
#CONFIGURE_ARGS+= --disable-uca-plugin
#CONFIGURE_ARGS+= --disable-wallpaper-plugin
#CONFIGURE_ARGS+= --enable-exif
#CONFIGURE_ARGS+= --enable-notifications
#CONFIGURE_ARGS+= --enable-pcre
#CONFIGURE_ARGS+= --enable-startup-notification


PLIST_FILES+=	man/man1/Thunar.1.gz


FILES= ${WRKSRC}/configure  \
${WRKSRC}/*/*.pc.in \
${WRKSRC}/Makefile.in \
${WRKSRC}/*/*.in

post-patch:
	${REINPLACE_CMD} -e 's|docdir = .*|docdir = ${DOCSDIR}|' \
		${WRKSRC}/docs/Makefile.in
	${REINPLACE_CMD} -e 's|echo aout|echo elf|g' ${WRKSRC}/configure

#	${REINPLACE_CMD} -e 's|gamin|no-gamin|g; s|fam|no-fam|g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|hal-storage|no-hal-storage|g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|enable_val|enableval|g' ${WRKSRC}/configure


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
	${REINPLACE_CMD} -e 's|exo-hal-0.3|exo-hal|g' 	${FILES}

	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}

	${REINPLACE_CMD} -e 's|tumbler-1|tumbler|g' 	${FILES}

	${REINPLACE_CMD} -e 's|exo-1|exo|g' 	${FILES}
	${REINPLACE_CMD} -e 's|garcon-1|garcon|g' ${FILES}
	${REINPLACE_CMD} -e 's|exo-1|exo|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4ui-1|libxfce4ui|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4kbd-private-2|libxfce4kbd-private|g' ${FILES}

	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}

	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}

	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	\
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's|thunarx-1|thunarx|g' 	\
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)

#	${REINPLACE_CMD} -e 's|thunar-1|thunar|g' 	\
#	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	cd ${WRKSRC}/thunarx && ${CP} thunarx-2.pc.in  thunarx.pc.in
	${REINPLACE_CMD} -e 's|_2_|_|g' 	\
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|-2.0||g' 	\
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|-2||g' 	\
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's|-$$(THUNAR_VERSION_API)||g' 	\
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in) ${WRKSRC}/t*/*.c
	${REINPLACE_CMD} -e 's|thumbnailer-1|thumbnailer|g' 	\
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in) ${WRKSRC}/t*/*.c
	${REINPLACE_CMD} -e 's|install:.*|install:|' $$(${FIND} ${WRKSRC}/docs/reference -name Makefile.in)
#a:
	${REINPLACE_CMD} -e 's|thunarx-$$(THUNARX_VERSION_API)|thunarx|g' \
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
#$$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|thunarx-$${THUNARX_VERSION_API}|thunarx|g' \
	    ${FILES} $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|thunarx-@THUNARX_VERSION_API@|thunarx|g' 	\
	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|-@THUNARX_VERSION_API@||g' ${WRKSRC}/*/*.pc.in
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2|gio-unix|g' ${FILES}

	${REINPLACE_CMD} -e 's,polkit-gobject-1,polkit-gobject,g'  ${FILES}
	${REINPLACE_CMD} -e 's,polkit-1,polkit,g'  ${FILES} 




.include <bsd.port.mk>
#EOF

