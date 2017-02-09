#pragma once

#include <vrt/mem/mem.h>

namespace vrt
{
	namespace mem
	{
		class BuddyPageAllocator : public PageAllocator
		{
		public:
			bool init() override;
			
			void* alloc_pages(int order) override;
			void free_pages(void* p, int order) override;
		};
	}
}