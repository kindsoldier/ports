PORTNAME=	calc
PORTVERSION=	2.14.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	math

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	Interactive CLI arbitrary-precision calculator
WWW=		https://github.com/lcn2/calc

USES=		gmake tar:bzip2 readline
USE_GITHUB=	yes
GH_ACCOUNT=	lcn2

CONFLICTS_INSTALL=	schilyutils # bin/calc

MAKE_JOBS_UNSAFE=	yes

MAKE_ARGS=	DATADIR="${DATADIR}"
TEST_TARGET=	check

# We use Makefile.freebsd because Makefile.local is in .gitignore
post-extract:
	${SED} -e 's|%%CC%%|${CC}|; s|%%CFLAGS%%|${CFLAGS}|;' \
		${FILESDIR}/Makefile.freebsd > ${WRKSRC}/Makefile.local
# The upstream Makefiles are a mess. Bash is hardcoded in many files, and only
# some of the Makefiles allow overrides. Plus, they error out if sed .bkp files exist.
	${FIND} ${WRKSRC} -name 'Makefile*' \
		| ${XARGS} ${REINPLACE_CMD} -i '' -e 's|/bin/bash|${SH}|'

post-install:
	cd ${STAGEDIR}${PREFIX} && ${STRIP_CMD} bin/calc lib/lib*.so

.include <bsd.port.mk>
