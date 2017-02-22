#include <vrt/dbt/dbt.h>
#include <vrt/dbt/translation.h>
#include <vrt/mem/mem.h>
#include <vrt/runtime/environment.h>
#include <vrt/runtime/mmu.h>
#include <vrt/runtime/processor.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt;
using namespace vrt::mem;
using namespace vrt::runtime;
using namespace vrt::util;

Processor::Processor(Environment& env, MMU& mmu) : _env(env), _mmu(mmu), _register_file(nullptr)
{

}

bool Processor::run()
{
	if (!_register_file) {
		dprintf(DebugLevel::ERROR, "proc: register file not allocated");
		return false;
	}
	
	dprintf(DebugLevel::INFO, "proc: here we go!");
	
	write_pc(0);
	
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
	MMUTranslationRequest treq;
	treq.va = read_pc();
	
	MMUTranslationResponse trsp = _mmu.translate(treq);
	
	Translation *txln = _env.translation_cache().get(trsp.pa);
	if (__unlikely(!txln)) {
		txln = _env.dbt().translate(trsp.pa, TranslationFlags::NONE);
		if (__unlikely(!txln)) {
			dprintf(DebugLevel::ERROR, "proc: translation failed @ virt-pc=%lx phys-pc=%lx", treq.va, trsp.pa);
			return false;
		}
		
		_env.translation_cache().put(trsp.pa, txln);
	}
	
	return txln->execute();
}
