#
# $Id$
#
PORTNAME=	gimp-help
PORTVERSION=	2.8.1
CATEGORIES?=	misc graphics
MASTER_SITES+=	http://ftp.gimp.org/pub/%SUBDIR%/
MASTER_SITES+=	http://gimp.mirrors.hoobly.com/%SUBDIR%/
MASTER_SITES+=	http://ftp.gwdg.de/pub/misc/grafik/gimp/%SUBDIR%/
MASTER_SITES+=	http://www.mirrorservice.org/sites/ftp.gimp.org/pub/%SUBDIR%/
MASTER_SITE_SUBDIR=	gimp/help
PKGNAMESUFFIX=	-${DOCLANG}


MAINTAINER=	liangtai.s16@gmail.com
COMMENT?=	GIMP User Manual in English

DOCLANG=	en

BUILD_DEPENDS+=	${PYTHON_SITELIBDIR}/libxml2mod.so:text/libxml2
BUILD_DEPENDS+=	${LOCALBASE}/share/xsl/docbook/xhtml/chunk.xsl:text/docbook-xsl

#USES=		gettext-tools gmake perl5 pkgconfig python:2
USES+=		tar:bzip2 gmake python:2.7  shebangfix
USE_PERL5=	build
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-gimp
CONFIGURE_ENV=	ALL_LINGUAS=${DOCLANG}

PORTDATA=	*
DATADIR=	${PREFIX}/share/gimp

SHEBANG_FILES=	tools/xml2po.py
python_OLD_CMD=	/usr/bin/env python

post-patch:
# Install to the same directory as when configuring --with-gimp
	${REINPLACE_CMD} '/gimpdatadir=.*\/2.0/s,/2\.0,,' \
		${WRKSRC}/configure
.if ${DOCLANG:Mru}
	${REINPLACE_CMD} -e '/glossary\.xml:1596/{; n; n; s/xref/link/g; }' \
		${WRKSRC}/po/ru/glossary.po
.endif

.include <bsd.port.mk>
#EOF
