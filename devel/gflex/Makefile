#
# $Id$
#
PORTNAME=	flex
PORTVERSION=	2.6.4
CATEGORIES=	textproc
MASTER_SITES=	https://github.com/westes/flex/releases/download/v${PORTVERSION}/
#MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	g

MAINTAINER=	onborodin@gmail.com
COMMENT=	Fast lexical analyzer generator

BUILD_DEPENDS+=	help2man:devel/help2man
BUILD_DEPENDS+=	gm4:text/gm4
BUILD_DEPENDS+=	bison:devel/bison

LIB_DEPENDS+=	libintl.so:devel/gettext


GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --includedir=${PREFIX}/include/flex
CONFIGURE_ARGS+= --program-prefix="${PKGNAMEPREFIX}"
CONFIGURE_ARGS+= --disable-shared
USES+=		gmake autoreconf
CONFIGURE_ENV=	M4=${LOCALBASE}/bin/gm4

post-patch:
	${REINPLACE_CMD} -e 's/install-info-recursive//g;s/info-recursive//g' \
		-e 's/po //;s/tests//' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's/ install-info-am//' ${WRKSRC}/doc/Makefile.in
	${REINPLACE_CMD} -Ee 's/tests//' \
		-e '/mode=compile ..CC/s/\\$$/-fPIC -DPIC &/' \
		${WRKSRC}/Makefile.in


.include <bsd.port.mk>
#EOF
