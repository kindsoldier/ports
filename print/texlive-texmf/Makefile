#
# $Id$
#
PORTNAME=	texlive
PORTVERSION=	20150523
CATEGORIES=	print
MASTER_SITES+=	ftp://ftp.tug.org/historic/systems/texlive/2015/:texmf
MASTER_SITES+=	LOCAL/hrs:latex
PKGNAMESUFFIX=	-texmf
TEXMF_DISTNAME=	${PORTNAME}-${PORTVERSION}${PKGNAMESUFFIX}${EXTRACT_SUFX}
LATEX_DISTNAME=	latex-base-20150101.2${EXTRACT_SUFX}
DISTFILES+=	${TEXMF_DISTNAME}:texmf
DISTFILES+=	${LATEX_DISTNAME}:latex
DIST_SUBDIR=	TeX
EXTRACT_ONLY=	${LATEX_DISTNAME}

PKG_NOCOMPRESS=		yes


MAINTAINER=	hrs@FreeBSD.org
COMMENT=	TeX Live Typesetting System, texmf Tree

USES=		tar:xz
NO_BUILD=	yes
NO_WRKSUBDIR=	yes
NO_ARCH=	yes

TEXMF_DISTFILE= ${DISTDIR}/${DIST_SUBDIR}/${TEXMF_DISTNAME}
LATEX_DISTFILE= ${DISTDIR}/${DIST_SUBDIR}/${LATEX_DISTNAME}


_FILES+= ptex2pdf/ptex2pdf.lua
_FILES+= texlive/fmtutil.pl
_FILES+= texlive/updmap.pl
_FILES+= texlive/tlmgr.pl
_FILES+= texlive/updmap-sys.sh
_FILES+= texlive/fmtutil-sys.sh
_FILES+= texlive/rungs.tlu
_FILES+= texlive/tlmgrgui.pl
_FILES+= pythontex/pythontex_install.py
_FILES+= context/stubs/win64/mtxrun.lua
_FILES+= context/stubs/unix/mtxrun
_FILES+= context/stubs/mswin/mtxrun.lua
_FILES+= context/lua/mtxrun.lua
_FILES+= context/lua/mtxlibs.lua
_FILES+= ltxfileinfo/ltxfileinfo
_FILES+= latexindent/latexindent.pl
_FILES+= pedigree-perl/pedigree.pl


do-build:
	cd ${WRKDIR} && tar xzvpf ${LATEX_DISTFILE}
	cd ${WRKDIR}/latex-base-20150101.2 && \
	    ${SETENV} TEXMF=. ${LOCALBASE}/bin/tex -ini unpack.ins
#	    ${RM} README *.log *.aux *.pdf *.dtx *.ins *.txt *.ist *.fdd *.err


do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/texmf
	cd ${STAGEDIR}${PREFIX}/share/texmf && \
	    ${TAR} -xzvp  --strip-components 2 \
		--no-same-permission --no-same-owner \
		-f ${TEXMF_DISTFILE}
	${MKDIR} ${STAGEDIR}${PREFIX}/share/texmf/tex/latex/base
	cd ${WRKDIR}/latex-base-20150101.2 && ${PAX} -rw . \
	    ${STAGEDIR}${PREFIX}/share/texmf/tex/latex/base

post-install:
.for F in ${_FILES}
	cd ${STAGEDIR}${PREFIX}/share/texmf/scripts && \
	    ${REINPLACE_CMD} -e 's,textmf-dist,textmf,g' ${F}
.endfor


.include <bsd.port.mk>
