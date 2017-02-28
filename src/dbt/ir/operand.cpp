#include <vrt/dbt/ir/operand.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt::ir;
using namespace vrt::util;

void Operand::dump()
{
	if (_type == OperandType::CONSTANT) {
		dprintf(DebugLevel::DEBUG, "#%u", _constant_value);
	} else if (_type == OperandType::STATEMENT) {
		dprintf(DebugLevel::DEBUG, "%%%p", _stmt_value);
	} else {
		dprintf(DebugLevel::DEBUG, "?");
	}
}
