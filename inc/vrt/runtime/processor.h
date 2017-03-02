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
			virtual ~Processor();
			
			bool run();
			void stop();
			
			void *raw_register_file() const { return _register_file; }
			
			Environment& env() const { return _env; }
			MMU& mmu() const { return _mmu; }
			
			virtual void dump_state(bool show_hidden) const = 0;
			
			virtual bool handle_irq(uint8_t irq) = 0;
			virtual bool handle_page_fault() = 0;
			virtual bool handle_undefined_instruction() = 0;
			
			struct {
				uint64_t *PC, *SP;
				uint8_t *Z, *N, *V, *C;
			} TaggedRegisterOffsets;
			
		protected:
			void *allocate_register_file(size_t size);
			
			void trap();
			void add_reg_name(uint64_t offset, uint8_t size, const char *name);
			
		private:
			Environment& _env;
			MMU& _mmu;
			
			void *_register_file;
			volatile bool _terminate;
			
			bool execute();
		};
	}
}
