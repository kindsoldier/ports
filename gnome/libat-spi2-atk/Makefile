# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/accessibility/at-spi2-atk/Makefile 437464 2017-04-01 19:54:12Z bapt $

PORTNAME=	at-spi2-atk
PORTVERSION=	2.24.0
CATEGORIES=	accessibility x11-toolkits
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3
PKGNAMEPREFIX=  lib

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Assisted Technology Provider module for GTK+

LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libatk.so:gnome/libatk
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

USES=		gmake pkgconfig tar:xz
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--enable-p2p
INSTALL_TARGET=	install-strip

USES=		gmake localbase pkgconfig tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-xevie
INSTALL_TARGET=	install-strip

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in


post-patch:
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' ${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' ${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' ${FILES}
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' ${FILES}
	${REINPLACE_CMD} -e 's,at-spi-2.0,at-spi,g' ${FILES}
	${REINPLACE_CMD} -e 's,atspi-2,atspi,g' ${FILES}
	${REINPLACE_CMD} -e 's,gtk-2.0,gtk,g' ${FILES}
	${REINPLACE_CMD} -e 's,atk-bridge-2.0,atk-bridge,g' ${FILES}
	${REINPLACE_CMD} -e 's,atk_bridge_2_0,atk_bridge,g' ${FILES}
	${REINPLACE_CMD} -e 's,gnome-settings-daemon-3.0,gnome3-settings-daemon,g' ${FILES}
	cd ${WRKSRC} && ${CP} atk-bridge-2.0.pc.in atk-bridge.pc.in
	${REINPLACE_CMD} -e '/include/s,/2.0,,g' ${FILES}


#	cd ${WRKSRC} && ${CP} atspi-2-uninstalled.pc.in atspi-uninstalled.pc.in
#	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' ${WRKSRC}/bus/accessibility.conf.in

	cd ${WRKSRC}/atk-adaptor && ${LN} -sf gtk-2.0 gtk


.include <bsd.port.mk>
