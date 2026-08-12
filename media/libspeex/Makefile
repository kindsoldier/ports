#
# $Id: Makefile 2383 2009-09-10 22:34:53Z root $
#
PORTNAME=	speex
PORTVERSION_MAJOR= 1.2
PORTVERSION_PATCH= 2
PORTVERSION=    ${PORTVERSION_MAJOR}.${PORTVERSION_PATCH}
CATEGORIES=	audio
MASTER_SITES+=	http://downloads.us.xiph.org/releases/speex/
MASTER_SITES+=	ftp://ftp.osuosl.org/.1/xiph/releases/speex/
#DISTNAME=	${PORTNAME}-${PORTVERSION_MAJOR}beta${PORTVERSION_PATCH}
DISTNAME=	${PORTNAME}-${PORTVERSION_MAJOR}rc${PORTVERSION_PATCH}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	An open-source patent-free voice codec

#LIB_DEPENDS=	libogg.so:media/libogg

GNU_CONFIGURE=	yes
#CONFIGURE_TARGET= --build=${ARCH}-ziggi-freebsd${OSREL}
#CONFIGURE_TARGET= --target=arm-eabi

CONFIGURE_ARGS+= --with-ogg-dir=${LOCALBASE}
# CONFIGURE_ARGS+= --enable-sse 
# CONFIGURE_ARGS+= --enable-fixed-point
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
INSTALLS_SHLIB=	yes
USES+=		gmake

.include <bsd.port.mk>
#EOF
