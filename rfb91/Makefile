MODULE_big = pgrfb
OBJS = pgrfb.o
#MODULES = pgrfb

EXTENSION = pgrfb
DATA = pgrfb--1.0.sql pgrfb--unpackaged--1.0.sql

#PG_CPPFLAGS += -I../librfb/
#SHLIB_LINK += -L../librfb/ -lrfb
SHLIB_LINK = -lrfb

ifdef USE_PGXS
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
else
subdir = contrib/pgrfb
top_builddir = /usr/src/postgresql-9.1
#top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif

copy: pgrfb.so
	cp pgrfb.so /usr/lib/postgresql/9.1/lib/ ;\
	cp *.sql *.control /usr/share/postgresql/9.1/extension/

