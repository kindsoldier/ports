# $FreeBSD: head/multimedia/libvdpau/Makefile 402390 2015-11-25 08:05:56Z madpilot $

PORTNAME=	libvdpau
PORTVERSION=	1.1.1
CATEGORIES=	multimedia
MASTER_SITES=	http://cgit.freedesktop.org/~aplattner/libvdpau/snapshot/

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	VDPAU wrapper and tracing library

USES=		autoreconf libtool pkgconfig tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-documentation
USE_LDCONFIG=	yes
CFLAGS+=	-DNDEBUG
INSTALL_TARGET=	install-strip

post-patch:	.SILENT
	${REINPLACE_CMD} '/^export /d' ${WRKSRC}/doc/Makefile.am
	cd ${WRKSRC}/src && ${MV} vdpau_wrapper.cfg vdpau_wrapper.cfg.sample
	${REINPLACE_CMD} 's/vdpau_wrapper.cfg/&.sample/' \
		${WRKSRC}/src/Makefile.am

.include <bsd.port.mk>
#EOF
