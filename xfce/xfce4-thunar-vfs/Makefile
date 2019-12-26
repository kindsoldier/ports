#
# $Id$
#
PORTNAME=	thunar-vfs
PORTVERSION=	1.2.0
CATEGORIES=	x11-fm xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/archive/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4
PKGNAMEPREFIX=	xfce4-


MAINTAINER=	onborodin@gmail.com
COMMENT=	XFce 4 file manager

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgamin.so:devel/libgamin
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libORBit.so:gnome/libORBit2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libexo.so:xfce/libexo
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util

RUN_DEPENDS+=	${LOCALBASE}/libexec/gam_server:devel/libgamin-server

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

CONFIGURE_ARGS+= --enable-startup-notification
CONFIGURE_ARGS+= --enable-dbus
#CONFIGURE_ARGS+= --with-volume-manager=none
CONFIGURE_ARGS+= --with-volume-manager=freebsd

FILES+= ${WRKSRC}/configure  
FILES+= ${WRKSRC}/*/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Make*.in

post-patch:
#	${REINPLACE_CMD} -e 's|docdir = .*|docdir = ${DOCSDIR}|' \
#		${WRKSRC}/docs/Makefile.in
#	${REINPLACE_CMD} -e 's|echo aout|echo elf|g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|gamin|no-gamin|g; s|fam|no-fam|g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|hal-storage|no-hal-storage|g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|enable_val|enableval|g' ${WRKSRC}/configure


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

	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}

	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}

	${REINPLACE_CMD} -e 's|thunarx-1|thunarx|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2|gio-unix|g' ${FILES}

#	${REINPLACE_CMD} -e 's|thunar-1|thunar|g' 	\
#	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)


	cd ${WRKSRC}/thunar-vfs && ${CP} thunar-vfs-1.pc.in thunar-vfs.pc.in

	cd ${WRKSRC}/thunar-vfs && ${CP} thunar-vfs-font-thumbnailer-1.desktop.in \
		thunar-vfs-font-thumbnailer.desktop.in

	${REINPLACE_CMD} -e 's|thumbnailer-1|thumbnailer|g' 	${FILES}

	${REINPLACE_CMD} -e 's|_1_|_|g' 		${FILES}  
	${REINPLACE_CMD} -e 's|-1.0||g' 	${FILES}  
	${REINPLACE_CMD} -e 's|-1||g' 		${FILES}

	${REINPLACE_CMD} -e 's|-$$(THUNAR_VFS_VERSION_API)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-@THUNAR_VFS_VERSION_API@||g' 	${FILES}
	${REINPLACE_CMD} -e 's|_$${THUNAR_VFS_VERSION_API}||g' 	${FILES}


#
#	${REINPLACE_CMD} -e 's|install:.*|install:|' $$(${FIND} ${WRKSRC}/docs/reference -name Makefile.in)
#a:

#	${REINPLACE_CMD} -e 's|thunarx-$$(THUNARX_VERSION_API)|thunarx|g' 	\
#	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)

#	${REINPLACE_CMD} -e 's|thunarx-@THUNARX_VERSION_API@|thunarx|g' 	\
#	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)

#	    ${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
#	${REINPLACE_CMD} -e 's|-@THUNARX_VERSION_API@||g' ${WRKSRC}/*/*.pc.in




.include <bsd.port.mk>
#EOF

