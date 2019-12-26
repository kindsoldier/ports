# Created by: Vanilla I. Shu <vanilla@MinJe.com.TW>
# $FreeBSD: head/x11-toolkits/gtk30/Makefile 440651 2017-05-11 20:10:58Z kwm $
# Please keep gtk30 in sync with the following x11-themes ports:
# adwaita-icon-theme, gnome-themes-standard and mate-themes

PORTNAME=	gtk
PORTVERSION=	3.24.10
CATEGORIES=	x11-toolkits
MASTER_SITES=	GNOME/sources/gtk+/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
PKGNAMEPREFIX=  lib
PKGNAMESUFFIX=	3
DISTNAME=	gtk+-${PORTVERSION}
DIST_SUBDIR=	gnome3


MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Gimp Toolkit for X11 GUI (current stable version)

BUILD_DEPENDS+=	libat-spi2-atk>=0:gnome/libat-spi2-atk

LIB_DEPENDS+=	libepoxy.so:graph/libepoxy
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libharfbuzz.so:gnome/libharfbuzz

RUN_DEPENDS+=	hicolor-icon-theme>=0:misc/hicolor-icon-theme
RUN_DEPENDS+=	adwaita-icon-theme>=0:misc/adwaita-icon-theme
#		at-spi2-atk>=0:accessibility/at-spi2-atk

LIB_DEPENDS+= libintl.so:devel/gettext
LIB_DEPENDS+= libgio.so:devel/libglib
LIB_DEPENDS+= libglib.so:devel/libglib
LIB_DEPENDS+= libgmodule.so:devel/libglib
LIB_DEPENDS+= libgobject.so:devel/libglib
LIB_DEPENDS+= libgthread.so:devel/libglib

LIB_DEPENDS+= libatk.so:gnome/libatk
LIB_DEPENDS+= libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+= libgraphite2.so:graph/libgraphite2
LIB_DEPENDS+= libharfbuzz.so:gnome/libharfbuzz
LIB_DEPENDS+= libpango.so:gnome/libpango
LIB_DEPENDS+= libpangoft2.so:gnome/libpango

LIB_DEPENDS+= libepoxy.so:graph/libepoxy
LIB_DEPENDS+= libfreetype.so:graph/libfreetype2
LIB_DEPENDS+= libcairo-gobject.so:gnome/libcairo
LIB_DEPENDS+= libcairo.so:gnome/libcairo

LIB_DEPENDS+= libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+= libICE.so:x11/libICE
LIB_DEPENDS+= libpangocairo.so:gnome/libpango
LIB_DEPENDS+= libSM.so:x11/libSM
LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau
LIB_DEPENDS+= libxcb.so:x11/libxcb
LIB_DEPENDS+= libXcomposite.so:x11/libXcomposite
LIB_DEPENDS+= libXcursor.so:x11/libXcursor
LIB_DEPENDS+= libXdamage.so:x11/libXdamage
LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXext.so:x11/libXext
LIB_DEPENDS+= libXfixes.so:x11/libXfixes
LIB_DEPENDS+= libXi.so:x11/libXi
LIB_DEPENDS+= libXinerama.so:x11/libXinerama
LIB_DEPENDS+= libXrandr.so:x11/libXrandr
LIB_DEPENDS+= libXrender.so:x11/libXrender


USE_PERL5=	build
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

USES+=	tar:xz compiler:c11 gmake localbase pathfix perl5 pkgconfig
CONFIGURE_ARGS+= --enable-x11-backend
CONFIGURE_ARGS+= --disable-wayland-backend
CONFIGURE_ARGS+= --disable-introspection
CPPFLAGS+=	-fno-omit-frame-pointer
INSTALL_TARGET=	install-strip


pre-build:
	${RM} -r ${WRKSRC}/docs/gtk.info*

#post-install:
#	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/gtk3/modules
#	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/gtk3/engines
#	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/gtk3/loaders
#	${INSTALL_MAN} ${WRKSRC}/docs/reference/gtk/gtk-query-immodules-3.0.1 \
#		${STAGEDIR}${PREFIX}/man/man1/gtk3-query-immodules.1

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/m4macros/gtk-3.0.m4

FILES2+= ${WRKSRC}/gtk/Makefile.in
FILES2+= ${WRKSRC}/modules/*/Makefile.in 
FILES2+= ${WRKSRC}/modules/*/*/Makefile.in



