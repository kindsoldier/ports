# Created by: Udo Schweigert
# $FreeBSD: head/mail/mutt/Makefile 474314 2018-07-10 00:42:08Z fluffy $

PORTNAME=	mutt
DISTVERSION=	1.10.0
CATEGORIES+=	mail
MASTER_SITES+=	ftp://ftp.mutt.org/pub/mutt/
MASTER_SITES+=	ftp://ftp.fu-berlin.de/pub/unix/mail/mutt/
MASTER_SITES+=	https://bitbucket.org/mutt/mutt/downloads/
MASTER_SITES+=	ftp://ftp.demon.co.uk/pub/mirrors/mutt/
DIST_SUBDIR=	mutt
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	dereks@lifeofadishwasher.com
COMMENT=	Small but powerful text based program for read/writing e-mail

#RUN_DEPENDS+=	${LOCALBASE}/etc/mime.types:misc/mime-support
#BUILD_DEPENDS+= aspell:textproc/aspell
#RUN_DEPENDS+=	aspell:textproc/aspell
#LIB_DEPENDS+=	libgpgme.so:crypto/gpgme
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libidn.so:net/libidn
LIB_DEPENDS+=	libiconv.so:text/libiconv/
#LIB_DEPENDS+=	libgdbm.so:data/libgdbm

BUILD_DEPENDS+=	xsltproc:text/libxslt

DOCSDIR=	${PREFIX}/share/doc/mutt
EXAMPLESDIR=	${PREFIX}/share/examples/mutt
DATADIR=	${PREFIX}/share/mutt

GNU_CONFIGURE=  yes
CONFIGURE_ENV=	CC="${CC} -I${LOCALBASE}/include"
CONFIGURE_ARGS+= --disable-fcntl
CONFIGURE_ARGS+= --with-ssl=/usr
CONFIGURE_ARGS+= --with-docdir=${DOCSDIR}
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc
CONFIGURE_ARGS+= --enable-external-dotlock
CONFIGURE_ARGS+= --enable-pop
CONFIGURE_ARGS+= --enable-imap
CONFIGURE_ARGS+= --enable-compressed
CONFIGURE_ARGS+= --enable-sidebar

CONFIGURE_ARGS+= --disable-pgp
CONFIGURE_ARGS+= --disable-gpgme
CONFIGURE_ARGS+= --enable-imap
CONFIGURE_ARGS+= --enable-pop
CONFIGURE_ARGS+= --enable-smtp
CONFIGURE_ARGS+= --with-idn=${LOCALBASE}
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --without-bdb
CONFIGURE_ARGS+= --without-gdbm
CONFIGURE_ARGS+= --without-qdbm

WRKSRC=		${WRKDIR}/${DISTNAME:S/i$//}

SHEBANG_FILES=	doc/gen-map-doc smime_keys.pl contrib/smime_keys_test.pl


pre-configure::
	${REINPLACE_CMD} -e 's,?eimdal\*),?eimdal*|\"FreeBSD heimdal\"*),' \
		${CONFIGURE_WRKSRC}/${CONFIGURE_SCRIPT}
	${REINPLACE_CMD} -e 's,/usr/bin/gpg,${LOCALBASE}/bin/gpg,g' \
		${WRKSRC}/contrib/gpg.rc
	${REINPLACE_CMD} -e 's,pgp6,pgp,g' \
		${WRKSRC}/contrib/pgp6.rc
	${REINPLACE_CMD} -E -e 's#(/samples|samples/)#share/examples/mutt#g' \
		${WRKSRC}/doc/reference.html \
		${WRKSRC}/doc/manual.html \
		${WRKSRC}/doc/manual.txt \
		${WRKSRC}/doc/Muttrc \
		${WRKSRC}/INSTALL \
		${WRKSRC}/init.h
	${REINPLACE_CMD} -e 's#$$(docdir)/samples#${EXAMPLESDIR}#g' \
		${WRKSRC}/contrib/Makefile.in

pre-build:
	${REINPLACE_CMD} \
		-e 's,manual.html stamp-doc-rc stamp-doc-chunked manual.txt,stamp-doc-rc,' \
		${WRKSRC}/doc/Makefile

post-install:
	${INSTALL_MAN} ${FILESDIR}/mailcap.5 ${STAGEDIR}${MANPREFIX}/man/man5



.include <bsd.port.mk>
