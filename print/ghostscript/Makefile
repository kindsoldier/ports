# $FreeBSD: head/print/ghostscript9-base/Makefile 415742 2016-05-23 20:35:01Z amdmi3 $

PORTNAME=	ghostscript
PORTVERSION=	9.06
CATEGORIES=	print
#MASTER_SITES+=	http://downloads.ghostscript.com/public/:gs_srcs
#MASTER_SITES+=	SF/ghostscript/GPL%20Ghostscript/${PORTVERSION}:gs_srcs
MASTER_SITES+=	http://www.humblesoft.com/pub/:epag
#PKGNAMESUFFIX=	9-base
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:gs_srcs ${EPAG_SRCS}:epag
DIST_SUBDIR=	${PORTNAME}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	doceng@FreeBSD.org
COMMENT=	Ghostscript 9.x PostScript interpreter, base part

EPAG_BASE=	epag
EPAG_SRCS=	${EPAG_BASE}-3.09.tar.gz
EPAG_NAME=	${EPAG_SRCS:S,.tar.gz$,,}

#LIB_DEPENDS=	libexpat.so:textproc/expat2 \
#		libfreetype.so:print/freetype2 \
#		libidn.so:dns/libidn \
#		libjbig2dec.so:graphics/jbig2dec \
#		liblcms2.so:graphics/lcms2 \
#		libpaper.so:print/libpaper \
#		libpng.so:graphics/png \
#		libtiff.so:graphics/tiff
#RUN_DEPENDS=	${LOCALBASE}/share/${PORTNAME}/fonts/a010013l.pfb:print/gsfonts

RUN_DEPENDS+= ${LOCALBASE}/share/ghostscript/fonts/AvantGarde-Book.pfa:print/gscorefonts/

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjasper.so:graph/libjasper
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libidn.so:net/libidn
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
#LIB_DEPENDS+=	libXau.so:x11/libXau
#LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
#LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libijs.so:print/libijs
LIB_DEPENDS+=	liblcms2.so:graph/liblcms2

LIB_DEPENDS+=	libXt.so:x11/libXt

#USES=		autoreconf gmake jpeg pkgconfig:build tar:bzip2
USES=	gmake pkgconfig:build tar:bzip2
USE_LDCONFIG=	yes
EXTRACT_AFTER_ARGS=	${EXCLUDE_DIRS:S/^/--exclude /}
DATADIR=	${PREFIX}/share/${PORTNAME}/${PORTVERSION}
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes
MAKE_ENV+=	CFLAGS_STANDARD="${CFLAGS}"
MAKE_ENV+=XCFLAGS="${XCFLAGS}" 
MAKE_ENV+=XLDFLAGS="${XLDFLAGS}"
MAKE_ENV+=SOC_LOADER="dxmainc.c"

CONFIGURE_ENV=	${MAKE_ENV}
CONFIGURE_ARGS+=	--disable-compile-inits
CONFIGURE_ARGS+=	--enable-contrib
CONFIGURE_ARGS+=	--enable-dynamic
CONFIGURE_ARGS+=	--enable-freetype
CONFIGURE_ARGS+=	--with-system-libtiff
CONFIGURE_ARGS+=	--with-ijs
CONFIGURE_ARGS+=	--with-libidn
CONFIGURE_ARGS+=	--without-jasper
CONFIGURE_ARGS+=	--with-libpaper
CONFIGURE_ARGS+=	--with-x
CONFIGURE_ARGS+=	--disable-gtk
CONFIGURE_ARGS+=	--with-drivers=""
CONFIGURE_ARGS+=	--enable-cups

CPPFLAGS+=	-DUPD_SIGNAL=0 -I.
CPPFLAGS+=		-I${LOCALBASE}/include/libpng
#CPPFLAGS+=		-I${WRKSRC}/openjpeg/libopenjpeg
#CPPFLAGS+=		-I${WRKSRC}/openjpeg
CPPFLAGS+=		-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
XCFLAGS=	-DA4
XLDFLAGS=	-lpthread
ALL_TARGET=	so
INSTALL_TARGET=	soinstall

CONFIGURE_ARGS+= --with-fontpath="${FONTPATH}"

FP1=	${PREFIX}/share/ghostscript/fonts
FP2=	${LOCALBASE}/share/fonts/ghostscript
FP3=	${LOCALBASE}/share/fonts/Type1
FP4=	${LOCALBASE}/share/fonts/TTF
FP5=	${LOCALBASE}/share/fonts/X11/Type1
FP6=	${LOCALBASE}/share/fonts/X11/TTF
FONTPATH= "${FP1}:${FP2}:${FP3}:${FP4}:${FP5}:${FP6}"



