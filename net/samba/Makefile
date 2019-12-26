#
# $Id: Makefile 2733 2009-12-14 09:21:55Z root $
# $URL: file:///usr2/svn/ports5/network-servers/samba/Makefile $
#
PORTNAME=	samba
PORTVERSION=	3.3.16
CATEGORIES=	net
MASTER_SITES+=	https://ftp.samba.org/pub/samba/stable/
MASTER_SITES+=	${MASTER_SITE_SAMBA}
MASTER_SITE_SUBDIR=	. old-versions rc pre
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.p/pre/:S/.r/rc/}

MAINTAINER=	onborodin@gmail.com
COMMENT=	A free SMB and CIFS client and server for UNIX

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libfam.so:devel/libgamin
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libavahi-client.so:net/avahi
LIB_DEPENDS+=	libavahi-common.so:net/avahi
LIB_DEPENDS+=	libavahi-core.so:net/avahi

SAMBA_CONFDIR=		${PREFIX}/etc/samba 
SAMBA_PRIVATEDIR=		${PREFIX}/etc/samba/private

SAMBA_LOGDIR=		/var/log/${PORTNAME}
SAMBA_RUNDIR=		/var/run/${PORTNAME}
SAMBA_LOCKDIR=		/var/db/${PORTNAME}

SAMBA_OWNER= root
SAMBA_GROUP= wheel

WRKSRC=		${WRKDIR}/${DISTNAME}/source

GNU_CONFIGURE=	yes
USES+=		gmake
CFLAGS+=  -I${LOCALBASE}/include  -I${LOCALBASE}/include/ldap
CONFIGURE_ENV+=	CPPFLAGS="${CFLAGS}" 
CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ENV+=	CFLAGS="${CFLAGS}" 

CONFIGURE_ARGS+= --exec-prefix=${PREFIX}
CONFIGURE_ARGS+= --localstatedir=/var
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-configdir=${SAMBA_CONFDIR}
CONFIGURE_ARGS+= --with-privatedir=${SAMBA_PRIVATEDIR}
CONFIGURE_ARGS+= --includedir=${PREFIX}/include/samba
CONFIGURE_ARGS+= --with-modulesdir=${PREFIX}/lib/samba
CONFIGURE_ARGS+= --with-pammodulesdir=${PREFIX}/lib

CONFIGURE_ARGS+= --with-piddir=${SAMBA_RUNDIR}
CONFIGURE_ARGS+= --with-lockdir=${SAMBA_LOCKDIR}
CONFIGURE_ARGS+= --with-logfilebase=${SAMBA_LOGDIR}

CONFIGURE_ARGS+= --with-libiconv=${LOCALBASE}
CONFIGURE_ARGS+= --with-readline=/lib
CONFIGURE_ARGS+= --with-included-popt
CONFIGURE_ARGS+= --with-included-iniparser


CONFIGURE_ARGS+= --with-sendfile-support
CONFIGURE_ARGS+= --with-syslog
CONFIGURE_ARGS+= --with-quotas
CONFIGURE_ARGS+= --with-acl-support
CONFIGURE_ARGS+= --with-winbind
CONFIGURE_ARGS+= --disable-swat
CONFIGURE_ARGS+= --with-utmp

CONFIGURE_ARGS+= --with-libaddns
CONFIGURE_ARGS+= --with-libnetapi
CONFIGURE_ARGS+= --with-libsmbclient
CONFIGURE_ARGS+= --with-libsmbsharemodes
CONFIGURE_ARGS+= --with-libtalloc
CONFIGURE_ARGS+= --with-libtdb

CONFIGURE_ARGS+= --enable-static=yes
CONFIGURE_ARGS+= --enable-shared=yes
CONFIGURE_ARGS+= --enable-fam
CONFIGURE_ARGS+= --enable-avahi
CONFIGURE_ARGS+= --with-aio-support


INSTALLS_SHLIB=	yes

CONFIGURE_ARGS+= --without-ads
CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --without-krb5
CONFIGURE_ARGS+= --disable-cups
CONFIGURE_ARGS+= --disable-iprint
CONFIGURE_ARGS+= --without-pam 

LIBS+=	-L${LOCALBASE}/lib -lavahi-common

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

USE_RC_SUBR= smbd nmbd winbindd
#SUB_FILES+= smbd nmbd winbindd

SUB_FILES+= pkg-install
SUB_FILES+= pkg-deinstall

SUB_LIST+= SAMBA_RUNDIR=${SAMBA_RUNDIR}
SUB_LIST+= SAMBA_LOGDIR=${SAMBA_LOGDIR}
SUB_LIST+= SAMBA_LOCKDIR=${SAMBA_LOCKDIR} 

SUB_LIST+= SAMBA_CONFDIR=${SAMBA_CONFDIR}
SUB_LIST+= SAMBA_PRIVATEDIR=${SAMBA_PRIVATEDIR}

SUB_LIST+= SAMBA_OWNER=${SAMBA_OWNER}
SUB_LIST+= SAMBA_GROUP=${SAMBA_GROUP}


