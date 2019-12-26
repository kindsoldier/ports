#
# $Id$
#
PORTNAME=	xvid
PORTVERSION=	1.3.2
CATEGORIES=	multimedia
MASTER_SITES=	http://downloads.xvid.org/downloads/
DISTNAME=	${PORTNAME}core-${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	An opensource MPEG-4 codec, based on OpenDivx

GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --disable-assembly
#CONFIGURE_ARGS+= --disable-pthread
CONFIGURE_ENV+=	ac_cv_prog_ac_yasm=no
MAKE_JOBS_UNSAFE=	yes

WRKSRC=			${WRKDIR}/${PORTNAME}core/build/generic
MAKE_ARGS+= V=1

.include <bsd.port.pre.mk>


.if ${ARCH} == "amd64"
CONFIGURE_TARGET=	x86_64-portbld-freebsd${OSREL}
.endif
.if ${ARCH} == "amd64" || ${ARCH} == "i386"
BUILD_DEPENDS+=	nasm:devel/nasm
.endif



post-install:
	cd  ${STAGEDIR}/${PREFIX}/lib && ${LN} -sf libxvidcore.so.4 libxvidcore.so

.include <bsd.port.post.mk>
#EOF
