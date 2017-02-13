#include <arch/guest/aarch64/aarch64-environment.h>
#include <arch/guest/aarch64/aarch64-processor.h>
#include <vrt/util/debug.h>

using namespace vrt::arch::guest::aarch64;
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
	
	return _bsp->run();
}

bool AArch64Environment::setup_platform()
{
	// TODO: Create guest devices
	
	_bsp = new AArch64Processor();
	return true;
}

bool AArch64Environment::prepare_bootstrap()
{
	uint32_t *gpm = (uint32_t *)__guest_phys_to_virt(0);
	
	gpm[0] = 0x12345678;
	
	return true;
}
