#
# $Id$
#
PORTNAME=	amrnb
PKGNAMEPREFIX=	lib
PORTVERSION=	11.0.0.0
CATEGORIES=	audio
MASTER_SITES+=	http://www.penguin.cz/~utx/ftp/amr/
MASTER_SITES+=	ftp://ftp.tw.freebsd.org/pub/distfiles/
MASTER_SITES+=	http://www.3gpp.org/ftp/Specs/archive/26_series/26.104/:SRC26104
DISTNAME=	amrnb-${DISTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${SRC26104}:SRC26104
DIST_SUBDIR=	${PORTNAME}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}


MAINTAINER=	onborodin@gmail.com
COMMENT=	3GPP floating-point Adaptive Multi-Rate (AMR) Speech Codec

PATCH_DEPENDS+=	unzip:arch/unzip/

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	LANG=C
MAKE_ENV=	LANG=C
INSTALLS_SHLIB=	yes

SRC26104=	26104-b00.zip


post-extract:
	${CP} ${DISTDIR}/${PORTNAME}/${SRC26104} ${WRKSRC}/

.include <bsd.port.mk>
#EOF
