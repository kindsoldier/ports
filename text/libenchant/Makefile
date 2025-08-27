#
# $Id$
#
PORTNAME=	enchant
PORTVERSION=	1.6.0
CATEGORIES=	textproc gnome
MASTER_SITES=	http://www.abisource.com/downloads/${PORTNAME}/${PORTVERSION}/
DIST_SUBDIR=	gnome2
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Dictionary/spellchecking framework

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib

LIB_DEPENDS+=	libaspell.so:text/aspell
LIB_DEPENDS+=	libhunspell.so:text/hunspell

USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --disable-uspell
CONFIGURE_ARGS+= --disable-voikko
MAKE_JOBS_SAFE=	yes

CONFIGURE_ENV+=	CPPFLAGS="-I${LOCALBASE}/include" 
CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib"
CFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES+=	man/man1/enchant.1.gz

CONFIGURE_ARGS+=--enable-aspell --with-aspell-prefix=${LOCALBASE}
CONFIGURE_ARGS+=--enable-myspell --with-myspell-prefix==${LOCALBASE}

CONFIGURE_ARGS+=--enable-hspell
CONFIGURE_ARGS+=--disable-ispell
CONFIGURE_ARGS+=--disable-zemberek

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info


post-patch:
	${REINPLACE_CMD} -e 's|MKDIRPROG-mkdir|MKDIRPROG-mkdir -p|g' \
		${WRKSRC}/install-sh
.for filename in Makefile.in configure *.pc.in
	for file in $$(${FIND} ${WRKSRC} -name '${filename}'); do \
	    ${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-export-2.0|gmodule-export|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	$${file}; \
	    ${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|atk-1.0|atk|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|libcroco-0.6|libcroco|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|libgsf-1|libgsf|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' 		$${file}; \
	    ${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 		$${file}; \
	done
.endfor
#	${REINPLACE_CMD} -e '/SUBDIRS/s|reference||g' 		${WRKSRC}/glib/Makefile.in


.include <bsd.port.mk>
##EOF

