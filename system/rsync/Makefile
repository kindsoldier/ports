#
# $Id$
#
PORTNAME=	rsync
PORTVERSION=	3.1.3
CATEGORIES=	net
MASTER_SITES+=	http://rsync.samba.org/ftp/%SUBDIR%/
MASTER_SITES+=	ftp://ftp.samba.org/pub/%SUBDIR%/
MASTER_SITES+=	ftp://sunsite.auc.dk/pub/unix/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.sunet.se/pub/unix/admin/%SUBDIR%/ 
MASTER_SITES+=	ftp://ftp.fu-berlin.de/pub/unix/net/%SUBDIR%/
MASTER_SITES+=	http://www.mirrorservice.org/sites/rsync.samba.org/
MASTER_SITES+=	CRITICAL
MASTER_SITE_SUBDIR=	rsync/src/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}
DISTFILES+=	${PORTNAME}-patches-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	onborodin@gmail.com
COMMENT=	A network file distribution/synchronization utility

#LIB_DEPENDS+=	libiconv.so:text/libicon/

PATCH_STRIP=	-p1
#EXTRA_PATCHES+= ${WRKSRC}/patches/acls.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/adaptec_acl_mods.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/atimes.diff
EXTRA_PATCHES+= ${WRKSRC}/patches/backup-dir-dels.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/catch_crash_signals.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/checksum-reading.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/checksum-updating.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/checksum-xattr.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/copy-devices.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/crtimes.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/cvs-entries.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/daemon-forward-lookup.diff
EXTRA_PATCHES+= ${WRKSRC}/patches/date-only.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/db.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/detect-renamed-lax.diff
EXTRA_PATCHES+= ${WRKSRC}/patches/detect-renamed.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/downdate.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/dparam.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/drop-cache.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/fileflags.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/fsync.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/hfs-compression.diff
EXTRA_PATCHES+= ${WRKSRC}/patches/ignore-case.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/link-by-hash.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/log-checksum.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/munge-links.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/nameconverter.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/netgroup-auth.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/omit-dir-changes.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/openssl-support.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/preallocate.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/remote-option.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/slow-down.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/slp.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/soften-links.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/source-backup.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/source-filter_dest-filter.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/sparse-block.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/stdout.diff
EXTRA_PATCHES+= ${WRKSRC}/patches/time-limit.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/transliterate.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/tru64.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/usermap.diff
#EXTRA_PATCHES+= ${WRKSRC}/patches/xattrs.diff




USE_RC_SUBR=	rsyncd.sh
SUB_LIST+=	NAME=rsyncd
USE_PERL5_BUILD=build

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --with-rsyncd-conf=${PREFIX}/etc/rsyncd.conf
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-included-popt


PORTEXAMPLES=	*


post-patch:
	${REINPLACE_CMD} -e 's|CFLAGS|CONFIGUREDCFLAGS|' ${WRKSRC}/Makefile.in

pre-configure:
	${REINPLACE_CMD} -e 's:/etc/:${PREFIX}/etc/:g'  \
		${WRKSRC}/rsync.h ${WRKSRC}/rsync.1 ${WRKSRC}/rsyncd.conf.5
	${REINPLACE_CMD} -e 's|malloc.h|stdlib.h|g' \
		${WRKSRC}/rsync.h ${WRKSRC}/zlib/zutil.h

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/rsync

.include <bsd.port.mk>
#EOF
