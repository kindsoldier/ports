# $FreeBSD: head/textproc/en-hunspell/Makefile 453497 2017-11-04 22:57:02Z sunpoet $

PORTNAME=	hunspell
PORTVERSION=	2017.08.24
CATEGORIES=	textproc
MASTER_SITES=	SF/wordlist/speller/${PORTVERSION}/
PKGNAMESUFFIX=	-en
DISTFILES+=	hunspell-en_US-large-${PORTVERSION}${EXTRACT_SUFX}
DISTFILES+=	hunspell-en_CA-large-${PORTVERSION}${EXTRACT_SUFX}
DISTFILES+=	hunspell-en_GB-large-${PORTVERSION}${EXTRACT_SUFX}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	English hunspell dictionaries

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

GBALIASES=	en_AG en_AU en_BS en_BW en_BZ en_DK en_GH en_HK en_IE en_IN \
		en_JM en_NA en_NG en_NZ en_SG en_TT en_ZA en_ZW
USALIASES=	en_PH

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/*.aff ${WRKSRC}/*.dic ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/README_*.txt ${STAGEDIR}${DATADIR}/
	${LN} -s en_GB-large.aff ${STAGEDIR}${DATADIR}/en_GB.aff
	${LN} -s en_GB-large.dic ${STAGEDIR}${DATADIR}/en_GB.dic
.for ALIAS in ${GBALIASES}
	${LN} -s en_GB.aff ${STAGEDIR}${DATADIR}/${ALIAS}.aff
	${LN} -s en_GB.dic ${STAGEDIR}${DATADIR}/${ALIAS}.dic
.endfor
.for ALIAS in ${USALIASES}
	${LN} -s en_US.aff ${STAGEDIR}${DATADIR}/${ALIAS}.aff
	${LN} -s en_US.dic ${STAGEDIR}${DATADIR}/${ALIAS}.dic
.endfor
	${LN} -s en_CA-large.aff ${STAGEDIR}${DATADIR}/en_CA.aff
	${LN} -s en_CA-large.dic ${STAGEDIR}${DATADIR}/en_CA.dic
	${LN} -s en_US-large.aff ${STAGEDIR}${DATADIR}/en_US.aff
	${LN} -s en_US-large.dic ${STAGEDIR}${DATADIR}/en_US.dic

.include <bsd.port.mk>
#EOF

