#
# $Id: Makefile 2699 2009-10-31 21:16:51Z root $
#
PORTNAME=	findutils
PORTVERSION=	4.6.0
DIST_SUBDIR=	gnu
CATEGORIES=	sysutils
MASTER_SITES+=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR= ${PORTNAME}
PKGNAMEPREFIX=	g

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU Find Utilities (find, xargs, and locate)

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --prefix=${PREFIX} 
CONFIGURE_ARGS+= --program-prefix="g" 
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

INFO=	find find-maint

.include <bsd.port.mk>
#EOF
