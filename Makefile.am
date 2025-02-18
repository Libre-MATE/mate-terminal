if USE_NLS
PO_SUBDIR = po
endif

SUBDIRS = \
	$(PO_SUBDIR) \
	src \
	help

ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

NULL =

DISTCHECK_CONFIGURE_FLAGS = \
	--disable-schemas-install \
	--disable-silent-rules \
	--enable-compile-warnings=no \
	CFLAGS='-Wno-deprecated-declarations'

appdatadir = $(datadir)/metainfo
appdata_DATA = mate-terminal.appdata.xml
appdata_in_files = $(appdata_DATA:.xml=.xml.in)
appdata_in_in_files = $(appdata_in_files:.xml.in=.xml.in.in)
$(appdata_DATA): $(appdata_in_files)
if USE_NLS
	$(AM_V_GEN) $(MSGFMT) --xml --template $< -d $(top_srcdir)/po -o $@
else
	$(AM_V_GEN) cp -f $< $@
endif

desktopdir = $(datadir)/applications
desktop_in_files = mate-terminal.desktop.in.in
desktop_DATA = $(desktop_in_files:.desktop.in.in=.desktop)
$(desktop_DATA): $(desktop_in_files)
if USE_NLS
	$(AM_V_GEN) $(MSGFMT) --desktop --template $< -d $(top_srcdir)/po -o $@
else
	$(AM_V_GEN) cp -f $< $@
endif

man_MANS = mate-terminal.1

bin_SCRIPTS = mate-terminal.wrapper

EXTRA_DIST = 			\
	autogen.sh		\
	xmldocs.make		\
	omf.make		\
	mate-terminal.wrapper   \
	$(appdata_in_in_files)	\
	$(man_MANS)		\
	$(NULL)

CLEANFILES = \
	mate-terminal.appdata.xml \
	$(appdata_DATA) \
	$(desktop_DATA)	\
	$(NULL)

DISTCLEANFILES = \
	$(appdata_in_files) \
	$(NULL)

MAINTAINERCLEANFILES = \
	$(srcdir)/INSTALL \
	$(srcdir)/aclocal.m4 \
	$(srcdir)/autoscan.log \
	$(srcdir)/compile \
	$(srcdir)/config.guess \
	$(srcdir)/config.h.in \
	$(srcdir)/config.sub \
	$(srcdir)/configure.scan \
	$(srcdir)/depcomp \
	$(srcdir)/install-sh \
	$(srcdir)/ltmain.sh \
	$(srcdir)/missing \
	$(srcdir)/mkinstalldirs \
	$(srcdir)/omf.make \
	$(srcdir)/xmldocs.make \
	`find "$(srcdir)" -type f -name Makefile.in -print` \
	$(NULL)

# Build ChangeLog from GIT  history
ChangeLog:
	$(AM_V_GEN) if test -d $(top_srcdir)/.git; then \
		GIT_DIR="$(top_srcdir)/.git" git log --stat > $@; \
	fi

dist: ChangeLog

.PHONY: ChangeLog

-include $(top_srcdir)/git.mk
