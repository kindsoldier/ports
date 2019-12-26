#
# $Id: Makefile 2176 2009-08-17 10:16:24Z ziggi $
#
PORTNAME=	tar
PORTVERSION=	1.29
CATEGORIES=	archivers sysutils
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu
PKGNAMEPREFIX=	g

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU version of the traditional tar archiver

LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS+=	libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --program-prefix=g
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

CONFIGURE_ENV+=	DEFAULT_ARCHIVE=/dev/null
CONFIGURE_ENV+=	DEFAULT_RMT_COMMAND=/usr/sbin/rmt
CONFIGURE_ENV+=	FORCE_UNSAFE_CONFIGURE=1

CONFIGURE_ARGS+= --libexecdir=${PREFIX}/libexec/${PKGNAMEPREFIX}${PORTNAME}
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}


PLIST_SUB+=	PREFIX=${PKGNAMEPREFIX}

INFO+= tar

.include <bsd.port.mk>
#EOF
