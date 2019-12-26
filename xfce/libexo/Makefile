#
# $Id$
#
PORTNAME=	libexo
PORTVERSION=	0.10.3
#PORTEPOCH=	12
CATEGORIES=	x11 xfce
DISTNAME=	exo-${PORTVERSION}
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4
#MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/xfce/exo/${PORTVERSION:R}


MAINTAINER=	onborodin@gmail.com
COMMENT=	Terminal library, extensions to Xfce by os-cillation

BUILD_DEPENDS=	${SITE_PERL}/URI.pm:perl/p5-URI
RUN_DEPENDS=	${BUILD_DEPENDS}

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
USES+=		gmake perl5
USE_LDCONFIG=	yes
USE_PERL5=	build
CONFIGURE_ARGS=	--enable-gtk-doc-html=no --enable-gtk-doc=no --disable-debug
CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --enable-gio-unix


CPPFLAGS+=	-I${LOCALBASE}/include 
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+=	man/man1/exo-csource.1.gz
PLIST_FILES+=	man/man1/exo-open.1.gz

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
	${REINPLACE_CMD} -e 's|libxfce4ui-1|libxfce4ui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|exo-1|exo|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}  \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	cd ${WRKSRC}/exo && ${CP} exo-1.pc.in exo.pc.in
	${REINPLACE_CMD} -e 's,exo-1,exo,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,exo-$$(LIBEXO_VERSION_API),exo,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,exo-compose-mail-$$(LIBEXO_VERSION_API),exo-compose-mail,g' \
	    $$(${FIND} ${WRKSRC}/ -name 'Makefi*.in')
	${REINPLACE_CMD} -e 's,exo-1,exo,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,exo-$$(LIBEXO_VERSION_MAJOR).$$(LIBEXO_VERSION_MINOR),exo,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's,-1,,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	cd ${WRKSRC}//exo-helper/helpers/ && ${CP} exo-compose-mail-1 exo-compose-mail
	${REINPLACE_CMD} -e 's,-@LIBEXO_VERSION_MAJOR@.@LIBEXO_VERSION_MINOR@,,g' \
	    $$(${FIND} ${WRKSRC} -name '*.in')
	${REINPLACE_CMD} -e 's,-$$(LIBEXO_VERSION_MAJOR).$$(LIBEXO_VERSION_MINOR),,g' \
	    $$(${FIND} ${WRKSRC} -name '*.in')
	${REINPLACE_CMD} -e 's,exo-$${exo_api_version},exo,g' \
	    $$(${FIND} ${WRKSRC} -name '*.pc.in')
	${REINPLACE_CMD} -e 's,_1,,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's,-$$(LIBEXO_VERSION_MAJOR).$$(LIBEXO_VERSION_MINOR),,g' \
	    $$(${FIND} ${WRKSRC} -name Makefile.in)
#	${REINPLACE_CMD} -e 's,liblibexo,libexo,g' \
#	    $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's,-$${exo_api_version},,g' $$(${FIND} ${WRKSRC} -name '*.pc.in')
	${REINPLACE_CMD} -e 's,-1,,g' $$(${FIND} ${WRKSRC} -name '*.desktop*')
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 		${FILES}
	${REINPLACE_CMD} -e 's|internet-mail|mail-send|' \
		${WRKSRC}/exo-open/exo-mail-reader.desktop.in


post-install:
	${MKDIR} ${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/docs/reference/*.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
#EOF

