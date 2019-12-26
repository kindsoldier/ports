#
# $Id: Makefile 1860 2008-10-16 23:02:43Z ziggi $
#
PORTNAME=	bison
PORTVERSION=	2.7.1
DIST_SUBDIR=	gnu
CATEGORIES=	devel
MASTER_SITES+=	ftp://alpha.gnu.org/gnu/${PORTNAME}/
MASTER_SITES+=	${MASTER_SITE_GNU} 
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	onborodin@gmail.com
COMMENT=	A parser generator from FSF, (mostly) compatible with Yacc

#LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext
BUILD_DEPENDS+= gm4:text/gm4


GNU_CONFIGURE=	yes
USES+=		gmake tar:xz charsetfix perl5
USE_PERL5=	build
MAKE_ARGS+=	install_sh=${INSTALL}
#CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --disable-yacc
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


INFO=	bison

.include <bsd.port.mk>
#EOF
