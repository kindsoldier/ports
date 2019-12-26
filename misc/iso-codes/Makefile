#
# $Id$
#
PORTNAME=	iso-codes
PORTVERSION=	3.56
CATEGORIES=	misc
##MASTER_SITES=	ftp://pkg-isocodes.alioth.debian.org/pub/pkg-isocodes/
MASTER_SITES=	http://pkg-isocodes.alioth.debian.org/downloads/


MAINTAINER=	onborodin@gmail.com
COMMENT=	Lists of the country, language and currency iso names

USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake

post-patch:
	${REINPLACE_CMD} -e '/pkgconfigdir/s,$$(datadir)/pkgconfig,$$(libdir)/pkgconfig,' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
