#include <vrt/runtime/modules.h>
#include <vrt/mem/mem.h>
#include <vrt/util/debug.h>
#include <vrt/util/memops.h>

using namespace vrt::mem;
using namespace vrt::runtime;
using namespace vrt::util;

ModuleManager vrt::runtime::module_manager;

ModuleManager::ModuleManager() : _nr_modules(0)
{
	for (unsigned int i = 0; i < ARRAY_SIZE(_modules); i++) {
		bzero(_modules[i].cmdline, sizeof(_modules[i].cmdline));
		_modules[i].size = 0;
		_modules[i].start = nullptr;
	}
}

bool ModuleManager::load()
{
	return true;
}

/**
 * Registers a module with the module manager.
 * @param module_start The starting HVA of the module data.
 * @param module_length The length (in bytes) of the module data.
 * @param cmdline A pointer to a command-line string for the module.  This string
 * is copied by the function into its own storage.
 * @return Returns true if the module was successfully registered, or false otherwise.
 */
bool ModuleManager::register_module(hva_t module_start, size_t module_length, const char* cmdline)
{
	// We can only support a fixed number of modules.
	if (_nr_modules >= ARRAY_SIZE(_modules)) {
		return false;
	}
	
	dprintf(DebugLevel::DEBUG, "registering module @ %p (%s)", module_start, cmdline);

	// Determine the physical address of the module, and register the region
	// as boot memory.
	hpa_t module_start_pa = __upper_virt_to_phys(module_start);	
	mm.register_boot_mem(module_start_pa, module_length);

	// Fill in the next available module descriptor.
	_modules[_nr_modules].start = (void *)module_start;
	_modules[_nr_modules].size = module_length;
	
	// Copy the command-line.
	strncpy(_modules[_nr_modules].cmdline, cmdline, sizeof(_modules[_nr_modules].cmdline)-1);
	
	// Increment the number of modules.
	_nr_modules++;
	return true;
}

List<const ModuleDescriptor*> ModuleManager::modules() const
{
	List<const ModuleDescriptor *> rc;
	
	for (unsigned int i = 0; i < _nr_modules; i++) {
		rc.append(&_modules[i]);
	}
	
	return rc;
}
