#
# $id$
#
PORTNAME=	enscript
PORTVERSION=	1.6.5.2 #1.6.4
CATEGORIES+=	print
MASTER_SITES+=	GNU #http://people.ssh.com/mtr/genscript/
MASTER_SITES+=	http://www.codento.com/people/mtr/genscript/
MASTER_SITES+=	http://www.iki.fi/mtr/genscript/

MAINTAINER= homeunix7@gmail.com
COMMENT=	ASCII to PostScript filter

LIB_DEPENDS+= libintl.so:devel/gettext

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_ARGS+= --with-media=a4
CONFIGURE_TARGET= --build=${MACHINE_ARCH}-ziggi-freebsd${OSREL}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

INFO= enscript

post-patch:
	${REINPLACE_CMD} -e 's/install-exec-am: install-sysconfDATA/install-exec-am:/' \
	    ${WRKSRC}/lib/Makefile.in
	${REINPLACE_CMD} -e 's/install-exec-am: install-sysconfDATA/install-exec-am:/' \
	    ${WRKSRC}/lib/Makefile.in
	cd ${WRKSRC}/lib && ${CP} enscript.cfg.in enscript.conf.in
	${REINPLACE_CMD} -e 's/enscript.cfg/enscript.conf/g' \
	    ${WRKSRC}/src/*.c ${WRKSRC}/src/Makefile.in ${WRKSRC}/lib/Makefile.in
#	${REINPLACE_CMD} -e 's/enscript-site.cfg/enscript-site.conf/g' \
#	    ${WRKSRC}/src/*.c ${WRKSRC}/src/Makefile.in ${WRKSRC}/lib/Makefile.in


PORTEXAMPLES=   *

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/lib/${PORTNAME}.conf ${STAGEDIR}${EXAMPLESDIR}/${PORTNAME}.conf.sample

.include <bsd.port.mk>
#EOF
