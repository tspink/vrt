#include <vrt/dbt/translation.h>

using namespace vrt::dbt;

Translation::Translation()
{

}

Translation::~Translation()
{

}

extern "C" bool execution_trampoline(uintptr_t native_code_ptr);

bool Translation::execute()
{
	return execution_trampoline(nullptr);
}
