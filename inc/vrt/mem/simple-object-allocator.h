#pragma once

#include <vrt/mem/mem.h>

namespace vrt
{
	namespace mem
	{
		class SimpleObjectAllocator : public ObjectAllocator
		{
		public:
			bool init() override;

			void* alloc(size_t size) override;
			void* realloc(void *p, size_t size) override;
			void free(void* p) override;
		};
	}
}