#include <vrt/runtime/main.h>
#include <vrt/runtime/environment.h>
#include <vrt/mem/mem.h>
#include <vrt/util/debug.h>
#include <vrt/util/memops.h>
#include <arch/guest/guest-architecture.h>
#include <arch/host/host-architecture.h>

using namespace vrt;
using namespace vrt::arch::guest;
using namespace vrt::arch::host;
using namespace vrt::mem;
using namespace vrt::runtime;
using namespace vrt::util;

/**
 * Generic runtime start routine.
 */
__noreturn void vrt::runtime::start(const char *cmdline)
{
	dprintf(DebugLevel::INFO, "vrt: command line=%s", cmdline);

	// Initialise the memory management subsystem.
	if (!mm.init()) {
		dprintf(DebugLevel::FATAL, "vrt: memory subsystem initialisation failed!");
		host_arch->abort();
	}
		
	// Create and run the environment.
	runtime::Environment *env = guest_arch->create_environment();
	
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
