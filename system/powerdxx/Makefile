# $FreeBSD: head/sysutils/powerdxx/Makefile 437671 2017-04-03 19:09:34Z kami $

PORTNAME=	powerdxx
PORTVERSION=	0.4.4
CATEGORIES=	sysutils

MAINTAINER=	kami@FreeBSD.org
COMMENT=	CPU clock speed/frequency daemon

USES=		compiler:c++17-lang

USE_GITHUB=	yes
GH_ACCOUNT=	lonkamikaze
GH_TUPLE=	lonkamikaze:powerdxx:43c0db7:powerdxx/gh-pages

USE_LDCONFIG=	yes
MAKE_ARGS=	DOCSDIR="${DOCSDIR}"

#CXXFLAGS+=	-Wno-error=sign-compare

.include <bsd.port.mk>
