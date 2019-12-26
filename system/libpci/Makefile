#
# $Id$
#
PORTNAME=	libpci
PORTVERSION=	3.5.2
CATEGORIES=	devel
MASTER_SITES+=	KERNEL_ORG/software/utils/pciutils
MASTER_SITES+=	ftp://atrey.karlin.mff.cuni.cz/pub/linux/pci/
MASTER_SITES+=	LOCAL/sunpoet
DISTNAME=	pciutils-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PCI configuration space I/O made easy

RUN_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:system/pciids

ALL_TARGET=	lib/libpci.a
CPPFLAGS+=	-fPIC
MAKE_ENV=	LANG=C
USE_LDCONFIG=	yes
USES=		gmake tar:xz

LIBPCI_FILES+=	include/pci/config.h
LIBPCI_FILES+=	include/pci/header.h
LIBPCI_FILES+=	include/pci/pci.h
LIBPCI_FILES+=	include/pci/types.h
LIBPCI_FILES+=	lib/libpci.a
LIBPCI_FILES+=	lib/libpci.so.3
LIBPCI_FILES+=	lib/pkgconfig/libpci.pc

post-patch:
	${LN} -s . ${WRKSRC}/lib/pci
	${REINPLACE_CMD} -e '/^CC=/d; /^CFLAGS=/ s|=|+=|; /^IDSDIR=/ s|$$|/pciids|; /^OPT=/d; /^PREFIX=/d' ${WRKSRC}/Makefile
	${REINPLACE_CMD} 's|^#include "|&pci/|' ${WRKSRC}/lib/pci.h

post-build:
	cd ${WRKSRC}/lib/ && ${CC} ${CFLAGS} ${STRIP} -Wl,-soname=libpci.so.3 -shared *.o -lz -o libpci.so.3

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/pci/
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig/
.for F in ${LIBPCI_FILES}
	${INSTALL_DATA} ${WRKSRC}/lib/${F:T} ${STAGEDIR}${PREFIX}/${F}
.endfor
	${LN} -fs libpci.so.3 ${STAGEDIR}${PREFIX}/lib/libpci.so

.include <bsd.port.mk>
#EOF
