# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/pcre2/Makefile 492318 2019-02-06 18:49:07Z krion $

PORTNAME=	pcre2
PORTVERSION=	10.32
CATEGORIES=	devel
MASTER_SITES+=	SF/pcre/${PORTNAME}/${PORTVERSION}
MASTER_SITES+=	ftp://ftp.csx.cam.ac.uk/pub/software/programming/pcre/
MASTER_SITES+=	ftp://ftp.fu-berlin.de/unix/misc/pcre/
MASTER_SITES+=	ftp://ftp.tin.org/pub/libs/pcre/
PKGNAMEPREFIX=  lib

MAINTAINER=	krion@FreeBSD.org
COMMENT=	Perl Compatible Regular Expressions library, version 2

LIB_DEPENDS+=   libreadline.so:devel/libreadline

USES= gmake

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+= --enable-pcre2-16
CONFIGURE_ARGS+= --enable-pcre2-32
CONFIGURE_ARGS+= --enable-pcre2test-libreadline

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


.include <bsd.port.options.mk>

.if ${ARCH} != "sparc64" && ${ARCH:Mmips64*} == ""
CONFIGURE_ARGS+=	--enable-jit
.else
CONFIGURE_ARGS+=	--disable-jit
.endif

#CONFIGURE_ARGS+=	--disable-stack-for-recursion
#CONFIGURE_ARGS+=	--with-link-size=${WITH_LINK_SIZE}
#CONFIGURE_ARGS+=	--with-match-limit=${WITH_MATCH_LIMIT}
#CONFIGURE_ARGS+=	--with-match-limit-recursion=${WITH_MATCH_LIMIT_RECURSION}
#CONFIGURE_ARGS+=	--with-parens-nest-limit=${WITH_PARENS_NEST_LIMIT}

.include <bsd.port.mk>
#EOF
