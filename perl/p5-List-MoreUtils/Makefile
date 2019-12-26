# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD:perl/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	List-MoreUtils
DISTVERSION=	0.426
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:REHSACK
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Provide the stuff missing in List::Util


BUILD_DEPENDS=	p5-Exporter-Tiny>=0.038:perl/p5-Exporter-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

#post-stage:
#		cd ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/List/MoreUtils; \
#		${CHMOD} u+w MoreUtils.so; \
#		${STRIP_CMD} MoreUtils.so; \
#		${CHMOD} u-w MoreUtils.so; \

.include <bsd.port.mk>
#EOF
