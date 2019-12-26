#
# $Id$
#
PORTNAME=	desktop-file-utils
PORTVERSION=	0.22
CATEGORIES=	devel
MASTER_SITES=	http://freedesktop.org/software/${PORTNAME}/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A couple of command line utilities for working with desktop entries

USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS=	--without-lispdir
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ENV+=	EMACS="no"

PLIST_FILES+=	man/man1/desktop-file-edit.1.gz
PLIST_FILES+=	man/man1/desktop-file-install.1.gz
PLIST_FILES+=	man/man1/desktop-file-validate.1.gz
PLIST_FILES+=	man/man1/update-desktop-database.1.gz


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
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gimp-2.0|gimp|' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gimpui-2.0|gimpui|' 	${WRKSRC}/configure


post-install:
#	${MKDIR} ${PREFIX}/share/emacs/site-lisp
#	${INSTALL_DATA} ${WRKSRC}/misc/desktop-entry-mode.el \
#	    	${PREFIX}/share/emacs/site-lisp/desktop-entry-mode.el
##	${SETENV} PKG_PREFIX=${PREFIX} ${SH} -x ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.mk>
#EOF
