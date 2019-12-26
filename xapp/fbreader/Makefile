#
# $Id$
#
PORTNAME=	fbreader
PORTVERSION=	0.99.4
DISTVERSIONPREFIX=	sources-
CATEGORIES=	deskutils
MASTER_SITES+=	http://www.fbreader.org/files/desktop/
MASTER_SITES+=	http://old.fbreader.org/
EXTRACT_SUFX=	.tgz

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Powerful e-book reader

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libfribidi.so:text/libfribidi
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4
LIB_DEPENDS+=	libQtNetwork.so:xapp/libqt4
LIB_DEPENDS+=	liblinebreak.so:text/liblinebreak

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


WITH_GTK2=	yes
UI=		qt4

USES+=		gmake
USE_LDCONFIG=	yes

INSTALL_TARGET=	do_install
PLIST_SUB=	UI=${UI}
WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}

CXX=	clang++
MAKE_ARGS+= LD=clang++

CFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/linebreak -I${LOCALBASE}/include/Qt4
LDFLAGS=	-L${LOCALBASE}/lib
MAKE_ENV+=	TARGET_ARCH=desktop
MAKE_ENV+=	UI_TYPE=${UI}
MAKE_ENV+=	TARGET_STATUS=${STATUS}
MAKE_ENV+=	ROOTDIR=${WRKSRC}
MAKE_ENV+=	INSTALLDIR=${PREFIX}
MAKE_ENV+=	LIBDIR=${PREFIX}/lib
MAKE_ENV+=	LD="${CXX}"
MAKE_ENV+=	LDFLAGS="${LOCALBASE}/lib"
MAKE_ENV+=	TARGET=FBReader

MAKE_ARGS+=	MAKE=${GMAKE} LIBDIR=${PREFIX}/lib

__post-patch:
	${REINPLACE_CMD} -e '/^CFLAGS/s,-pipe.*$$,${CFLAGS} -DDO_ICONV_CAST -DLIBICONV_PLUG,' \
		-e '/^CC/d;/^LD/d;/QTINCLUDE/s,-I.*$$,-I${QT_INCDIR},;s,libpng ,libpng ,' \
		${WRKSRC}/makefiles/arch/desktop.mk
	${REINPLACE_CMD} -e 's,-O3,,;s,-ldl,${ICONV_LIB},' \
		${WRKSRC}/makefiles/config.mk ${WRKSRC}/zlibrary/core/Makefile
	${REINPLACE_CMD} -e 's,/usr,${PREFIX},' ${WRKSRC}/fbreader/desktop/Makefile
	${FIND} ${WRKSRC} -name Makefile | ${XARGS} ${REINPLACE_CMD} \
		-e 's,make ,gmake ,'

.include <bsd.port.mk>
#EOF

