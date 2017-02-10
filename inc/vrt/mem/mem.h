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
			
			PageDescriptor *page_descriptors() const { return _page_descriptors; }
			uint64_t nr_page_descriptors() const { return _nr_page_descriptors; }
			
			pfn_t pgd_to_pfn(const PageDescriptor *pgd) const {
				return ((uintptr_t)pgd - (uintptr_t)_page_descriptors) / sizeof(*_page_descriptors);
			}
			
			phys_addr_t pgd_to_pa(const PageDescriptor *pgd) const {
				return (pgd_to_pfn(pgd) << __page_bits);
			}
			
			void *pgd_to_va(const PageDescriptor *pgd) const {
				return (void *)((uintptr_t)0xffff800000000000ULL + __page_base_from_index(pgd_to_pfn(pgd)));
			}
			
			PageDescriptor *va_to_pgd(void *va) const {
				return (PageDescriptor *)&_page_descriptors[(__page_index((uintptr_t)va - 0xffff800000000000ULL))];
			}
			
			PageDescriptor *pfn_to_pgd(pfn_t pfn) const {
				return &_page_descriptors[pfn];
			}
			
			PageDescriptor *pa_to_pgd(phys_addr_t pa) const {
				return &_page_descriptors[__page_index(pa)];
			}
			
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
			typedef unsigned int order_t;
			
			virtual bool init() = 0;
						
			virtual PageDescriptor *alloc_pages(order_t order) = 0;
			virtual void free_pages(PageDescriptor *p, order_t order) = 0;
			virtual void reserve_page(PageDescriptor *pgd) = 0;
			
			PageDescriptor *alloc_page() { return alloc_pages(0); }
			void free_page(PageDescriptor *p) { free_pages(p, 0); }
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
