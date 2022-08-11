#! This file holds C-specific rules to build a program



objs = ` cat "$(OBJSFILE)" | tr '\n' ' ' `

#! Path of the file which stores the list of compiled object files
OBJSFILE = $(OBJPATH)objs.txt

#! Derive list of compiled object files (.o) from list of srcs
OBJS := $(SRCS:$(SRCDIR)%.c=$(OBJPATH)%.o)

#! Derive list of dependency files (.d) from list of srcs
DEPS := $(OBJS:%.o=%.d)

# here we add dependency library linking flags for each package
LDLIBS := $(LDLIBS) \
	$(foreach i,$(PACKAGES), $(PACKAGE_$(i)_LINK))

# here we add include header folders for each package
INCLUDES := $(INCLUDES) \
	$(foreach i,$(PACKAGES), -I$(PACKAGE_$(i)_INCLUDE))

#! Shell command used to copy over dependency libraries from ./lib into ./bin
#! @param	$(1)	The subdirectory within the ./bin target folder
bin_copylibs = \
	mkdir -p $(BINPATH)$(1) ; \
	$(foreach i,$(PACKAGES), \
		for i in $(PACKAGE_$(i)_LINKDIR)* ; do \
			cp -Rp "$$i" $(BINPATH)$(1) || $(call print_warning,"No library files to copy from $(PACKAGE_$(i)_LINKDIR)*") ; \
		done ; )

#! Shell command used to create symbolic links for version-named library binary
#! @param $(1)	path of the binary file (folder, relative to root-level Makefile)
#! @param $(2)	name of the binary file (without version number, and without file extension)
#! @param $(3)	file extension of the binary file
bin_symlinks = \
	cd $(1) \



.PHONY:\
build #! Builds the program, with the default BUILDMODE (typically debug)
build: \
$(BINPATH)$(NAME)

.PHONY:\
build-debug #! Builds the program, in 'debug' mode (with debug flags and symbol-info)
build-debug:
	@$(MAKE) build BUILDMODE=debug

.PHONY:\
build-release #! Builds the program, in 'release' mode (with optimization flags)
build-release:
	@$(MAKE) build BUILDMODE=release



#! Generates the list of object files
$(OBJSFILE): $(SRCSFILE)
	@mkdir -p $(@D)
	@printf "" > $(OBJSFILE)
	$(foreach i,$(OBJS),	@printf "$(i)\n" >> $(OBJSFILE) $(C_NL))



#! Compiles object files from C source files
$(OBJPATH)%.o : $(SRCDIR)%.c
	@mkdir -p $(@D)
	@printf "Compiling file: $@ -> "
	@$(CC) -o $@ $(CFLAGS) $(CPPFLAGS) -MMD $(INCLUDES) -c $<
	@printf $(IO_GREEN)"OK!"$(IO_RESET)"\n"



#! Compiles the project executable
$(BINPATH)$(NAME): $(OBJSFILE) $(OBJS)
	@rm -f $@
	@mkdir -p $(@D)
	@printf "Compiling program: $@ -> "
	@$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(call objs) $(LDLIBS)
	@printf $(IO_GREEN)"OK!"$(IO_RESET)"\n"
	@$(call bin_copylibs)
	@$(call bin_symlinks,$(BINPATH),$(NAME),)



# The following line is for `.d` dependency file handling
-include $(DEPS)



.PHONY:\
mkdir-build #! Creates all the build folders in the ./bin folder (according to `OSMODES`)
mkdir-build:
	@$(call print_message,"Creating build folders...")
	$(foreach i,$(BUILDMODES),\
	$(foreach os,$(OSMODES),\
	$(foreach cpu,$(CPUMODES),	@mkdir -p $(BINDIR)$(i)_$(os)_$(cpu)$(C_NL))))



.PHONY:\
clean-build #! Deletes all intermediary build-related files
clean-build: \
clean-build-obj \
clean-build-dep \
clean-build-bin \
clean-build-exe \

.PHONY:\
clean-build-obj #! Deletes all .o build object files
clean-build-obj:
	@$(call print_message,"Deleting all build .o files...")
	$(foreach i,$(OBJS),	@rm -f "$(i)" $(C_NL))

.PHONY:\
clean-build-dep #! Deletes all .d build dependency files
clean-build-dep:
	@$(call print_message,"Deleting all build .d files...")
	$(foreach i,$(DEPS),	@rm -f "$(i)" $(C_NL))

.PHONY:\
clean-build-exe #! Deletes the built program in the root project folder
clean-build-exe:
	@$(call print_message,"Deleting program: $(BINPATH)$(NAME)")
	@rm -f $(BINPATH)$(NAME)
	@rm -f $(NAME)

.PHONY:\
clean-build-bin #! Deletes all build binaries in the ./bin folder
clean-build-bin:
	@$(call print_message,"Deleting builds in '$(BINPATH)'...")
	@rm -f $(BINPATH)*



.PHONY:\
prereq-build #! Checks prerequisite installed tools to build a program
prereq-build:
	@-$(call check_prereq,'(build) C compiler: $(CC)',\
		$(CC) --version,\
		$(call install_prereq,$(CC)))
