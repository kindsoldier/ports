# Created by: Alexander Brovikov <alexander@brovikov.ru>
# $FreeBSD: head/net/libsrtp/Makefile 430937 2017-01-09 10:05:19Z amdmi3 $

PORTNAME=	libsrtp
DISTVERSIONPREFIX=	v
DISTVERSION=	1.5.4
CATEGORIES=	net

MAINTAINER=	tijl@FreeBSD.org
COMMENT=	Secure RTP (SRTP) Reference Implementation

USE_GITHUB=	yes
GH_ACCOUNT=	cisco

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-openssl
CONFIGURE_ARGS=	--enable-share
CONFIGURE_ARGS+=--disable-debug
USES=		localbase gmake pathfix
CPE_VENDOR=	cisco
USE_LDCONFIG=	yes

ALL_TARGET=	all shared_library
TEST_TARGET=	runtest
TEST_ENV=	LD_LIBRARY_PATH=${WRKSRC}


post-patch:
	${REINPLACE_CMD} '/pkg-config.*openssl/d' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
