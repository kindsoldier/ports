#
# $id$
#
PORTNAME=	geeqie
PORTVERSION=	1.1
CATEGORIES=	graphics
#MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}


MAINTAINER=	onborodin@gmail.com
COMMENT=	Another gtk2-based graphic file viewer

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libexiv2.so:graph/libexiv2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	liblcms.so:graph/liblcms
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

BUILD_DEPENDS+=	intltool-extract:devel/intltool
#BUILD_DEPENDS+=	scrollkeeper-config:gnome/scrollkeeper
BUILD_DEPENDS+=	gnome-doc-tool:gnome/gnome-doc-utils
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils
#RUN_DEPENDS+=	gconftool:gnome/gconf2


GNU_CONFIGURE=	yes
USES+=		gmake
CFLAGS+=	-I${LOCALBASE}/include ${ECFLAGS}
CPPFLAGS+=	-I${LOCALBASE}/include ${ECFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS} ${ELDFLGS}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-readmedir=${PREFIX}/share/doc/${PORTNAME}
CONFIGURE_ARGS+= --with-htmldir=${PREFIX}/share/doc/${PORTNAME}/html
CONFIGURE_ARGS+= --disable-glibtest 
CONFIGURE_ARGS+= --disable-gtktest 
ECFLAGS!= pkg-config --cflags gtk+ glib
ELDFLGS!= pkg-config --libs gtk+ glib

PLIST_FILES+=	man/man1/${PORTNAME}.1.gz

post-build:
	cd ${WRKSRC}/doc && ${WRKSRC}/doc/docbook2html.sh

FILES=  ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's/gtk+-2.0/gtk/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/gdk+-2.0/gdk/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/gobject-2.0/gobject/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/gio-2.0/gio/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/gthread-2.0/gthread/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/glib-2.0/glib/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/gnome-vfs-2.0/gnome-vfs/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/gconf-2.0/gconf/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/libgnome-2.0/libgnome/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/libIDL-2.0/libIDL/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|module-2.0|module|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}


.include <bsd.port.mk>
#EOF
