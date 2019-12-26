#
# $Id: Makefile 2697 2009-10-31 20:47:23Z root $
#
PORTNAME=	patch
PORTVERSION=	2.7.5
PKGNAMEPREFIX=	g
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu
CATEGORIES=	textproc devel

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU patch utility

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --program-prefix="g"

USES=		cpe charsetfix gmake tar:xz

PLIST_FILES+= bin/gpatch
PLIST_FILES+= man/man1/gpatch.1.gz

.include <bsd.port.mk>
#EOF
