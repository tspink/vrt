#include <vrt/dbt/translation.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt;

Translation::Translation() : _raw_buffer(nullptr)
{

}

Translation::~Translation()
{

}

bool Translation::prepare()
{
	_buffer.compress();
	_raw_buffer = _buffer.raw_buffer();
	
	return _raw_buffer != nullptr;
}

extern "C" bool execution_trampoline(void *native_code_ptr);

bool Translation::execute()
{
	assert(_raw_buffer);
	return execution_trampoline(_raw_buffer);
}
