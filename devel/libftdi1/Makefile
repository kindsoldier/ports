# $FreeBSD: head/devel/libftdi1/Makefile 450560 2017-09-25 00:08:16Z jbeich $

PORTNAME=	libftdi1
PORTVERSION=	1.4
CATEGORIES=	devel
MASTER_SITES=	http://www.intra2net.com/en/developer/libftdi/download/

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	Library (using libusb) to talk to FTDI chips

LIB_DEPENDS=	libconfuse.so:devel/libconfuse

USES=		cmake pkgconfig tar:bzip2
USE_LDCONFIG=	yes

.include <bsd.port.options.mk>

CMAKE_ARGS+=	-DDOCUMENTATION:BOOL=false
CMAKE_ARGS+=	-DEXAMPLES:BOOL=false
CMAKE_ARGS+=	-DPYTHON_BINDINGS:BOOL=false
CMAKE_ARGS+=	-DFTDIPP:BOOL=false

.include <bsd.port.mk>
#EOF
