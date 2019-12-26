#
# $Id$
#
PORTNAME=	icu
PORTVERSION=	58.2
CATEGORIES=	devel
MASTER_SITES=	http://download.icu-project.org/files/icu4c/${PORTVERSION}/ \
		SF/${PORTNAME}/ICU4C/${PORTVERSION}/
DISTNAME=	icu4c-${PORTVERSION:S/./_/g}
EXTRACT_SUFX=	-src.tgz
PKGNAMEPREFIX=	lib


MAINTAINER=	onborodin@gmail.com
COMMENT=	International Components for Unicode (from IBM)

WRKSRC=		${WRKDIR}/icu/source

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
#3CONFIGURE_ARGS+= --enable-shared
#CONFIGURE_ARGS+= --enable-static
#CONFIGURE_ARGS+= --enable-samples=no
#CONFIGURE_ARGS+= --enable-tests=no
#CONFIGURE_ARGS+= --enable-tools=yes
CONFIGURE_ARGS+= --mandir=${MANPREFIX}/man

#CONFIGURE_ARGS?=--disable-layoutex
CONFIGURE_ARGS+= --with-data-packaging=archive
CONFIGURE_ARGS+= --disable-renaming
CONFIGURE_ARGS+= --disable-samples
CONFIGURE_ARGS+= --enable-static
CPPFLAGS+=	-DICU_NO_USER_DATA_OVERRIDE
MAKE_ARGS=	VERBOSE=1

USES+=		gmake
INSTALL_TARGET=	install install-manx


.include <bsd.port.mk>
#EOF
