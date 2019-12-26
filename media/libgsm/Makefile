#
# $Id$
#
PORTNAME=	gsm
MG=	1.0
PL=	13
PORTVERSION=	${MG}.${PL}
CATEGORIES=	audio
#MASTER_SITES=	http://kbs.cs.tu-berlin.de/~jutta/gsm/
MASTER_SITES+=	ftp://ftp.dvo.ru/pub/Gentoo/distfiles/
MASTER_SITES+=	http://www.imagemagick.org/download/delegates/ffmpeg/
MASTER_SITES+=	http://www.quut.com/gsm/
MASTER_SITES+=	http://downloads.openwrt.org/sources/


PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Audio converter and library for converting u-law to gsm encoding

WRKSRC=		${WRKDIR}/${PORTNAME}-${MG}-pl${PL}

INSTALLS_SHLIB=	yes

PLIST_FILES+=	man/man1/toast.1.gz
PLIST_FILES+=	man/man3/gsm.3.gz
PLIST_FILES+=	man/man3/gsm_explode.3.gz
PLIST_FILES+=	man/man3/gsm_option.3.gz
PLIST_FILES+=	man/man3/gsm_print.3.gz


PLIST_FILES+=	man/man1/untoast.1.gz
PLIST_FILES+=	man/man1/tcat.1.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf toast.1 untoast.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf toast.1 tcat.1

.include <bsd.port.mk>
#EOF
