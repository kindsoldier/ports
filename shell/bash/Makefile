# Created by: Oliver Eikemeier
# $FreeBSD: head/shells/bash/Makefile 499556 2019-04-21 18:27:08Z ehaupt $

PORTNAME=		bash
PORTVERSION=		5.2
#PORTVERSION=            5.0.${PATCHLEVEL:S/^0//g}
#PATCHLEVEL=		7
CATEGORIES=		shells
MASTER_SITES=		GNU
#DISTNAME=		${PORTNAME}-${PORTVERSION:R}
DIST_SUBDIR=		${PORTNAME}
EXTRACT_ONLY=		${DISTNAME}${EXTRACT_SUFX}

#PATCH_SITES=		GNU/${PORTNAME}/${DISTNAME}-patches/
#PATCHFILES!=		/usr/bin/jot -s " " -w \
#			${PORTNAME}${PORTVERSION:R:S/.//g}-%03d \
#			${PATCHLEVEL} 1 ${PATCHLEVEL}

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext

MAINTAINER= ehaupt@FreeBSD.org
COMMENT= GNU Project's Bourne Again SHell

USES=			pathfix
GNU_CONFIGURE=		yes


CONFIGURE_ARGS+= --with-libiconv-prefix=${ICONV_PREFIX}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}

CONFIGURE_ARGS+= --enable-help-builtin
CONFIGURE_ARGS+= --without-bash-malloc
CONFIGURE_ARGS+= --disable-rpath
CONFIGURE_ARGS+= --enable-disabled-builtins

CONFIGURE_ARGS+= --enable-xpg-echo-default
CONFIGURE_ARGS+= --enable-array-variables
CONFIGURE_ARGS+= --enable-alias
CONFIGURE_ARGS+= --enable-select
CONFIGURE_ARGS+= --enable-progcomp
CONFIGURE_ARGS+= --enable-multibyte
CONFIGURE_ARGS+= --enable-process-substitution
CONFIGURE_ARGS+= --enable-directory-stack
CONFIGURE_ARGS+= --enable-dparen-arithmetic
CONFIGURE_ARGS+= --enable-job-control
CONFIGURE_ARGS+= --enable-net-redirections
CONFIGURE_ARGS+= --enable-arith-for-command
CONFIGURE_ARGS+= --enable-net-redirections
CONFIGURE_ARGS+= --enable-bang-history
CONFIGURE_ARGS+= --enable-brace-expansion
CONFIGURE_ARGS+= --enable-command-timing
CONFIGURE_ARGS+= --enable-cond-command
CONFIGURE_ARGS+= --enable-cond-regexp

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info


CONFIGURE_ARGS+= --disable-static-link
LDFLAGS+= -Wl,-export-dynamic

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INFO=			bash


STANDARD_PATH=	/sbin:/bin:/usr/sbin:/usr/bin
CPPFLAGS+= -DDEFAULT_PATH_VALUE='\"${STANDARD_PATH}:${LOCALBASE}/sbin:${LOCALBASE}/bin\"'
CPPFLAGS+= -DSTANDARD_UTILS_PATH='\"${STANDARD_PATH}\"'

#post-patch:
#	${TOUCH} ${WRKSRC}/parse.y
#	${RM} ${WRKSRC}/y.tab.c

.include <bsd.port.mk>
