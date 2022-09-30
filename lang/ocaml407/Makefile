# Created by: Kiriyama Kazuhiko <kiri@kiri.toba-cmt.ac.jp>
# $FreeBSD: head/lang/ocaml/Makefile 536967 2020-05-29 11:27:54Z antoine $
# for committer: bump PORTREVISION for math/facile whenever ocaml gets updated

PORTNAME=	ocaml
PORTVERSION=	4.07.1
CATEGORIES=	lang
MASTER_SITES+=	http://caml.inria.fr/pub/distrib/${DISTNAME:R}/ GENTOO
MASTER_SITES+=  http://caml.inria.fr/pub/distrib/${DISTNAME:R}/:docs
PKGNAMESUFFIX=	${SFX}

MAINTAINER=	michipili@gmail.com
COMMENT=	Objective Caml compiler and programming environment


#BROKEN_aarch64=	Does not build: sh: as: not found
BROKEN_sparc64=	No rule to make target 'none.o', needed by 'libasmrun.a'
BROKEN_mips64=	No ASM support
BROKEN_mips=	No ASM support

#BUILD_DEPENDS=	as:devel/binutils
#RUN_DEPENDS=	as:devel/binutils

USES=		compiler:c11 gmake tar:xz
USE_LDCONFIG=	yes
HAS_CONFIGURE=	yes
ALL_TARGET=	world.opt
STRIP=          #
SSP_UNSAFE=	yes
MAKE_JOBS_UNSAFE=	yes

LDFLAGS_armv7=	-Wl,-znotext
LDFLAGS_i386=	-Wl,-znotext

CONFIGURE_ARGS=	-verbose -prefix "${PREFIX}" -cc "${CC}" -aspp "${CC} -c" -partialld "${LD} -r"

.include <bsd.port.options.mk>

.if ${ARCH} == armv6 || ${ARCH} == armv7
CONFIGURE_ARGS+=	-as "${AS} ${ASFLAGS} -meabi=5"
.else
CONFIGURE_ARGS+=	-as "${AS} ${ASFLAGS}"
.endif

THR_LD=		-lpthread
#THR_LD=		#empty
#CONFIGURE_ARGS+=-no-pthread

CONFIGURE_ARGS+=-no-graph

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} \
		-e '\|MKLIB=|s|ar rc|${AR} rc|' \
		-e '\|RANLIB|s|ranlib|${RANLIB}|' \
		-e '\|^ldflags=|s|""|"${LDFLAGS}"|' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,$$(ARCH),$$(SYSTEM_ARCH),' \
		${WRKSRC}/Makefile ${WRKSRC}/Makefile.tools \
		${WRKSRC}/asmrun/Makefile \
		${WRKSRC}/ocamltest/Makefile \
		${WRKSRC}/otherlibs/systhreads/Makefile \
		${WRKSRC}/testsuite/tests/asmgen/Makefile

post-configure:
	${REINPLACE_CMD} -E \
		-e '/^PTHREAD_LINK/s,-pthread,${THR_LD},g' \
		${WRKSRC}/config/Makefile

.include <bsd.port.post.mk>
