#include <vrt/dbt/translation-context.h>
#include <vrt/dbt/ir/function.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;
using namespace vrt::util;

TranslationContext::TranslationContext()
{

}

Function& TranslationContext::create_function()
{
	auto fn = new Function(*this);
	_functions.append(fn);
	
	return *fn;
}

String TranslationContext::dump() const
{
	dprintf(DebugLevel::DEBUG, "Translation Context:");

	for (auto fn : _functions) {
		fn->dump();
	}
	
	return "";
}
