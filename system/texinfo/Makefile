# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: head/print/texinfo/Makefile 441739 2017-05-25 21:05:08Z sunpoet $

PORTNAME=	texinfo
PORTVERSION=	6.5
CATEGORIES=	print
MASTER_SITES=	ftp://ftp.stack.nl/pub/users/johans/texinfo/20160911/ GNU
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} htmlxref.cnf texinfo.tex:local texi2dvi
DIST_SUBDIR=	${PORTNAME}/${PORTVERSION}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Typeset documentation system with multiple format output

BUILD_DEPENDS=	help2man:devel/help2man
LIB_DEPENDS+=	libintl.so:devel/gettext

TEXMFDIR=       share/texmf

GNU_CONFIGURE=	yes
#INSTALL_TARGET=	install install-tex
MAKE_ARGS=	PERL=${PERL} TEXMF=${LOCALBASE}/${TEXMFDIR}
PKGDEINSTALL=	${PKGINSTALL}
USES=		charsetfix gmake perl5 tar:xz

INFO=		info-stnd texinfo

post-patch:
	${CP} ${DISTDIR}/${DIST_SUBDIR}/texinfo.tex ${WRKSRC}/doc/
	${INSTALL_SCRIPT} ${DISTDIR}/${DIST_SUBDIR}/texi2dvi ${WRKSRC}/util/
	${REINPLACE_CMD} '/rm -f ..DESTDIR/s:$$: $$(DESTDIR)$$(xsdir)/XSParagraph.*:' \
		${WRKSRC}/tp/Texinfo/Convert/XSParagraph/Makefile.in

post-install:
	${INSTALL_DATA} ${DISTDIR}/${DIST_SUBDIR}/htmlxref.cnf ${STAGEDIR}${DATADIR}
#	${RMDIR} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}

.include <bsd.port.mk>
#EOF
