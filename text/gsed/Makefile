#
# $Id: Makefile 2697 2009-10-31 20:47:23Z root $
#
PORTNAME=	sed
PORTVERSION=	4.2.2
CATEGORIES=	textproc
MASTER_SITES+=   ftp://alpha.gnu.org/gnu/
MASTER_SITES+=	${MASTER_SITE_GNU}
DIST_SUBDIR=	gnu
MASTER_SITE_SUBDIR=	${PORTNAME}
PKGNAMEPREFIX=	g

COMMENT=	The GNU stream editor
MAINTAINER=	onborodin@gmail.com

LIB_DEPENDS+=	libintl.so:devel/gettext

GNU_CONFIGURE=	yes
USES+=		gmake
MAKE_ARGS=	prefix=${PREFIX}
CONFIGURE_ARGS+= --program-prefix="g"
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --program-transform-name='s/^gg/g/'
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

INFO=	sed

post-patch:
	${REINPLACE_CMD} "s|#include <alloca.h>||" ${WRKSRC}/lib/regex_internal.h


.include <bsd.port.mk>
#EOF
