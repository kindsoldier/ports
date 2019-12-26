#
#
#
PORTNAME=	xterm
PORTVERSION=	3.2.2
CATEGORIES=	x11
MASTER_SITES+=	ftp://invisible-island.net/xterm/ 
MASTER_SITES+=	http://voodoo.bawue.com/download/
EXTRACT_SUFX=	.tgz
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.//g}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Terminal emulator for the X Window System

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libexpat.so:text/libexpat
#LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXaw.so:x11/libXaw
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXp.so:x11/libXp
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXt.so:x11/libXt

#RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
#RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${X11BASE}/include
LIBS+=		-L${X11BASE}/lib

CONFIGURE_ARGS+= --with-utempter 
CONFIGURE_ARGS+= --enable-narrowproto
CONFIGURE_ARGS+= --enable-88-color 
CONFIGURE_ARGS+= --enable-256-color 
#CONFIGURE_ARGS+= --enable-paste64
#CONFIGURE_ARGS+= --enable-readline-mouse
#CONFIGURE_ARGS+= --with-pcre
CONFIGURE_ARGS+= --disable-tek4014
#CONFIGURE_ARGS+= --enable-toolbar
CONFIGURE_ARGS+= --enable-wide-chars
#CONFIGURE_ARGS+= --disable-echo


post-install:
	${CHMOD} 4711 ${STAGEDIR}${PREFIX}/bin/xterm
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${FILESDIR}/xterm-terminal-emulator.desktop ${STAGEDIR}${PREFIX}/share/applications/

.include <bsd.port.mk>
#EOF
