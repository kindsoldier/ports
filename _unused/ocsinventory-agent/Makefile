#
# $Id$
#
PORTNAME=	ocsinventory-unix-agent
PORTVERSION=	2.1.1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://launchpad.net/ocsinventory-unix-agent/stable-${PORTVERSION:R}/${PORTVERSION}/+download/
DISTNAME=	Ocsinventory-Unix-Agent-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Keep track of the computers configuration and software

#RUN_DEPENDS+=	dmidecode:system/dmidecode
RUN_DEPENDS+=	lspci:system/pciutils
RUN_DEPENDS+=	p5-Net-IP>=0:perl/p5-Net-IP
RUN_DEPENDS+=	p5-Proc-Daemon>=0:perl/p5-Proc-Daemon
RUN_DEPENDS+=	p5-XML-Simple>=0:perl/p5-XML-Simple
RUN_DEPENDS+=	p5-libwww>=0:perl/p5-libwww

USES=		perl5 shebangfix
SHEBANG_FILES=	postinst.pl
USE_PERL5=	configure
CONFIGURE_ENV=	PERL_AUTOINSTALL=1
#WRKSRC=		${WRKDIR}/${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}
SUB_FILES=	pkg-message
SUB_LIST=	SITE_PERL=${PREFIX}/${SITE_PERL_REL}
NO_ARCH=	yes

RUN_DEPENDS+=	p5-Proc-Daemon>=0:perl/p5-Proc-Daemon
RUN_DEPENDS+=	p5-Proc-PID-File>=0:perl/p5-Proc-PID-File

RUN_DEPENDS+=	ipmitool:system/ipmitool
RUN_DEPENDS+=	p5-Crypt-SSLeay>=0:perl/p5-Crypt-SSLeay
RUN_DEPENDS+=	p5-LWP-Protocol-https>=0:perl/p5-LWP-Protocol-https
#RUN_DEPENDS+=	p5-Net-CUPS>=0:perl/p5-Net-CUPS
RUN_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP
RUN_DEPENDS+=	p5-Net-Netmask>=0:perl/p5-Net-Netmask
RUN_DEPENDS+=	p5-Net-Ping>=0:perl/p5-Net-Ping
RUN_DEPENDS+=	p5-Nmap-Parser>=0:perl/p5-Nmap-Parser
RUN_DEPENDS+=	nmap:net/nmap

.include <bsd.port.pre.mk>


.if (${ARCH} == "amd64" || ${ARCH} == "x86_64" || ${ARCH} == "i386")
RUN_DEPENDS+=	dmidecode:system/dmidecode
.elif (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
.endif

.include <bsd.port.post.mk>
#EOF

