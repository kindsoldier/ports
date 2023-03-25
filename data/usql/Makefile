# $FreeBSD: head/databases/usql/Makefile 522756 2020-01-12 06:24:58Z yuri $

PORTNAME=	usql
DISTVERSIONPREFIX=	v
DISTVERSION=	0.12.13
CATEGORIES=	databases

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Universal command-line interface for SQL databases

USES=		go:modules

GO_MODULE=	github.com/xo/usql
#GO_BUILDFLAGS+=  -tags 'postgres mysql vertica sqlite3 clickhouse'

PLIST_FILES=	bin/usql

.include <bsd.port.mk>
