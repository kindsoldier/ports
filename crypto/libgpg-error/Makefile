#
# $Id: Makefile 2356 2009-09-06 07:08:12Z root $
# $URL: file:///usr2/svn/ports5/crypto/libgpg-error/Makefile $
#
PORTNAME=	libgpg-error
PORTVERSION=	1.17
CATEGORIES=	security devel
MASTER_SITES=	${MASTER_SITE_GNUPG}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Common error values for all GnuPG components

LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS+=	libiconv.7.so:text/libiconv

USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_TARGET= --build=${MACHINE_ARCH}-ziggi-freebsd${OSREL}
#CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE} 
#CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --disable-languages
#CONFIGURE_ARGS+= --disable-nls
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

.include <bsd.port.mk>
#EOF
