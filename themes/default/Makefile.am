MAINTAINERCLEANFILES = Makefile.in

EDC= ${srcdir}/locopdf-entrybox.edc ${srcdir}/locopdf-items.edc
EDJ = $(EDC:%.edc=%.edj)

EXTRA_DIST = $(EDC)
CLEANFILES = $(EDJ)

themedir = $(datadir)/eoi/themes/default
theme_DATA = $(EDJ)

all: $(EDJ)
%.edj: %.edc
	edje_cc -id ${srcdir} -o $@ $<

