# $FreeBSD: head/databases/usql/Makefile 522756 2020-01-12 06:24:58Z yuri $

PORTNAME=	usql
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7.8
CATEGORIES=	databases

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Universal command-line interface for SQL databases

USES=		go:modules

USE_GITHUB=	yes
GH_ACCOUNT=	xo
GO_BUILDFLAGS+=  -tags 'postgres mysql vertica sqlite3 clickhouse'

PLIST_FILES=	bin/usql

.include <bsd.port.mk>
