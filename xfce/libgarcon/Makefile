#
# $Id$
#
PORTNAME=	garcon
PORTVERSION=	0.4.0
#PORTEPOCH=	12
CATEGORIES=	x11 xfce
DISTNAME=	garcon-${PORTVERSION}
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4
MASTER_SITE_SUBDIR=	src/xfce/garcon/${PORTVERSION:R}
PKGNAMEPREFIX=	lib


MAINTAINER=	onborodin@gmail.com
COMMENT=	Terminal library, extensions to Xfce by os-cillation

LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification

LIB_DEPENDS+=	libxfce4ui.so:xfce/libxfce4ui
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util


WRKSRC=		${WRKDIR}/${DISTNAME}

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes
USE_PERL5=	build
CONFIGURE_ARGS=	--enable-gtk-doc-html=no --enable-gtk-doc=no --disable-debug
CONFIGURE_ARGS+= --disable-python
CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in ${WRKSRC}/*/Makefile.in

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
	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/docs/Makefile.in
	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|exo-1|exo|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}  \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4ui-1|libxfce4ui|g' ${FILES}
	cd ${WRKSRC}/garcon && ${CP} garcon-1.pc.in garcon.pc.in
	cd ${WRKSRC}/garcon-gtk && ${CP} garcon-gtk2-1.pc.in garcon-gtk2.pc.in
	${REINPLACE_CMD} -e 's,garcon-1,garcon,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,garcon-gtk2-1,garcon-gtk2,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,garcon-$$(GARCON_VERSION_API),garcon,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,garcon-compose-mail-$$(GARCON_VERSION_API),garcon-compose-mail,g' \
	    $$(${FIND} ${WRKSRC}/ -name 'Makefi*.in')
	${REINPLACE_CMD} -e 's,garcon-1,garcon,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,garcon-$$(GARCON_VERSION_MAJOR).$$(GARCON_VERSION_MINOR),garcon,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's,-1,,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's,-@GARCON_VERSION_MAJOR@.@GARCON_VERSION_MINOR@,,g' \
	    $$(${FIND} ${WRKSRC} -name '*.in')
	${REINPLACE_CMD} -e 's,-$$(GARCON_VERSION_MAJOR).$$(GARCON_VERSION_MINOR),,g' \
	    $$(${FIND} ${WRKSRC} -name '*.in')
	${REINPLACE_CMD} -e 's,garcon-$${garcon_api_version},garcon,g' \
	    $$(${FIND} ${WRKSRC} -name '*.pc.in')
	${REINPLACE_CMD} -e 's,_1,,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's,-$$(GARCON_VERSION_MAJOR).$$(GARCON_VERSION_MINOR),,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
#	${REINPLACE_CMD} -e 's,liblibgarcon,libgarcon,g' \
#	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's,-$${garcon_api_version},,g' $$(${FIND} ${WRKSRC} -name '*.pc.in')
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 		${FILES}

.include <bsd.port.mk>
#EOF

