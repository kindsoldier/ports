# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD:perl/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-LibXML
PORTVERSION=	2.0124
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to Gnome libxml2 library


BUILD_DEPENDS+=	p5-XML-NamespaceSupport>=1.07:perl/p5-XML-NamespaceSupport
BUILD_DEPENDS+=	p5-XML-SAX>=0.11:perl/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV=	XMLPREFIX=${LOCALBASE}
CFLAGS+= -I${LOCALBASE}/include


PKGDEINSTALL=	${PKGINSTALL}

CONFLICTS=	p5-XML-LibXML-XPathContext-[0-9]* p5-XML-LibXML-Common-[0-9]*

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/XML/LibXML/LibXML.so

.include <bsd.port.mk>
#EOF
