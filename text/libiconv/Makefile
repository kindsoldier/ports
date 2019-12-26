#
# $Id: Makefile 2729 2009-12-14 09:19:08Z root $
#
PORTNAME=	libiconv
PORTVERSION=	1.14
CATEGORIES=	converters devel 
MASTER_SITES+=	GNU 
DIST_SUBDIR=	gnu

COMMENT=	A character set conversion library
MAINTAINER=	onborodin@gmail.com

USES+=		gmake
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --without-libintl-prefix
CONFIGURE_ARGS+= --without-libintl
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --enable-static

CONFIGURE_ENV+= gl_cv_cc_visibility="no" 
CONFIGURE_ENV+= am_cv_func_iconv="yes"
CONFIGURE_ENV+= am_cv_proto_iconv_arg1="const"

.include <bsd.port.mk>
#EOF
