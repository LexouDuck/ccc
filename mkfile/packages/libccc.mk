#! Package: libccc - cross-platform standard library for C



PACKAGE_libccc = libccc
PACKAGE_libccc_VERSION := $(shell $(call packages_getversion,$(PACKAGE_libccc)))
PACKAGE_libccc_LIBMODE ?= static
PACKAGE_libccc_DIR = $(LIBDIR)libccc/
PACKAGE_libccc_BIN = $(PACKAGE_libccc_DIR)bin/$(TARGETDIR)/
PACKAGE_libccc_INCLUDE = $(PACKAGE_libccc_DIR)hdr/
PACKAGE_libccc_LINKDIR = $(PACKAGE_libccc_BIN)$(PACKAGE_libccc_LIBMODE)/
PACKAGE_libccc_LINKLIB = -lccc
PACKAGE_libccc_LINK = -L$(PACKAGE_libccc_LINKDIR) $(PACKAGE_libccc_LINKLIB)



PACKAGE_libccc_URL = https://github.com/LexouDuck/libccc
PACKAGE_libccc_URL_VERSION = https://raw.githubusercontent.com/LexouDuck/libccc/$(PACKAGE_libccc_GITBRANCH)/VERSION

PACKAGE_libccc_GITBRANCH ?= master



#! The shell command to retrieve the latest version number for the given git branch
package_libccc_checkupdates = \
	curl --silent $(PACKAGE_libccc_URL_VERSION) \
	| cut -d'@' -f 2 \
	| cut -d'-' -f 1 \



.PHONY:\
package-libccc #! prepares the package for use in the project
package-libccc:
ifeq ($(strip $(PACKAGE_libccc_VERSION)),?)
	@$(call print_message,"No specific version set - getting latest version...")
	$(eval PACKAGE_libccc_VERSION := $(shell $(call package_libccc_checkupdates)))
endif
	@$(call packages_setversion,$(PACKAGE_libccc),$(PACKAGE_libccc_VERSION))
	@$(MAKE) package-install-libccc
	@$(MAKE) package-compile-libccc

.PHONY:\
package-install-libccc #! downloads the package and sets up its package folder
package-install-libccc:
	@if ! [ -f ".gitmodules" ] ; then \
		$(call print_message,"Adding git submodule: $(PACKAGE_libccc_URL)...") ; \
		$(GIT) submodule add $(PACKAGE_libccc_URL) $(PACKAGE_libccc_DIR) ; \
	fi
	@if [ -z "`ls $(PACKAGE_libccc_DIR)`" ] ; then \
		$(call print_message,"Downloading package: $(PACKAGE_libccc)@$(PACKAGE_libccc_VERSION)...") ; \
		$(GIT) submodule update --init $(PACKAGE_libccc_DIR) ; \
		$(call print_success,"Installed $(PACKAGE_libccc)@$(PACKAGE_libccc_VERSION)") ; \
	fi

.PHONY:\
package-compile-libccc #! downloads the package
package-compile-libccc:
	@$(call print_message,"Building package: $(PACKAGE_libccc)...")
	@$(MAKE) -C $(PACKAGE_libccc_DIR) BUILDMODE=$(BUILDMODE)
	@$(call print_success,"Compiled $(PACKAGE_libccc)@$(PACKAGE_libccc_VERSION)")




.PHONY:\
update-libccc #! updates the package to the latest version
update-libccc:
	@$(call print_message,"Checking new versions for package: $(PACKAGE_libccc)...")
	@if [ "$(PACKAGE_libccc_VERSION)" = "?" ] || ! [ -d "$(PACKAGE_libccc_DIR)" ] ; then \
		$(MAKE) package-libccc ; \
	fi
	@echo "=> Current version is: $(PACKAGE_libccc_VERSION)"
	@cd $(PACKAGE_libccc_DIR) ; \
	if $(GIT) status | grep -q "HEAD detached" ; then \
		$(call print_warning,"Your git submodule "$$i" is in detached HEAD state.") ; \
		printf "You need to manually go into the submodule folder and do:\n" ; \
		printf "$$ git checkout $(PACKAGE_libccc_GITBRANCH)\n" ; \
		printf "after making sure that you have no uncommitted local working changes.\n" ; \
	else \
		newer_version=`$(call package_libccc_checkupdates)` ; \
		printf "Newest version is '$${newer_version}'.\n" ; \
		$(call packages_setversion,libccc,$$newer_version) ; \
		$(GIT) fetch ; \
		$(GIT) checkout $(PACKAGE_libccc_GITBRANCH) ; \
		cd - ; \
		$(MAKE) package-libccc PACKAGE_libccc_VERSION=$$newer_version ; \
	fi
