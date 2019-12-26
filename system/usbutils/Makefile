#
# $Id$
#
PORTNAME=	usbutils
PORTVERSION=	0.86
CATEGORIES=	sysutils
#MASTER_SITES+=	SF/linux-usb/${PORTNAME}
MASTER_SITES+=	http://pkgs.fedoraproject.org/repo/pkgs/usbutils/usbutils-0.86.tar.gz/34979f675d2bcb3e1b45012fa830a53f/
MASTER_SITES+=	http://ftp.be.debian.org/pub/linux/utils/usb/usbutils/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility for listing USB devices

USES=		gmake #pkgconfig
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--datadir=${DATADIR} --enable-zlib
CONFIGURE_ENV+= LIBUSB_CFLAGS="-I/usr/include"
CONFIGURE_ENV+= LIBUSB_LIBS="-L/usr/lib -lusb"

post-patch:
	${REINPLACE_CMD} -i '' -e 's|/bin/bash|/bin/sh|' \
		${WRKSRC}/usb-devices

post-install:
	cd ${STAGEDIR}${PREFIX}/sbin && ${MV} update-usbids.sh update-usbids

.include <bsd.port.mk>
#EOF

