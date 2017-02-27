#include <vrt/dbt/dbt.h>
#include <vrt/dbt/translation.h>
#include <vrt/dbt/translation-context.h>
#include <vrt/dbt/ir/function.h>
#include <vrt/util/debug.h>
#include <arch/guest/guest-instruction-decoder.h>
#include <arch/guest/guest-instruction.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;
using namespace vrt::arch;
using namespace vrt::arch::guest;
using namespace vrt::util;

CaptiveDBT::CaptiveDBT(arch::guest::GuestInstructionDecoder& decoder) : DBT(decoder)
{

}

Translation *CaptiveDBT::translate(gpa_t pa, TranslationFlags::TranslationFlags flags)
{
	TranslationContext ctx;
	Function *block_function = ctx.create_function();
	
	gpfn_t current_page = __guest_paging::page_index(pa);
	gpa_t current_pc = pa;
	
	while (__guest_paging::page_index(current_pc) == current_page) {
		hva_t insn_hva = __guest_phys_to_virt(current_pc);
		
		// Decode the guest instruction
		Instruction *insn = decoder().decode(insn_hva);
		if (!insn) {
			dprintf(DebugLevel::DEBUG, "DECODE FAILED");
			// TODO: Translate illegal instruction
			break;
		} else {
			const char *text = insn->disassemble(current_pc);
			
			dprintf(DebugLevel::DEBUG, "DECODE @ %x SUCCEEDED (%u) %s", 
					current_pc,
					insn->internal_opcode(),
					text);
			
			delete text;
			
			// Translate the instruction into the basic-block function
			if (!insn->translate(*block_function)) {
				return nullptr;
			}
		}
		
		// Stop translating when we encounter control-flow.
		if (insn->control_flow_info().IsControlFlow) {
			break;
		}
		
		// Increment the current working PC by the length of the instruction.
		current_pc += insn->length();
	}
	
	if (!optimise(ctx)) {
		return nullptr;
	}
	
	return compile(*block_function);
}

bool CaptiveDBT::optimise(TranslationContext& ctx)
{
	return true;
}

Translation* CaptiveDBT::compile(Function& block_fn)
{
	return nullptr;
}
