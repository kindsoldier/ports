# Created by: Tomasz "CeDeROM" CEDRO (http://www.tomek.cedro.info)
# $FreeBSD: head/devel/openocd/Makefile 446854 2017-07-28 21:45:20Z jkim $

PORTNAME=	openocd
PORTVERSION=	0.11.0
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Open On-Chip Debugger

LIB_DEPENDS=    libftdi1.so:devel/libftdi1

BROKEN_powerpc64=	fails to configure: error: C compiler cannot create executables

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-werror
CONFIGURE_ENV+= PKG_CONFIG_PATH="${FILESDIR}:${LOCALBASE}/lib/pkgconfig"

USES=		gmake pkgconfig tar:bzip2 #makeinfo libtool
CFLAGS+=	-I${LOCALBASE}/include -L${LOCALBASE}/lib -Wno-error=unused-command-line-argument
INFO=		openocd


CONFIGURE_ARGS+= --disable-cmsis-dap
CONFIGURE_ARGS+= --disable-doxygen-pdf --disable-doxygen-html
CONFIGURE_ARGS+= --disable-malloc-logging
CONFIGURE_ARGS+= --disable-parport

CONFIGURE_ARGS+= --enable-dummy
CONFIGURE_ARGS+= --enable-ftdi
CONFIGURE_ARGS+= --enable-jlink
CONFIGURE_ARGS+= --enable-stlink

post-patch:
	${REINPLACE_CMD} -e 's,libusb-1.0,libusb,g' ${WRKSRC}/src/jtag/drivers/libjaylink/configure
	${REINPLACE_CMD} -e 's,libusb-1.0,libusb,g' ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF
