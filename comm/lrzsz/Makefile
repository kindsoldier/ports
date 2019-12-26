#
# $Id$
#
PORTNAME=	lrzsz
PORTVERSION=	0.12.20
CATEGORIES=	comms
MASTER_SITES=	http://ohse.de/uwe/releases/

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Receive/Send files via X/Y/ZMODEM protocol.  (unrestrictive)

GNU_CONFIGURE=	yes
ALL_TARGET=	all # vcheck

#rb rx rz sb sx sz

post-install:
.for N in rb rx rz sb sx sz
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf l${N} ${N}
.endfor
.for N in sb sx sz
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf lsz.1 ${N}.1
.endfor
.for N in rb rx rz
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf lrz.1 ${N}.1
.endfor




.include <bsd.port.mk>
#EOF
