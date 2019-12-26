#
# $Id$
#
PORTNAME=	libdca
PORTVERSION=	0.0.5
CATEGORIES=	multimedia
MASTER_SITES=	http://download.videolan.org/pub/videolan/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Free DTS Coherent Acoustics decoder

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

PLIST_FILES+=	man/man1/dcadec.1.gz
PLIST_FILES+=	man/man1/extract_dca.1.gz

PLIST_FILES+=	man/man1/dtsdec.1.gz
PLIST_FILES+=	man/man1/extract_dts.1.gz

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  dcadec.1 dtsdec.1 
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  extract_dca.1 extract_dts.1

.include <bsd.port.mk>
#EOF
