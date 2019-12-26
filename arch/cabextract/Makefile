#
# $Id: Makefile 2542 2009-09-23 19:00:03Z root $
#
PORTNAME=	cabextract
PORTVERSION=	1.3
CATEGORIES=	archivers
#MASTER_SITES+=	http://www.kyz.uklinux.net/downloads/
MASTER_SITES+=	http://www.cabextract.org.uk/


MAINTAINER=	onborodin@gmail.com
COMMENT=	A program to extract Microsoft cabinet (.CAB) files

USES+=		gmake
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

MAN1=		cabextract.1
PLIST_FILES=	bin/cabextract


.include <bsd.port.mk>
#EOF
