#
# $Id$
#
PORTNAME=	libamrwb
PORTVERSION=	11.0.0.0
CATEGORIES=	audio
MASTER_SITES+=	http://www.penguin.cz/~utx/ftp/amr/
MASTER_SITES+=	http://www.3gpp.org/ftp/Specs/archive/26_series/26.204/:SRC26204
DISTNAME=	amrwb-${DISTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${SRC26204}:SRC26204
DIST_SUBDIR=	${PORTNAME}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	3GPP Adaptive Multi-Rate - Wideband (AMR-WB) Speech Codec

PATCH_DEPENDS=	unzip:arch/unzip

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	LANG=C
MAKE_ENV=	LANG=C
INSTALLS_SHLIB=	yes

SRC26204=	26204-b00.zip


post-extract:
	${CP} ${DISTDIR}/${PORTNAME}/${SRC26204} ${WRKSRC}/

.include <bsd.port.mk>
#EOF
