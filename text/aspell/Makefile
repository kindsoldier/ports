#
# $Id: Makefile 2363 2009-09-06 11:14:53Z root $
# $URL: file:///usr2/svn/ports5/text-utils/aspell/Makefile $
#
PORTNAME=	aspell
PORTVERSION=	0.60.6.1
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	aspell
DISTFILES=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}
EXTRACT_ONLY=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Spelling checker with better suggestion logic than ispell

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --enable-dict-dir=${DATADIR}
CONFIGURE_ARGS+= --enable-docdir=${DOCSDIR}
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --enable-pkglibdir=${PREFIX}/lib/aspell
CONFIGURE_ARGS+= --enable-pkgdatadir=${PREFIX}/lib/aspell
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --enable-compile-in-filters

INFO+= aspell
INFO+= aspell-dev

.include <bsd.port.mk>
#EOF
