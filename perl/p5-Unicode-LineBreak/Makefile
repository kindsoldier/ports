# Created by: Olivier Girard <Olivier.Girard@univ-angers.fr>
# $FreeBSD: head/textproc/p5-Unicode-LineBreak/Makefile 429129 2016-12-21 20:47:20Z sunpoet $

PORTNAME=	Unicode-LineBreak
PORTVERSION=	2016.003
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

# blanket update approval granted.
MAINTAINER=	Olivier.Girard@univ-angers.fr
COMMENT=	Unicode-LineBreak package

BUILD_DEPENDS=	p5-MIME-Charset>=1.006.2:perl/p5-MIME-Charset
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_UNSAFE=	yes

USES=		perl5
USE_PERL5=	configure

CONFIGURE_ARGS=	--with-bundled-sombok

#OPTIONS_DEFINE=	THAI
#OPTIONS_DEFAULT=THAI

#THAI_DESC=	Thai word segmentation support through libthai
#THAI_USES=	pkgconfig
#THAI_LIB_DEPENDS=	libthai.so:perl/libthai
#THAI_CONFIGURE_OFF=	--disable-libthai

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Unicode/LineBreak/LineBreak.so

.include <bsd.port.mk>
#EOF
