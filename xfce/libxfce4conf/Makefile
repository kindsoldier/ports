#
# $Id$
#
PORTNAME=	xfce4conf
PORTVERSION=	4.12.1
CATEGORIES=	x11 xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DISTNAME=	xfconf-${PORTVERSION}
DIST_SUBDIR=	xfce4
PKGNAMEPREFIX=	lib
MASTER_SITE_SUBDIR=	src/xfce/xfconf/${PORTVERSION:R}


MAINTAINER=	onborodin@gmail.com
COMMENT=	XFce 4 configuration mananger

LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes
CPPFLAGS+=	 -I${LOCALBASE}/include
CFLAGS+=	${CPPFLAGS}
LDFLAGS+=  -L${LOCALBASE}/lib
CONFIGURE_ENV+=	CPPFLAGS="${CPPFLAGS}"

CONFIGURE_ARGS=	--enable-gtk-doc-html=no 
CONFIGURE_ARGS+= --disable-debug

CONFIGURE_ARGS+=--disable-perl-bindings
CONFIGURE_ARGS+=--disable-gtk-doc


FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|--module-dir|--module=xfconf &|' \
		${WRKSRC}/docs/reference/Makefile.in
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

	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' $$(${FIND} ${WRKSRC} -name Makefile.in)


	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e \
		's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfconf-0|libxfconf|g' 	\
	    $$(${FIND} ${WRKSRC} -name Makefile.in)  ${FILES}

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/docs/Makefile.in

	cd ${WRKSRC}/xfconf && ${CP} libxfconf-0.pc.in libxfconf.pc.in
	${REINPLACE_CMD} -e 's,xfconf-0,xfconf,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,xfconf-$$(LIBXFCONF_VERSION_API),xfconf,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,xfconf_$$(LIBXFCONF_VERSION_API),xfconf,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,xfconf-$${LIBXFCONF_VERSION_API},xfconf,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,xfconf_$${LIBXFCONF_VERSION_API},xfconf,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,xfconf-$${libxfconf_api_version},xfconf,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES} 


.include <bsd.port.mk>
#EOF
