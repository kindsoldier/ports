# Created by: Jean-Marc Zucconi <jmz@FreeBSD.org>
# $FreeBSD: head/graphics/netpbm/Makefile 454404 2017-11-18 00:51:34Z tobik $

PORTNAME=	netpbm
DISTVERSIONPREFIX=	v
DISTVERSION=	10.80.00
CATEGORIES=	graphics

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Toolkit for conversion of images between different formats


LIB_DEPENDS+=	libtiff.so:graph/libtiff
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libjbig.so:graph/libjbigkit
LIB_DEPENDS+=	libjasper.so:graph/libjasper


USES=		gmake perl5 shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	t6
USE_LDCONFIG=	yes
USE_PERL5=	build test

SHEBANG_FILES=	buildtools/makeman editor/pnmflip editor/pnmquant \
		editor/ppmfade editor/ppmquant editor/ppmshadow \
		generator/ppmrainbow converter/pbm/pbmtox10bm \
		test/Execute-Tests test/*.test test/Available-Testprog

MAKEFILE=	GNUmakefile
INSTALL_TARGET=	install.bin install.lib install.data install.hdr \
		install.staticlib
MAKE_ARGS+=	pkgdir=${STAGEDIR}${PREFIX}
MAKE_ARGS+=	BINMODE=${BINMODE}
MAKE_ARGS+=	SHAREMODE=${SHAREMODE}
MAKE_ARGS+=	DATAMODE=${_SHAREMODE}
MAKE_ARGS+=	DIRMODE=755
MAKE_ARGS+=	MANMODE=${MANMODE}
MAKE_ARGS+=	DATADIR=${DATADIR}
MAKE_ARGS+=     SYMLINK="ln -sf"

CFLAGS+=        

DISABLED_TESTS=	all-in-place tiff-flate-lzw-roundtrip ppmgauss \
		palm-roundtrip pamtopdbimg

GH_TUPLE=	t6:netpbm-userguide:r2996:userguide
USES+=		python:build,2.7
PERL_USE=		PERL5=run

post-patch:
	${REINPLACE_CMD} -e 's|misc|share/netpbm|g' ${WRKSRC}/common.mk
	${REINPLACE_CMD} -e 's|$$(PKGDIR)/link|$$(PKGDIR)/lib|g' \
		-e 's|pkg-config|false|g' \
		${WRKSRC}/GNUmakefile ${WRKSRC}/lib/Makefile
.for test in ${DISABLED_TESTS}
	@${REINPLACE_CMD} -e '/${test}/d' ${WRKSRC}/test/Test-Order
.endfor

post-patch-X11-off:
	${REINPLACE_CMD} '/pamx/d' ${WRKSRC}/other/Makefile

do-configure:
	${CAT} ${WRKSRC}/config.mk.in ${FILESDIR}/config.mk > ${WRKSRC}/config.mk

post-build:
	cd ${WRKSRC_userguide} && ${WRKSRC}/buildtools/makeman *.html
	cd ${WRKSRC_userguide} && ${MV} index.1 netpbm.1
# Remove broken manpages
	cd ${WRKSRC_userguide} && ${RM} directory.1 liberror.1 \
		libnetpbm_dir.1 libsystem.3 libtmpfile.3 libtmpfilefd.3 \
		ppmsvgalib.1 vidtoppm.1 extendedopacity.5

post-install:
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libnetpbm.so.11 libnetpbm.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libnetpbm.so
	${RM} ${STAGEDIR}${PREFIX}/bin/manweb
	${INSTALL_DATA} ${WRKSRC}/lib/util/pm_c_util.h ${WRKSRC}/pm_config.h \
		${STAGEDIR}${PREFIX}/include/netpbm


	${INSTALL_MAN} ${WRKSRC_userguide}/*.1 ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC_userguide}/*.3 ${STAGEDIR}${PREFIX}/man/man3
	${INSTALL_MAN} ${WRKSRC_userguide}/*.5 ${STAGEDIR}${PREFIX}/man/man5

.include <bsd.port.mk>
#EOF
