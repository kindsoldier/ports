# Created by: clive
# $FreeBSD:perl/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Template-Toolkit
PORTVERSION=	2.27
CATEGORIES=	www textproc perl5
MASTER_SITES=	CPAN http:perl/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extensive Toolkit for template processing


BUILD_DEPENDS+=	p5-AppConfig>=1.56:perl/p5-AppConfig

BUILD_DEPENDS+=	p5-Date-Calc>=0:perl/p5-Date-Calc
BUILD_DEPENDS+=	p5-Image-Info>=0:perl/p5-Image-Info
BUILD_DEPENDS+=	p5-Image-Size>=0:perl/p5-Image-Size
BUILD_DEPENDS+=	p5-Pod-POM>=0:perl/p5-Pod-POM

RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	TT_ACCEPT=y

post-patch:
	${REINPLACE_CMD} -e '/PREFIX/ s|/usr/local|${PREFIX}/share|' ${WRKSRC}/Makefile.PL

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Template/Stash/XS/XS.so

.include <bsd.port.mk>
#EOF
