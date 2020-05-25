#
# $Id$
#
PORTNAME=	texlive
PORTVERSION=	${TL_SOURCE_VERSION}
CATEGORIES=	print
DISTNAME+=	${TL_SOURCE_NAME}
DIST_SUBDIR+=	TeX


MASTER_SITES+=	TEX_CTAN/systems/texlive/Source/
MASTER_SITES+=	ftp://tug.org/historic/systems/texlive/2015/:tlextra

MASTER_SITES+=	LOCAL/hrs:tlpkg
MASTER_SITES+=	http://ftp.tw.freebsd.org/distfiles/TeX/:tlextra

DISTFILES+=	${TL_SOURCE_NAME}${EXTRACT_SUFX}
DISTFILES+=	${TL_EXTRA_NAME}${EXTRACT_SUFX}:tlextra
DISTFILES+=	${TLPKG_FILE}.xz:tlpkg

TL_SOURCE_VERSION=	20150521
TL_EXTRA_VERSION=	20150523

TL_SOURCE_NAME=	${PORTNAME}-${TL_SOURCE_VERSION}-source
TL_EXTRA_NAME=	${PORTNAME}-${TL_EXTRA_VERSION}-extra
TLPKG_FILE=	${PORTNAME}-20150924.tlpdb


EXTRACT_ONLY+= ${TL_SOURCE_NAME}${EXTRACT_SUFX}
EXTRACT_ONLY+= ${TL_EXTRA_NAME}${EXTRACT_SUFX}


MAINTAINER=	hrs@FreeBSD.org
COMMENT=	TeX Live Typesetting System, base binaries

RUN_DEPENDS=	psbook:print/psutils
LIB_DEPENDS+=	libicuio.so:devel/libicu
LIB_DEPENDS+=	libt1.so:print/libt1lib
#LIB_DEPENDS+=	libTECkit.so:textproc/teckit
LIB_DEPENDS+=	libgd.so:graph/libgd
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libharfbuzz.so:gnome/libharfbuzz
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libzzip.so:arch/libzzip
LIB_DEPENDS+=	libpoppler.so:graph/libpoppler
LIB_DEPENDS+=	libmpfr.so:math/libmpfr
LIB_DEPENDS+=	libgs.so:print/ghostscript
#LIB_DEPENDS+=		libpotrace.so:graphics/libpotrace

LIB_DEPENDS+=		libgraphite2.so:graph/libgraphite2

#USE_TEX=	web2c kpathsea ptexenc tlmgr texhash-bootstrap
#USES=		ghostscript pkgconfig perl5 shebangfix tar:xz
USES+=		perl5 tar:xz
USE_PERL5=	run


