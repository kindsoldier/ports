#
# $Id$
#
PORTNAME=	gtk-xfce-engine
PORTVERSION=	3.2.0 #2.8.1
CATEGORIES=	x11-themes xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4
PKGNAMEPREFIX=	lib
MASTER_SITE_SUBDIR=	src/xfce/gtk-xfce-engine/${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	An XFCE engine for GTK 2.0

BUILD_DEPENDS=  intltool-merge:devel/intltool

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

CONFIGURE_ARGS+= --disable-gtk3

GNU_CONFIGURE=	yes
USES+=		gmake
USES+=		tar:bzip2


post-patch:
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libart-2.0|libart|g' 	${WRKSRC}/configure

	for file in $$(${FIND} ${WRKSRC} -name 'Makefile.in'); do \
	  ${REINPLACE_CMD} -e 's|$$(libdir)/gtk-2.0/$$(GTK_VERSION)/engines|$$(libdir)/gtk/engines|' $${file}; \
	  ${REINPLACE_CMD} -e '/themedir/s|/gtk-2.0|/gtk|' $${file}; \
	done


.include <bsd.port.mk>
#EOF
