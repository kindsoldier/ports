# Created by: chuckr@FreeBSD.org

PORTNAME=	octave
PORTVERSION=	6.3.0
CATEGORIES=	math
MASTER_SITES=	GNU

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	High-level interactive language for numerical computations


CONFIGURE_ARGS+= --disable-java
CONFIGURE_ARGS+= --without-qt
CONFIGURE_ARGS+= --without-qscintilla

LIB_DEPENDS+= libGLU.so:graph/libGLU
LIB_DEPENDS+= libGL.so:graph/libmesa
LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libcurl.so:net/libcurl
LIB_DEPENDS+= libdrm.so:system/libdrm
LIB_DEPENDS+= libexpat.so:text/libexpat
LIB_DEPENDS+= libfftw3.so:math/libfftw3
LIB_DEPENDS+= libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+= libfreetype.so:graph/libfreetype2
LIB_DEPENDS+= libglapi.so:graph/libmesa
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libnghttp2.so:net/libnghttp2
LIB_DEPENDS+= libpcre.so:text/libpcre
LIB_DEPENDS+= libpng16.so:graph/libpng
LIB_DEPENDS+= libportaudio.so:media/libportaudio
LIB_DEPENDS+= libreadline.so:devel/libreadline
LIB_DEPENDS+= libsndfile.so:media/libsndfile

#CONFIGURE_ARGS+= --with-qt=qt4

BUILD_DEPENDS+= ${LOCALBASE}/bin/gnuplot:math/gnuplot
BUILD_DEPENDS+= ${LOCALBASE}/bin/gsed:textproc/gsed
BUILD_DEPENDS+= ${LOCALBASE}/bin/makeinfo:print/texinfo
BUILD_DEPENDS+= ${LOCALBASE}/bin/gperf:devel/gperf

RUN_DEPENDS+= ${LOCALBASE}/bin/gnuplot:math/gnuplot
RUN_DEPENDS+= ${LOCALBASE}/bin/gsed:textproc/gsed
RUN_DEPENDS+= ${LOCALBASE}/bin/makeinfo:print/texinfo

#RUN_DEPENDS=	gnuplot:math/gnuplot \
#		gsed:textproc/gsed \
#		${LOCALBASE}/bin/makeinfo:print/texinfo
#LIB_DEPENDS=	libGraphicsMagick.so:graphics/GraphicsMagick \
#		libarpack.so:math/arpack-ng \
#		libcurl.so:ftp/curl \
#		libfftw3.so:math/fftw3 \
#		libfftw3f.so:math/fftw3-float \
#		libfltk.so:x11-toolkits/fltk \
#		libftgl.so:graphics/ftgl \
#		libhdf5.so:science/hdf5 \
#		libpcre.so:devel/pcre \
#		libqhull.so.7:math/qhull \
#		libqrupdate.so:math/qrupdate \
#		libamd.so:math/suitesparse-amd \
#		libcamd.so:math/suitesparse-camd \
#		libccolamd.so:math/suitesparse-ccolamd \
#		libcholmod.so:math/suitesparse-cholmod \
#		libcolamd.so:math/suitesparse-colamd \
#		libsuitesparseconfig.so:math/suitesparse-config \
#		libcxsparse.so:math/suitesparse-cxsparse \
#		libklu.so:math/suitesparse-klu \
#		libumfpack.so:math/suitesparse-umfpack \
#		libglpk.so:math/glpk \
#		libgl2ps.so:print/gl2ps \
#		libfontconfig.so:x11-fonts/fontconfig \
#		libfreetype.so:print/freetype2 \
#		libdrm.so:graphics/libdrm \
#		libOSMesa.so:graphics/libosmesa \
#		libsundials_arkode.so:math/sundials \
#		libportaudio.so:audio/portaudio
##		libsndfile.so:audio/libsndfile # Commented out until this port no longer has vulnerabilities.



