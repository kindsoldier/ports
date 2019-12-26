# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: head/devel/p5-Log-Report/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Log-Report
PORTVERSION=	1.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARKOV
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Report a problem, pluggable handlers and language support

BUILD_DEPENDS=	p5-Devel-GlobalDestruction>=0.09:perl/p5-Devel-GlobalDestruction \
		p5-Log-Report-Optional>=1.02:perl/p5-Log-Report-Optional \
		p5-String-Print>=0.13:perl/p5-String-Print
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
