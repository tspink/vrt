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
	return *new BasicBlock(*this);
}

String Function::dump() const
{
	return "FOO";
	
	String s;
	
	s = "Function ";
	s += ToString((void *)this);
	
	BasicBlock *bb = _entry_block;
	while (bb) {
		s += bb->dump();
		bb = nullptr;
	}
	
	return s;
}
