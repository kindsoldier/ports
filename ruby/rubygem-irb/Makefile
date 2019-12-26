# $FreeBSD: head/devel/rubygem-irb/Makefile 501609 2019-05-14 01:42:48Z meta $

PORTNAME=	irb
PORTVERSION=	1.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	meta@FreeBSD.org
COMMENT=	Interactive Ruby

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

# irb executable is installed by ruby port
post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/irb

.include <bsd.port.mk>
