#
# $Id$
#
PORTNAME=	libtextcat
PORTVERSION=	2.2
CATEGORIES=	textproc
MASTER_SITES=	http://software.wise-guys.nl/download/

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Language guessing by N-Gram-Based Text Categorization

GNU_CONFIGURE=	yes
USES=		gmake
USE_LDCONFIG=	yes

post-install:
	${INSTALL_DATA} ${WRKSRC}/src/textcat.h ${STAGEDIR}${PREFIX}/include/
	${MKDIR} ${STAGEDIR}${DATADIR}/LM
	${ECHO_MSG} "Installing language models provided in Gertjan van Noord's TextCat package"
	${INSTALL_DATA} ${WRKSRC}/langclass/LM/*.lm ${STAGEDIR}${DATADIR}/LM/
	${INSTALL_DATA} ${WRKSRC}/langclass/conf.txt ${STAGEDIR}${DATADIR}
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libtextcat.so.0 libtextcat.so

regression-test:
	(cd ${WRKSRC}/langclass/ &&		\
	for t in `${LS} ShortTexts/*.txt` ; do	\
	${ECHO_MSG} "Analyzing $$t..." ;	\
	../src/testtextcat conf.txt < $$t ;	\
	done)

.include <bsd.port.mk>
