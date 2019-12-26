#
# $Id: Makefile 2382 2009-09-08 15:24:03Z root $
#
PORTNAME=	fftw
PORTVERSION=	3.3.3
CATEGORIES=	math
#MASTER_SITES+=	ftp://ftp.fftw.org/pub/fftw/ 
#MASTER_SITES+=	http://www.fftw.org/
MASTER_SITES+=	http://distcache.FreeBSD.org/ports-distfiles/
PKGNAMEPREFIX=	lib
PKGNAMESUFFIX=	3f

MAINTAINER=	onborodin@gmail.com
COMMENT=	Fast C routines to compute the Discrete Fourier Transform

LIB_DEPENDS=   libfftw3.so:math/libfftw3

GNU_CONFIGURE=	yes
USES+=		gmake perl5
CONFIGURE_ARGS+= --enable-shared
#CONFIGURE_ARGS+= --enable-threads

CONFIGURE_ARGS+= --disable-fortran
CONFIGURE_ARGS+= --disable-altivec
CONFIGURE_ARGS+= --disable-avx
CONFIGURE_ARGS+= --disable-openmp
#CONFIGURE_ARGS+= --disable-sse
CONFIGURE_ARGS+= --disable-sse2

CONFIGURE_ARGS+= --enable-float

PTHREAD_CFLAGS= -pthread
PTHREAD_LIBS= -pthread

CPPLAGS=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include
CFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
INSTALLS_SHLIB=	yes

post-patch:
	${REINPLACE_CMD} -e \
		's|/etc/fftw|${PREFIX}/etc/fftw|' \
		${WRKSRC}/Makefile.in \
		${WRKSRC}/api/import-system-wisdom.c \
		${WRKSRC}/doc/fftw3* \
		${WRKSRC}/tools/*
	${FIND} ${WRKSRC} -name \*.bak -type f -exec ${RM} -f {} \;


.include <bsd.port.mk>
#EOF

