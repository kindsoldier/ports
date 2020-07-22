# Created by: J. Giovannangeli
# $FreeBSD: head/devel/ocaml-opam/Makefile 526338 2020-02-17 03:14:09Z yuri $

PORTNAME=	opam
PORTVERSION=	2.0.6
CATEGORIES=	devel
MASTER_SITES=	https://github.com/ocaml/opam/releases/download/${DISTVERSION}/
PKGNAMEPREFIX=	ocaml-
DISTNAME=	opam-full-${DISTVERSION}

MAINTAINER=	hannes@mehnert.org
COMMENT=	Source-based package manager for OCaml

RUN_DEPENDS=	curl:net/libcurl
RUN_DEPENDS+=	gpatch:text/gpatch
RUN_DEPENDS+=	rsync:system/rsync
RUN_DEPENDS+=	git:devel/git

USES=		gmake
USE_OCAML=	yes

ALL_TARGET=	lib-ext all

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-checks

MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.mk>
