# Created by: Ashish SHUKLA <ashish@FreeBSD.org>
# $FreeBSD: head/dns/libasr/Makefile 424103 2016-10-17 10:38:05Z ashish $

PORTNAME=	libasr
PORTVERSION=	1.0.2
CATEGORIES=	dns
#MASTER_SITES+=	http://www.opensmtpd.org/archives/
MASTER_SITES+=	http://distfiles.pirateparty.in/ashish/

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Asynchronous DNS resolver library

CONFLICTS=	libasr-devel-[0-9]*
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

USES=		gmake
USE_LDCONFIG=	yes

CFLAGS+=	-I${OPENSSLINC}

.include <bsd.port.mk>
#EOF
