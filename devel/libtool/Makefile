#
# $Id: Makefile 1860 2008-10-16 23:02:43Z ziggi $
# $URL: file:///usr2/svn/ports5/devel/libtool/Makefile $
#
PORTNAME=	libtool
PORTVERSION=	2.4.6

CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	libtool

MAINTAINER=	onborodin@gmail.com
COMMENT=	Generic shared library support script (1.5)

BUILD_DEPENDS+=	help2man:devel/help2man

#RUN_DEPENDS+=	perl:lang/perl5
RUN_DEPENDS+=	gm4:text/gm4
BUILD_DEPENDS+= ${RUN_DEPENDS}

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

INFO= libtool

.include <bsd.port.mk>
#EOF
