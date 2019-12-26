#
# $Id$
#
PORTNAME=	fusioninventory-agent
PORTVERSION=	2.4
CATEGORIES=	net-mgmt
#MASTER_SITES=	CPAN
#MASTER_SITE_SUBDIR=	CPAN:GROUSSE 
MASTER_SITES=   https://github.com/fusioninventory/fusioninventory-agent/releases/download/2.4/# FusionInventory-Agent-2.4.tar.gz
DISTNAME=	FusionInventory-Agent-${PORTVERSION}

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Agent for OCS Inventory server and FusionInventory for GLPI servers

BUILD_DEPENDS+=	p5-ExtUtils-MakeMaker>=6.59:perl/p5-ExtUtils-MakeMaker
BUILD_DEPENDS+=	p5-File-Which>=0:perl/p5-File-Which
BUILD_DEPENDS+=	p5-libwww>=0:perl/p5-libwww 
BUILD_DEPENDS+=	p5-Net-IP>=0:perl/p5-Net-IP
BUILD_DEPENDS+=	p5-UNIVERSAL-require>=0:perl/p5-UNIVERSAL-require
BUILD_DEPENDS+=	p5-Text-Template>=0:perl/p5-Text-Template
BUILD_DEPENDS+=	p5-XML-TreePP>=0:perl/p5-XML-TreePP
RUN_DEPENDS+=	${BUILD_DEPENDS}

#TEST_DEPENDS+=	p5-POE-Component-Client-Ping>=0:perl/p5-POE-Component-Client-Ping
#TEST_DEPENDS+=	p5-HTTP-Proxy>=0:perl/p5-HTTP-Proxy
#TEST_DEPENDS+=	p5-HTTP-Server-Simple>=0:perl/p5-HTTP-Server-Simple
#TEST_DEPENDS+=	p5-HTTP-Server-Simple-Authen>=0:perl/p5-HTTP-Server-Simple-Authen
#TEST_DEPENDS+=	p5-IO-Socket-SSL>=0:perl/p5-IO-Socket-SSL
#TEST_DEPENDS+=	p5-IO-Capture>=0:perl/p5-IO-Capture
#TEST_DEPENDS+=	p5-IPC-Run>=0:perl/p5-IPC-Run
#TEST_DEPENDS+=	p5-JSON>=0:perl/p5-JSON
#TEST_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP
#TEST_DEPENDS+=	p5-Test-Compile>=0:perll/p5-Test-Compile
#TEST_DEPENDS+=	p5-Test-Deep>=0:perl/p5-Test-Deep
#TEST_DEPENDS+=	p5-Test-Exception>=0:perl/p5-Test-Exception
#TEST_DEPENDS+=	p5-Test-MockModule>=0:perl/p5-Test-MockModule
#TEST_DEPENDS+=	p5-Test-MockObject>=0:perl/p5-Test-MockObject
#TEST_DEPENDS+=	p5-Test-NoWarnings>=0:perl/p5-Test-NoWarnings
#TEST_DEPENDS+=	p5-Test-Simple>=0.93:perl/p5-Test-Simple

#CONFLICTS=	p5-FusionInventory-Agent-Task-NetDiscovery-* \
#		p5-FusionInventory-Agent-Task-SNMPQuery-*

USES=		gmake perl5
USE_PERL5=	configure
USE_RC_SUBR=    fusioninventory

CUPS_RUN_DEPENDS+=	p5-Net-CUPS>=0.6:perl/p5-Net-CUPS

DAEMON_RUN_DEPENDS+=	p5-HTTP-Daemon>=0:perl/p5-HTTP-Daemon
DAEMON_RUN_DEPENDS+=	p5-Proc-Daemon>=0:perl/p5-Proc-Daemon
DAEMON_RUN_DEPENDS+=	p5-Proc-PID-File>=0:perl/p5-Proc-PID-File

DEPLOY_RUN_DEPENDS+=	p5-Archive-Extract>=0:perl/p5-Archive-Extract
DEPLOY_RUN_DEPENDS+=	p5-SHA>=0:perl/p5-SHA
DEPLOY_RUN_DEPENDS+=	p5-File-Copy-Recursive>=0:perl/p5-File-Copy-Recursive
DEPLOY_RUN_DEPENDS+=	p5-JSON>=0:perl/p5-JSON
DEPLOY_RUN_DEPENDS+=	p5-POE-Component-Client-Ping>=0:perl/p5-POE-Component-Client-Ping
DEPLOY_RUN_DEPENDS+=	p5-URI-Escape-XS>=0:perl/p5-URI-Escape-XS

# Wants URI::Escape, ports tree has URI::Escape::XS, seems drop-in replacement
#DMIDECODE_RUN_DEPENDS=	dmidecode:system/dmidecode

NETDISC_RUN_DEPENDS+=	nmap:net/nmap
NETDISC_RUN_DEPENDS+=	p5-Net-NBName>=0:perl/p5-Net-NBName
NETDISC_RUN_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP
NETDISC_RUN_DEPENDS+=	p5-Thread-Queue>=0:perl/p5-Thread-Queue

NETINV_RUN_DEPENDS+=	p5-Crypt-DES>=0:perl/p5-Crypt-DES
NETINV_RUN_DEPENDS+=	p5-Net-SNMP>=0:perl/p5-Net-SNMP
NETINV_RUN_DEPENDS+=	p5-Thread-Queue>=0:perl/p5-Thread-Queue

PCIUTILS_RUN_DEPENDS+=	lspci:system/pciutils

SSL_RUN_DEPENDS+=	p5-IO-Socket-SSL>=1.14:perl/p5-IO-Socket-SSL
SSL_RUN_DEPENDS+=	p5-LWP-Protocol-https>=0:perl/p5-LWP-Protocol-https

WOL_RUN_DEPENDS+=	p5-Net-Write>=0:perl/p5-Net-Write
ZLIB_RUN_DEPENDS+=	p5-Compress-Raw-Zlib>=0:perl/p5-Compress-Raw-Zlib

BUILD_DEPENDS+= ${ZLIB_RUN_DEPENDS}
BUILD_DEPENDS+= ${SSL_RUN_DEPENDS}
BUILD_DEPENDS+= ${PCIUTILS_RUN_DEPENDS}
BUILD_DEPENDS+= ${NETINV_RUN_DEPENDS}
BUILD_DEPENDS+= ${NETDISC_RUN_DEPENDS}
BUILD_DEPENDS+= ${DMIDECODE_RUN_DEPENDS}
BUILD_DEPENDS+= ${DEPLOY_RUN_DEPENDS}
BUILD_DEPENDS+= ${DAEMON_RUN_DEPENDS}
#BUILD_DEPENDS+= ${CUPS_RUN_DEPENDS}


post-patch:
	${FIND} ${WRKSRC} -type f \( -name '*.orig' \) -delete


.include <bsd.port.pre.mk>


.if (${ARCH} == "amd64" || ${ARCH} == "x86_64" || ${ARCH} == "i386")
RUN_DEPENDS+=	dmidecode:system/dmidecode
.elif (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
.endif

.include <bsd.port.post.mk>

#EOF
