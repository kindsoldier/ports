#
# $Id: Makefile 2193 2009-08-20 23:05:50Z root $
# $URL: file:///usr2/svn/ports5/devel-utils/autoconf/Makefile $
#
PORTNAME=	autoconf
PORTVERSION=	2.13
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu

MAINTAINER=	onborodin@gmail.com
COMMENT=	Automatically configure source code on many Un*x platforms (GNU unmodified)

RUN_DEPENDS=	gm4:text/gm4
BUILD_DEPENDS+=	${RUN_DEPENDS}
BUILD_DEPENDS+= help2man:devel/help2man
BUILD_DEPENDS+= makeinfo:system/texinfo

GNU_CONFIGURE=	yes
USES+=		gmake perl5

CONFIGURE_ENV+=	CONFIG_SHELL=${SH}
CONFIGURE_ENV+=	M4=${LOCALBASE}/bin/gm4
CONFIGURE_ARGS+= --infodir=${PREFIX}/info 
CONFIGURE_ARGS+= --mandir=${PREFIX}/man 
CONFIGURE_ARGS+= --without-lispdir
CONFIGURE_TARGET= --build=${MACHINE_ARCH}-ziggi-freebsd${OSREL}
CONFIGURE_ARGS=	--program-suffix=${VERSION}
STRIP=	#
PKGNAMESUFFIX=	${VERSION}

INFO=		autoconf${VERSION}

VERSION=${PORTVERSION:S/.//g}
PLIST_SUB=	VERSION=${VERSION}

post-install:
	${CHMOD} +x ${STAGEDIR}${PREFIX}/share/autoconf${VERSION}/config.*
	${INSTALL_SCRIPT} ${WRKSRC}/install-sh \
		${STAGEDIR}${PREFIX}/share/autoconf${VERSION}

.include <bsd.port.mk>
#EOF
