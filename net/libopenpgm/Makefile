# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/net/openpgm/Makefile 494242 2019-03-01 08:08:14Z tobik $

PORTNAME=	openpgm
DISTVERSIONPREFIX=	release-
DISTVERSION=	5-2-122
CATEGORIES=	net devel
PKGNAMEPREFIX=  lib

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
PATCHFILES=	ee25ff3d13f2639b4c3a42125e79f77f921c3320.patch:-p3

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Implementation of the PGM reliable multicast protocol

USE_GITHUB=	yes
GH_ACCOUNT=	steve-o

GNU_CONFIGURE=	yes
USES=		autoreconf gmake compiler:c11 pathfix perl5 libtool python:build
USE_PERL5=	build
USE_LDCONFIG=	yes
WRKSRC_SUBDIR=	openpgm/pgm
INSTALL_TARGET=	install-strip


#post-install-DOCS-on:
#	@${MKDIR} ${STAGEDIR}${DOCSDIR}
#	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/../doc/,} ${STAGEDIR}${DOCSDIR}

#post-install-EXAMPLES-on:
#	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
#	(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
