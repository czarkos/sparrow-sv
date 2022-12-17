# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsparrow.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsparrow \
	Vsparrow___024root__DepSet_h757febcf__0 \
	Vsparrow___024root__DepSet_h9f0e3415__0 \
	Vsparrow___024root__DepSet_h9f0e3415__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsparrow___024root__Slow \
	Vsparrow___024root__DepSet_h757febcf__0__Slow \
	Vsparrow___024root__DepSet_h9f0e3415__0__Slow \
	Vsparrow___024unit__Slow \
	Vsparrow___024unit__DepSet_h60e9784a__0__Slow \
	Vsparrow_sparrow__Slow \
	Vsparrow_sparrow__DepSet_h6e5caa05__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsparrow__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-