PORTNAME=	telnetd
DISTNAME=	freebsd-telnetd
DISTVERSIONPREFIX=	v
DISTVERSION=	15.0
CATEGORIES=	net

MAINTAINER=	cy@FreeBSD.org
COMMENT=	FreeBSD telnetd
WWW=		https://github.com/cschuber/freebsd-telnet

USE_GITHUB=	yes
GH_ACCOUNT=	cschuber
GH_PROJECT=	freebsd-telnet

USES=		uidfix

MAKE_ARGS+=	BINOWN=${BINOWN} BINMODE=${BINMODE}
MAKE_ENV+=	MAKESYSPATH=/usr/src/share/mk \
		BINDIR=${PREFIX}/libexec \
		MANDIR=${PREFIX}/share/man/man \
		TELNETDIR=${WRKSRC}/contrib/telnet \
		MK_KERBEROS_SUPPORT=no \
		MK_OPENSSL=no \
		MK_WERROR=no

#OPTIONS_DEFINE=	IPV6
#OPTIONS_DEFAULT=	IPV6

# WRKSRC_SUBDIR=		libexec/telnetd

post-patch:
	${CP} ${FILESDIR}/Makefile.in ${WRKSRC}/Makefile

pre-install:
	mkdir -p ${STAGEDIR}/${PREFIX}/share/man/man8
post-install:
	${INSTALL_DATA} ${WRKSRC}/lib/libpam/pam.d/telnetd ${STAGEDIR}${PREFIX}/etc/pam.d/telnetd.default

.include <bsd.port.mk>
