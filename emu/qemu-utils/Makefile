#
# $Id$
#
PORTNAME=	qemu
PORTVERSION=	2.12.1 #2.9.1 #2.6.1
CATEGORIES=	emulators
MASTER_SITES=	http://wiki.qemu.org/download/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}
DIST_SUBDIR=	qemu/${PORTVERSION}
PKGNAMESUFFIX=	-utils

MAINTAINER=	bofh@FreeBSD.org
COMMEN?=	QEMU CPU Emulator

#LIB_DEPENDS+=	libglib.so:devel/libglib
#LIB_DEPENDS+=	libSDL.so:devel/libSDL
#LIB_DEPENDS+=	libpng.so:graph/libpng

#LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
#LIB_DEPENDS+=	libcurl.so:net/libcurl
#LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
#LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
#LIB_DEPENDS+=	libpixman.so:x11/libpixman


HAS_CONFIGURE=	yes
USES=		gmake perl5 python:2.7,build tar:bzip2
USE_PERL5=	build
MAKE_ENV+=	BSD_MAKE="${MAKE}"
ONLY_FOR_ARCHS=	amd64 i386

#CONFIGURE_ARGS+= --disable-curl
CONFIGURE_ARGS+= --disable-gtk --disable-vte
CONFIGURE_ARGS+= --disable-opengl
#CONFIGURE_ARGS+= --disable-vnc-jpeg
#CONFIGURE_ARGS+= --disable-vnc-png
CONFIGURE_ARGS+= --disable-vnc-sasl
CONFIGURE_ARGS+= --disable-vnc-tls
CONFIGURE_ARGS+= --enable-sdl
CONFIGURE_ARGS+= --disable-usb-redir

WITHOUT_CPU_CFLAGS=yes

CFLAGS:=	${CFLAGS:C/-fno-tree-vrp//}
CONFIGURE_ARGS= --localstatedir=/var 
CONFIGURE_ARGS+= --extra-ldflags=-L\"${LOCALBASE}/lib\" 
########CONFIGURE_ARGS+= --disable-smartcard-nss
CONFIGURE_ARGS+= --disable-libssh2
CONFIGURE_ARGS+= --enable-debug 
CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --cc=${CC}
CONFIGURE_ARGS+= --enable-docs
CONFIGURE_ARGS+= --disable-kvm
CONFIGURE_ARGS+= --disable-linux-user
CONFIGURE_ARGS+= --disable-linux-aio
CONFIGURE_ARGS+= --disable-xen
CONFIGURE_ARGS+= --smbd=${LOCALBASE}/sbin/smbd 
CONFIGURE_ARGS+= --enable-debug-info
CONFIGURE_ARGS+= --python=${PYTHON_CMD}
CONFIGURE_ARGS+= --extra-cflags=-I${WRKSRC}\ -I${LOCALBASE}/include\ -DPREFIX=\\\"\"${PREFIX}\\\"\"

CONFIGURE_ARGS+= \
		--disable-curl \
		--disable-gnutls \
		--disable-gtk \
		--disable-vte \
		--disable-vnc-jpeg \
		--disable-opengl \
		--disable-usb-redir \
		--disable-sdl \
		--disable-system \
		--disable-user \
		--disable-guest-agent \
		--disable-nettle \
		--disable-gcrypt \
		--disable-curses \
		--disable-vnc \
		--disable-virtfs \
		--disable-brlapi \
		--disable-fdt \
		--disable-bluez \
		--disable-kvm \
		--disable-rdma \
		--disable-vde \
		--disable-netmap \
		--disable-cap-ng \
		--disable-attr \
		--disable-vhost-net \
		--disable-spice \
		--disable-rbd \
		--disable-libiscsi \
		--disable-libnfs \
		--disable-smartcard \
		--disable-libusb \
		--disable-usb-redir \
		--disable-lzo \
		--disable-snappy \
		--disable-bzip2 \
		--disable-seccomp \
		--disable-coroutine-pool \
		--disable-glusterfs \
		--disable-tpm \
		--disable-numa \
		--disable-blobs


.include <bsd.port.options.mk>

PORTDOCS=	*

#CONFIGURE_ARGS+=	--target-list=i386-softmmu,x86_64-softmmu,aarch64-softmmu,arm-softmmu,m68k-softmmu,ppc-softmmu,ppc64-softmmu,mips-softmmu,mips64-softmmu,mips64el-softmmu,mipsel-softmmu
#CONFIGURE_ARGS+=	--target-list=arm-softmmu,i386-softmmu


.if ${ARCH} == "amd64"
MAKE_ARGS+=	ARCH=x86_64
.endif

.if ${ARCH} == "powerpc"
MAKE_ARGS+=	ARCH=ppc
.endif

.if ${ARCH} == "powerpc64"
MAKE_ARGS+=	ARCH=ppc64
.endif

.if ${ARCH} == "sparc64"
CONFIGURE_ARGS+=	--sparc_cpu=v9
.endif

FILES=	${WRKSRC}/configure

# -lprocstat actually only _needs_ -lelf after r249666 or r250870 (MFC)
# but it shouldn't matter much
post-patch:
	${REINPLACE_CMD} -e '/LIBS/s|-lprocstat|-lprocstat -lelf|' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e '/libs_qga=/s|glib_libs|glib_libs -lintl|' ${WRKSRC}/configure
	${REINPLACE_CMD} -E \
		-e "/^by Tibor .TS. S/s|Sch.*z.$$|Schuetz.|" \
		${WRKSRC}/qemu-doc.texi
	${REINPLACE_CMD} -E \
		-e "s|^(CFLAGS=).*|\1${CFLAGS} -fno-strict-aliasing|" \
		-e "s|^(LDFLAGS=).*|\1${LDFLAGS}|" \
		${WRKSRC}/Makefile.target
	${REINPLACE_CMD} -E \
		-e "s|^(CFLAGS=).*|\1${CFLAGS} -fno-strict-aliasing -I.|" \
		-e "s|^(LDFLAGS=).*|\1${LDFLAGS}|" \
		${WRKSRC}/Makefile
	${REINPLACE_CMD} -E -e "1s|^(#! )/usr/bin/perl|\1${PERL}|" \
		${WRKSRC}/scripts/texi2pod.pl

	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}

	${REINPLACE_CMD} -e 's|pixman-1|pixman|g' 	${FILES}


#post-patch-CDROM_DMA-off:
#	${REINPLACE_CMD} -e '/USE_DMA_CDROM/d' ${WRKSRC}/hw/ide/internal.h
#post-patch-GNS3-on:
#	${REINPLACE_CMD} -e 's|(buf\[0\] & 1) && (rctl & E1000_RCTL_MPE)|buf[0] \& 1|' \
#		${WRKSRC}/hw/net/e1000.c
#post-patch-PCAP-on:
#	cd ${WRKSRC} && ${PATCH} --quiet < ${FILESDIR}/pcap-patch

# XXX need to disable usb host code on head while it's not ported to the
# new usb stack yet
post-configure:
	${REINPLACE_CMD} -E -e "s|^(HOST_USB=)bsd|\1stub|" ${WRKSRC}/config-host.mak

#post-install:
#	${INSTALL_SCRIPT} ${FILESDIR}/qemu-ifup.sample ${STAGEDIR}${PREFIX}/etc
#	${INSTALL_SCRIPT} ${FILESDIR}/qemu-ifdown.sample ${STAGEDIR}${PREFIX}/etc
#	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/qemu-*

#post-install-DOCS-on:
#	cd ${WRKSRC} && ${COPYTREE_SHARE} docs ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
#EOF