#ICONV_DEVS= oprp opvp
#CONFIGURE_ARGS+=--with-libiconv=maybe
CONFIGURE_ARGS+=--with-libiconv=no

PLIST_SUB=	VERSION="${PORTVERSION}"

SUB_FILES=	pkg-message
SUB_LIST=	DATADIR="${DATADIR}"
PKGMESSAGE=	${WRKDIR}/pkg-message

EXCLUDE_DIRS=	freetype jbig2dec jpeg expat jasper lcms lcms2 libpng tiff zlib

post-extract:
#post-extract-epag:
	${TAR} -C ${WRKSRC} -xzf ${DISTDIR}/${DIST_SUBDIR}/${EPAG_SRCS}
	${LN} -s -f ${EPAG_NAME} ${WRKSRC}/${EPAG_BASE}
	${INSTALL_DATA} ${FILESDIR}/epag.contrib.mak ${WRKSRC}/base/epag.contrib.mak

post-patch:
	${REINPLACE_CMD} -e 's,%%DATADIR%%,${DATADIR},' \
	    ${WRKSRC}/contrib/japanese/dmp_site.ps


pre-build:
	${MKDIR} ${WRKSRC}/obj
	${MKDIR} ${WRKSRC}/bin
#pre-build-epag:
	${LN} -s -f ${WRKSRC}/${EPAG_NAME}/gdevepag.c ${WRKSRC}/base
	${MKDIR} ${WRKSRC}/contrib/epag
	${INSTALL_DATA} ${WRKSRC}/${EPAG_NAME}/* ${WRKSRC}/contrib/epag
#pre-build-epag:
	${LN} -s -f ${WRKSRC}/${EPAG_NAME}/gdevepag.c ${WRKSRC}/base
	${MKDIR} ${WRKSRC}/contrib/epag
	${INSTALL_DATA} ${WRKSRC}/${EPAG_NAME}/* ${WRKSRC}/contrib/epag

post-build:
#post-build-epag:
	cd ${WRKSRC}/${EPAG_NAME} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} Makefile
#post-build-pcl3:
	cd ${WRKSRC} && \
		${CC} ${CFLAGS} -I./obj -I./soobj -I./base \
		-I./contrib/pcl3/eprn -o bin/pcl3opts \
		contrib/pcl3/src/pcl3opts.c contrib/pcl3/src/pclscan.c \
		contrib/pcl3/eprn/mediasize.c contrib/pcl3/src/pclsize.c


pre-install:
	cd ${WRKSRC}/Resource/Init && ${RM} -f \
	    gs_statd.ps.orig gs_ttf.ps.orig pdf_font.ps.orig
	${MKDIR} ${STAGEDIR}${DATADIR}


post-install:
	${LN} -sf gsc ${STAGEDIR}${PREFIX}/bin/gs
	${LN} -s -f ${LOCALBASE}/share/fonts/CIDFont \
	    ${STAGEDIR}${DATADIR}/Resource/CIDFont/fonts
#post-install-epag:
	${INSTALL_PROGRAM} ${WRKSRC}/${EPAG_NAME}/ert ${STAGEDIR}${PREFIX}/bin
#post-install-pcl3:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/pcl3opts ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DATADIR}/pcl3
	cd ${WRKSRC}/contrib/pcl3 && \
		${INSTALL_DATA} lib/example.mcf lib/if-pcl3		\
			ps/calign.ps ps/dumppdd.ps ps/levels-test.ps	\
			ps/margins-A4.ps ps/margins-A4Rotated.ps	\
			ps/margins-Env10Rotated.ps			\
			ps/margins-EnvDLRotated.ps			\
			ps/margins-Letter.ps				\
			ps/margins-LetterRotated.ps			\
			${STAGEDIR}${DATADIR}/pcl3
	cd ${WRKSRC}/contrib/pcl3/doc && \
	    ${INSTALL_MAN} gs-pcl3.1 pcl3opts.1 ${STAGEDIR}${MANPREFIX}/man/man1
#post-install-dmprt:
	cd ${FILESDIR} && \
		${INSTALL_DATA} lqx70ch.upp lqx70cl.upp lqx70cm.upp \
		${STAGEDIR}${DATADIR}/lib
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf ps2ps.1 eps2eps.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf ps2pdf.1 ps2pdf12.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf ps2pdf.1 ps2pdf13.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf ps2pdf.1 ps2pdf14.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf gslp.1 gsbj.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf gslp.1 gsdj.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf gslp.1 gsdj500.1
	cd ${STAGEDIR}${PREFIX}/man/man1 && ${LN} -sf gslp.1 gslj.1



.include <bsd.port.mk>
#EOF
