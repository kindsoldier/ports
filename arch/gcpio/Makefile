#
# $Id: Makefile 2176 2009-08-17 10:16:24Z ziggi $
#
PORTNAME=	cpio
PORTVERSION=	2.15
CATEGORIES=	archivers sysutils
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu
PKGNAMEPREFIX=	g

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU version of the traditional cpio archiver

LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS+=	libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
USES+=		gmake tar:bz2
CONFIGURE_ARGS+= --program-prefix="g"
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
#CONFIGURE_ARGS+= --with-rmt=/usr/sbin/rmt
CONFIGURE_ARGS+= --libexecdir=${PREFIX}/libexec/${PKGNAMEPREFIX}${PORTNAME}

CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

INFO+=	cpio

.include <bsd.port.mk>
#EOF
