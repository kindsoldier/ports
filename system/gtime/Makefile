#
# $Id: Makefile 2715 2009-11-19 10:26:38Z root $
#
PORTNAME=	time
PORTVERSION=	1.9
DIST_SUBDIR=	gnu
MASTER_SITES+=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR= ${PORTNAME}
CATEGORIES=	sysutils 
PKGNAMEPREFIX=	g

COMMENT= 	The GNU file utilities
MAINTAINER=	onborodin@gmail.com

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --program-prefix="g"
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --enable-dependency-tracking
CONFIGURE_ENV+= FORCE_UNSAFE_CONFIGURE=1

INFO=   time

.include <bsd.port.mk>

#EOF
