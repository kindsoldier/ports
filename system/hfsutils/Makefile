#
# $Id$
#
PORTNAME=	hfsutils
PORTVERSION=	3.2.6
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.mars.org/pub/hfs/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utilities for accessing Apple's HFS volumes

USES=		gmake			# passing -jX breaks BSD make(1)
GNU_CONFIGURE=	yes
ALL_TARGET=	all hfsck/hfsck
CONFIGURE_ARGS+= --without-tcl --without-tk
CONFIGURE_ARGS+= --enable-devlibs

post-patch:
	${ECHO_CMD} '#define USE_INTERP_RESULT 1' >> ${WRKSRC}/config.h.in
	${FIND} ${WRKSRC} -type f -name Makefile.in | ${XARGS} \
		${REINPLACE_CMD} -e '/^...DEST =/s,@,$$(DESTDIR)&,'

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hfsck/hfsck ${STAGEDIR}${PREFIX}/bin


.include <bsd.port.mk>
#EOF
