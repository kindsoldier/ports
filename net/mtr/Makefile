#
# $Id$
#
PORTNAME=	mtr
PORTVERSION=	0.92
CATEGORIES=	net
MASTER_SITES+=	ftp://ftp.bitwizard.nl/mtr/
MASTER_SITES+=	http://gd.tuwien.ac.at/infosys/network/tools/mtr/
MASTER_SITES+=	http://mirrors.evolva.ro/util/mtr/
MASTER_SITES+=	http://sunpoet.net/distfiles/

MAINTAINER= homeunix7@gmail.com
COMMENT=	Traceroute and ping in a single graphical network diagnostic tool

USES+=		gmake autoreconf
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --disable-gtktest
CONFIGURE_ARGS+= --without-gtk
LDFLAGS+=	-lncurses


post-patch:
	${REINPLACE_CMD} -e 's|getopt.*$$(OBJEXT)||g; s|getopt.*[ch]||g; /getopt.*Po/d' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|m4_esyscmd(\[build-aux/git-version-gen \.tarball-version\])|${PORTVERSION}|' ${WRKSRC}/configure.ac
	${REINPLACE_CMD} -e 's|"getopt\.h"|<getopt.h>|g' ${WRKSRC}/ui/mtr.c

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

.include <bsd.port.mk>
#EOF
