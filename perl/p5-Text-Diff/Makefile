# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Text-Diff/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Text-Diff
PORTVERSION=	1.41
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Text::Diff - Perform diffs on files and record sets

COMMON_DEPENDS=	p5-Algorithm-Diff>=1.19:perl/p5-Algorithm-Diff
BUILD_DEPENDS=	${COMMON_DEPENDS}
RUN_DEPENDS=	${COMMON_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
#EOF
