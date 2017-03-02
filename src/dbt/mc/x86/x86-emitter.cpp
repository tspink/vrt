#include <vrt/dbt/mc/x86/x86-emitter.h>
#include <vrt/dbt/translation-buffer.h>
#include <vrt/dbt/ir/function.h>
#include <vrt/dbt/ir/basic-block.h>
#include <vrt/dbt/ir/statement.h>
#include <vrt/util/map.h>

using namespace vrt::dbt::mc::x86;
using namespace vrt::dbt::ir;
using namespace vrt::util;

X86Emitter::X86Emitter(TranslationBuffer& buffer) : Emitter(buffer)
{

}

bool X86Emitter::emit_function(const ir::Function& fn)
{
	Map<const BasicBlock *, uint64_t> block_offset_map;
	
	for (const auto& block : fn.blocks()) {
		block_offset_map.add(block, buffer().current_offset());
		
		if (!emit_block(*block)) {
			return false;
		}
	}
	
	return true;
}

bool X86Emitter::emit_block(const ir::BasicBlock& block)
{
	const Statement *stmt = block.first();
	
	while (stmt) {
		if (!emit_statement(*stmt)) {
			return false;
		}
		
		stmt = stmt->next();
	}
	
	return true;
}

bool X86Emitter::emit_statement(const ir::Statement& stmt)
{
	return false;
}

