#
# $Id: Makefile 2175 2009-08-17 10:16:10Z ziggi $
#
PORTNAME=	vim
PORTVERSION=	7.4
CATEGORIES=	editors
MASTER_SITES+=	 ftp://ftp.uk.vim.org/pub/vim/unix/
MASTER_SITES+=	 ftp://ftp.ca.vim.org/pub/vim/unix/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Vi "workalike", with many additional features

LIB_DEPENDS+=	libiconv.so:text/libiconv/
LIB_DEPENDS+=	libintl.so:devel/gettext/

WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION:S/.//}/src
USES+=		gmake
USES+=		tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-tlib=termlib
CONFIGURE_ARGS+= --enable-pythoninterp=no
CONFIGURE_ARGS+= --enable-perlinterp=no
CONFIGURE_ARGS+= --enable-pythoninterp=no
CONFIGURE_ARGS+= --enable-tclinterp=no
CONFIGURE_ARGS+= --enable-cscope=no
CONFIGURE_ARGS+= --enable-multibyte=yes
CONFIGURE_ARGS+= --enable-gui=no
CONFIGURE_ARGS+= --without-x
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFIGURE_ENV+= ac_cv_header_sys_sysinfo_h=no

PLIST_SUB=	VERSION=${PORTVERSION}
WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION:S/.//}
PREFIX?= 	${LOCALBASE}

post-install:
	cd ${STAGEDIR}/${PREFIX}/share/${PORTNAME}/ && ${RM} -rf tools 
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  vim.1 ex.1 
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  vim.1 rview.1 
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  vim.1 rvim.1 
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  vim.1 view.1

.include <bsd.port.mk>
#EOF
