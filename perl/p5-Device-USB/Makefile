# $FreeBSD: head/devel/p5-Device-USB/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Device-USB
PORTVERSION=	0.35
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	josh.carroll@gmail.com
COMMENT=	Perl wrapper for libusb

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Inline>=0:perl/p5-Inline \
		p5-Inline-C>=0:perl/p5-Inline-C

MAKE_JOBS_UNSAFE=yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	${REINPLACE_CMD} -e 's|dump_usb.pl|lib/Device/&|' ${WRKSRC}/MANIFEST
	${MV} ${WRKSRC}/dump_usb.pl ${WRKSRC}/lib/Device/

.include <bsd.port.mk>
