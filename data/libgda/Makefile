#
# $Id$
#
PORTNAME=	libgda
PORTVERSION?=	5.2.5
CATEGORIES=	databases gnome
MASTER_SITES=	GNOME
DISTNAME=	libgda-${PORTVERSION}

MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=     homeunix7@gmail.com
COMMENT=	Provides uniform access to different kinds of data sources

USE_BZIP2=	yes

BUILD_DEPENDS+=   itstool:text/itstool
LIB_DEPENDS+= libsqlite3.so:data/sqlite3
LIB_DEPENDS+= libreadline.so:devel/libreadline


USES+=  gmake tar:xz perl5
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=yes
CONFIGURE_ARGS+= --without-oracle
CONFIGURE_ARGS+= --disable-crypto
CONFIGURE_ARGS+= --enable-introspection=no

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
LDFLAGS+=       -L${LOCALBASE}/lib -lintl

VERSION=	5.0
PLIST_SUB=	VERSION=${VERSION}

CONFIGURE_ARGS+= --without-bdb
CONFIGURE_ARGS+= --without-mysql
CONFIGURE_ARGS+= --without-postgres
CONFIGURE_ARGS+= --without-firebird
CONFIGURE_ARGS+= --without-mdb
CONFIGURE_ARGS+= --without-java

CONFIGURE_ARGS+= --enable-system-sqlite
CONFIGURE_ARGS+= --without-ui


FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/*.in
FILES+= ${WRKSRC}/*/*/*.in
FILES+= ${WRKSRC}/*/*/*/*.in


post-patch:
	${REINPLACE_CMD} -e 's|-ldl||g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES}
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

	${REINPLACE_CMD} -e 's|libbonobo-2.0|libbonobo|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libbonoboui-2.0|libbonoboui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-desktop-2.0|gnome-desktop|g' 	${FILES}


#	${REINPLACE_CMD} -e 's|-4.0.1||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-5.0||g' 	${FILES}


	${REINPLACE_CMD} -e 's|-5.0.la|.la|g' 	${FILES}
	${REINPLACE_CMD} -e 's|_5_0_la|_la|g' 	${FILES}

	${REINPLACE_CMD} -e 's|-@GDA_ABI_MAJOR_VERSION@.@GDA_ABI_MINOR_VERSION@||g' 	${FILES}
	${REINPLACE_CMD} -e 's|_@GDA_ABI_MAJOR_VERSION@.@GDA_ABI_MINOR_VERSION@||g' 	${FILES}

	${REINPLACE_CMD} -e 's|-$${GDA_ABI_MAJOR_VERSION}.$${GDA_ABI_MINOR_VERSION}||g' 	${FILES}
	${REINPLACE_CMD} -e 's|_$${GDA_ABI_MAJOR_VERSION}.$${GDA_ABI_MINOR_VERSION}||g' 	${FILES}

	${REINPLACE_CMD} -e 's|-$$(GDA_ABI_MAJOR_VERSION).$$(GDA_ABI_MINOR_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|_$${GDA_ABI_MAJOR_VERSION).$$(GDA_ABI_MINOR_VERSION)||g' 	${FILES}


	cd ${WRKSRC} && for file in `${FIND} . -name '*-5.0.pc.in'`; do \
	    ${CP} -v $${file} `${ECHO} $${file} | ${SED_CMD} -e 's,-5.0,,'`; \
	done

	cd ${WRKSRC} && for file in `${FIND} . -name '*-5.0.desktop.in'`; do \
	    ${CP} -v $${file} `${ECHO} $${file} | ${SED_CMD} -e 's,-5.0,,'`; \
	done

	${REINPLACE_CMD} -e 's|-$$(GDA_ABI_VERSION)||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-$$LIBGDA_ABI_VERSION||g' 	${FILES}
	${REINPLACE_CMD} -e 's|-$${LIBGDA_ABI_VERSION}||g' 	${FILES}

.include <bsd.port.mk>
#EOF
