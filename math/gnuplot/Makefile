# $FreeBSD: head/math/gnuplot/Makefile 518826 2019-12-02 06:14:00Z glewis $

PORTNAME=	gnuplot
PORTVERSION=	5.2.8
CATEGORIES=	math graphics
MASTER_SITES=	SF

MAINTAINER=	glewis@FreeBSD.org
COMMENT=	Command-line driven graphing utility

LIB_DEPENDS+= libexpat.so:text/libexpat
LIB_DEPENDS+= libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+= libfreetype.so:graph/libfreetype2
LIB_DEPENDS+= libgd.so:graph/libgd
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libintl.so:devel/gettext
LIB_DEPENDS+= libjpeg.so:graph/libjpeg
LIB_DEPENDS+= libpng16.so:graph/libpng
LIB_DEPENDS+= libreadline.so:devel/libreadline
LIB_DEPENDS+= libtiff.so:graph/libtiff
LIB_DEPENDS+= libwebp.so:graph/libwebp
LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau
LIB_DEPENDS+= libxcb.so:x11/libxcb
LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXpm.so:x11/libXpm

LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau
LIB_DEPENDS+= libxcb.so:x11/libxcb
LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp



USES+=		compiler:c++11-lang iconv pkgconfig readline
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}
CONFIGURE_ARGS+= --with-readline=gnu
CONFIGURE_ARGS+= --without-linux-vga
CONFIGURE_ARGS+= --without-lisp-files
CONFIGURE_ARGS+= --without-tutorial
CONFIGURE_ARGS+= --with-bitmap-terminals
CONFIGURE_ARGS+= --with-qt=no

#CONFIGURE_ARGS+= --disable-x11-mbfonts
#CONFIGURE_ARGS+= --disable-x11-external
CONFIGURE_ARGS+= --disable-wxwidgets
#CONFIGURE_ARGS+= --without-x
CONFIGURE_ARGS+= --without-ggi
#CONFIGURE_ARGS+= --without-gd
CONFIGURE_ARGS+= --without-caca
CONFIGURE_ARGS+= --without-wx
CONFIGURE_ARGS+= --without-gpic
CONFIGURE_ARGS+= --without-mif
CONFIGURE_ARGS+= --without-cairo
CONFIGURE_ARGS+= --without-lua
CONFIGURE_ARGS+= --without-latex
CONFIGURE_ARGS+= --without-kpsexpand

CONFIGURE_ARGS+= --with-gd=${LOCALBASE}

CONFIGURE_ARGS+= --without-mif
CONFIGURE_ARGS+= --without-kpsexpand
CONFIGURE_ARGS+= --without-latex
CONFIGURE_ARGS+= ac_cv_prog_KPSEXPAND=${LOCALBASE}/bin/kpsexpand
CONFIGURE_ARGS+= ac_cv_prog_PLAINTEX=${LOCALBASE}/bin/tex
CONFIGURE_ARGS+= ac_cv_prog_LATEX=${LOCALBASE}/bin/latex
CONFIGURE_ARGS+= ac_cv_prog_PDFLATEX=${LOCALBASE}/bin/pdflatex

TEST_TARGET=	check
PORTDOCS=	*
PORTEXAMPLES=	*

GRIDBOX_CONFIGURE_OFF=	--disable-h3d-quadtree --enable-h3d-gridbox

post-patch:
	${REINPLACE_CMD} -e '/^install:/s/install-am//' ${WRKSRC}/share/LaTeX/Makefile.in
	${REINPLACE_CMD} -e 's|)/@PACKAGE@/@PKG_MAJOR@|)|g' ${WRKSRC}/src/Makefile.in
	${REINPLACE_CMD} -e 's|luaL_checkint(|(int)luaL_checkinteger(|' ${WRKSRC}/term/lua.trm

#post-build-DOCS-on:
#	cd ${WRKSRC}/docs && ${MAKE} groff

pre-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/5.2 ; \
		${INSTALL_DATA} ${WRKSRC}/share/gnuplotrc \
		${STAGEDIR}${DATADIR}/5.2/gnuplotrc.sample

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/demo && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

#post-install-DOCS-on:
#	@${MKDIR} ${STAGEDIR}${DOCSDIR}/psdoc
#	cd ${WRKSRC}/docs && ${INSTALL_DATA} gnuplot.txt gnuplot.dvi \
#		gnuplot.ps ${STAGEDIR}${DOCSDIR}
#	cd ${WRKSRC}/docs/psdoc && ${INSTALL_DATA} README ps_* ${STAGEDIR}${DOCSDIR}/psdoc

#.if defined(LITE)
#post-stage:
#	@cd ${STAGEDIR}${PREFIX} && ${RMDIR} libexec/gnuplot/5.2 libexec/gnuplot
#.endif

.include <bsd.port.mk>
