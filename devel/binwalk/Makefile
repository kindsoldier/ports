# $FreeBSD: head/security/binwalk/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	binwalk
PORTVERSION=	2.1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	security python

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Search binary images for embedded files and executable code

USES=		python
USE_GITHUB=	yes
GH_ACCOUNT=	devttys0
USE_PYTHON=	autoplist distutils

RUN_DEPENDS=	7z:arch/p7zip \
		cabextract:arch/cabextract

.include <bsd.port.mk>
