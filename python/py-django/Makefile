# Created by: Jose Alonso Cardenas Marquez <acardenas@bsd.org.pe>
# $FreeBSD: head/www/py-django22/Makefile 534966 2020-05-11 23:51:58Z dbaio $

PORTNAME=	django
PORTVERSION=	2.2.12
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP https://www.djangoproject.com/m/releases/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Django-${PORTVERSION}
DIST_SUBDIR=	python

MAINTAINER=	python@FreeBSD.org
COMMENT=	High-level Python Web Framework

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>0:python/py-pytz@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlparse>=0:python/py-sqlparse@${PY_FLAVOR}

NO_ARCH=	yes
USES=		cpe python:3.5+ shebangfix
USE_PYTHON=	autoplist distutils
SHEBANG_FILES=	django/bin/django-admin.py django/conf/project_template/manage.py-tpl

#PGSQL_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psycopg2>0:databases/py-psycopg2@${PY_FLAVOR}
#MYSQL_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mysqlclient>=1.3.13:databases/py-mysqlclient@${PY_FLAVOR}

.include <bsd.port.mk>
