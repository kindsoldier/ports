#
# $Id$
#
PORTNAME=	magicrescue
PORTVERSION=	1.1.9
CATEGORIES=	sysutils
MASTER_SITES=	http://www.itu.dk/people/jobr/magicrescue/release/ LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	File recovery tool which recovers deleted files from a block device

USES=		perl5 shebangfix
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}
USE_PERL5=	run

SHEBANG_FILES=	magicsort tools/gimp-resave.pl

MAKE_ENV+=	STAGEDIR=${STAGEDIR}

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DATADIR}/tools
	${MKDIR} ${STAGEDIR}${DATADIR}/man/man1


post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/magicrescue
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/dupemap
.for f in safecat inputseek textextract
	${STRIP_CMD} ${STAGEDIR}${DATADIR}/tools/${f}
.endfor


.include <bsd.port.mk>
#EOF