MAKE_ENV+=	CONFIG_SITE=${CONFIG_SITE}
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-native-texlive-build
#CONFIGURE_ARGS+= --disable-web-progs
#CONFIGURE_ARGS+= --disable-dvipdfmx
#CONFIGURE_ARGS+= --disable-dvipdfm-x
#CONFIGURE_ARGS+= --disable-xdvipdfmx
CONFIGURE_ARGS+= --disable-psutils
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --disable-t1utils
CONFIGURE_ARGS+= --disable-xpdfopen
CONFIGURE_ARGS+= --enable-build-in-source-tree
CONFIGURE_ARGS+= --datarootdir=${LOCALBASE}/share
CONFIGURE_ARGS+= --with-system-freetype2
CONFIGURE_ARGS+= --with-freetype2-includes=${LOCALBASE}/include/freetype2
CONFIGURE_ARGS+= --with-freetype2-libdir=${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-system-gd
CONFIGURE_ARGS+= --with-system-cairo
CONFIGURE_ARGS+= --with-system-harfbuzz
CONFIGURE_ARGS+= --with-system-graphite2
CONFIGURE_ARGS+= --with-system-pixman
CONFIGURE_ARGS+= --with-system-poppler
CONFIGURE_ARGS+= --with-system-t1lib
CONFIGURE_ARGS+= --with-xpdf-includes=${LOCALBASE}/include/poppler
CONFIGURE_ARGS+= --with-xpdf-libdir=${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-system-xpdf
CONFIGURE_ARGS+= --with-system-zziplib
CONFIGURE_ARGS+= --with-system-zlib

#CONFIGURE_ARGS+=--with-system-kpathsea --with-kpathsea-include=${LOCALBASE}/include --with-kpathsea-libdir=${LOCALBASE}/lib
#CONFIGURE_ARGS+=--with-system-libpaper --with-libpaper-include=${LOCALBASE}/include --with-libpaper-libdir=${LOCALBASE}/lib
#CONFIGURE_ARGS+=--with-system-potrace --with-potrace-include=${LOCALBASE}/include --with-potrace-libdir=${LOCALBASE}/lib
#CONFIGURE_ARGS+=--with-system-ptexenc --with-ptexenc-include=${LOCALBASE}/include --with-ptexenc-libdir=${LOCALBASE}/lib
#CONFIGURE_ARGS+=--with-system-teckit --with-teckit-include=${LOCALBASE}/include --with-teckit-libdir=${LOCALBASE}/lib

CONFIGURE_ARGS+=--with-system-gmp --with-gmp-include=${LOCALBASE}/include --with-gmp-libdir=${LOCALBASE}/lib
CONFIGURE_ARGS+=--with-system-icu --with-icu-include=${LOCALBASE}/include --with-icu-libdir=${LOCALBASE}/lib
CONFIGURE_ARGS+=--with-system-libgs --with-libgs-include=${LOCALBASE}/include --with-libgs-libdir=${LOCALBASE}/lib
CONFIGURE_ARGS+=--with-system-libpng --with-libpng-include=${LOCALBASE}/include --with-libpng-libdir=${LOCALBASE}/lib
CONFIGURE_ARGS+=--with-system-mpfr --with-mpfr-include=${LOCALBASE}/include --with-mpfr-libdir=${LOCALBASE}/lib

#CONFIGURE_ARGS+= --disable-aleph
#CONFIGURE_ARGS+= --disable-euptex
#CONFIGURE_ARGS+= --disable-luajittex
#CONFIGURE_ARGS+= --disable-luatex
#CONFIGURE_ARGS+= --disable-ptex
#CONFIGURE_ARGS+= --disable-synctex
#CONFIGURE_ARGS+= --disable-uptex
#CONFIGURE_ARGS+= --disable-xetex
CONFIGURE_ARGS+= --disable-xdvik

#CONFIGURE_ARGS+= --disable-xetex-synctex
#CONFIGURE_ARGS+= --disable-etex-synctex
#CONFIGURE_ARGS+= --disable-uptex-synctex
#CONFIGURE_ARGS+= --disable-euptex-synctex
#CONFIGURE_ARGS+= --disable-ptex-synctex

LDFLAGS+= -L${LOCALBASE}/lib -lpixman
USES+=	gmake

a:
.for L in gmp icu kpathsea libgs libpng libpaper mpfr ptexenc potrace teckit
	@echo CONFIGURE_ARGS+=--with-system-$L \
		--with-$L-include=${LOCALBASE}/include \
		--with-$L-libdir=${LOCALBASE}/lib
.endfor

CFLAGS+=	-I${LOCALBASE}/include
PLIST_SUB=	INSTALL_DATA="${INSTALL_DATA}"
INSTALL_TARGET=	install-strip

SHEBANG_FILES+=	texk/texlive/linked_scripts/accfonts/mkt1font
SHEBANG_FILES+=	texk/texlive/linked_scripts/accfonts/vpl2ovp
SHEBANG_FILES+=	texk/texlive/linked_scripts/accfonts/vpl2vpl
SHEBANG_FILES+=	texk/texlive/linked_scripts/arara/arara.sh
SHEBANG_FILES+=	texk/texlive/linked_scripts/bibexport/bibexport.sh
SHEBANG_FILES+=	texk/texlive/linked_scripts/convbkmk/convbkmk.rb
SHEBANG_FILES+=	texk/texlive/linked_scripts/ctanupload/ctanupload.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/de-macro/de-macro
SHEBANG_FILES+=	texk/texlive/linked_scripts/dtxgen/dtxgen
SHEBANG_FILES+=	texk/texlive/linked_scripts/exceltex/exceltex
SHEBANG_FILES+=	texk/texlive/linked_scripts/findhyph/findhyph
SHEBANG_FILES+=	texk/texlive/linked_scripts/fragmaster/fragmaster.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/installfont/installfont-tl
SHEBANG_FILES+=	texk/texlive/linked_scripts/kotex-utils/jamo-normalize.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/latexpand/latexpand
SHEBANG_FILES+=	texk/texlive/linked_scripts/ltxfileinfo/ltxfileinfo
SHEBANG_FILES+=	texk/texlive/linked_scripts/lua2dox/lua2dox_filter
SHEBANG_FILES+=	texk/texlive/linked_scripts/mathspic/mathspic.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/mf2pt1/mf2pt1.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/multibibliography/multibibliography.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/rubik/rubikrotation.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/splitindex/splitindex.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/svn-multi/svn-multi.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/texdirflatten/texdirflatten
SHEBANG_FILES+=	texk/texlive/linked_scripts/ulqda/ulqda.pl
SHEBANG_FILES+=	texk/texlive/linked_scripts/urlbst/urlbst
SHEBANG_FILES+=	texk/texlive/linked_scripts/yplan/yplan

INFO=	dvipng tlbuild

FILES+=	${WRKSRC}/configure

_FILES+= ${WRKSRC}/README.3installing
_FILES+= ${WRKSRC}/configure
_FILES+= ${WRKSRC}/doc/tlbuild.info
_FILES+= ${WRKSRC}/texk/bibtex-x/Makefile.in
_FILES+= ${WRKSRC}/texk/chktex/Makefile.in
_FILES+= ${WRKSRC}/texk/chktex/chktex-1.7.4/chktexrc
_FILES+= ${WRKSRC}/texk/cjkutils/Makefile.in
_FILES+= ${WRKSRC}/texk/dvipdfm-x/Makefile.in
_FILES+= ${WRKSRC}/texk/dvipdfm-x/data/dvipdfmx.cfg
_FILES+= ${WRKSRC}/texk/dvipdfm-x/tests/dvipdfmx.cfg
_FILES+= ${WRKSRC}/texk/dvipsk/Makefile.in
_FILES+= ${WRKSRC}/texk/gsftopk/Makefile.in
_FILES+= ${WRKSRC}/texk/kpathsea/Makefile.in
_FILES+= ${WRKSRC}/texk/kpathsea/texmf.cnf
_FILES+= ${WRKSRC}/texk/lcdf-typetools/configure
_FILES+= ${WRKSRC}/texk/makeindexk/ChangeLog
_FILES+= ${WRKSRC}/texk/psutils/Makefile.in
_FILES+= ${WRKSRC}/texk/tests/TeXLive/TLUtils.pm
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/Makefile.am
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/Makefile.in
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/context/stubs/unix/mtxrun
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/latexindent/latexindent.pl
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/ltxfileinfo/ltxfileinfo
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/pedigree-perl/pedigree.pl
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/ptex2pdf/ptex2pdf.lua
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/texlive/fmtutil-sys.sh
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/texlive/fmtutil.pl
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/texlive/rungs.tlu
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/texlive/tlmgr.pl
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/texlive/updmap-sys.sh
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/texlive/updmap.pl
_FILES+= ${WRKSRC}/texk/texlive/tl_scripts/Makefile.in
_FILES+= ${WRKSRC}/texk/ttf2pk2/Makefile.in
_FILES+= ${WRKSRC}/texk/web2c/ptexdir/INSTALL.txt
_FILES+= ${WRKSRC}/texk/web2c/synctexdir/tests/footest.synctex
_FILES+= ${WRKSRC}/texk/xdvik/Makefile.in
_FILES+= ${WRKSRC}/utils/xindy/configure
_FILES+= ${WRKSRC}/utils/ps2eps/Makefile.in
_FILES+= ${WRKSRC}/utils/texdoctk/Makefile.in
_FILES+= ${WRKSRC}/texk/tex4htk/Makefile.in
_FILES+= ${WRKSRC}/texk/texlive/linked_scripts/texliveonfly/texliveonfly.py

post-patch:
	cd ${WRKSRC}/texk/texlive && \
	    ${REINPLACE_CMD} -e 's,%%PREFIX%%,${PREFIX},' \
	    linked_scripts/texlive/fmtutil-sys.sh \
	    tl_scripts/texconfig-sys.sh \
	    linked_scripts/texlive/updmap-sys.sh

	${REINPLACE_CMD} -e 's,pixman-1,pixman,g' ${FILES}
	${REINPLACE_CMD} -I '.orig' -e 's,texmf-dist,texmf,g' ${_FILES}


post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/texmf/scripts/texlive

	${MKDIR} ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/TeXLive
	${INSTALL_DATA} ${WRKDIR}/${TL_EXTRA_NAME}/tlpkg/TeXLive/*.pm \
	    ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/TeXLive

	${MKDIR} ${STAGEDIR}/var/db/tlpkg
	${TOUCH} ${STAGEDIR}/var/db/tlpkg/tlmgr.log
	${MKDIR} ${STAGEDIR}${PREFIX}//share/texmf
	${TOUCH} ${STAGEDIR}${PREFIX}//share/texmf/.texlive-tlmgr
	${XZCAT} ${DISTDIR}/${DIST_SUBDIR}/${TLPKG_FILE}.xz \
	    > ${STAGEDIR}/var/db/tlpkg/texlive.tlpdb
	${INSTALL_DATA} ${STAGEDIR}${PREFIX}/share/texmf/web2c/texmf.cnf \
	    ${STAGEDIR}/var/db/tlpkg
	${MKDIR} ${STAGEDIR}/var/db/tlpkg/backups
	${MKDIR} ${STAGEDIR}/var/db/tlpkg/tlpobj
	${LN} -sf /var/db/tlpkg ${STAGEDIR}${PREFIX}/share/tlpkg

	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  aleph lamed
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  eptex platex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  euptex uplatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  luatex dvilualatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  luatex dviluatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  luatex lualatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  luatex lualollipop
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex amstex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex cslatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex csplain
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex eplain
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex etex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex jadetex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex latex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex lollipop
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex mex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex mllatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex mltex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex pdfcslatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex pdfcsplain
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex pdfetex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex pdfjadetex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex pdflatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex pdfmex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex pdfxmltex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex texsis
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex utf8mex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  pdftex xmltex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  xetex xelatex
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf  xetex xelollipop

#gsed -i -e 's,"PRIu64"," PRIu64 ",' work/texlive-20150521-source/texk/web2c/pdftoepdf.cc

.include <bsd.port.mk>
#EOF
