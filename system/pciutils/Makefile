#
# $Id$
#
PORTNAME=	pciutils
PORTVERSION=	3.5.2
CATEGORIES=	sysutils
MASTER_SITES+=	KERNEL_ORG/software/utils/pciutils
MASTER_SITES+=	ftp://atrey.karlin.mff.cuni.cz/pub/linux/pci/
MASTER_SITES+=	LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PCI configuration utilities

LIB_DEPENDS=	libpci.so:system/libpci
RUN_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:system/pciids

ALL_TARGET=	lspci lspci.8 setpci setpci.8
CPPFLAGS+=	-fPIC -I${LOCALBASE}/include
LDFLAGS+=	-lpci -L${LOCALBASE}/lib
MAKE_ENV=	LANG=C
USES=		gmake localbase tar:xz

post-patch:
	${REINPLACE_CMD} -e '/^CC=/d; /^CFLAGS=/ s|=|+=|; /^IDSDIR=/ s|$$|/pciids|; /^OPT=/d; /^PREFIX=/d; s| lib/$$(PCILIB)||' ${WRKSRC}/Makefile

do-install:
	cd ${WRKSRC}/ && ${INSTALL_PROGRAM} lspci setpci ${STAGEDIR}${PREFIX}/bin/
	cd ${WRKSRC}/ && ${INSTALL_MAN} lspci.8 setpci.8 ${STAGEDIR}${PREFIX}/man/man8/

.include <bsd.port.mk>
#EOF
