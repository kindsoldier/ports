# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/accessibility/at-spi2-core/Makefile 437465 2017-04-01 20:00:33Z bapt $

PORTNAME=	at-spi2-core
PORTVERSION=	2.24.0
CATEGORIES=	accessibility x11-toolkits
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3
PKGNAMEPREFIX=  lib

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Assistive Technology Service Provider Interface

LIB_DEPENDS=	libdbus.so:gnome/dbus

USES=		gmake localbase pkgconfig tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-xevie
INSTALL_TARGET=	install-strip

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in


LDFLAGS+= -L${LOCALBASE}/lib
CFLAGS+= -L${LOCALBASE}/include

post-patch:
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' ${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' ${FILES}
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' ${FILES}
	${REINPLACE_CMD} -e 's,at-spi-2.0,at-spi,g' ${FILES}
	${REINPLACE_CMD} -e 's,atspi-2,atspi,g' ${FILES}
	cd ${WRKSRC} && ${CP} atspi-2.pc.in atspi.pc.in
	cd ${WRKSRC} && ${CP} atspi-2-uninstalled.pc.in atspi-uninstalled.pc.in
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' ${WRKSRC}/bus/accessibility.conf.in

post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/lib/systemd


.include <bsd.port.mk>
#EOF
