#
# $Id$
#
PORTNAME=	libffi
PORTVERSION=	3.0.13
CATEGORIES=	devel
MASTER_SITES=	ftp://sourceware.org/pub/libffi/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Foreign Function Interface

GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --program-transform-name=''

INFO= libffi

post-patch:
	${REINPLACE_CMD} -e 's|$$(libdir)/@PACKAGE_NAME@-@PACKAGE_VERSION@/include|$$(prefix)/include|' \
	    ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in ${WRKSRC}/*.pc.in
	${REINPLACE_CMD} -e 's|$${libdir}/@PACKAGE_NAME@-@PACKAGE_VERSION@/include|$$(prefix)/include|' \
	    ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in ${WRKSRC}/*.pc.in

.include <bsd.port.mk>
#EOF
