#
# $Id$
#
PORTNAME=	hunspell
PORTVERSION=	1.3.3
CATEGORIES=	hungarian textproc
MASTER_SITES+=	SF/${PORTNAME}/Hunspell/${PORTVERSION}:code
MASTER_SITES+=	SF/magyarispell/Magyar%20Ispell/${DICTVERSION}:data
DISTFILES+=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}:code
DISTFILES+=	hu_HU-${DICTVERSION}${EXTRACT_SUFX}:data

DICTVERSION=	1.6.1

MAINTAINER=	onborodin@gmail.com
COMMENT=	Improved spell-checker for Hungarian and other languages

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv

USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-ui
CONFIGURE_ARGS+= --with-readline
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --program-transform-name=""

CPPFLAGS+=	-I${PREFIX}/include
LDFLAGS+=	-L${PREFIX}/lib

USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' \
		${WRKSRC}/src/tools/hunspell.cxx
	cd ${WRKSRC} && ${REINPLACE_CMD} -e 's/hunspell-1.2/hunspell/g' \
	    $$(${FIND} . -name Makefile.in) *.pc.in
	cd ${WRKSRC} && ${REINPLACE_CMD} -e 's/hunspell_1_2/hunspell/g' \
	    $$(${FIND} . -name Makefile.in) 
	cd ${WRKSRC} && ${REINPLACE_CMD} -e 's/-@HUNSPELL_VERSION_MAJOR@.@HUNSPELL_VERSION_MINOR@//g' \
	    *.pc.in
	${REINPLACE_CMD} \
	    -e 's,/usr/share/hunspell,${PREFIX}/share/hunspell,' \
	    -e 's,/usr/share/myspell,${PREFIX}/share/myspell,' \
	    -e 's,/usr/share/myspell/dicts,${PREFIX}/share/myspell/dicts,' \
	    ${WRKSRC}/src/tools/hunspell.cxx
	${REINPLACE_CMD} -e '/^SUBDIRS/s| hu| .|' ${WRKSRC}/man/Makefile.in



post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/myspell/
	${INSTALL_DATA} ${WRKDIR}/hu_HU-${DICTVERSION}/hu_HU.dic \
		${WRKDIR}/hu_HU-${DICTVERSION}/hu_HU.aff \
		${STAGEDIR}${PREFIX}/share/myspell/
	${LN} -sf ${LOCALBASE}/share/myspell/hu_HU.dic ${STAGEDIR}${PREFIX}/share/myspell/magyar.dic
	${LN} -sf ${LOCALBASE}/share/myspell/hu_HU.dic ${STAGEDIR}${PREFIX}/share/myspell/hungarian.dic
	${LN} -sf ${LOCALBASE}/share/myspell/hu_HU.dic ${STAGEDIR}${PREFIX}/share/myspell/default.dic
	${LN} -sf ${LOCALBASE}/share/myspell/hu_HU.aff ${STAGEDIR}${PREFIX}/share/myspell/magyar.aff
	${LN} -sf ${LOCALBASE}/share/myspell/hu_HU.aff ${STAGEDIR}${PREFIX}/share/myspell/hungarian.aff
	${LN} -sf ${LOCALBASE}/share/myspell/hu_HU.aff ${STAGEDIR}${PREFIX}/share/myspell/default.aff

.include <bsd.port.mk>
#EOF
