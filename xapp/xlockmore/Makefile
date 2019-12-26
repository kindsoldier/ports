#
# $Id$
#
PORTNAME=	xlockmore
PORTVERSION=	5.54
CATEGORIES?=	x11

MASTER_SITES=	http://www.sillycycle.com/xlock/
MASTER_SITES+=	LOCAL/jgh/x11/${PORTNAME}/



MAINTAINER=	onborodin@gmail.com
COMMENT=	Like XLock session locker/screen saver, but just more


LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libGLU.so:graph/libGLU
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11-xcb.so:x11/libX11
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libXxf86vm.so:x11/libXxf86vm
LIB_DEPENDS+=	libGL.so:graph/libmesa
LIB_DEPENDS+=	libglapi.so:graph/libmesa


#PREFIX=${X11BASE}

USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAKE_ARGS+=	bindir=${PREFIX}/bin \
		mandir=${PREFIX}/man/man1 \
		datarootdir=${PREFIX}/share \
		xapploaddir=${PREFIX}/lib/X11/app-defaults


CONFIGURE_ARGS+= --disable-vroot
CONFIGURE_ARGS+= --enable-allow-root
CONFIGURE_ARGS+= --enable-syslog
CONFIGURE_ARGS+= --disable-bomb
CONFIGURE_ARGS+= --with-includes=${LOCALBASE}/include
CONFIGURE_ARGS+= --with-libraries=${LOCALBASE}/lib
CONFIGURE_ARGS+= --without-motif
CONFIGURE_ARGS+= --without-editres
CONFIGURE_ARGS+= --without-ttf
CONFIGURE_ARGS+= --with-freetype
CONFIGURE_ARGS+= --with-mesa
CONFIGURE_ARGS+= --without-rplay
CONFIGURE_ARGS+= --without-esound
CONFIGURE_ARGS+= --without-nas
CONFIGURE_ARGS+= --without-gtk2
CONFIGURE_ARGS+= --without-gtk
CONFIGURE_ARGS+= --enable-use-mb
CONFIGURE_ARGS+= --without-dtsaver

#CONFIGURE_ARGS+= --without-mesa
#CONFIGURE_ARGS+= --without-opengl

CONFIGURE_ARGS+= --mandir=${PREFIX}/man


#post-patch:
#	${REINPLACE_CMD} -e '/xglockrc/ s|PROGRAM|DATA|' ${WRKSRC}/xglock/Makefile.in

post-patch:
	${REINPLACE_CMD} -e 's/gtk+-x11-2.0/gtk+-x11/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/gtk+-2.0/gtk+/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/gdk+-2.0/gdk+/g' ${WRKSRC}/configure
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


post-configure:
	${REINPLACE_CMD} -e 's/-lXdpms//g' ${WRKSRC}/modes/Makefile

.include <bsd.port.mk>
#EOF
