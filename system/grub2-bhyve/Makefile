#
# $Id$
#
PORTNAME=	grub2-bhyve
DISTVERSIONPREFIX=	v
DISTVERSION=	0.40
CATEGORIES=	sysutils

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	Grub-emu loader for bhyve

CC=		gcc
#USE_GCC=	yes

ONLY_FOR_ARCHS=	amd64
SSP_UNSAFE=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	grehan-freebsd
USES=		bison gmake
PLIST_FILES=	sbin/grub-bhyve
MAKE_JOBS_UNSAFE=	yes
CONFIGURE_ARGS=	--with-platform=emu
CONFIGURE_ARGS+= CC=${CC}
CONFIGURE_ARGS+= CPP="${CC} -E"
CONFIGURE_ARGS+= LEX=${LOCALBASE}/bin/gflex
CONFIGURE_ARGS+= --enable-grub-mount=no
CONFIGURE_ARGS+= --enable-grub-mkfont=no
CONFIGURE_ARGS+= --enable-grub-emu-sdl=no
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --disable-werror

.include <bsd.port.pre.mk>

.if ${OSVERSION} <= 1000000
IGNORE=	for FreeBSD 10 and higher
.endif

post-patch:
	${REINPLACE_CMD} -e "s/libintl\.h/I_do_not_want_libintl.h/g" ${WRKSRC}/configure
	${REINPLACE_CMD} -e "s/-lintl//g" ${WRKSRC}/grub-core/Makefile.in

do-configure:
	cd ${WRKSRC}/ && ./configure ${CONFIGURE_ARGS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/grub-core/grub-emu ${STAGEDIR}${LOCALBASE}/sbin/grub-bhyve

.include <bsd.port.post.mk>

#EOF
