# $FreeBSD: head/net/libzmq4/Makefile 494242 2019-03-01 08:08:14Z tobik $

PORTNAME=	libzmq4
DISTVERSIONPREFIX=	v
DISTVERSION=	4.3.1
CATEGORIES=	net
MASTER_SITES=	https://github.com/zeromq/libzmq/releases/download/${DISTVERSIONFULL}/
DISTNAME=	zeromq-${DISTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	ZeroMQ core library (Version 4)

USES=		gmake pkgconfig
USE_LDCONFIG=	yes


GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

#TEST_TARGET=	check

#OPTIONS_DEFINE=			DEBUG LIBUNWIND MANPAGES
#OPTIONS_RADIO=			CURVE
#OPTIONS_RADIO_CURVE=		SODIUM TWEETNACL
#OPTIONS_GROUP=			MULTICAST
#OPTIONS_GROUP_MULTICAST=	NORM PGM
#OPTIONS_DEFAULT=		MANPAGES NORM PGM TWEETNACL
#OPTIONS_SUB=		yes

#LIBUNWIND_DESC=	Use libunwind to print stack trace in case of error
#CURVE_DESC=	CURVE security backend
#MULTICAST_DESC=	Reliable Multicast Transports
#TWEETNACL_DESC=	Use tweetnacl
#SODIUM_DESC=	Use libsodium
#PGM_DESC=	Enable PGM transport via OpenPGM
#NORM_DESC=	Enable NORM via NRL

#DEBUG_CONFIGURE_ENABLE=	debug
#DEBUG_VARS=		WITH_DEBUG=yes

#PGM_CONFIGURE_WITH=	pgm
#PGM_LIB_DEPENDS=	libpgm.so:net/openpgm

#LIBUNWIND_LIB_DEPENDS=	libunwind.so:devel/libunwind
#LIBUNWIND_CONFIGURE_ENABLE=	libunwind

#MANPAGES_BUILD_DEPENDS=		xmlto:textproc/xmlto \
#				asciidoc:textproc/asciidoc
#MANPAGES_CONFIGURE_WITH=	docs

#NORM_CONFIGURE_WITH=	norm=${PREFIX}
#NORM_LIB_DEPENDS=	libnorm.so:net/norm

#SODIUM_CONFIGURE_WITH=	libsodium
#SODIUM_
#SODIUM_PLIST_FILES=	bin/curve_keygen

#TWEETNACL_PLIST_FILES=	bin/curve_keygen

LIB_DEPENDS+=	libsodium.so:crypto/libsodium
LIB_DEPENDS+=	libpgm.so:net/libopenpgm

CONFIGURE_ARGS+= --with-pkgconfigdir=${PREFIX}/lib/pkgconfig
CONFIGURE_ARGS+= --disable-static
CONFIGURE_ARGS+= --disable-Werror
CONFIGURE_ARGS+= --disable-silent-rules
#CONFIGURE_ARGS+= --disable-curve
CFLAGS+=		-Wno-long-long
CONFIGURE_ARGS+= --with-libsodium
CONFIGURE_ARGS+= --with-pgm
CFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e 's,openpgm-5.2,openpgm,g' ${WRKSRC}/configure


.include <bsd.port.options.mk>


.include <bsd.port.mk>
