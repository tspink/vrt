#include <vrt/dbt/ir/operand.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt::ir;
using namespace vrt::util;

String Operand::dump() const
{
	if (_type == OperandType::CONSTANT) {
		return String("#") + ToString(_constant_value);
	} else if (_type == OperandType::STATEMENT) {
		return String("%") +  ToString((void *)_stmt_value);
	} else {
		return "?";
	}
}
