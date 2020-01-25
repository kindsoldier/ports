#
# $Id: Makefile 2701 2009-10-31 21:29:43Z root $
#
PORTNAME=	make
PORTVERSION=	4.3
PKGNAMEPREFIX=	g
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}

DIST_SUBDIR=	gnu
CATEGORIES=	devel 

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU version of 'make' utility

#LIB_DEPENDS+= libintl.so:devel/gettext
#LIB_DEPENDS+= libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --program-prefix="g"
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
MAKE_ARGS+=	inst_setgid=false

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --disable-nls

INFO=	make

.include <bsd.port.mk>
#EOF
