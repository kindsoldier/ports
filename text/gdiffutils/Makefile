#
# $Id: Makefile 2697 2009-10-31 20:47:23Z root $
#
PORTNAME=	diffutils
PORTVERSION=	3.4
MASTER_SITES=	http://ftp.gnu.org/gnu/diffutils/
MASTER_SITES+=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu
CATEGORIES=	textproc
PKGNAMEPREFIX=	g

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU diff Utilities

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv


GNU_CONFIGURE=	yes
USES+=		gmake tar:xz
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --program-prefix="g"
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}


INFO=	diffutils

#post-install:
#	cd ${WRKSRC}/man && ${GMAKE} DESTDIR=${STAGEDIR}/${PREFIX} install

.include <bsd.port.mk>
#EOF
