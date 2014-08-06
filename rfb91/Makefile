MODULES = rfb

EXTENSION = rfb
DATA = rfb--1.0.sql rfb--unpackaged--1.0.sql

PG_CPPFLAGS += -I../librfb/
SHLIB_LINK += -L../librfb/ -lrfb

ifdef USE_PGXS
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
else
subdir = contrib/rfb
top_builddir = /usr/src/postgresql-9.1
#top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
