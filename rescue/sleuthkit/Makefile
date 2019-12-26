#
# $Id$
#
PORTNAME=	sleuthkit
PORTVERSION=	4.1.3
CATEGORIES=	sysutils security
MASTER_SITES=	SF

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Tools and library for filesystem forensic analysis

#RUN_DEPENDS+=	p5-DateTime-TimeZone>=0:devel/p5-DateTime-TimeZone
RUN_DEPENDS+=	exif:graph/exif

CONFLICTS=	ja-ls-[0-9]* icat-[0-9]*

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_PERL="${PERL}"
USES=		perl5
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
DATADIR=	${PREFIX}/share/tsk

#LIB_DEPENDS=	libewf.so:devel/libewf
#CONFIGURE_ARGS+=	--with-libewf=${LOCALBASE}
CONFIGURE_ARGS+=	--without-libewf
CONFIGURE_ARGS+= --disable-java

.include <bsd.port.mk>
#EOF
