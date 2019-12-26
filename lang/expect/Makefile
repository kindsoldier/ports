#
# $Id$
#
PORTNAME=	expect
PORTVERSION=	5.43.0
CATEGORIES=	lang 
MASTER_SITES=	http://expect.nist.gov/src/

MAINTAINER=	ziggi@inbox.ru
COMMENT=	A sophisticated scripter based on tcl/tk

RUN_DEPENDS+=	tclsh:lang/tcl84
BUILD_DEPENDS+=	tclsh:lang/tcl84
PATCH_DEPENDS+=	${NONEXISTENT}:${PORTSDIR}/lang/tcl84:patch

EXPECT_VER=	5.43
LIBEXPECT_VER=	543

WRKSRC=		${WRKDIR}/expect-${PORTVERSION:R}
INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${WRKSRC}

PLIST_SUB+=	EXPECT_VER="${EXPECT_VER}"
PLIST_SUB+=	LIBEXPECT_VER="${LIBEXPECT_VER}"

#TK_CONFIG_ARGS= --with-tkconfig=${LOCALBASE}/lib/tk8.4 
#--with-tkinclude=${LOCALBASE}/include/tk8.4

CONFIGURE_ARGS+=--enable-shared 
CONFIGURE_ARGS+=--with-tclconfig=${LOCALBASE}/lib
#CONFIGURE_ARGS+=--with-tclinclude=${LOCALBASE}/include/tcl84
CONFIGURE_ARGS+=--with-tclinclude=${WRKDIR}/../../tcl84/work/tcl8.4.19/generic
#CONFIGURE_ARGS+= --without-tk 

CONFIGURE_ARGS+= ${TK_CONFIG_ARGS}
#CONFIGURE_ENV=	LDFLAGS="-lutil"


post-patch:
#	${TOUCH} ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,INSTALL_ROOT,DESTDIR,g' ${WRKSRC}/Makefile.in

post-install:
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sfv libexpect${LIBEXPECT_VER}.so.1 \
	    libexpect${LIBEXPECT_VER}.so

.include <bsd.port.mk>
#EOF
