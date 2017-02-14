#include <vrt/dbt/dbt.h>
#include <vrt/dbt/translation.h>

using namespace vrt::dbt;

CaptiveDBT::CaptiveDBT(arch::guest::GuestInstructionDecoder& decoder) : DBT(decoder)
{

}

Translation *CaptiveDBT::translate(guest_phys_addr_t pa, TranslationFlags::TranslationFlags flags)
{
	return nullptr;
}
