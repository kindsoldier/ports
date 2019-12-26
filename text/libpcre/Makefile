#
# $Id: Makefile 1776 2008-09-15 16:42:50Z root $
# $URL$
#
PORTNAME=	pcre
PORTVERSION=	8.36
CATEGORIES=	devel

MASTER_SITES+=	SF
MASTER_SITES+=	ftp://ftp.csx.cam.ac.uk/pub/software/programming/${PORTNAME}/
MASTER_SITES+=	ftp://ftp.fu-berlin.de/unix/misc/${PORTNAME}/
MASTER_SITES+=	ftp://ftp.tin.org/pub/libs/${PORTNAME}/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Perl Compatible Regular Expressions library

USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

CONFIGURE_ARGS+= --includedir=${PREFIX}/include

#CONFIGURE_ARGS+= --enable-newline-is-any
CONFIGURE_ARGS+= --enable-newline-is-anycrlf
#CONFIGURE_ARGS+= --enable-newline-is-cr
#CONFIGURE_ARGS+= --enable-newline-is-crlf
#CONFIGURE_ARGS+= --enable-newline-is-lf
CONFIGURE_ARGS+= --enable-pcregrep-libbz2
CONFIGURE_ARGS+= --enable-pcregrep-libz
#CONFIGURE_ARGS+= --enable-pcretest-libreadline
CONFIGURE_ARGS+= --enable-pcretest-libedit
CFLAGS+=	-I/usr/include/edit
CPPFLAGS+=	-I/usr/include/edit

#CONFIGURE_ARGS+= --enable-rebuild-chartables
CONFIGURE_ARGS+= --enable-unicode-properties
CONFIGURE_ARGS+= --enable-utf8


post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/pcregrep
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/pcretest
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_assign_jit_stack.3 pcre16_assign_jit_stack.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_compile.3 pcre16_compile.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_compile2.3 pcre16_compile2.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_config.3 pcre16_config.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_copy_named_substring.3 pcre16_copy_named_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_copy_substring.3 pcre16_copy_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_exec.3 pcre16_exec.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_dfa_exec.3 pcre16_dfa_exec.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_free_study.3 pcre16_free_study.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_free_substring.3 pcre16_free_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_free_substring_list.3 pcre16_free_substring_list.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_fullinfo.3 pcre16_fullinfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_named_substring.3 pcre16_get_named_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_stringnumber.3 pcre16_get_stringnumber.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_stringtable_entries.3 pcre16_get_stringtable_entries.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_substring.3 pcre16_get_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_substring_list.3 pcre16_get_substring_list.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_jit_exec.3 pcre16_jit_exec.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_jit_stack_alloc.3 pcre16_jit_stack_alloc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_jit_stack_free.3 pcre16_jit_stack_free.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_maketables.3 pcre16_maketables.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_pattern_to_host_byte_order.3 pcre16_pattern_to_host_byte_order.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_refcount.3 pcre16_refcount.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_study.3 pcre16_study.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_utf16_to_host_byte_order.3 pcre16_utf16_to_host_byte_order.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_version.3 pcre16_version.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_assign_jit_stack.3 pcre32_assign_jit_stack.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_compile.3 pcre32_compile.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_compile2.3 pcre32_compile2.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_config.3 pcre32_config.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_copy_named_substring.3 pcre32_copy_named_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_copy_substring.3 pcre32_copy_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_dfa_exec.3 pcre32_dfa_exec.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_exec.3 pcre32_exec.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_free_study.3 pcre32_free_study.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_free_substring.3 pcre32_free_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_free_substring_list.3 pcre32_free_substring_list.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_fullinfo.3 pcre32_fullinfo.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_named_substring.3 pcre32_get_named_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_stringnumber.3 pcre32_get_stringnumber.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_stringtable_entries.3 pcre32_get_stringtable_entries.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_substring.3 pcre32_get_substring.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_get_substring_list.3 pcre32_get_substring_list.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_jit_exec.3 pcre32_jit_exec.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_jit_stack_alloc.3 pcre32_jit_stack_alloc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_jit_stack_free.3 pcre32_jit_stack_free.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_maketables.3 pcre32_maketables.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_pattern_to_host_byte_order.3 pcre32_pattern_to_host_byte_order.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_refcount.3 pcre32_refcount.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_study.3 pcre32_study.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_utf32_to_host_byte_order.3 pcre32_utf32_to_host_byte_order.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  pcre_version.3 pcre32_version.3

.include <bsd.port.mk>
#EOF
