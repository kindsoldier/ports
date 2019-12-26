#
# $Id: Makefile 2697 2009-10-31 20:47:23Z root $
#
PORTNAME=	m4
PKGNAMEPREFIX=	g
PORTVERSION=	1.4.18
MASTER_SITES+=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu
CATEGORIES=	devel

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU's m4

#LIB_DEPENDS+=	libiconv:text/libiconv/
LIB_DEPENDS+=	libintl.so:devel/gettext/

GNU_CONFIGURE=	yes
USES+=		gmake
#CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --program-prefix='g'

INFO=		m4
PLIST_FILES+=	man/man1/gm4.1.gz
PLIST_FILES=	bin/gm4

.include <bsd.port.mk>
#EOF
