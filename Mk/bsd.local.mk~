# bsd.local.mk - Sandbox for local modification to ports framework.
#
# Created by: Mark Linimon <linimon@FreeBSD.org>
#
# $FreeBSD: head/Mk/bsd.local.mk 358214 2014-06-18 07:14:22Z bapt $
#

pl:
	echo -n > ${PKGDIR}/pkg-plist.new
	cd ${STAGEDIR}${PREFIX} &&  find -ds . -type d -empty -delete
	cd ${STAGEDIR}${PREFIX} &&  find -ds . -type d -empty -delete
	cd ${STAGEDIR}${PREFIX} &&  find -ds . -type d -empty -delete
	cd ${STAGEDIR}${PREFIX} &&  find -ds . -type d -empty -delete
.for DIR in .
	-cd ${STAGEDIR}${PREFIX} && find -s ${DIR} -type f -or -type l | sed 's,^./,,' | sort >> ${PKGDIR}/pkg-plist.new
.endfor
#etc bin sbin include lib libexec libdata share man www openjdk6 openjdk8 linux usr
.for DIR in .
	-cd ${STAGEDIR}${PREFIX} && find -ds ${DIR} -type d  | sed 's,^./,,' | sed 's,^,@dir ,'>> ${PKGDIR}/pkg-plist.new
.endfor

cf:	extract
	cd ${WRKSRC} && ./configure --help | sed -e 's,^,#,; s, --,CONFIGURE_ARGS+= --,' \
	    > ${WRKDIR}/../configure.help


gp: generate-plist




.if !defined(_POSTMKINCLUDED) && !defined(Local_Pre_Include)

Local_Pre_Include=	bsd.local.mk

#
# Here is where any code that needs to run at bsd.port.pre.mk inclusion
# time should live.
#

.endif # !defined(_POSTMKINCLUDED) && !defined(Local_Pre_Include)

.if defined(_POSTMKINCLUDED) && !defined(Local_Post_Include)

Local_Post_Include=	bsd.local.mk

#
# here is where any code that needs to run at bsd.port.post.mk inclusion
# time should live.
#

.endif # defined(_POSTMKINCLUDED) && !defined(Local_Post_Include)
