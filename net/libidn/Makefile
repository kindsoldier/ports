#
# $Id: Makefile 2316 2009-09-02 08:41:08Z root $
# $URL: file:///usr2/svn/ports5/network-libs/libidn/Makefile $
#
PORTNAME=	libidn
PORTVERSION=	1.29
CATEGORIES=	dns
MASTER_SITES+=  ${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Internationalized Domain Names command line tool

LIB_DEPENDS+=	libiconv.so:text/libiconv/
LIB_DEPENDS+=	libintl.so:devel/gettext/


INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --without-lispdir
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --disable-nls

INFO=	libidn

.include <bsd.port.mk>
#EOF
