#
# $Id: Makefile 2316 2009-09-02 08:41:08Z root $
#
PORTNAME=	recode
PORTVERSION=	3.6
CATEGORIES=	textproc converters
MASTER_SITES=	http://pkgs.fedoraproject.org/repo/pkgs/recode/recode-3.6.tar.gz/be3f40ad2e93dae5cd5f628264bf1877/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Converts files between character sets and usages

#LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext

#WRKSRC=	${WRKDIR}/pinard-Recode-2127b34/

GNU_CONFIGURE=	yes
USES+=		gmake libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lintl -liconv
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
INSTALLS_SHLIB= yes
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS=	--without-included-gettext

INFO=	recode

post-extract:
	${CP} ${FILESDIR}/ru.po ${WRKSRC}/i18n
	${RM} -f ${WRKSRC}/doc/${PORTNAME}.info*

post-patch:
	${REINPLACE_CMD} -E \
		'/Project-Id-Version/ { \
			s/3\.[45](r|\.[0-9])?/3.6/; \
			s/: (Free )?recode/: GNU recode/; }' \
		${WRKSRC}/i18n/*.po
	${REINPLACE_CMD} 's,"iconv\.h","${LOCALBASE}/include/iconv.h",' \
		${WRKSRC}/src/libiconv.c
	${CP} ${WRKSRC}/lib/error.c ${WRKSRC}/src


.include <bsd.port.mk>
#EOF
