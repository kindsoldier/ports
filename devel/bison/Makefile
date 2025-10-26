# Created by: Jerry Hicks
# $FreeBSD: head/devel/bison/Makefile 492390 2019-02-07 23:13:51Z sunpoet $

PORTNAME=	bison
PORTVERSION=	3.8.2
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parser generator from FSF, (mostly) compatible with Yacc

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	gm4>=1.4.16:text/gm4

USES=		gmake charsetfix localbase perl5 tar:xz
USE_PERL5=	build

CONFIGURE_ARGS=	--disable-yacc --enable-relocatable

.ifdef QEMU_EMULATING
# XXX bug 224740: configure hangs
CONFIGURE_ENV=	gl_cv_func_printf_enomem=no
.endif

GNU_CONFIGURE=	yes
LIBS+=		-lm
TEST_TARGET=	check

INFO=		bison

post-patch:
	@${REINPLACE_CMD} -e 's|$$(docdir)\(/examples\)|$$(datarootdir)\1/bison|' ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e 's|\(.*\) _Noreturn void|_Noreturn \1 void|' ${WRKSRC}/data/skeletons/*.c ${WRKSRC}/lib/*.[ch]

.include <bsd.port.mk>
