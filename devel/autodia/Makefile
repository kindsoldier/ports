# Created by: ijliao
# $FreeBSD: head/devel/autodia/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	autodia
PORTVERSION=	2.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TEEJAY
DISTNAME=	Autodia-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Automatic Dia XML - from Source Code and Data

BUILD_DEPENDS=	p5-XML-Simple>=0:perl/p5-XML-Simple \
		p5-Template-Toolkit>=0:perl/p5-Template-Toolkit \
		p5-HTML-Mason>=0:perl/p5-HTML-Mason
RUN_DEPENDS:=	${BUILD_DEPENDS}
RUN_DEPENDS=	p5-GraphViz>=0:perl/p5-GraphViz

USES=		perl5 shebangfix
SHEBANG_FILES=	autodia.pl
USE_PERL5=	configure
NO_ARCH=	yes

post-patch:
	${FIND} ${WRKSRC} -name "*.orig" -delete

post-install:
	cd ${STAGEDIR}${PREFIX}/bin && ${MV} autodia.pl autodia
	cd ${STAGEDIR}${PREFIX}/lib/perl5/site_perl/man/man1 && ${MV} autodia.pl.1 autodia.1

.include <bsd.port.mk>
#EOF
