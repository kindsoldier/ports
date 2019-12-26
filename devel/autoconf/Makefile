#
# $Id: Makefile 2193 2009-08-20 23:05:50Z root $
# $URL: file:///usr2/svn/ports5/devel/autoconf/Makefile $
#
PORTNAME=	autoconf
PORTVERSION=	2.69
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu

MAINTAINER=	onborodin@gmail.com
COMMENT=	Automatically configure source code on many Un*x platforms (GNU unmodified)

RUN_DEPENDS=	gm4:text/gm4
BUILD_DEPENDS+=	${RUN_DEPENDS}
BUILD_DEPENDS+= help2man:devel/help2man


USES+=	tar:xz perl5
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

CONFIGURE_ENV+=	CONFIG_SHELL=${SH}
CONFIGURE_ENV+=	M4=${LOCALBASE}/bin/gm4
CONFIGURE_ARGS+= --infodir=${PREFIX}/info 
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
#CONFIGURE_ARGS+= --without-lispdir
CONFIGURE_TARGET= --build=${MACHINE_ARCH}-ziggi-freebsd${OSREL}

INFO+=	autoconf 

MAN1+=	autoconf.1 
MAN1+=	autoheader.1 
MAN1+=	autom4te.1 
MAN1+=	autoreconf.1 
MAN1+=	autoscan.1 
MAN1+=	autoupdate.1 
MAN1+=	config.guess.1 
MAN1+=	config.sub.1 
MAN1+=	ifnames.1

.include <bsd.port.mk>
#EOF
