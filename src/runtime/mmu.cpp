#include <vrt/runtime/mmu.h>

using namespace vrt::runtime;

MMU::MMU() : _enabled(false)
{

}

MMUTranslationResponse MMU::translate(const MMUTranslationRequest& tr)
{
	if (!_enabled) {
		MMUTranslationResponse r;
		r.pa = tr.va;
		return r;
	} else {
		return translate_raw(tr);
	}
}
