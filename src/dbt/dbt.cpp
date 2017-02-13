#include <vrt/dbt/dbt.h>

using namespace vrt::dbt;

CaptiveDBT::CaptiveDBT(arch::guest::GuestInstructionDecoder& decoder) : DBT(decoder)
{

}

virt_addr_t CaptiveDBT::translate(guest_phys_addr_t pa, TranslationFlags::TranslationFlags flags)
{
	return 0;
}
