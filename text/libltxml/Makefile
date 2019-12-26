# Created by: Samuel Tardieu <sam@inf.enst.fr>
# $FreeBSD: head/textproc/ltxml/Makefile 434166 2017-02-15 14:48:54Z tijl $

PORTNAME=	ltxml
PORTVERSION=	1.2.9
CATEGORIES=	textproc
MASTER_SITES=	GENTOO ftp://ftp.cogsci.ed.ac.uk/pub/LTXML/
PKGNAMEPREFIX=  lib


MAINTAINER=	ports@FreeBSD.org
COMMENT=	XML Toolkit


WRKSRC=		${WRKDIR}/${DISTNAME}/XML

USES=		gmake perl5
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-zlib=/usr --datadir=${STAGEDIR}${PREFIX}/lib/ltxml12
# textproc/py-ltxml links libltapi12.a and libltstd12.a into a shared library.
CFLAGS+=	-fPIC

.include <bsd.port.options.mk>


post-patch:
	@${REINPLACE_CMD} -e 's|CFLAGS=.*$$|CFLAGS=\$$CFLAGS|g ; \
		 s|CXXFLAGS=.*$$|CXXFLAGS=\$$CXXFLAGS|g' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|@prefix@|${STAGEDIR}${PREFIX}|' \
		${WRKSRC}/src/Makefile.sub.in

.include <bsd.port.mk>
