#include <vrt/dbt/dbt.h>
#include <vrt/dbt/translation.h>
#include <vrt/dbt/translation-context.h>
#include <vrt/util/debug.h>
#include <arch/guest/guest-instruction-decoder.h>
#include <arch/guest/guest-instruction.h>

using namespace vrt::dbt;
using namespace vrt::arch;
using namespace vrt::arch::guest;

CaptiveDBT::CaptiveDBT(arch::guest::GuestInstructionDecoder& decoder) : DBT(decoder)
{

}

Translation *CaptiveDBT::translate(gpa_t pa, TranslationFlags::TranslationFlags flags)
{
	TranslationContext ctx;
	
	gpfn_t current_page = __guest_paging::page_index(pa);
	gpa_t current_pc = pa;
	
	while (__guest_paging::page_index(current_pc) == current_page) {
		hva_t insn_hva = __guest_phys_to_virt(current_pc);
		
		fatal("XXX %p", insn_hva);
		
		// Decode the guest instruction
		Instruction *insn = decoder().decode(insn_hva);
		if (!insn) {
			// TODO: Translate an "Illegal Instruction"
		} else {
			// Translate the instruction into the context
			if (!insn->translate(ctx)) {
				return nullptr;
			}
		}
		
		// Stop translating when we encounter control-flow.
		if (insn->control_flow_info().IsControlFlow) {
			break;
		}
		
		current_pc += insn->length();
	}
	
	if (!optimise(ctx)) {
		return nullptr;
	}
	
	return compile(ctx);
}

bool CaptiveDBT::optimise(TranslationContext& ctx)
{
	return true;
}

Translation* CaptiveDBT::compile(TranslationContext& ctx)
{
	return nullptr;
}