post-patch:
	${REINPLACE_CMD} -e 's,gdk-3.0,gdk3,g' ${FILES}
	${REINPLACE_CMD} -e 's,gtk+-3.0,gtk3,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gtk+-3.0,gtk3,g'  ${FILES}

	${REINPLACE_CMD} -e 's,gtk+-unix-print-3.0,gtk3-unix-print,g'  ${FILES}

	${REINPLACE_CMD} -e 's,gail-3.0,gail3,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gdk-pixbuf-2.0,gdk-pixbuf,g'  ${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gmodule-no-export-2.0,gmodule-no-export,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gio-unix-2.0,gio-unix,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g'  ${FILES}
	${REINPLACE_CMD} -e 's,atk-bridge-2.0,atk-bridge,g'  ${FILES}

	${REINPLACE_CMD} -e 's,gdk-x11-3.0,gdk3-x11,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gtk+-x11-3.0,gtk3-x11,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gtk+-x11-3.0,gtk3-x11,g'  ${FILES}

	${REINPLACE_CMD} -e 's,gtk+-@GTK_API_VERSION@,gtk3,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gtk-@GTK_API_VERSION@,gtk3,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gdk-@GTK_API_VERSION@,gdk3,g'  ${FILES}

	${REINPLACE_CMD} -e 's,gtk-3.0,gtk3,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gdk-3.0,gdk3,g'  ${FILES}

	${REINPLACE_CMD} -e 's,gtk+-%-3.0.pc,gtk3-%.pc,g' ${FILES}
	${REINPLACE_CMD} -e 's,gdk-%-3.0.pc,gdk3-%.pc,g' ${FILES}


	${REINPLACE_CMD} -e 's,gdk-3,gdk3,g' ${FILES}
	${REINPLACE_CMD} -e 's,gdk_3,gdk3,g' ${FILES}
	${REINPLACE_CMD} -e 's,gtk-3,gtk3,g'  ${FILES}
	${REINPLACE_CMD} -e 's,gtk_3,gtk3,g'  ${FILES}

	${REINPLACE_CMD} -e 's,gailutil-3,gailutil3,g'  ${FILES}

	${REINPLACE_CMD} -e 's,/gtk3/$$(GTK_BINARY_VERSION),/gtk3,g' ${FILES}
	${REINPLACE_CMD} -e 's,gtk-$$(GTK_API_VERSION),gtk3,g' ${FILES}

	cd ${WRKSRC} && ${CP} gail-3.0.pc.in gail3.pc.in
	cd ${WRKSRC} && ${CP} gdk-3.0.pc.in gdk3.pc.in
	cd ${WRKSRC} && ${CP} gtk+-3.0.pc.in gtk3.pc.in
	cd ${WRKSRC} && ${CP} gtk+-unix-print-3.0.pc.in gtk3-unix-print.pc.in
	cd ${WRKSRC}/m4macros && ${CP} gtk-3.0.m4 gtk3.m4

	${REINPLACE_CMD} -e 's,LT_VERSION_INFO=.*,LT_VERSION_INFO="3:3:3",g'  ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,gtk-query-immodules-3.0$$(EXEEXT),gtk3-query-immodules$$(EXEEXT),g' ${FILES2}
	${REINPLACE_CMD} -e 's,gtk-update-icon-cache$$(EXEEXT),gtk3-update-icon-cache$$(EXEEXT),g' ${FILES2}
	${REINPLACE_CMD} -e 's,gtk-encode-symbolic-svg$$(EXEEXT),gtk3-encode-symbolic-svg$$(EXEEXT),g' ${FILES2}
	${REINPLACE_CMD} -e 's,gtk-builder-tool$$(EXEEXT),gtk3-builder-tool$$(EXEEXT),g' ${FILES2}
	${REINPLACE_CMD} -e 's,gtk-query-settings$$(EXEEXT),gtk3-query-settings$$(EXEEXT),g' ${FILES2}
	${REINPLACE_CMD} -e 's,gtk-launch$$(EXEEXT),gtk3-launch$$(EXEEXT),g' ${FILES2}

#	${REINPLACE_CMD} -e 's,gtk_query_immodules_3_0,gtk3_query_immodules,g' ${FILES}
#	${REINPLACE_CMD} -e 's,gtk_update_icon_cache,gtk3_update_icon_cache,g' ${FILES}
#	${REINPLACE_CMD} -e 's,gtk_encode_symbolic_svg,gtk3_encode_symbolic_svg,g' ${FILES}
#	${REINPLACE_CMD} -e 's,gtk_builder_tool,gtk3_builder_tool,g' ${FILES}
#	${REINPLACE_CMD} -e 's,gtk_query_settings,gtk3_query_settings,g' ${FILES}
#	${REINPLACE_CMD} -e 's,gtk_launch,gtk3_launch,g' ${FILES}

.include <bsd.port.mk>
#EOF

