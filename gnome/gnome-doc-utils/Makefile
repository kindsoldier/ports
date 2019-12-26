##
# $Id$
#
PORTNAME=	gnome-doc-utils
PORTVERSION=	0.20.6
CATEGORIES=	textproc gnome
MASTER_SITES=	GNOME

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNOME doc utils



BUILD_DEPENDS+= ${LOCALBASE}/share/xsl/docbook/lib/lib.xsl:text/docbook-xsl

BUILD_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.4/catalog.xml:text/dtd-docbook-xml44
BUILD_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.3/catalog.xml:text/dtd-docbook-xml43
BUILD_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.2/catalog.xml:text/dtd-docbook-xml42
BUILD_DEPENDS+= ${LOCALBASE}/share/xml/dtd/docbook/4.1.2/catalog.xml:text/dtd-docbook-xml412

BUILD_DEPENDS+= ${PYTHON_SITELIBDIR}/libxml2mod.so:text/libxml2
BUILD_DEPENDS+=	scrollkeeper-config:gnome/scrollkeeper
BUILD_DEPENDS+=	gawk:text/gawk
RUN_DEPENDS+= ${BUILD_DEPENDS}

USES+=		tar:bzip2
USES+=		gmake
USES+=		python:2.7 python:build
MAKE_JOBS_UNSAFE=yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-omf-dir=${PREFIX}/share/omf
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


.include <bsd.port.pre.mk>


PLIST_SUB+= PYTHON_SITELIBDIR=${PYTHON_SITELIBDIR_REL}

PLIST_FILES+=	man/man1/xml2po.1.gz

FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
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

post-install:
	${PYTHON_VERSION} -m compileall ${STAGEDIR}/${PYTHON_SITELIBDIR}
	${PYTHON_VERSION} -O -m compileall ${STAGEDIR}/${PYTHON_SITELIBDIR}



.include <bsd.port.post.mk>
#EOF
