#
# $ID$
#
PORTNAME=	gperf
PORTVERSION=	3.0.3
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	gperf

MAINTAINER=	onborodin@gmail.com
COMMENT=	Generates perfect hash functions for sets of keywords

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --docdir=${DOCSDIR}
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

INFO=		gperf

.include <bsd.port.mk>
#EOF
