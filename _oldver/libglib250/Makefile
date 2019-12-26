#
# $Id: Makefile 2384 2009-09-11 12:37:47Z root $
#
PORTNAME=	glib
PORTVERSION=	2.50.2
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.gnome.org/pub/gnome/sources/glib/${PORTVERSION:R}/
PKGNAMEPREFIX=	lib
#PKGNAMESUFFIX=	2

COMMENT=	Some useful routines of C programming
MAINTAINER=	onborodin@gmail.com

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
LIB_DEPENDS+=	libfam.so:devel/libgamin
LIB_DEPENDS+=	libffi.so:devel/libffi
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libintl.so:devel/gettext

BUILD_DEPENDS+=	python:lang/python27

USES+=		tar:xz
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --without-xml-catalog

CONFIGURE_ARGS+= --with-pcre=system
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-dependency-tracking

CONFIGURE_ARGS+= --enable-fam
CONFIGURE_ARGS+= --disable-dtrace
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ENV+=	ac_cv_header_sys_inotify_h=

CONFIGURE_ARGS+= --with-libiconv=gnu
CONFIGURE_ARGS+= --enable-fam

CONFIGURE_ENV+=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}" 
CONFIGURE_ENV+= PTHREAD_LIBS="${PTHREAD_LIBS}"
CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ENV+= LDFLAGS="-L${LOCALBASE}/lib"
INSTALLS_SHLIB=	yes

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g ; \
		s|/usr/share/locale/locale|${LOCALBASE}/share/locale/locale|g' \
			${WRKSRC}/glib/gutils.c
	${REINPLACE_CMD} -e 's|/lib/dbus/machine-id|/db/dbus/machine-id|g' \
		${WRKSRC}/gio/gdbusaddress.c ${WRKSRC}/gio/gdbusprivate.c \
		${WRKSRC}/po/*.po
	${REINPLACE_CMD} -e 's|inotify_support=yes|inotify_support=no| ; \
		s|-Werror|| ; \
		s|#define HAVE_SYS_INOTIFY_H 1||' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 		 ${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	 ${FILES}
	${REINPLACE_CMD} -e 's|gmodule-export-2.0|gmodule-export|g' 	 ${FILES}
	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	 ${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	 ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	 ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		 ${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 		 ${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		 ${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${WRKSRC}/glib-gettextize.in
	${REINPLACE_CMD} -e 's/LT_AGE=.*/LT_AGE=2/g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's/LT_CURRENT=.*/LT_CURRENT=2/g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's/$$module-2.0/$$module/' ${WRKSRC}/gm4*/*.m4
	${REINPLACE_CMD} -e 's|_2_0||g' 		 ${FILES}
	${REINPLACE_CMD} -e 's|gdbus-2.0|gdbus2|g' 		 ${FILES}
	cd ${WRKSRC}/gio &&  ${MV} gdbus-2.0 gdbus2
	for file in ${WRKSRC}/*-2.0*.pc.in ${WRKSRC}/*/*-2.0*.m4;do \
	    ${CP} -v $${file} $$(${ECHO_CMD} $${file} | ${SED} -e 's/-2.0//g');\
	done
	${REINPLACE_CMD} -e '/SUBDIRS =/s, docs,,' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/$$(INSTALL) libglib-gdb.py/d' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e '/$$(INSTALL) libgobject-gdb.py/d' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e '/install-data-am:/s,install-dist_gdbSCRIPTS,,' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's/"$$(PACKAGE)" = "glib"/"$$(PACKAGE)" = "no"/' ${WRKSRC}/po/Makefile*
	${REINPLACE_CMD} -e 's,/usr/local/share/:/usr/share/,/usr/local/share/,' ${WRKSRC}/gio/xdgmime/xdgmime.c

post-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/man/man1
.for dir in gio gobject glib
#	cd ${WRKSRC}/docs/reference/${dir} && ${MAKE} install-man
	${INSTALL_DATA} ${WRKSRC}/docs/reference/${dir}/*.1 ${STAGEDIR}${PREFIX}/man/man1
.endfor
.include <bsd.port.mk>
#EOF
