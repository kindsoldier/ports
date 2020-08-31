#
# $Id$
#
PORTNAME=	libboost
PORTVERSION=	1.72.0
PORTVERSUFFIX=	${PORTVERSION:C/\.[0-9]+$//}
DISTNAME=	boost_${PORTVERSION:S/./_/g}
CATEGORIES=	devel
MASTER_SITES=	https://dl.bintray.com/boostorg/release/${PORTVERSION}/source/
PKGNAMESUFFIX=  72

COMMENT=	Free portable C++ libraries (without Boost.Python)
MAINTAINER=	onborodin@gmail.com


LIB_DEPENDS+= 	libicui18n.so:devel/libicu

PREFIX=         ${LOCALBASE}/boost72

USE_BZIP2=	yes
USE_LDCONFIG=	yes
PKGMESSAGE=	${WRKDIR}/pkg-message
#MAKE_JOBS_SAFE=	yes
#BJAM=		bjam
CXXFLAGS+=	-Wno-long-long

BJAM_ARGS+=	optimization=speed
BJAM_ARGS=	--layout=system
BJAM_ARGS=	--disable-long-double
###BJAM_ARGS+=	--build-type=complete
BJAM_ARGS+=	--without-python
BJAM_ARGS+=	--without-mpi
BJAM_ARGS+=	-d2
BJAM_ARGS+=	variant=release
BJAM_ARGS+=	threading=multi
BJAM_ARGS+=	link=shared,static

BJAM_ARGS+=	-sICU_PATH=${LOCALBASE}
#BJAM_ARGS+=	-sICONV_PATH=${LOCALBASE}

#BJAM_ARGS+=	instruction-set=i586
BJAM_ARGS+=    cxxflags="${CXXFLAGS:N-O*}" cflags="${CFLAGS:N-O*}"

#BOOST_TOOLSET=	${CHOSEN_COMPILER_TYPE}
BOOST_TOOLSET=	clang
BJAM_ARGS+=	--toolset=${BOOST_TOOLSET}

CXXFLAGS+=	-fPIC
CPPFLAGS+=	-pthread -fPIC
CFLAGS+=	-pthread -fPIC
LDFLAGS+=	-pthread

CC=		clang
CXX=		clang++


BJAM=	${WRKSRC}/b2 #jam
CHOSEN_COMPILER_TYPE=	clang
BOOST_TOOLSET=	${CHOSEN_COMPILER_TYPE}

post-patch:
.if defined(USE_BINUTILS)
	${ECHO} "using ${BOOST_TOOLSET} : : ${CXX} : <linkflags>-B${LOCALBASE}/bin ;" >> ${WRKSRC}/tools/build/src/user-config.jam
.else
	${ECHO} "using ${BOOST_TOOLSET} : : ${CXX} ;" >> ${WRKSRC}/tools/build/src/user-config.jam
.endif


do-configure:
	cd ${WRKSRC} && ${MAKE_ENV} ./bootstrap.sh --prefix=${PREFIX} --with-toolset=${BOOST_TOOLSET}


do-build:
	cd ${WRKSRC} && \
	    ${SETENV} ${MAKE_ENV} ${BJAM} ${BJAM_ARGS} --prefix=${PREFIX} -j${MAKE_JOBS_NUMBER}  stage 


do-install:
	cd ${WRKSRC} && \
		${SETENV} ${MAKE_ENV} ${BJAM} --prefix=${STAGEDIR}${PREFIX} ${BJAM_ARGS} install

#post-install:
#	${MKDIR} ${STAGEDIR}${PREFIX}/bin
#	${INSTALL_PROGRAM} ${WRKSRC}/tools/build/src/engine/bin.*/bjam \
#		${STAGEDIR}${PREFIX}/bin/


.include <bsd.port.mk>
#EOF

