# Created by: Kiriyama Kazuhiko <kiri@kiri.toba-cmt.ac.jp>
# $FreeBSD: head/lang/ocaml/Makefile 536967 2020-05-29 11:27:54Z antoine $
# for committer: bump PORTREVISION for math/facile whenever ocaml gets updated

PORTNAME=	ocaml
PORTVERSION=	4.10.0
CATEGORIES=	lang
MASTER_SITES+=	http://caml.inria.fr/pub/distrib/${DISTNAME:R}/ GENTOO
MASTER_SITES+=  http://caml.inria.fr/pub/distrib/${DISTNAME:R}/:docs
PKGNAMESUFFIX=	${SFX}

MAINTAINER=	michipili@gmail.com
COMMENT=	Objective Caml compiler and programming environment

USES=		compiler:c11 gmake tar:xz autoreconf
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
SSP_UNSAFE=	yes
MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.mk>
