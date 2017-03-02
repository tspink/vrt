#include <vrt/dbt/ir/function.h>
#include <vrt/dbt/ir/basic-block.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;
using namespace vrt::util;

Function::Function(TranslationContext& owner) : _owner(owner), _entry_block(nullptr)
{
	_entry_block = &create_block();
}

Function::~Function()
{

}

BasicBlock& Function::create_block()
{
	auto block = new BasicBlock(*this);
	_blocks.append(block);
	
	return *block;
}

String Function::dump() const
{
	dprintf(DebugLevel::DEBUG, "Function %p:", this);
	
	for (const auto& block : _blocks) {
		block->dump();
	}
	
	return "";
}
