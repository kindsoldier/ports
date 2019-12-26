#
# $id$
#
PORTNAME=	libnotify
PORTVERSION=	0.7.5
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME http://www.galago-project.org/files/releases/source/libnotify/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A library for desktop notifications

LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgdk-pixbuf

USES+=		tar:xz
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS= --without-gtk-doc
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include -L${LOCALBASE}/lib
CFLAGS+=	${CPPFLAGS}
CONFIGURE_ENV+=	CPPFLAGS="${CPPFLAGS}"


FILES= ${WRKSRC}/configure  ${WRKSRC}/*/*.in ${WRKSRC}/Makefile.in

post-patch:
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
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' 	${FILES}

	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}  \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4menu-0.1|libxfce4menu|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}  \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|thunarx-1|thunarx|g' 	${FILES}  \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|thunar-vfs-1|thunar-vfs|g' 	${FILES}  \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|install:.*|install:|' \
	    $$(${FIND} ${WRKSRC}/doc* -name Makefile.in)


.include <bsd.port.mk>
#EOF
