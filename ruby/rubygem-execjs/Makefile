# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-execjs/Makefile 502545 2019-05-25 10:02:21Z sunpoet $

PORTNAME=	execjs
PORTVERSION=	2.7.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	ExecJS lets you run JavaScript code from Ruby

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

RUN_DEPENDS=	node>=0:lang/node13

post-patch:
	@${REINPLACE_CMD} -e 's#%%LOCALBASE%%#${LOCALBASE}#' ${WRKSRC}/lib/execjs/runtimes.rb

.include <bsd.port.mk>
