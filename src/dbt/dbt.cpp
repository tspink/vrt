#include <vrt/dbt/dbt.h>
#include <vrt/dbt/translation.h>
#include <vrt/dbt/translation-context.h>
#include <vrt/dbt/ir/function.h>
#include <vrt/dbt/ir/builder.h>
#include <vrt/dbt/ir/operand.h>
#include <vrt/dbt/ir/type.h>
#include <vrt/dbt/opt/optimiser.h>
#include <vrt/dbt/mc/x86/x86-emitter.h>
#include <vrt/util/debug.h>
#include <arch/guest/guest-instruction-decoder.h>
#include <arch/guest/guest-instruction.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;
using namespace vrt::dbt::opt;
using namespace vrt::dbt::mc;
using namespace vrt::dbt::mc::x86;
using namespace vrt::arch;
using namespace vrt::arch::guest;
using namespace vrt::util;

CaptiveDBT::CaptiveDBT(arch::guest::GuestInstructionDecoder& decoder) : DBT(decoder)
{

}

Translation *CaptiveDBT::translate(gpa_t pa, TranslationFlags::TranslationFlags flags)
{
	TranslationContext ctx;
	Function& block_function = ctx.create_function();
	Builder builder(block_function.entry_block());
	
	gpfn_t current_page = __guest_paging::page_index(pa);
	gpa_t current_pc = pa;
	
	while (__guest_paging::page_index(current_pc) == current_page) {
		hva_t insn_hva = __guest_phys_to_virt(current_pc);
		
		// Decode the guest instruction
		dprintf(DebugLevel::DEBUG, "dbt: decoding @ %p", insn_hva);
		Instruction *insn = decoder().decode(insn_hva);
		if (!insn) {
			dprintf(DebugLevel::DEBUG, "dbt: instruction decode failed");
			break;
		} else {
			// TODO: Check for illegal instruction
			
			const char *text = insn->disassemble(current_pc);
			
			dprintf(DebugLevel::DEBUG, "dbt: decoded @ %lx (opcode=%u) %s", 
					current_pc,
					insn->internal_opcode(),
					text);
			
			delete text;
			
			// Translate the instruction into the basic-block function
			if (!insn->translate(builder)) {
				return nullptr;
			}
		}
		
		// Stop translating when we encounter control-flow.
		if (insn->control_flow_info().is_control_flow()) {
			break;
		}
		
		// Increment the current working PC by the length of the instruction.
		current_pc += insn->length();
	}
	
	builder.leave();
		
	if (!optimise(ctx)) {
		dprintf(DebugLevel::ERROR, "dbt: optimisation failed");
		return nullptr;
	}

	ctx.dump();
	
	Translation *txln = compile(block_function);
	if (!txln) {
		dprintf(DebugLevel::ERROR, "dbt: compilation failed");
		return nullptr;
	}
	
	return txln;
}

bool CaptiveDBT::optimise(TranslationContext& ctx)
{
	Optimiser opt;
	return opt.optimise(ctx);
}

Translation* CaptiveDBT::compile(Function& block_fn)
{
	Translation *txln = new Translation();
	
	X86Emitter emitter(txln->buffer());
	if (!emitter.emit_function(block_fn)) {
		delete txln;
		
		dprintf(DebugLevel::ERROR, "dbt: function emission failed");
		return nullptr;
	}
	
	if (!txln->prepare()) {
		delete txln;
		
		dprintf(DebugLevel::ERROR, "dbt: translation preparation failed");
		return nullptr;
	}
	
	return txln;
}
