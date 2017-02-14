#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace runtime
	{
		class Environment;
		class MMU;
		
		class Processor
		{
		public:
			Processor(Environment& env, MMU& mmu);
			
			bool run();
			void stop();
			
			void *raw_register_file() const { return _register_file; }
			
			Environment& env() const { return _env; }
			MMU& mmu() const { return _mmu; }
			
		protected:
			void allocate_register_file(size_t size);
			
		private:
			Environment& _env;
			MMU& _mmu;
			
			void *_register_file;
			volatile bool _terminate;
			
			bool execute();
		};
	}
}
