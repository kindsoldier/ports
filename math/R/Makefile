# Created by: Maurice Castro <maurice@serc.rmit.edu.au>
# $FreeBSD: head/math/R/Makefile 504483 2019-06-18 13:04:57Z pkubaj $

PORTNAME=	R
DISTVERSION=	3.6.1
CATEGORIES=	math lang
MASTER_SITES=	CRAN/src/base/R-${PORTVERSION:C|\..*||}

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Language for statistical computing and graphics


ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386 powerpc64

LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libpcre.so:text/libpcre


LIB_DEPENDS+= libreadline.so:devel/libreadline
LIB_DEPENDS+= libcairo.so:gnome/libcairo
LIB_DEPENDS+= libicudata.so:devel/libicu
LIB_DEPENDS+= libpcre.so:text/libpcre
LIB_DEPENDS+= libintl.so:devel/gettext
LIB_DEPENDS+= libiconv.so:text/libiconv

LIB_DEPENDS+=   libnghttp2.so:net/libnghttp2
LIB_DEPENDS+=   libjpeg.so:graph/libjpeg
LIB_DEPENDS+=   libpng.so:graph/libpng


#BUILD_DEPENDS=	texi2any:text/texinfo

RUN_DEPENDS=	gmake:devel/gmake

BUILD_DEPENDS+= gfortran:devel/gcc
RUN_DEPENDS+= gfortran:devel/gcc

LIBVER=		${PORTVERSION:R:R}


CC= gcc
CXX= g++


# possible TODO
# - Use --with-recommended-packages=no by default
# - Add an option for recommended packages
# - Create ports for each of the recommended packages
# - Create a meta-port for the recommended packages

USES=		compiler:c++11-lang gmake localbase perl5
USE_LDCONFIG=	${PREFIX}/lib/R/lib
USE_PERL5=	build

CONFIGURE_ARGS+= --disable-java
CONFIGURE_ARGS+= --enable-R-shlib
CONFIGURE_ARGS+= --with-readline

CONFIGURE_ARGS+= --disable-openmp
#CONFIGURE_ARGS+= --enable-R-shlib
#CONFIGURE_ARGS+= --enable-R-static-lib
CONFIGURE_ARGS+= --with-ICU
CONFIGURE_ARGS+= --without-aqua
CONFIGURE_ARGS+= --without-blas
CONFIGURE_ARGS+= --with-cairo
CONFIGURE_ARGS+= --with-jpeglib
CONFIGURE_ARGS+= --without-lapack
CONFIGURE_ARGS+= --with-libpng
CONFIGURE_ARGS+= --with-libtiff
CONFIGURE_ARGS+= --with-readline
CONFIGURE_ARGS+= --without-tcltk

CONFIGURE_ARGS+= --disable-BLAS-shlib

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip



.include <bsd.port.options.mk>

# LLVM, which gets pulled in with FLANG, provides libomp.  So, only depend on
# devel/openmp when GFORTRAN and OPENMP are on.
#.if ! ${PORT_OPTIONS:MFLANG} && ${PORT_OPTIONS:MOPENMP}
#LIB_DEPENDS+=	libomp.so:devel/openmp
#.endif

post-patch:
	${REINPLACE_CMD} -e "s|/usr/local|${LOCALBASE}|g" ${WRKSRC}/configure
	${REINPLACE_CMD} "s|%%LIBVER%%|${LIBVER}|" \
		${WRKSRC}/src/main/Makefile.in \
		${WRKSRC}/src/extra/blas/Makefile.in \
		${WRKSRC}/src/modules/lapack/Makefile.in

#post-install-RBLAS-on:
#	${REINPLACE_CMD} -e "s| -lR| -lR -lRblas|" \
#		${STAGEDIR}${PREFIX}/libdata/pkgconfig/libR.pc

#post-install-RBLAS-off:
#	${REINPLACE_CMD} -e "s| -lR| -lR ${BLASLIB}|" \
#		${STAGEDIR}${PREFIX}/libdata/pkgconfig/libR.pc

.include <bsd.port.mk>
