#include <vrt/runtime/main.h>
#include <vrt/runtime/environment.h>
#include <vrt/dbt/dbt.h>
#include <vrt/mem/mem.h>
#include <vrt/util/debug.h>
#include <vrt/util/memops.h>
#include <arch/guest/guest-architecture.h>
#include <arch/host/host-architecture.h>

using namespace vrt;
using namespace vrt::arch::guest;
using namespace vrt::arch::host;
using namespace vrt::dbt;
using namespace vrt::mem;
using namespace vrt::runtime;
using namespace vrt::util;

/**
 * Generic runtime start routine.
 */
__noreturn void vrt::runtime::start(const char *cmdline)
{
	dprintf(DebugLevel::INFO, "vrt: command line=%s", cmdline);
	
	// Make sure we're in the low64 address space.
	host_arch->switch_to_low64();

	// Initialise the memory management subsystem.
	if (!mm.init()) {
		dprintf(DebugLevel::FATAL, "vrt: memory subsystem initialisation failed!");
		host_arch->abort();
	}
	
	// Initialise the host platform.
	if (!host_arch->init_platform()) {
		dprintf(DebugLevel::FATAL, "vrt: host platform initialisation failed!");
		host_arch->abort();
	}
		
	// Initialise the DBT
	CaptiveDBT dbt(guest_arch->decoder());
	
	// Create and run the environment.
	runtime::Environment *env = guest_arch->create_environment(dbt);
	
	// Check that the environment was constructed.
	if (!env) {
		dprintf(DebugLevel::FATAL, "vrt: environment failed to be created!");
		host_arch->abort();
	}
		
	// Run the environment, and check that it ran correctly.
	if (!env->run()) {
		dprintf(DebugLevel::FATAL, "vrt: environment failed to run!");
	}
	
	for (;;) {
		asm volatile("hlt");
		asm volatile("pause");
	}
}
