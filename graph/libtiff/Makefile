#
# $Id: Makefile 2368 2009-09-08 05:55:57Z root $
#
PORTNAME=	libtiff
PORTVERSION=	4.0.6 #3.9.7
CATEGORIES=	graphics devel
MASTER_SITES+=	ftp://ftp.remotesensing.org/pub/libtiff/
MASTER_SITES+=	ftp://ftp.onshore.com/pub/libtiff/ 
MASTER_SITES+=	http://www.libtiff.org/
DISTNAME=	${PORTNAME:S/lib//}-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Tools and library routines for working with TIFF images

LIB_DEPENDS+=	libjpeg.so:graph/libjpeg

WRKSRC=		${WRKDIR}/${PORTNAME:S/^lib//}-${PORTVERSION}
GNU_CONFIGURE=	yes
GNU_MAKE=	yes
MAKE_ARGS+=	program_transform_name=''
CONFIGURE_ARGS+= --without-docdir
CONFIGURE_ARGS+= --with-zlib-include-dir=/usr/include
CONFIGURE_ARGS+= --with-zlib-lib-dir=/usr/lib
CONFIGURE_ARGS+= --with-jpeg-include-dir=${LOCALBASE}/include
CONFIGURE_ARGS+= --with-jpeg-lib-dir=${LOCALBASE}/lib
CONFIGURE_ARGS+= --without-x
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --disable-jbig
INSTALLS_SHLIB=	yes

post-install:
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFError.3tiff          TIFFSetErrorHandler.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFFlush.3tiff          TIFFFlushData.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFGetField.3tiff       TIFFGetFieldDefaulted.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFGetField.3tiff       TIFFVGetField.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFGetField.3tiff       TIFFVGetFieldDefaulted.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFOpen.3tiff           TIFFFdOpen.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFOpen.3tiff           TIFFClientOpen.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFRGBAImage.3tiff      TIFFRGBAImageOK.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFRGBAImage.3tiff      TIFFRGBAImageBegin.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFRGBAImage.3tiff      TIFFRGBAImageGet.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFRGBAImage.3tiff      TIFFRGBAImageEnd.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFRGBAImage.3tiff      TIFFReadRGBAImageOriented.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFSetDirectory.3tiff   TIFFSetSubDirectory.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFSetField.3tiff       TIFFVSetField.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFWarning.3tiff        TIFFSetWarningHandler.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFWriteDirectory.3tiff TIFFRewriteDirectory.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFbuffer.3tiff         TIFFReadBufferSetup.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFbuffer.3tiff         TIFFWriteBufferSetup.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFcodec.3tiff          TIFFFindCODEC.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFcodec.3tiff          TIFFRegisterCODEC.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFcodec.3tiff          TIFFUnRegisterCODEC.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFmemory.3tiff         TIFFfree.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFmemory.3tiff         TIFFmalloc.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFmemory.3tiff         TIFFmemcmp.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFmemory.3tiff         TIFFmemcpy.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFmemory.3tiff         TIFFmemset.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFmemory.3tiff         TIFFrealloc.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFCurrentDirectory.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFCurrentRow.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFCurrentStrip.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFCurrentTile.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFFileName.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFFileno.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFGetMode.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFIsTiled.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFIsByteSwapped.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFIsUpSampled.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFIsMSB2LSB.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFquery.3tiff          TIFFLastDirectory.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFsize.3tiff           TIFFScanlineSize.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFstrip.3tiff          TIFFComputeStrip.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFstrip.3tiff          TIFFDefaultStripSize.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFstrip.3tiff          TIFFNumberOfStrips.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFstrip.3tiff          TIFFStripSize.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFstrip.3tiff          TIFFVStripSize.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFswab.3tiff           TIFFReverseBits.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFswab.3tiff           TIFFSwabArrayOfLong.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFswab.3tiff           TIFFSwabArrayOfShort.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFswab.3tiff           TIFFSwabLong.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFswab.3tiff           TIFFSwabShort.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFtile.3tiff           TIFFCheckTile.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFtile.3tiff           TIFFComputeTile.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFtile.3tiff           TIFFDefaultTileSize.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFtile.3tiff           TIFFNumberOfTiles.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFtile.3tiff           TIFFTileSize.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFtile.3tiff           TIFFTileRowSize.3tiff
	cd ${STAGEDIR}${PREFIX}/man/man3 && ${LN} -sf TIFFtile.3tiff           TIFFVTileSize.3tiff


.include <bsd.port.mk>
#EOF
