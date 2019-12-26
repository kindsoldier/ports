#
# $Id: Makefile 2729 2009-12-14 09:19:08Z root $
#
PORTNAME=	gettext
PORTVERSION=	0.19.3
DIST_SUBDIR=	gnu
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU gettext package

#LIB_DEPENDS+= expat.6:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv/

USES+=		gmake
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CFLAGS+= -I${LOCALBASE}/include
CONFIGURE_ENV+=	CPPLAGS="${CFLAGS}"
CONFIGURE_ENV+=	LDLAGS="-I${LOCALBASE}/lib"
CONFIGURE_ARGS+= --prefix=${PREFIX} 
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --without-expat-prefix
CONFIGURE_ARGS+= --disable-java
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

INSTALLS_SHLIB=	yes

#CONFIGURE_ARGS+= --enable-threads=posix

# CONFIGURE_ARGS+= --with-included-gettext
CONFIGURE_ARGS+= --with-included-glib
CONFIGURE_ARGS+= --with-included-libcroco
CONFIGURE_ARGS+= --with-included-libunistring
CONFIGURE_ARGS+= --with-included-libxml
CONFIGURE_ARGS+= --disable-csharp --disable-java
CONFIGURE_ARGS+= --without-emacs --without-git

# CONFIGURE_ARGS+= --disable-acl
# CONFIGURE_ARGS+= --disable-curses
# CONFIGURE_ARGS+= --disable-largefile
# CONFIGURE_ARGS+= --disable-libasprintf
CONFIGURE_ARGS+= --disable-openmp
# CONFIGURE_ARGS+= --disable-rpath
CONFIGURE_ARGS+= --disable-threads
# CONFIGURE_ARGS+= --enable-relocatable


INFO+=autosprintf
INFO+=gettext

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  gettext.3 dcgettext.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  gettext.3 dgettext.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ngettext.3 dcngettext.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  ngettext.3 dngettext.3


post-patch:
	${REINPLACE_CMD} -e \
	  's/install-data-local install-docDATA install-info-am/install-info-am/' \
	  ${WRKSRC}/gettext-tools/doc/Makefile.in

	${REINPLACE_CMD} -e \
	  's/install-data-local install-man/install-man/' \
	  ${WRKSRC}/gettext-tools/man/Makefile.in

	${REINPLACE_CMD} -e \
	  's/install-exec-am install-data-am/install-exec-am/' \
	  ${WRKSRC}/gettext-tools/Makefile.in

	${REINPLACE_CMD} -e \
	  's/install-aclocalDATA install-examplesbuildauxDATA/install-aclocalDATA /' \
	  ${WRKSRC}/gettext-tools/m4/Makefile.in

	${REINPLACE_CMD} -e \
	  's/install-data-local install-man/install-man/' \
	  ${WRKSRC}/gettext-runtime/man/Makefile.in

	${REINPLACE_CMD} -e \
	  's/installcheck-binPROGRAMS installcheck-binSCRIPTS/installcheck-binPROGRAMS /' \
	  ${WRKSRC}/gettext-runtime/src/Makefile.in

	${REINPLACE_CMD} -e \
	  's/install-binPROGRAMS install-binSCRIPTS/install-binPROGRAMS /' \
	  ${WRKSRC}/gettext-runtime/src/Makefile.in


	${REINPLACE_CMD} -e \
	  's/install-data-local install-include/install-include/' \
	  ${WRKSRC}/gettext-runtime/libasprintf/Makefile.in

	${REINPLACE_CMD} -e '/^SUBDIRS/s/examples//' \
	  ${WRKSRC}/gettext-tools/Makefile.in

	${REINPLACE_CMD} -e 's/install-data-local: install-tcl/install-data-local:/' \
	  ${WRKSRC}/gettext-tools/src/Makefile.in

	${REINPLACE_CMD} -e '/^SUBDIRS/s/projects//' \
	  ${WRKSRC}/gettext-tools/Makefile.in

	${REINPLACE_CMD} -e '/^SUBDIRS/s/intl-java//' \
	  ${WRKSRC}/gettext-runtime/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS/s/intl-csharp//' \
	  ${WRKSRC}/gettext-runtime/Makefile.in

	${REINPLACE_CMD} -e 's/-release @VERSION@/-version-info 18:0:18/' \
	  ${WRKSRC}/gettext-tools/gnulib-lib/Makefile.in

	${REINPLACE_CMD} -e 's/-release @VERSION@/-version-info 18:0:18/' \
	  ${WRKSRC}/gettext-tools/src/Makefile.in

	${REINPLACE_CMD} -e 's/install-gettextsrcDATA install-pkgdataDATA/install-gettextsrcDATA/' \
	  ${WRKSRC}/gettext-tools/gnulib-lib/Makefile.in

#post-install:
#	cd ${STAGEDIR}/${PREFIX}/share/doc && ${RM} -rf gettext

.include <bsd.port.mk>
#EOF

