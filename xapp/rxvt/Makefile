#
# $Id$
#
PORTNAME=	rxvt-unicode
PORTVERSION=	9.22
CATEGORIES=	x11
MASTER_SITES+=	http://dist.schmorp.de/rxvt-unicode/
MASTER_SITES+=	http://dist.schmorp.de/rxvt-unicode/Attic/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A clone of the terminal emulator rxvt modified to support Unicode


LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig

#RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
#RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-lstdc++ -lutil
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
USES+=		tar:bzip2

CONFIGURE_ARGS+= --with-term=rxvt

#CONFIGURE_ARGS+= --disable-backspace-key
#CONFIGURE_ARGS+= --disable-delete-key
#CONFIGURE_ARGS+= --disable-resources
#CONFIGURE_ARGS+= --enable-8bitctrls
#CONFIGURE_ARGS+= --enable-assert
#CONFIGURE_ARGS+= --enable-combining
#CONFIGURE_ARGS+= --enable-fallback
#CONFIGURE_ARGS+= --enable-font-styles
#CONFIGURE_ARGS+= --enable-frills
#CONFIGURE_ARGS+= --enable-slipwheeling
#CONFIGURE_ARGS+= --enable-unicode3
#CONFIGURE_ARGS+= --enable-warnings
CONFIGURE_ARGS+= --disable-lastlog
CONFIGURE_ARGS+= --disable-next-scroll
CONFIGURE_ARGS+= --disable-perl
CONFIGURE_ARGS+= --disable-pixbuf
CONFIGURE_ARGS+= --disable-rxvt-scroll
CONFIGURE_ARGS+= --disable-startup-notification
CONFIGURE_ARGS+= --disable-swapscreen
CONFIGURE_ARGS+= --disable-xim
CONFIGURE_ARGS+= --disable-xterm-scroll

CONFIGURE_ARGS+= --enable-256-color
CONFIGURE_ARGS+= --enable-everything
CONFIGURE_ARGS+= --enable-fading
CONFIGURE_ARGS+= --enable-iso14755
CONFIGURE_ARGS+= --enable-keepscrolling
CONFIGURE_ARGS+= --enable-mousewheel
CONFIGURE_ARGS+= --enable-pointer-blank
CONFIGURE_ARGS+= --enable-selectionscrolling
CONFIGURE_ARGS+= --enable-smart-resize
CONFIGURE_ARGS+= --enable-text-blink
CONFIGURE_ARGS+= --disable-transparency
CONFIGURE_ARGS+= --enable-utmp
CONFIGURE_ARGS+= --enable-wtmp
CONFIGURE_ARGS+= --enable-xft

#post-patch:
#	${PATCH} ${PATCH_ARGS} -p1 < ${WRKSRC}/doc/urxvt-8.2-256color.patch

#post-patch:
#	${PATCH} ${PATCH_ARGS} < ${PATCHDIR}/extra-patch-imlocale
#	cd ${WRKSRC}/src && ./gentables

pre-configure:
	${RM} -f ${WRKSRC}/src/perl/kuake.orig
#	${PERL} -pi -e 's|(PTYCHAR2\s+"[^"]+)"|\1ghijklmnopqrstuv"|' \
#		${WRKSRC}/src/ptytty.C



post-install:
	${CHMOD} 4711 ${STAGEDIR}${PREFIX}/bin/urxvt ${STAGEDIR}${PREFIX}/bin/urxvtd
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${FILESDIR}/urxvt.desktop ${STAGEDIR}${PREFIX}/share/applications/

.include <bsd.port.mk>
#EOF
