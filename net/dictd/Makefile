#
# $Id$
#
# dict.xdsl.by
#
PORTNAME=	dictd
PORTVERSION=	1.10.11
CATEGORIES+=	net textproc
MASTER_SITES=	SF/dict/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Dict protocol (RFC 2229) server

USE_RC_SUBR=	${PORTNAME}.sh
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --with-etcdir=${PREFIX}/etc --with-cflags="${CFLAGS}"
CONFIGURE_ARGS+= --without-local-zlib
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ENV+=	CPPFLAGS="${CFLAGS} -I${LOCALBASE}/include"
CONFIGURE_ENV+=	CFLAGS+="${CFLAGS} -I${LOCALBASE}/include"
CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS+= --disable-plugin

USE_RC_SUBR= dictd.sh

#SUB_FILES+=	pkg-message
#SUB_LIST+=	PORTSDIR=${PORTSDIR}

#ALL_TARGET=	dictd dictzip
#INSTALL_TARGET=	install.dictd install.dictzip

PORTEXAMPLES=   *

post-patch:
.for i in Makefile.in dict.1.in dictd.8.in
	${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g" ${WRKSRC}/$i
.endfor
	${REINPLACE_CMD} -e "s|\([\ \t(]\)T_USER|\1T_USERNAME|g" ${WRKSRC}/*.[chly]

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${SED} "s|%%PREFIX%%|${PREFIX}|g" < ${FILESDIR}/${PORTNAME}.conf > ${STAGEDIR}${EXAMPLESDIR}/${PORTNAME}.conf.sample
	${MKDIR} ${STAGEDIR}${PREFIX}/share/dict
	${INSTALL_DATA} ${FILESDIR}/mueller24* ${STAGEDIR}${PREFIX}/share/dict/
	${INSTALL_DATA} ${FILESDIR}/korolew* ${STAGEDIR}${PREFIX}/share/dict/

.include <bsd.port.mk>
#EOF
