#
# $Id$
#
PORTNAME=	gsoap
PORTVERSION=	2.8.78 #.82
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}2/gsoap-2.8
DISTNAME=	${PORTNAME}_${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Generator Tools for Coding SOAP/XML Web Services in C and C++


MAKE_JOBS_UNSAFE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:R}

GNU_CONFIGURE=	yes
USES+=		gmake zip autoreconf
CONFIGURE_ARGS+= --enable-ssl
CFLAGS+=	-fPIC


post-patch:
	${REINPLACE_CMD} -e 's|sys/timeb.h | |' \
	    -e 's|-DSOAPCPP_IMPORT_PATH=|-DSOAPCPP2_IMPORT_PATH=|' \
	    -e 's|-DWSDL_IMPORT_PATH=|-DWSDL2H_IMPORT_PATH=|' \
	    ${WRKSRC}/configure.ac
	cd ${WRKSRC} && autoreconf

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/gsoap
	${INSTALL_DATA} ${WRKSRC}/gsoap/stdsoap2.c ${WRKSRC}/gsoap/dom.cpp \
	    ${STAGEDIR}${PREFIX}/lib/gsoap
	${LN} -fs stdsoap2.c ${STAGEDIR}${PREFIX}/lib/gsoap/stdsoap2.cpp
	${LN} -fs dom.cpp ${STAGEDIR}${PREFIX}/lib/gsoap/dom.c

.include <bsd.port.mk>
#EOF

