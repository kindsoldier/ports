#
# $Id$
#
PORTNAME=	ORBit2
PORTVERSION=	2.14.18
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	High-performance CORBA ORB with support for the C language

LIB_DEPENDS+=	libIDL.so:gnome/libIDL

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--with-html-dir=${PREFIX}/share/doc --disable-gtk-doc
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc
	${ECHO_CMD} "ORBIIOPIPv4=0" > ${STAGEDIR}${PREFIX}/etc/orbit2rc
	${ECHO_CMD} "ORBIIOPIPv6=0" >> ${STAGEDIR}${PREFIX}/etc/orbit2rc
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/orbit/idl-backends


FILES+= ${WRKSRC}/configure 
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/src/idl-compiler/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in
FILES+= ${WRKSRC}/orbit*-config.in

post-patch:
	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/src/orb/orb-core/orbit-typelib.c

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

	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|exo-0.3|exo|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4menu-0.1|libxfce4menu|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}
	${REINPLACE_CMD} -e 's|thunarx-1|thunarx|g' 		${FILES}
	${REINPLACE_CMD} -e 's|thunar-vfs-1|thunar-vfs|g' 	${FILES}


	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-2|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconfd-2|gconfd|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-sanity-check-2|gconf-sanity-check|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${FILES}

	${REINPLACE_CMD} -e 's|-$$(MAJOR_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|_$$(MAJOR_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-@MAJOR_VERSION@||g' 	${FILES}

	${REINPLACE_CMD} -e 's|/$$(MAJOR_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|/$${MAJOR_VERSION}||g' 	${FILES}
	${REINPLACE_CMD} -e 's|/$$MAJOR_VERSION||g' 	${FILES}
	${REINPLACE_CMD} -e 's|/@MAJOR_VERSION@||g' 	${FILES}

	${REINPLACE_CMD} -e 's|ORBit-2.0|ORBit|g' 	${FILES}


	${REINPLACE_CMD} -e 's|orbit-idl-2|orbit-idl|' 	${FILES}
	${REINPLACE_CMD} -e 's|/orbit-2.0|/orbit|g' 	${FILES}
	${REINPLACE_CMD} -e 's|idl_2|idl|g'  	${FILES}

	cd ${WRKSRC}/src/idl-compiler && ${CP} ORBit-idl-2.0.pc.in ORBit-idl.pc.in
	cd ${WRKSRC} && ${CP} ORBit-2.0-uninstalled.pc.in ORBit-uninstalled.pc.in
	cd ${WRKSRC} && ${CP} ORBit-2.0.pc.in ORBit.pc.in
	cd ${WRKSRC} && ${CP} ORBit-CosNaming-2.0-uninstalled.pc.in ORBit-CosNaming-uninstalled.pc.in
	cd ${WRKSRC} && ${CP} ORBit-CosNaming-2.0.pc.in ORBit-CosNaming.pc.in
	cd ${WRKSRC} && ${CP} ORBit-imodule-2.0-uninstalled.pc.in ORBit-imodule-uninstalled.pc.in 
	cd ${WRKSRC} && ${CP} ORBit-imodule-2.0.pc.in ORBit-imodule.pc.in

#	cd ${WRKSRC} && ${CP} ORBit-imodule-2.0.pc.in ORBit-imodule.pc.in

	${REINPLACE_CMD} -e 's,ORBit-idl-2.0,ORBit-idl,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBit-2.0-uninstalled,ORBit-uninstalled,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBit-2.0,ORBit,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBit-CosNaming-2.0-uninstalled,ORBit-CosNaming-uninstalled,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBit-CosNaming-2.0,ORBit-CosNaming,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBit-imodule-2.0-uninstalled,ORBit-imodule-uninstalled,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBit-imodule-2.0,ORBit-imodule,g' ${FILES}

	${REINPLACE_CMD} -e 's,-2.0,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-2.la,.la,g' ${FILES}

	${REINPLACE_CMD} -e 's,-2.a,.a,g' ${WRKSRC}/src/services/name/Makefile.in

	${REINPLACE_CMD} -e 's,ORBit-2,ORBit,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBit-CosNaming-2,ORBit-CosNaming,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBitCosNaming-2,ORBitCosNaming,g' ${FILES}
	${REINPLACE_CMD} -e 's,ORBit-imodule-2,ORBit-imodule,g' ${FILES}

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc*/*/Makefile.in

	${REINPLACE_CMD} -e 's,orbit2-config,orbit-config,g' ${FILES}
	cd ${WRKSRC} && ${CP} orbit2-config.in orbit-config.in

	${REINPLACE_CMD} -e 's|-DG_DISABLE_DEPRECATED||g' \
		${WRKSRC}/configure ${WRKSRC}/linc2/src/Makefile.in


.include <bsd.port.mk>
#EOF
