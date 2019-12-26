#
# $id$
#
PORTNAME=	cclient
PORTVERSION=	20130621
CATEGORIES=	mail devel
PKGNAMEPREFIX=	lib


MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Mark Crispin's C-client mail access routines forked from UW

USE_GITHUB=	yes
GH_ACCOUNT=	jonabbey
GH_PROJECT=	panda-imap
GH_TAGNAME=	7905901


CONFLICTS_INSTALL=	cclient-20*

MAKE_JOBS_UNSAFE=	yes


.include <bsd.port.pre.mk>

USE_LDCONFIG=	yes
ALL_TARGET=	bsf
USES+=	gmakr

#MAKE_ARGS+=	SSLTYPE=none SSLDIR=${OPENSSLBASE}
MAKE_ARGS+=	SSLTYPE=unix SSLDIR=${OPENSSLDIR}
#MAKE_ARGS+=	SSLTYPE=unix.nopwd SSLDIR=${OPENSSLDIR}

MAKE_ARGS+=	EXTRACFLAGS="${CFLAGS}"

SHLIBBASE=	c-client4
SHLIBMAJ=	10
SHLIBNAME=	lib${SHLIBBASE}.so.${SHLIBMAJ}
MAKE_ENV+=	SHLIBNAME=${SHLIBNAME} SHLIBBASE=${SHLIBBASE}

pre-configure:
.for file in Makefile src/osdep/unix/Makefile src/osdep/unix/Makefile.gss
	${REINPLACE_CMD} -e "s|/usr/local|${PREFIX}|g" ${WRKSRC}/${file}
.endfor
	${REINPLACE_CMD} -e "s:/etc/ssl/certs:${PREFIX}/certs:g; \
		s:/etc/ssl/private:${PREFIX}/certs:g" ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e "s:/etc/c-client.cf:${PREFIX}/etc/c-client.cf:" \
		${WRKSRC}/src/osdep/unix/env_unix.h

	${REINPLACE_CMD} -e "s|^IP=4|IP=6|" ${WRKSRC}/Makefile \
		${WRKSRC}/src/osdep/unix/Makefile
#	${REINPLACE_CMD} -e "s|^CREATEPROTO=unixproto|CREATEPROTO=mbxproto|" \
#		${WRKSRC}/src/osdep/unix/Makefile

HEADERS+= c-client.h
HEADERS+= dummy.h
HEADERS+= env.h
HEADERS+= env_unix.h
HEADERS+= fdstring.h
HEADERS+= flockcyg.h
HEADERS+= flocksim.h
HEADERS+= flstring.h
HEADERS+= fs.h
HEADERS+= ftl.h
HEADERS+= imap4r1.h
HEADERS+= linkage.c linkage.h
HEADERS+= mail.h
HEADERS+= misc.h
HEADERS+= netmsg.h
HEADERS+= newsrc.h
HEADERS+= nl.h
HEADERS+= nntp.h
HEADERS+= osdep.h
HEADERS+= pseudo.h
HEADERS+= rfc822.h
HEADERS+= smtp.h
HEADERS+= sslio.h
HEADERS+= tcp.h
HEADERS+= tcp_unix.h
HEADERS+= unix.h
HEADERS+= utf8.h
HEADERS+= utf8aux.h
PORTREV_H=	${WRKDIR}/portrevision.h

post-build:
	${ECHO_CMD} "#define CCLIENT_PORTVERSION \"${PORTVERSION}\"" > ${PORTREV_H}
	${ECHO_CMD} "#define CCLIENT_SSLENABLED \"yes\"" >>${PORTREV_H}

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/c-client
.for F in ${HEADERS}
	${INSTALL_DATA} ${WRKSRC}/c-client/${F} ${STAGEDIR}${PREFIX}/include/c-client
.endfor
	${INSTALL_LIB} ${WRKSRC}/c-client/${SHLIBNAME} ${STAGEDIR}${PREFIX}/lib
	${LN} -sf ${SHLIBNAME} ${STAGEDIR}${PREFIX}/lib/lib${SHLIBBASE}.so
	${INSTALL_DATA} ${WRKSRC}/c-client/c-client.a \
		${STAGEDIR}${PREFIX}/lib/lib${SHLIBBASE}.a

	${INSTALL_DATA} ${WRKSRC}/c-client/CFLAGS ${STAGEDIR}${PREFIX}/include/c-client
	${INSTALL_DATA} ${WRKSRC}/c-client/LDFLAGS ${STAGEDIR}${PREFIX}/include/c-client
	${INSTALL_DATA} ${WRKSRC}/c-client/OSCFLAGS ${STAGEDIR}${PREFIX}/include/c-client
	${INSTALL_DATA} ${PORTREV_H} ${STAGEDIR}${PREFIX}/include/c-client

.include <bsd.port.post.mk>
#EOF
