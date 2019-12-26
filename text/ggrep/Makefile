#
# $Id: Makefile 2697 2009-10-31 20:47:23Z root $
#
PORTNAME=	grep
PORTVERSION=	2.8
PKGNAMEPREFIX=	g
DIST_SUBDIR=	gnu
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU grep Utilities

LIB_DEPENDS+=	libintl.so:devel/gettext


GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


CONFIGURE_ARGS+= --program-prefix="g"
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

INFO=	grep

post-install:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  ggrep.1 gfgrep.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  ggrep.1 gegrep.1

.include <bsd.port.mk>
#EOF
