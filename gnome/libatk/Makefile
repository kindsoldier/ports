#
# $Id: Makefile 2393 2009-09-11 18:02:37Z root $
# $URL: file:///usr2/svn/ports5/devel-libs/libatk/Makefile $
#
PORTNAME=	atk
PORTVERSION=	2.24.0
CATEGORIES=	accessibility devel
MASTER_SITES=	${MASTER_SITE_GNOME}
MASTER_SITE_SUBDIR=	sources/${PORTNAME}/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A GNOME accessibility toolkit (ATK)

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

USES+=		tar:xz gmake
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc
CPPFLAGS+=       -I${LOCALBASE}/include
LDFLAGS+=        -L${LOCALBASE}/lib -lintl

FILES+= ${WRKSRC}/Makefile.in ${WRKSRC}/configure ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in

pre-configure:
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-export-2.0,gmodule-export,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-no-export-2.0,gmodule-no-export,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gio-unix-2.0,gio-unix,g' 		${FILES}
	${REINPLACE_CMD} -e 's,_2_0,,g' 		${FILES}
	${REINPLACE_CMD} -e 's,atk-@ATK_API_VERSION@,atk,g' 		${FILES}
	${REINPLACE_CMD} -e 's,atk-$$(ATK_API_VERSION),atk,g' 		${FILES}
	${REINPLACE_CMD} -e 's,atk-1.0,atk,g' 		${FILES}
	${REINPLACE_CMD} -e 's,gtk-2.0,gtk,g' 		${FILES}

	${REINPLACE_CMD} -e '/^SUBDIRS/s,docs,,' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's/LT_VERSION_INFO=.*/LT_VERSION_INFO=1:1:1/g' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
