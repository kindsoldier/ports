#
# $Id$
#
PORTNAME=	cmake
PORTVERSION=	2.8.12.2
CATEGORIES=	devel
MASTER_SITES=	https://www.cmake.org/files/v${PORTVERSION:R:R}/

MAINTAINER= homeunix7@gmail.com
COMMENT=	A cross-platform make

HAS_CONFIGURE=	yes
CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --datadir="/share/${PORTNAME}"
CONFIGURE_ARGS+= --docdir="/share/doc/${PORTNAME}"
CONFIGURE_ENV=	MAKE=gmake

INSTALL_TARGET= install/strip

post-patch:
	(${FIND} ${WRKSRC}/Modules -name "*.cmake" -print0; \
		${FIND} ${WRKSRC}/Tests -name "CMakeLists.txt" -print0 ) | \
		${XARGS} -0 -n 100 ${REINPLACE_CMD} -e 's,/usr/local,${LOCALBASE},g; \
			s,/usr/X11R6,${LOCALBASE},g'
	${REINPLACE_CMD} -e 's,/usr/local,${LOCALBASE},g' \
		${WRKSRC}/Source/cmLocalGenerator.cxx \
		${WRKSRC}/Source/CPack/cmCPackGenerator.cxx \
		${WRKSRC}/bootstrap
	${REINPLACE_CMD} -e 's,/opt/kde4,${LOCALBASE}/kde4,g' \
		${WRKSRC}/Modules/FindKDE4.cmake

_post-install:
	cd ${STAGEDIR}${PREFIX}/share/cmake && ${FIND} . -name '*.orig' | ${XARGS} ${RM} -vf
	cd ${STAGEDIR}${PREFIX}/share/cmake && ${FIND} . -name '*.rej' | ${XARGS} ${RM} -vf
	cd ${STAGEDIR}${PREFIX}/share/cmake && ${FIND} . -name '*~' | ${XARGS} ${RM} -vf
#	cd ${STAGEDIR}${PREFIX}/share/doc && ${RM} -rf cmake

.include <bsd.port.mk>
#EOF
