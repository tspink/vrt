#include <arch/guest/aarch64/aarch64-environment.h>
#include <arch/guest/aarch64/aarch64-processor.h>
#include <arch/guest/aarch64/aarch64-mmu.h>
#include <vrt/mem/mem.h>
#include <vrt/runtime/modules.h>
#include <vrt/util/debug.h>

using namespace vrt::arch::guest::aarch64;
using namespace vrt::mem;
using namespace vrt::runtime;
using namespace vrt::util;

AArch64Environment::AArch64Environment(dbt::DBT& dbt) : Environment(dbt), _bsp(nullptr)
{

}

bool AArch64Environment::init()
{
	return true;
}

bool AArch64Environment::run()
{
	if (!setup_platform()) {
		dprintf(DebugLevel::ERROR, "aarch64: unable to setup platform");
		return false;
	}

	if (!prepare_bootstrap()) {
		dprintf(DebugLevel::ERROR, "aarch64: unable to prepare bootloader");
		return false;
	}
	
	if (!load_kernel()) {
		dprintf(DebugLevel::ERROR, "aarch64: unable to load guest kernel");
		return false;
	}
	
	return _bsp->run();
}

bool AArch64Environment::setup_platform()
{
	// TODO: Create guest devices
	
	MMU *mmu = new AArch64MMU();
	_bsp = new AArch64Processor(*this, *mmu);
	
	return true;
}

bool AArch64Environment::prepare_bootstrap()
{
	return true;
}

bool AArch64Environment::load_kernel()
{
	auto modules = module_manager.modules();

	if (modules.count() == 0) return false;
	
	auto guest_kernel_module = modules.first();
	
	void *source = guest_kernel_module->start;
	gpa_t target = 0x10000;
	size_t size = guest_kernel_module->size;
	
	dprintf(DebugLevel::DEBUG, "aarch64: copying guest kernel to %p (%lx)", target, size);
	void *host = mm.copy_to_guest_phys(target, source, size);
	dprintf(DebugLevel::DEBUG, "aarch64: done %p", host );
	
	return host != nullptr;
}
