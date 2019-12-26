#
# $Id: Makefile 2316 2009-09-02 08:41:08Z root $
# $URL: file:///usr2/svn/ports5/network-utils/sipcalc/Makefile $
#
PORTNAME=	sipcalc
PORTVERSION=	1.1.5
CATEGORIES=	net-mgmt
MASTER_SITES=	http://www.routemeister.net/projects/sipcalc/files/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Sipcalc is an IP subnet calculator with IPv6 support

USE_GETOPT_LONG=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

MAN1=		sipcalc.1
PLIST_FILES=	bin/sipcalc

.include <bsd.port.mk>
#EOF
