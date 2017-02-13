#include <vrt/dbt/dbt.h>
#include <vrt/dbt/translation.h>
#include <vrt/mem/mem.h>
#include <vrt/runtime/environment.h>
#include <vrt/runtime/processor.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt;
using namespace vrt::mem;
using namespace vrt::runtime;
using namespace vrt::util;

Processor::Processor(Environment& env) : _env(env), _register_file(nullptr)
{

}

bool Processor::run()
{
	if (!_register_file) {
		dprintf(DebugLevel::ERROR, "proc: register file not allocated");
		return false;
	}
	
	while (__likely(!_terminate)) {
		if (__unlikely(!execute())) {
			dprintf(DebugLevel::ERROR, "proc: execution failed");
			return false;
		}
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
	
	Translation *txln = _env.translation_cache().get(phys_pc);
	if (__unlikely(!txln)) {
		txln = _env.dbt().translate(phys_pc, TranslationFlags::NONE);
		if (__unlikely(!txln)) {
			dprintf(DebugLevel::ERROR, "proc: translation failed @ phys-pc=%lx", phys_pc);
			return false;
		}
		
		_env.translation_cache().put(phys_pc, txln);
	}
	
	return txln->execute();
}
