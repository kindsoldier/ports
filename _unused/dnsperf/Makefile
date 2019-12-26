# Created by: Edwin Groothuis (edwin@mavetju.org)
# $FreeBSD: head/dns/dnsperf/Makefile 395389 2015-08-26 18:26:14Z amdmi3 $

PORTNAME=	dnsperf
PORTVERSION=	2.1.0.0
CATEGORIES=	dns benchmarks net
MASTER_SITES=	ftp://ftp.nominum.com/pub/nominum/${PORTNAME}/${PORTVERSION}/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}-1
#ftp://ftp.nominum.com/pub/nominum/dnsperf/2.1.0.0/dnsperf-src-2.1.0.0-1.tar.gz

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Accurate performance metrics of Domain Name Services

BUILD_DEPENDS=	bind>=9.9:net/bind

USES=		gmake
GNU_CONFIGURE=	yes
MAKE_ENV+=	INSTALL_PROGRAM="${INSTALL_PROGRAM}"
MAKE_ENV+=	INSTALL_SCRIPT="${INSTALL_SCRIPT}"
MAKE_ENV+=	INSTALL_DATA="${INSTALL_DATA}"
MAKE_ENV+=	INSTALL_MAN="${INSTALL_MAN}"
CFLAGS+=	-I.

pre-build:
	${MKDIR} ${WRKSRC}/isc
	${ECHO_CMD} "#include <sys/types.h>" > ${WRKSRC}/isc/stat.h
	${ECHO_CMD} "#include <sys/stat.h>" >> ${WRKSRC}/isc/stat.h

post-install-DOCS-on:

.include <bsd.port.mk>
#EOF
