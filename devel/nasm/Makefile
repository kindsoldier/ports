#
# $Id$
#
PORTNAME=	nasm
PORTVERSION=	2.14.02
CATEGORIES=	devel lang
MASTER_SITES+=	http://www.nasm.us/pub/nasm/releasebuilds/${PORTVERSION}/
MASTER_SITES+=	${MASTER_SITE_SOURCEFORGE}
MASTER_SITE_SUBDIR=	nasm

MAINTAINER=	onborodin@gmail.com
COMMENT=	General-purpose multi-platform x86 assembler

USES+=		tar:xz gmake
GNU_CONFIGURE=	yes
PLIST_SUB=	VERSION=${PORTVERSION}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ENV=  ac_cv_func_strspn=yes 

post-patch:
	${REINPLACE_CMD} -e 's,INSTALLROOT,DESTDIR,g' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's,INSTALLROOT,DESTDIR,g' ${WRKSRC}/*/Makefile.in


.include <bsd.port.mk>
#EOF
