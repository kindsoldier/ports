# Created by: Roderick van Domburg <r.s.a.vandomburg@student.utwente.nl>
# $FreeBSD: head/security/rubygem-net-ssh/Makefile 510245 2019-08-30 07:31:19Z mfechner $

PORTNAME=	net-ssh
PORTVERSION=	5.2.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Non-interactive SSH processing

USES=		gem shebangfix
USE_RUBY=	yes

SHEBANG_FILES=	support/ssh_tunnel_bug.rb
NO_ARCH=	yes

RUN_DEPENDS=	rubygem-ruby-termios>=0:ruby/rubygem-ruby-termios

.include <bsd.port.mk>
