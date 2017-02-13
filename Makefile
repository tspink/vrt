#
# CAPTIVE Virtual Runtime
#
# Copyright (C) University of Edinburgh 2017.  All Rights Reserved
# Tom Spink <tspink@inf.ed.ac.uk>
#
export MAKEFLAGS    += -rR --no-print-directory
export q	    := @
export arch	    ?= x86

__default: all
	
export top-dir	    := $(CURDIR)
export build-dir    := $(top-dir)/build
export src-dir	    := $(top-dir)/src
export inc-dir	    := $(top-dir)/inc
export out-dir	    := $(top-dir)/out

-include $(build-dir)/Makefile.include

export common-flags := -I$(inc-dir) -nostdinc -nostdlib -g -Wall -O3 -std=gnu++14
export common-flags += -mcmodel=kernel
export common-flags += -ffreestanding -fno-builtin -fno-omit-frame-pointer -fno-rtti -fno-exceptions
export common-flags += -fno-delete-null-pointer-checks -fcheck-new -mno-red-zone
export common-flags += -mno-mmx -mno-sse -mno-sse2 -mno-sse3 -mno-ssse3 -mno-sse4.1 -mno-sse4.2
export common-flags += -mno-sse4 -mno-avx -mno-aes -mno-sse4a -mno-fma4

export cxxflags	:= $(common-flags) -include$(inc-dir)/guest-pc.h
export asflags	:= $(common-flags)
export ldflags  := -nostdlib -z nodefaultlib 

export target           := $(out-dir)/captive-vrt
export toplevel-obj	:= $(top-dir)/vrt.o
export linker-script    := $(top-dir)/vrt.ld

export main-cpp-src := $(shell find $(src-dir) | grep -E "\.cpp$$")
export main-as-src  := $(shell find $(src-dir) | grep -E "\.S$$")
export main-obj	    := $(main-cpp-src:.cpp=.o) $(main-as-src:.S=.o)
export main-dep	    := $(main-obj:.o=.d)

all: $(target)
	@echo
	@echo "  CAPTIVE VRT build complete: $(target)"
	@echo
	
clean: .FORCE
	rm -f $(target) $(toplevel-obj) $(main-dep) $(main-obj)
	
sources: .FORCE
	@echo $(main-cpp-src)
	
$(target): $(toplevel-obj) $(linker-script) $(out-dir)
	@echo "  LD       $(BUILD-TARGET).64"
	$(q)$(ld) -n -o $@.64 -T $(linker-script) $(ldflags) $(toplevel-obj)
	
	@echo "  OBJCOPY  $(BUILD-TARGET)"
	$(q)$(objcopy) --input-target=elf64-x86-64 --output-target=elf32-i386 $@.64 $@
		
$(toplevel-obj): $(main-obj)
	@echo "  LD       $(BUILD-TARGET)"
	$(q)$(ld) -r -o $@ $(ldflags) $^
	
$(out-dir):
	@echo "  MKDIR    $(BUILD-TARGET)"
	$(q)mkdir $@

%.o: %.cpp %.d
	@echo "  CXX      $(BUILD-TARGET)"
	$(q)$(cxx) -c -o $@ $(cxxflags) $(EXTRA-TARGET-FLAGS) $<

%.o: %.S %.d
	@echo "  AS       $(BUILD-TARGET)"
	$(q)$(cxx) -c -o $@ $(asflags) $<

%.d: %.cpp
	$(q)$(cxx) -M -MT $(@:.d=.o) -o $@ $(cxxflags) $<

%.d: %.S
	$(q)$(cxx) -M -MT $(@:.d=.o) -o $@ $(cxxflags) $<

-include $(main-dep)

.PHONY: __default all clean .FORCE
