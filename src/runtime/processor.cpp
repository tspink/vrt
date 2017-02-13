#include <vrt/mem/mem.h>
#include <vrt/runtime/processor.h>
#include <vrt/util/debug.h>

using namespace vrt::mem;
using namespace vrt::runtime;

Processor::Processor() : _register_file(nullptr)
{

}

bool Processor::run()
{
	if (!_register_file) {
		return false;
	}
	
	while (!_terminate) {
		if (!execute()) return false;
	}
	
	return true;
}

void Processor::stop()
{
	_terminate = true;
}

void Processor::allocate_register_file(size_t size)
{
	_register_file = mm.objalloc().alloc(size);
	assert(_register_file);
}

bool Processor::execute()
{
	guest_phys_addr_t phys_pc = 0;
	return false;
}
