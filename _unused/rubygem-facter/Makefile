#
# $Id$
#
PORTNAME=	facter
PORTVERSION=	2.4.6
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG \
		http://downloads.puppetlabs.com/facter/

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Cross-platform Ruby library for retrieving facts from OS

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/facter

.include <bsd.port.pre.mk>

# Restrict dmidecode dependency to Intel based systems
.if ${ARCH} == "amd64" || ${ARCH} == "i386" || ${ARCH} == "ia64"
RUN_DEPENDS+=	dmidecode:system/dmidecode
.endif

post-patch:
	${REINPLACE_CMD} -e 's/\,\ \"lib\/facter\/zfs_version.rb\"//' ${WRKSRC}/${PORTNAME}.gemspec
	${REINPLACE_CMD} -e 's/\,\ \"lib\/facter\/zpool_version.rb\"//' ${WRKSRC}/${PORTNAME}.gemspec

.include <bsd.port.post.mk>
#EOF