#MAN1+=vfstest.1
#MAN3+=ldb.3
#MAN7+=winbind_krb5_locator.7
#MAN8+=cifs.upcall.8
#MAN8+=idmap_ad.8
#MAN8+=idmap_adex.8
#MAN8+=idmap_hash.8
#MAN8+=idmap_ldap.8
#MAN8+=idmap_nss.8
#MAN8+=idmap_rid.8
#MAN8+=idmap_tdb2.8
#MAN8+=mount.cifs.8
#MAN8+=pam_winbind.8
#MAN8+=swat.8
#MAN8+=umount.cifs.8
#MAN8+=vfs_cacheprime.8
#MAN8+=vfs_catia.8
#MAN8+=vfs_commit.8
#MAN8+=vfs_dirsort.8
#MAN8+=vfs_fileid.8
#MAN8+=vfs_gpfs.8
#MAN8+=vfs_notify_fam.8
#MAN8+=vfs_prealloc.8
PLIST_FILES+=	man/man1/findsmb.1.gz
PLIST_FILES+=	man/man1/ldbadd.1.gz
PLIST_FILES+=	man/man1/ldbdel.1.gz
PLIST_FILES+=	man/man1/ldbedit.1.gz
PLIST_FILES+=	man/man1/ldbmodify.1.gz
PLIST_FILES+=	man/man1/ldbrename.1.gz
PLIST_FILES+=	man/man1/ldbsearch.1.gz
PLIST_FILES+=	man/man1/log2pcap.1.gz
PLIST_FILES+=	man/man1/nmblookup.1.gz
PLIST_FILES+=	man/man1/ntlm_auth.1.gz
PLIST_FILES+=	man/man1/profiles.1.gz
PLIST_FILES+=	man/man1/rpcclient.1.gz
PLIST_FILES+=	man/man1/sharesec.1.gz
PLIST_FILES+=	man/man1/smbcacls.1.gz
PLIST_FILES+=	man/man1/smbclient.1.gz
PLIST_FILES+=	man/man1/smbcontrol.1.gz
PLIST_FILES+=	man/man1/smbcquotas.1.gz
PLIST_FILES+=	man/man1/smbget.1.gz
PLIST_FILES+=	man/man1/smbstatus.1.gz
PLIST_FILES+=	man/man1/smbtar.1.gz
PLIST_FILES+=	man/man1/smbtree.1.gz
PLIST_FILES+=	man/man1/testparm.1.gz
PLIST_FILES+=	man/man1/wbinfo.1.gz
PLIST_FILES+=	man/man5/lmhosts.5.gz
PLIST_FILES+=	man/man5/smb.conf.5.gz
PLIST_FILES+=	man/man5/smbgetrc.5.gz
PLIST_FILES+=	man/man5/smbpasswd.5.gz
PLIST_FILES+=	man/man7/libsmbclient.7.gz
PLIST_FILES+=	man/man7/samba.7.gz
PLIST_FILES+=	man/man8/eventlogadm.8.gz
PLIST_FILES+=	man/man8/idmap_tdb.8.gz
PLIST_FILES+=	man/man8/net.8.gz
PLIST_FILES+=	man/man8/nmbd.8.gz
PLIST_FILES+=	man/man8/pdbedit.8.gz
PLIST_FILES+=	man/man8/smbd.8.gz
PLIST_FILES+=	man/man8/smbpasswd.8.gz
PLIST_FILES+=	man/man8/smbspool.8.gz
PLIST_FILES+=	man/man8/tdbbackup.8.gz
PLIST_FILES+=	man/man8/tdbdump.8.gz
PLIST_FILES+=	man/man8/tdbtool.8.gz
PLIST_FILES+=	man/man8/vfs_acl_tdb.8.gz
PLIST_FILES+=	man/man8/vfs_acl_xattr.8.gz
PLIST_FILES+=	man/man8/vfs_audit.8.gz
PLIST_FILES+=	man/man8/vfs_cap.8.gz
PLIST_FILES+=	man/man8/vfs_default_quota.8.gz
PLIST_FILES+=	man/man8/vfs_extd_audit.8.gz
PLIST_FILES+=	man/man8/vfs_fake_perms.8.gz
PLIST_FILES+=	man/man8/vfs_full_audit.8.gz
PLIST_FILES+=	man/man8/vfs_netatalk.8.gz
PLIST_FILES+=	man/man8/vfs_preopen.8.gz
PLIST_FILES+=	man/man8/vfs_readahead.8.gz
PLIST_FILES+=	man/man8/vfs_readonly.8.gz
PLIST_FILES+=	man/man8/vfs_recycle.8.gz
PLIST_FILES+=	man/man8/vfs_shadow_copy.8.gz
PLIST_FILES+=	man/man8/vfs_shadow_copy2.8.gz
PLIST_FILES+=	man/man8/vfs_smb_traffic_analyzer.8.gz
PLIST_FILES+=	man/man8/vfs_streams_depot.8.gz
PLIST_FILES+=	man/man8/vfs_streams_xattr.8.gz
PLIST_FILES+=	man/man8/vfs_xattr_tdb.8.gz
PLIST_FILES+=	man/man8/winbindd.8.gz


post-patch:
	${FIND} ${WRKSRC} -name CVS -o -name .cvsignore | ${XARGS} ${RM} -f
	${FIND} ${WRKDIR}/${DISTNAME} -type d | ${XARGS} ${CHMOD} u+w,a+rx
	${FIND} ${WRKDIR}/${DISTNAME} -type f | ${XARGS} ${CHMOD} u+w,a+r


post-install:
#	${RMDIR} -p ${PREFIX}/lib/samba/*
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${FILESDIR}/smb.conf.sample ${EXAMPLESDIR}
	${MKDIR} ${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKSRC}/pkgconfig/*.pc ${PREFIX}/lib/pkgconfig
.for N in 1 5 7 8
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man${N}
	${INSTALL_DATA} ${WRKSRC}/../docs/manpages/*.${N} ${STAGEDIR}${PREFIX}/man/man${N}
.endfor
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKSRC}/pkgconfig/*.pc ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/../examples/smb.conf.default ${STAGEDIR}${EXAMPLESDIR}/smb.conf.sample




.include <bsd.port.mk>
#EOF
