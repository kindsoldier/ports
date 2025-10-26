#
# $Id: Makefile 2154 2009-07-28 20:55:06Z ziggi $
#
PORTNAME=	gawk
PORTVERSION=	5.3.2
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu
CATEGORIES=	textproc

MAINTAINER=	onborodin@gmail.com
COMMENT=	The GNU version of AWK

LIB_DEPENDS+=	libintl.so:devel/gettext/

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --without-gmp --without-mpfr
STRIP=	#

INFO+=	gawk
INFO+=	gawkinet

post-install:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  gawk.1 pgawk.1

.include <bsd.port.mk>
#EOF
