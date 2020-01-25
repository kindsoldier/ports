#
# $Id$
#
PORTNAME=	mc
PORTVERSION=	4.8.24
CATEGORIES=	misc shells
MASTER_SITES+=	http://ftp.midnight-commander.org/
MASTER_SITES+=	http://ftp.osuosl.org/pub/midnightcommander/
MASTER_SITES+=	SF/nemysisfreebsdp/misc/:icons
DISTFILES+=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}
DISTFILES+=	${PORTNAME}.png:icons
EXTRACT_ONLY=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}

MAINTAINER=	woodsb02@FreeBSD.org
COMMENT=	Midnight Commander, a free Norton Commander Clone

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS=	libssh2.so:net/libssh2

USES=		gmake shebangfix perl5 pkgconfig tar:xz libtool
SHEBANG_FILES+=	misc/mcedit.menu.in
SHEBANG_FILES+= configure
SHEBANG_FILES+= configure.ac
SHEBANG_FILES+=	${WRKSRC}/src/vfs/extfs/helpers/s3+.in
SHEBANG_FILES+=	${WRKSRC}/src/vfs/extfs/helpers/uc1541


python_OLD_CMD=	@PYTHON@
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ZIP=${ZIP_CMD} UNZIP=${UNZIP_CMD}

CONFIGURE_ARGS+= --with-screen=ncurses
CONFIGURE_ARGS+= --with-diff-viewer
CONFIGURE_ARGS+= --with-internal-edit
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALEBASE}
CONFIGURE_ARGS+= --with-subshell
CONFIGURE_ARGS+= --without-x --disable-x
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/share/mc/etc

CONFIGURE_ENV+= ac_cv_lib_ICE_IceConnectionNumber=no

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>


.if ${OPSYS} == FreeBSD && ${OSVERSION} >= 1200030
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-src_diffviewer_ydiff.c
RUN_DEPENDS+=	gdiff:text/gdiffutils
.endif

post-patch:
	${REINPLACE_CMD} -e 's|missing-parameter-type|unused-variable|; \
		s|but-set-variable|variable|' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|SUBDIRS = intl|SUBDIRS =|' ${WRKSRC}/Makefile.in

	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|^DIST_SUBDIRS =|#DIST_SUBDIRS =|' ${WRKSRC}/doc/man/Makefile.in

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${_DISTDIR}/${PORTNAME}.png ${STAGEDIR}${PREFIX}/share/pixmaps
	${MKDIR} ${STAGEDIR}${DESKTOPDIR}
	${INSTALL_DATA} ${FILESDIR}/${PORTNAME}.desktop ${STAGEDIR}${DESKTOPDIR}
	cd ${STAGEDIR}${PREFIX}/bin && ${CP} mc midc; ${RM} -f mc
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf midc mcedit
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf midc mcview
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf midc mcdiff

.include <bsd.port.post.mk>
#EOF

