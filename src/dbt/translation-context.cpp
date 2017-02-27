#include <vrt/dbt/translation-context.h>
#include <vrt/dbt/ir/function.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;

TranslationContext::TranslationContext()
{

}

Function* TranslationContext::create_function()
{
	return new Function(*this);
}
