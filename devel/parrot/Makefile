# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/lang/parrot/Makefile 482830 2018-10-23 11:35:03Z jbeich $

PORTNAME=	parrot
PORTVERSION=	8.1.0
CATEGORIES=	lang
MASTER_SITES=	ftp://ftp.parrot.org/pub/parrot/releases/supported/${PORTVERSION}/ \
		LOCAL/sunpoet

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parrot - virtual machine for dynamic languages


BUILD_DEPENDS+=	gflex:devel/gflex
BUILD_DEPENDS+=	gm4:text/gm4
BUILD_DEPENDS+=	pcre-config:text/libpcre
LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libicudata.so:devel/libicu


ALL_TARGET=	installable
CONFIGURE_ARGS+= --cc=${CC} --cxx=${CXX} --link=${CXX}
CONFIGURE_ARGS+= --ccflags="${CFLAGS} -I${LOCALBASE}/include"
CONFIGURE_ARGS+= --ld=${CC}
CONFIGURE_ARGS+= --ldflags="${LDFLAGS} -L${LIBDIR} -L${LOCALBASE}/lib"
CONFIGURE_ARGS+= --gc=gms --inline --optimize --parrot_is_shared --verbose
CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --icu-config=${LOCALBASE}/bin/icu-config
CONFIGURE_ARGS+= --lex=${LOCALBASE}/bin/gflex
CONFIGURE_ARGS+= --yacc=${LOCALBASE}/bin/bison
CONFIGURE_SCRIPT=	Configure.pl
INSTALL_TARGET=	install-dev
TEST_TARGET=	test
MAKE_JOBS_UNSAFE=	yes
USE_LDCONFIG=	yes
USES=		bison gmake perl5 shebangfix tar:bzip2
SHEBANG_FILES+=	tools/dev/create_language.pl
SHEBANG_FILES+=	tools/dev/gen_makefile.pl
SHEBANG_FILES+=	tools/dev/pprof2cg.pl
SHEBANG_FILES+=	tools/dev/reconfigure.pl
perl_OLD_CMD=	perl

PLIST_SUB=	PARROT_VER="${PORTVERSION}"

do-configure:
	(cd ${WRKSRC} && ${PERL} ${CONFIGURE_SCRIPT} ${CONFIGURE_ARGS})

post-install:
	${RM} ${STAGEDIR}${PREFIX}/lib/inst_libparrot.so.${PORTVERSION}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/* \
		${STAGEDIR}${PREFIX}/lib/libparrot.so.${PORTVERSION} \
		${STAGEDIR}${PREFIX}/lib/parrot/${PORTVERSION}/dynext/*.so

.include <bsd.port.mk>
