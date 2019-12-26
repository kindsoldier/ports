#
# $Id: Makefile 2466 2009-09-16 10:21:30Z root $
#
PORTNAME=	guile
PORTVERSION= 1.8.8
CATEGORIES=	lang
MASTER_SITES+=	${MASTER_SITE_GNU} 
MASTER_SITES+=	ftp://ftp.guile.org/pub/
MASTER_SITE_SUBDIR=	guile
DIST_SUBDIR=	gnu

MAINTAINER= homeunix7@gmail.com
COMMENT=	GNU's Ubiquitous Intelligent Language for Extension

USES+=  gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --prefix=${PREFIX} 
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --with-threads
CFLAGS+=  -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFIGURE_ARGS+= --disable-elisp


MAN1+= guile.1

INFO+= goops
INFO+= guile-tut
INFO+= guile
INFO+= r5rs

PLIST_SUB=	VERSION=${PORTVERSION_MAJOR}


post-extract:
	cd ${WRKSRC}; ${CHMOD} u+w ${REINPLACE_FILES}
#	${FIND} ${WRKSRC}/doc -name "*.info*" -delete


pre-build:
	${TOUCH} ${WRKSRC}/libguile/scmconfig.h


REINPLACE_FILES=	libguile/smob.c libguile/filesys.c libguile/gc.c \
			libguile/mallocs.c libguile/eval.c libguile/gc-malloc.c \
			libguile/ports.c libguile/gc-mark.c libguile/gc_os_dep.c


post-patch:
	cd ${WRKSRC} && ${CP} guile-1.8.pc.in guile.pc.in

	${REINPLACE_CMD} -e 's|-1.8||g' \
	   ${WRKSRC}/configure ${WRKSRC}/Makefile.in \
	   ${WRKSRC}/*.pc.in
	${REINPLACE_CMD} -e 's|-v-@LIBGUILEREADLINE_MAJOR@||g' \
	    ${WRKSRC}/*/Makefile.in

	${REINPLACE_CMD} -e 's|_v_@LIBGUILEREADLINE_MAJOR@||g' ${WRKSRC}/*/Makefile.in

	${REINPLACE_CMD} -e 's|-v-@LIBGUILE_SRFI_SRFI_1_MAJOR@||g' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's|-v-@LIBGUILE_SRFI_SRFI_4_MAJOR@||g' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's|-v-@LIBGUILE_SRFI_SRFI_13_14_MAJOR@||g' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's|-v-@LIBGUILE_SRFI_SRFI_60_MAJOR@||g' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's|_v_@LIBGUILE_SRFI_SRFI_1_MAJOR@||g' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's|_v_@LIBGUILE_SRFI_SRFI_4_MAJOR@||g' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's|_v_@LIBGUILE_SRFI_SRFI_13_14_MAJOR@||g' ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's|_v_@LIBGUILE_SRFI_SRFI_60_MAJOR@||g' ${WRKSRC}/*/Makefile.in

	cd ${WRKSRC} ; \
	  ${REINPLACE_CMD} -e 's|<malloc\.h>|<stdlib.h>|g' ${REINPLACE_FILES}

	${REINPLACE_CMD} -e 's|2.63|%%AUTOCONF_VERSION%%|g' ${WRKSRC}/aclocal.m4

	${TOUCH} ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF
