# Created by: Ulrich Spoerlein <uqs@FreeBSD.org>
# $FreeBSD: head/textproc/groff/Makefile 502263 2019-05-22 09:34:50Z koobs $

PORTNAME=	groff
PORTVERSION=	1.23.0
CATEGORIES=	textproc
#MASTER_SITES=	GNU

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Software typesetting package

MAKE_JOBS_UNSAFE=	yes

USES=		cpe gmake perl5 shebangfix makeinfo
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-awk=/usr/bin/awk
CONFIGURE_ENV+=	PERLPATH=${perl_CMD} # shebangfix
USE_CXXSTD=	gnu++98



CPE_VENDOR=	gnu
SHEBANG_FILES=	src/utils/afmtodit/afmtodit.pl \
		contrib/mm/mmroff.pl \
		font/devps/generate/symbol.sed
SHEBANG_LANG=	sed
sed_OLD_CMD=	/bin/sed
sed_CMD=	/usr/bin/sed

CONFIGURE_ENV+=	gl_cv_func_printf_enomem=no
CONFIGURE_ENV+=	PAGE=${A4}
CONFIGURE_ARGS+= --without-x
CONFIGURE_ARGS+=	pnmcrop=missing 
CONFIGURE_ARGS+=	pnmcut=missing 
CONFIGURE_ARGS+=	pnmtopng=missing
CONFIGURE_ARGS+=	pnmtops=missing
CONFIGURE_ARGS+=	psselect=missing

INFO=	groff

post-install:
	${INSTALL_DATA} ${FILESDIR}/mdoc.local ${STAGEDIR}/${PREFIX}/share/groff/site-tmac

.include <bsd.port.mk>
