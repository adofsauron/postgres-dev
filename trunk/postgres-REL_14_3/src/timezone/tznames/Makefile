#-------------------------------------------------------------------------
#
# Makefile
#    Makefile for the timezone names

# IDENTIFICATION
#    src/timezone/tznames/Makefile
#
#-------------------------------------------------------------------------

subdir = src/timezone/tznames
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

TZNAMES_TEMPLATES = Africa.txt America.txt Antarctica.txt Asia.txt \
	Atlantic.txt Australia.txt Etc.txt Europe.txt Indian.txt Pacific.txt
TZNAMES_TEMPLATES_FILES = $(TZNAMES_TEMPLATES:%=$(srcdir)/%)

TZNAMES_SETS = Default Australia India
TZNAMES_SETS_FILES = $(TZNAMES_SETS:%=$(srcdir)/%)

install: installdirs
	$(INSTALL_DATA) $(TZNAMES_TEMPLATES_FILES) '$(DESTDIR)$(datadir)/timezonesets'
	$(INSTALL_DATA) $(TZNAMES_SETS_FILES) '$(DESTDIR)$(datadir)/timezonesets'

installdirs:
	$(MKDIR_P) '$(DESTDIR)$(datadir)/timezonesets'

uninstall:
	rm -rf '$(DESTDIR)$(datadir)/timezonesets'
