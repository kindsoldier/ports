#
# $Id$
#
PORTNAME=	gsl
PORTVERSION=	1.15
CATEGORIES=	math
MASTER_SITES+=	${MASTER_SITE_GNU:S/$/:gsl/}
MASTER_SITES+=		http://www.gnu.org/software/${PORTNAME}/manual/:gslref
MASTER_SITE_SUBDIR=	${PORTNAME}/:gsl
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:gsl
PKGNAMEPREFIX=	lib

MAINTAINER= homeunix7@gmail.com
COMMENT=	The GNU Scientific Library - mathematical libs

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	MAKEINFO='makeinfo --no-split --force'
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
USES+= gmake

post-extract:
	${RM} -f ${WRKSRC}/doc/gsl-ref.info*


regression-test:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${GMAKE} check

.include <bsd.port.mk>
#EOF

