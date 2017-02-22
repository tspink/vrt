#pragma once

#include <vrt/define.h>

#define MAX_MODULES 4

namespace vrt
{
	namespace runtime
	{
		struct ModuleDescriptor
		{
			char cmdline[256];
			void *start;
			size_t size;
		};

		class ModuleManager
		{
		public:
			ModuleManager();
			
			bool register_module(hva_t module_start, size_t module_length, const char *cmdline);
			bool load();
			
		private:
			ModuleDescriptor _modules[MAX_MODULES];
			unsigned int _nr_modules;
		};
		
		extern ModuleManager module_manager;
	}
}
