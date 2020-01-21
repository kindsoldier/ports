# $FreeBSD: head/converters/base91/Makefile 505884 2019-07-05 06:25:12Z kai $

PORTNAME=	base91
PORTVERSION=	0.6.0
CATEGORIES=	converters
MASTER_SITES=	SF/${PORTNAME}/basE91/${PORTVERSION}/

MAINTAINER=	takefu@airport.fm
COMMENT=	Utility to encode and decode base91 files

# INSTALL_DATA is only used to install documentation related files
MAKE_ENV+=	INSTALL_DATA="${INSTALL_MAN}"
MAKE_ENV+=	INSTALL_PROGRAM="${INSTALL_PROGRAM}"

.include <bsd.port.mk>
