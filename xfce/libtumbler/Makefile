#
# $Id$
#
PORTNAME=	tumbler
PORTVERSION=	0.1.30
CATEGORIES=	x11 xfce
#DISTNAME=	garcon-${PORTVERSION}
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4
#MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/xfce/${PORTNAME}/${PORTVERSION:R}
PKGNAMEPREFIX=	lib


MAINTAINER=	onborodin@gmail.com
COMMENT=	Terminal library, extensions to Xfce by os-cillation

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	liblcms.so:graph/liblcms
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libpoppler-glib.so:graph/libpoppler
LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib


WRKSRC=		${WRKDIR}/${DISTNAME}

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes
USE_PERL5=	build
CONFIGURE_ARGS=	--enable-gtk-doc-html=no --enable-gtk-doc=no --disable-debug
CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" LDFLAGS="-L${LOCALBASE}/lib"

CONFIGURE_ARGS+= --enable-gstreamer-thumbnailer
CONFIGURE_ARGS+= --enable-jpeg-thumbnailer
CONFIGURE_ARGS+= --enable-font-thumbnailer
CONFIGURE_ARGS+= --enable-pixbuf-thumbnailer
CONFIGURE_ARGS+= --enable-poppler-thumbnailer
CONFIGURE_ARGS+= --disable-ffmpeg-thumbnailer


FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in

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


	cd ${WRKSRC}/tumbler && ${CP} tumbler-1.pc.in tumbler.pc.in
	${REINPLACE_CMD} -e 's,tumbler-1,tumbler,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}

	${REINPLACE_CMD} -e 's,tumbler-$$(TUMBLER_VERSION_API),tumbler,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}

	${REINPLACE_CMD} -e 's,tumbler-compose-mail-$$(TUMBLER_VERSION_API),tumbler-compose-mail,g' \
	    $$(${FIND} ${WRKSRC}/ -name 'Makefi*.in')

	${REINPLACE_CMD} -e 's,tumbler-1,tumbler,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}

	${REINPLACE_CMD} -e 's,tumbler-$$(TUMBLER_VERSION_MAJOR).$$(TUMBLER_VERSION_MINOR),tumbler,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's,-1,,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's,-@TUMBLER_VERSION_MAJOR@.@TUMBLER_VERSION_MINOR@,,g' \
	    $$(${FIND} ${WRKSRC} -name '*.in')

	${REINPLACE_CMD} -e 's,-$$(TUMBLER_VERSION_MAJOR).$$(TUMBLER_VERSION_MINOR),,g' \
	    $$(${FIND} ${WRKSRC} -name '*.in')

	${REINPLACE_CMD} -e 's,tumbler-$${tumbler_api_version},tumbler,g' \
	    $$(${FIND} ${WRKSRC} -name '*.pc.in')

	${REINPLACE_CMD} -e 's,_1,,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's,-$$(TUMBLER_VERSION_MAJOR).$$(TUMBLER_VERSION_MINOR),,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
#	${REINPLACE_CMD} -e 's,liblibtumbler,libtumbler,g' \
#	    $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's|tumbler-@TUMBLER_VERSION_API@|tumbler|g' 	${WRKSRC}/*/*.service.in

	${REINPLACE_CMD} -e 's,-$${tumbler_api_version},,g' $$(${FIND} ${WRKSRC} -name '*.pc.in')
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's|gstreamer-0.10|gstreamer|g' 	${FILES}


	${REINPLACE_CMD} -e 's|tumbler-@TUMBLER_VERSION_API@|tumbler|g' 	${WRKSRC}/*/*.service.in


#post-install:
#	${FIND} ${WRKSRC}/docs/reference -type f -regex '.*\.1' \
#	-exec ${INSTALL_MAN} "{}" "${MANPREFIX}/man/man1" \;

.include <bsd.port.mk>
#EOF

