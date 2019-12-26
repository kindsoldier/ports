# Created by: Ulrich Spoerlein <uqs@FreeBSD.org>
# $FreeBSD: head/textproc/groff/Makefile 502263 2019-05-22 09:34:50Z koobs $

PORTNAME=	groff
PORTVERSION=	1.22.4
CATEGORIES=	textproc
MASTER_SITES=	GNU

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Software typesetting package

MAKE_JOBS_UNSAFE=	yes

USES=		cpe gmake perl5 shebangfix makeinfo
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-awk=/usr/bin/awk
CONFIGURE_ENV+=	PERLPATH=${perl_CMD} # shebangfix

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

INFO=	groff

post-install:
	${INSTALL_DATA} ${FILESDIR}/mdoc.local ${STAGEDIR}/${PREFIX}/share/groff/site-tmac

.include <bsd.port.mk>
