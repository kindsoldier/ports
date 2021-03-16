# Created by: Kevin Bowling <kbowling@freebsd.org>
# $FreeBSD: head/databases/timescaledb/Makefile 566319 2021-02-22 17:37:36Z kbowling $

PORTNAME=	timescaledb
PORTVERSION=	2.1.0
CATEGORIES=	databases

MAINTAINER=	kbowling@FreeBSD.org
COMMENT=	Time-series database built on PostgreSQL

USES=		compiler:c11 cmake #pgsql:11,12,13

USE_GITHUB=	yes
GH_ACCOUNT=	timescale

CFLAGS+= -I${LOCALBASE}/include
LDFALSG+= -L${LOCALBASE}/lib

CMAKE_ON+=	USE_OPENSSL 
#CMAKE_OFF+=	APACHE_ONLY
CMAKE_OFF+=	REGRESS_CHECKS WARNINGS_AS_ERRORS

.include <bsd.port.mk>
