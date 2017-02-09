#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace mem
	{
		class PageAllocator;
		class ObjectAllocator;
		
		namespace PageDescriptorType
		{
			enum PageDescriptorType
			{
				INVALID		= 0,
				SYSTEM		= 1,
				GUEST		= 2,
				AVAILABLE	= 3
			};
		}
		
		struct PageDescriptor
		{
			PageDescriptorType::PageDescriptorType Type;
			PageDescriptor *NextFree;
		} __aligned(16);
		
		class Memory
		{
		public:
			Memory();
			
			void register_physical_memory(phys_addr_t start, size_t size);
			
			bool init();
			
			PageAllocator& pgalloc() { return *_page_allocator; }
			ObjectAllocator& objalloc() { return *_obj_allocator; }
			
		private:
			PageAllocator *_page_allocator;
			ObjectAllocator *_obj_allocator;
			PageDescriptor *_page_descriptors;
			uint64_t _nr_page_descriptors;
			
			struct PhysicalMemoryBlock
			{
				bool IsValid;
				phys_addr_t Start;
				phys_addr_t End;
			};
			
			PhysicalMemoryBlock _physical_memory_blocks[8];
			
			bool perform_reservations();
			bool initialise_page_descriptors();
		};
		
		extern Memory mm;
		
		class PageAllocator
		{
		public:
			virtual bool init() = 0;
						
			virtual void *alloc_pages(int order) = 0;
			virtual void free_pages(void *p, int order) = 0;
			
			void *alloc_page() { return alloc_pages(0); }
			void free_page(void *p) { free_pages(p, 0); }
		};
		
		extern PageAllocator *pgalloc;
		
		class ObjectAllocator
		{
		public:
			virtual bool init() = 0;
			virtual void *alloc(size_t size) = 0;
			virtual void free(void *p) = 0;
		};
		
		extern ObjectAllocator *objalloc;
	}
}
