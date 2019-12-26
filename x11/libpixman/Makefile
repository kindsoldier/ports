#
# $Id$
#
PORTNAME=	pixman
PORTVERSION=	0.34.0
CATEGORIES=	x11
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/lib/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Low-level pixel manipulation library

GNU_CONFIGURE=	yes
USES+=		gmake

.include <bsd.port.pre.mk>


.if ${ARCH} == "amd64"

.else
CONFIGURE_ARGS+= --disable-mmx
CONFIGURE_ARGS+= --disable-sse2
CONFIGURE_ARGS+= --disable-sse3
CONFIGURE_ARGS+= --disable-vmx
CONFIGURE_ARGS+= --disable-arm-iwmmxt
CONFIGURE_ARGS+= --disable-arm-iwmmxt2
CONFIGURE_ARGS+= --disable-arm-neon
CONFIGURE_ARGS+= --disable-arm-simd
CONFIGURE_ARGS+= --disable-ssse3

.endif

CONFIGURE_ARGS+= --disable-gtk
CONFIGURE_ARGS+= --disable-silent-rules 
CONFIGURE_ARGS+= --disable-openmp

post-patch:
	cd ${WRKSRC} && ${CP} pixman-1.pc.in pixman.pc.in
	cd ${WRKSRC} && ${CP} pixman-1-uninstalled.pc.in pixman-uninstalled.pc.in

	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|-msse||' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|pixman-1|pixman|g' ${WRKSRC}/configure \
	    ${WRKSRC}/Makefile.in ${WRKSRC}/*.pc.in \
	    ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e 's|pixman_1_|pixman_|g' \
	    ${WRKSRC}/*/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS/s, test,,' ${WRKSRC}/Makefile.in


.include <bsd.port.post.mk>
#EOF
