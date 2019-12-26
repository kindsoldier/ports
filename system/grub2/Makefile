#
# $Id$
#
PORTNAME=	grub
PORTVERSION=	2.00
CATEGORIES=	sysutils
MASTER_SITES=	GNU/grub
DISTNAME=	grub-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Multiboot boot loader

BUILD_DEPENDS+= gflex:devel/gflex
BUILD_DEPENDS+= help2man:devel/help2man
BUILD_DEPENDS+= gcc:devel/gcc
BUILD_DEPENDS+= bison:devel/bison

RUN_DEPENDS+=	gsed:text/gsed

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libfuse.so:system/libfusefs
LIB_DEPENDS+=	libiconv.so:text/libiconv


CONFLICTS=	grub-0.*

USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake
ONLY_FOR_ARCHS=	i386 amd64
MAKE_JOBS_UNSAFE=	yes

CC=		gcc
CFLAGS=		-Os

SSP_UNSAFE=	yes

CONFIGURE_ENV+=	CPP="${CC} -E"
CONFIGURE_ENV+=	LEX=${LOCALBASE}/bin/gflex

CONFIGURE_ARGS+= --disable-werror 
CONFIGURE_ARGS+= --localedir=${PREFIX}/share/locale
#CONFIGURE_ARGS+= --disable-libzfs

MAKE_ARGS+= LC_ALL="C" LANG="C"

#CONFIGURE_ARGS+= --disable-nls
#CONFIGURE_ARGS+= --without-libiconv-prefix
#CONFIGURE_ARGS+= --without-libintl-prefix

INFO=	grub grub-dev


post-patch:
	${GZCAT} ${FILESDIR}/DejaVuSans.ttf.gz > ${WRKSRC}/DejaVuSans.ttf
	${TOUCH} -t 200001010000 ${WRKSRC}/Makefile.util.def
	${GZCAT} ${FILESDIR}/unifont.ttf.gz > ${WRKSRC}/unifont.ttf

remake:
#	${TOUCH} ${WRKSRC}/configure
	cd ${WRKSRC} && aclocal -I ${WRKSRC}/m4
	cd ${WRKSRC} && automake -v
	cd ${WRKSRC} && autoconf

post-configure:
	${LN} -sfh /usr/include/machine /usr/include/sys /usr/include/x86 ${WRKSRC}/grub-core

.include <bsd.port.mk>
#EOF