USES=		charsetfix gmake perl5 pkgconfig tar:xz compiler:c++14-lang iconv
USE_LDCONFIG=	${PREFIX}/lib/${PORTNAME}/${PORTVERSION}
USE_PERL5=	build
GNU_CONFIGURE=	yes
#USE_QT=		core gui help network opengl \
#		qmake_build buildtools_build linguist_build \
#		printsupport sql widgets \
#		xml
#USE_XORG=	x11 xext xfixes xft \
#		xcursor xinerama xrender
#USE_GL=		gl glu

MOC_QTVER=moc-qt4
UIC_QTVER=uic-qt4
RCC_QTVER=rcc-qt4


OCTAVE_VERSION=	${PORTVERSION}
GNU_HOST=	${ARCH}-portbld-freebsd${OSREL}
PLIST_SUB=	OCTAVE_VERSION=${OCTAVE_VERSION} GNU_HOST=${GNU_HOST}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib 
CONFIGURE_ENV+=	GPERF="${LOCALBASE}/bin/gperf"
#CONFIGURE_ENV+=	JAVA_HOME=${JAVA_HOME}
CONFIGURE_ENV+=	MAKEINFO=${LOCALBASE}/bin/makeinfo
CONFIGURE_ENV+=	MKINFO=${LOCALBASE}/bin/makeinfo

CONFIGURE_ENV+=	MOC_QTVER=${MOC}
CONFIGURE_ENV+=	UIC_QTVER=${UIC}
CONFIGURE_ENV+=	RCC_QTVER=${RCC}

CONFIGURE_ENV+=	LRELEASE_QTVER=${LRELEASE}
#CONFIGURE_ENV+=	QCOLLECTIONGENERATOR_QTVER=${QCOLLECTIONGENERATOR}
#CONFIGURE_ENV+=	QHELPGENERATOR_QTVER=${QHELPGENERATOR}
CONFIGURE_ENV+=	ac_cv_type_max_align_t=yes
CONFIGURE_ENV+=	ac_cv_path_SED=${LOCALBASE}/bin/gsed

CONFIGURE_ARGS+= --host=${GNU_HOST}
#CONFIGURE_ARGS+= --with-blas="-L${LOCALBASE}/lib ${BLASLIB}"
#CONFIGURE_ARGS+= --with-lapack="${LAPACKLIB}"
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --disable-jit
CONFIGURE_ARGS+= --disable-openmp
#CONFIGURE_ARGS+= --with-osmesa

#INFO=		octave liboctave

INSTALL_TARGET=	install-strip

#OPTIONS_DEFINE=	DOCS JAVA QT5

#OPTIONS_RADIO=		BLAS
#OPTIONS_RADIO_BLAS=	OPENBLAS NETLIB ATLAS
#OPTIONS_DEFAULT=	JAVA OPENBLAS QT5
#OPTIONS_SUB=		yes

#DOCS_CONFIGURE_ENABLE=	docs
#JAVA_CONFIGURE_ENABLE=	java
#QT5_CONFIGURE_WITH=	qt=5 qscintilla

#QT5_LIB_DEPENDS=	libqscintilla2_qt5.so:devel/qscintilla2-qt5

#DOCS_USE=	TEX=dvipsk:build,formats:build
#JAVA_USE=	JAVA=yes
#QT5_USES=	qt:5
#OPENBLAS_USES=	blaslapack:openblas
#NETLIB_USES=	blaslapack:netlib
#ATLAS_USES=		blaslapack:atlas

post-patch:
	${REINPLACE_CMD} 's|"makeinfo"|"${LOCALBASE}/bin/makeinfo"|' ${WRKSRC}/libinterp/corefcn/help.cc
	${REINPLACE_CMD} 's|"-qt=$$qt_version"|"-qt=qt$$qt_version"|' ${WRKSRC}/configure

#post-install:
#	cd ${STAGEDIR}${DATADIR} && ${LN} -s ${PORTVERSION}/imagelib  .


.include <bsd.port.mk>
