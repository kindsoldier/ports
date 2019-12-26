#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	XML-Parser
PORTVERSION=	2.34
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN}
MASTER_SITE_SUBDIR=	XML
PKGNAMEPREFIX=	p5-

MAINTAINER=	onborodin@gmail.com
COMMENT=	Perl extension interface to James Clark's XML parser, expat

LIB_DEPENDS=	libexpat.so:text/libexpat

PERL_CONFIGURE=	yes
USE_PERL5=	configure
USES+=		gmake perl5
CONFIGURE_ARGS=	EXPATLIBPATH=${LOCALBASE}/lib EXPATINCPATH=${LOCALBASE}/include

PLIST_SUB=	EUCJP=${EUCJP} SJIS=${SJIS}

# XMLPARSER_EUCJP=	x-euc-jp-(jisx0221|unicode)
# XMLPARSER_SJIS=	x-sjis-(cp932|jdk117|jisx0221|unicode)
CONV_ENC=	${PERL} -e '$$e=shift @ARGV; undef $$/; $$_=<>; substr($$_,4,40)=pack("a40","$$e"); print'
.if !defined(XMLPARSER_EUCJP)
EUCJP=		"@comment "
.endif
.if !defined(XMLPARSER_SJIS)
SJIS=		"@comment "
.endif

post-patch:
.if defined(XMLPARSER_EUCJP)
	@cd ${WRKSRC}/Parser/Encodings; \
		${CONV_ENC} euc-jp ${XMLPARSER_EUCJP}.enc > euc-jp.enc
	@${ECHO_CMD} Parser/Encodings/euc-jp.enc >> ${WRKSRC}/MANIFEST
.endif
.if defined(XMLPARSER_SJIS)
	@cd ${WRKSRC}/Parser/Encodings; \
		${CONV_ENC} shift_jis ${XMLPARSER_SJIS}.enc > shift_jis.enc
	@${ECHO_CMD} Parser/Encodings/Shift_JIS.enc >> ${WRKSRC}/MANIFEST
.endif

post-configure:
	${PERL} -i -pe 's|^(CC = ).*|$$1 ${CC}|;' \
		-e 's|^(CCFLAGS = ).*|$$1 ${CFLAGS}|' ${WRKSRC}/Expat/Makefile

.include <bsd.port.mk>
#EOF
