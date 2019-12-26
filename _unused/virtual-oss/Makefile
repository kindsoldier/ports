# Created by: Hans Petter Selasky <hselasky@FreeBSD.org>
# $FreeBSD: head/audio/virtual_oss/Makefile 453472 2017-11-04 16:39:13Z hselasky $

PORTNAME=	virtual-oss
DISTNAME=	virtual_oss-${PORTVERSION}
PORTVERSION=	1.1.5
CATEGORIES=	audio
MASTER_SITES+=	http://www.selasky.org/hans_petter/distfiles/
MASTER_SITES+=	http://home.selasky.org:8192/distfiles/

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	Virtual OSS multi device mixer application

LIB_DEPENDS=	libsamplerate.so:media/libsamplerate

USES=		tar:bzip2 uidfix

MAKE_ARGS+=	HAVE_CUSE="YES"
MAKE_ARGS+=	HAVE_BLUETOOTH="YES"
MAKE_ARGS+=	PTHREAD_LIBS="-lpthread"

.include <bsd.port.mk>
#EOF
