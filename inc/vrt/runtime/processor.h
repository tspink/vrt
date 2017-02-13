#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace runtime
	{
		class Processor
		{
		public:
			Processor();
			
			bool run();
			void stop();
			
			void *raw_register_file() const { return _register_file; }
			
		protected:
			void allocate_register_file(size_t size);
			
		private:
			void *_register_file;
			volatile bool _terminate;
			
			bool execute();
		};
	}
}
