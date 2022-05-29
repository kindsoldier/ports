# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: head/devel/p5-Locale-libintl/Makefile 417233 2016-06-21 15:07:34Z mat $

PORTNAME=	Locale-libintl
PORTVERSION=	1.32
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	libintl-perl-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Internationalization library for Perl

USES=		perl5
USE_PERL5=	configure

LIB_DEPENDS+=	libintl.so:devel/gettext
CFLAGS+= -I${LOCALBASE}/include

post-configure:
	${REINPLACE_CMD} -e '/cd gettext_xs/s=cd =cd $$(.CURDIR)/=' \
		${WRKSRC}/Makefile

post-install:
#	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Locale/gettext_xs/gettext_xs.so

.include <bsd.port.mk>
