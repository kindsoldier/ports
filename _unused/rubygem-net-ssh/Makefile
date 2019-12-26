# Created by: Roderick van Domburg <r.s.a.vandomburg@student.utwente.nl>
# $FreeBSD: head/security/rubygem-net-ssh/Makefile 449422 2017-09-07 20:12:56Z sunpoet $

PORTNAME=	net-ssh
PORTVERSION=	4.2.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Non-interactive SSH processing

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	support/ssh_tunnel_bug.rb

RUN_DEPENDS=	rubygem-ruby-termios>=0:ruby/rubygem-ruby-termios

.include <bsd.port.mk>
