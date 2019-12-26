# $FreeBSD: head/www/p5-HTML-Mason/Makefile 453153 2017-10-30 02:51:38Z wen $

PORTNAME=	HTML-Mason
PORTVERSION=	1.58
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	High-performance, dynamic web site authoring system

BUILD_DEPENDS=	p5-Cache-Cache>=1:perl/p5-Cache-Cache \
		p5-Class-Container>=0.07:perl/p5-Class-Container \
		p5-Exception-Class>=1.15:perl/p5-Exception-Class \
		p5-HTML-Parser>=0:perl/p5-HTML-Parser \
		p5-Log-Any>=0.08:perl/p5-Log-Any \
		p5-Params-Validate>=0.70:perl/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

#MODPERL_BUILD_DEPENDS=	p5-libapreq2>=0:www/p5-libapreq2
#MODPERL_RUN_DEPENDS=	p5-libapreq2>=0:www/p5-libapreq2
#MODPERL_USE=		APACHE_RUN=22+

post-patch:
	${REINPLACE_CMD} -e '/bin\/convert/d' ${WRKSRC}/Makefile.PL

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/blib/script/mason.pl ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
#EOF
