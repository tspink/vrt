#include <vrt/dbt/ir/basic-block.h>
#include <vrt/dbt/ir/statement.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;
using namespace vrt::util;

BasicBlock::BasicBlock(Function& owner) : _owner(owner), _statement_list(nullptr)
{

}

void BasicBlock::append_statement(Statement& stmt)
{
	assert(!stmt._owner);
	
	Statement **slot = &_statement_list;
	
	while (*slot) {
		slot = &(*slot)->_next;
	}
	
	*slot = &stmt;
	
	stmt._owner = this;
	stmt._next = nullptr;
	stmt._prev = nullptr;
}

void BasicBlock::insert_statement_before(Statement& stmt, Statement& before)
{

}

String BasicBlock::dump() const
{
	dprintf(DebugLevel::DEBUG, "Basic Block %p", this);
	
	Statement *stmt = _statement_list;
	while (stmt) {
		stmt->dump();
		stmt = stmt->next();
	}
	
	return "";
}
