# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Thrift/Makefile 462862 2018-02-24 20:40:27Z lx $

PORTNAME=	thrift
PORTVERSION=	0.14.1
CATEGORIES=	devel
MASTER_SITES=	APACHE/thrift/${PORTVERSION}
CATEGORIES=	devel perl5
PKGNAMEPREFIX=	p5-


MAINTAINER=	komarov@valerka.net
COMMENT=	Perl interface to Thrift

BUILD_DEPENDS=	p5-Bit-Vector>=0:perl/p5-Bit-Vector
RUN_DEPENDS=	p5-Bit-Vector>=0:perl/p5-Bit-Vector

WRKSRC_SUBDIR	= lib/perl

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
