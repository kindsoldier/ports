# Created by: Kyle Martin <mkm@ieee.org>
# $FreeBSD: head/devel/cmake/Makefile 438884 2017-04-19 15:04:59Z tcberner $
PORTNAME=	cmake
DISTVERSION=	3.8.1
CATEGORIES=	devel
MASTER_SITES=	https://www.cmake.org/files/v${PORTVERSION:R}/

MAINTAINER=	kde@FreeBSD.org
COMMENT?=	Cross-platform Makefile generator


HAS_CONFIGURE=  yes
CONFIGURE_ENV=	MAKE=gmake
CONFIGURE_ARGS=	--prefix=${PREFIX}
CONFIGURE_ARGS+= --datadir="/${DATADIR_REL}"
CONFIGURE_ARGS+= --docdir="/${DOCSDIR_REL}"
#CONFIGURE_ARGS+= --system-libs
CONFIGURE_ARGS+= --parallel=${MAKE_JOBS_NUMBER}
CONFIGURE_ARGS+= --init="${PATCHDIR}/InitialCache.cmake"

CONFIGURE_ARGS+= --no-qt-gui
CONFIGURE_ARGS+= --no-system-librhash
CONFIGURE_ARGS+= --system-bzip2
CONFIGURE_ARGS+= --system-curl
CONFIGURE_ARGS+= --system-expat
CONFIGURE_ARGS+= --system-libarchive
CONFIGURE_ARGS+= --system-liblzma
CONFIGURE_ARGS+= --system-zlib

.include <bsd.port.pre.mk>

#INSTALL_TARGET=	install/strip

post-patch:
	(${FIND} ${WRKSRC}/Modules -name "*.cmake" -print0; \
		${FIND} ${WRKSRC}/Tests -name "CMakeLists.txt" -print0 ) | \
		${XARGS} -0 -n 100 ${REINPLACE_CMD} -e 's,/usr/local,${LOCALBASE},g; \
			s,/usr/X11R6,${LOCALBASE},g'
	${REINPLACE_CMD} -e 's,/usr/local,${LOCALBASE},g' \
		${WRKSRC}/Source/cmLocalGenerator.cxx \
		${WRKSRC}/Source/CPack/cmCPackGenerator.cxx \
		${WRKSRC}/bootstrap
	${REINPLACE_CMD} -e 's,/opt/kde4,${PREFIX},g' \
		${WRKSRC}/Modules/FindKDE4.cmake
	${REINPLACE_CMD} -e 's,/usr/include,${LOCALBASE}/include,' \
		${WRKSRC}/Modules/FindDCMTK.cmake
	${FIND} ${WRKSRC} -name "*.bak" -delete -o -name "*.orig" -delete
	${RM} ${WRKSRC}/Help/manual/cmake-gui.1.rst

post-install:
	${INSTALL_DATA} ${WRKSRC}/Auxiliary/cmake-mode.el ${STAGEDIR}${PREFIX}/share/emacs/site-lisp
	${MKDIR} ${STAGEDIR}${DATADIR}/Modules
	${MKDIR} ${STAGEDIR}${DATADIR}/Templates
	cd ${WRKSRC}/Modules && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/Modules
	cd ${WRKSRC}/Templates && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/Templates

.include <bsd.port.post.mk>
#EOF
