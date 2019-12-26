#
# $Id: Makefile 1361 2007-11-02 15:42:54Z root $
# $URL: file:///usr2/svn/ports5/devel/automake/Makefile $
#
PORTNAME=	automake
PORTVERSION=	1.16.1 #1.15.1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	automake
DIST_SUBDIR=	gnu

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU Standards-compliant Makefile generator (1.9)

BUILD_DEPENDS+=	autoconf:devel/autoconf

PREFIX=		${LOCALBASE}
GNU_CONFIGURE=	yes
USES+=		gmake perl5 tar:xz
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_TARGET= --build=${MACHINE_ARCH}-ziggi-freebsd${OSREL}

CONFIGURE_ENV+= PERL=${LOCALBASE}/bin/perl
MAKE_ARGS+=  AUTOMAKE=${LOCALBASE}/bin/automake


INFO+=	automake automake-history

PLIST_SUB+=	VERSION=${PORTVERSION:R}

post-patch:
	${TOUCH} ${WRKSRC}/aclocal.m4
	${TOUCH} ${WRKSRC}/*.in
	${TOUCH} ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
