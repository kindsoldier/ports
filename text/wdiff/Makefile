#
# $Id$
#
PORTNAME=	wdiff
PORTVERSION=	0.6.3
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	wdiff

MAINTAINER=	onborodin@gmail.com
COMMENT=	Display word differences between text files

LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS+=	libiconv.so:text/libiconv/

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

PLIST_FILES+=	man/man1/wdiff.1.gz
INFO=		wdiff

.include <bsd.port.mk>
#EOF
