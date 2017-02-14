#include <arch/guest/aarch64/aarch64-mmu.h>

using namespace vrt::arch::guest::aarch64;
using namespace vrt::runtime;

MMUTranslationResponse AArch64MMU::translate_raw(const MMUTranslationRequest& tr)
{
	MMUTranslationResponse r;
	r.pa = tr.va;
	
	return r;
}
