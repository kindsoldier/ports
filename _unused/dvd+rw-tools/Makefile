#
# $Id$
#
PORTNAME=	dvd+rw-tools
PORTVERSION=	7.1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.pkix.net/mirror/fy.chalmers.se/ \
		http://fy.chalmers.se/~appro/linux/DVD+RW/tools/

MAINTAINER= homeunix7@gmail.com
COMMENT=	DVD burning software

BUILD_DEPENDS=	cdrecord:system/cdrtools
RUN_DEPENDS=	cdrecord:system/cdrtools
# On some systems, among them one 900044 i386, the do-build-invoked
# "make" will just do nothing for reasons not yet found, as of
# dvd+rw-tools 7.1. It is supposed to call
# (m4 -DOS=`uname -s` Makefile.m4 | make -f - dvd+rw-tools)
# but returns success right away.
# Using gmake bypasses this problem for unknown reasons. Please leave it in,
# until the problem is analyzed and fixed - and please comment the fix here.
USES=	gmake


.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} -e 's/-O2//' ${WRKSRC}/Makefile.m4

_BINS=	growisofs dvd+rw-format dvd+rw-booktype dvd+rw-mediainfo dvd-ram-control


do-install:
.for i in ${_BINS}
	${INSTALL_PROGRAM} ${WRKSRC}/${i} ${STAGEDIR}${PREFIX}/bin
.endfor
	${INSTALL_MAN} ${WRKSRC}/growisofs.1 ${STAGEDIR}${MANPREFIX}/man/man1/

.include <bsd.port.mk>
#EOF
