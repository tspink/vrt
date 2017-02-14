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
			
			void register_physical_memory(hpa_t start, size_t size);
			
			bool init();
			
			PageAllocator& pgalloc() { return *_page_allocator; }
			ObjectAllocator& objalloc() { return *_obj_allocator; }
			
			PageDescriptor *page_descriptors() const { return _page_descriptors; }
			uint64_t nr_page_descriptors() const { return _nr_page_descriptors; }
			
			hpfn_t pgd_to_pfn(const PageDescriptor *pgd) const {
				return ((uintptr_t)pgd - (uintptr_t)_page_descriptors) / sizeof(*_page_descriptors);
			}
			
			hpa_t pgd_to_pa(const PageDescriptor *pgd) const {
				return __host_paging::page_base_from_index(pgd_to_pfn(pgd));
			}
			
			void *pgd_to_va(const PageDescriptor *pgd) const {
				return (void *)((uintptr_t)0xffff800000000000ULL + __host_paging::page_base_from_index(pgd_to_pfn(pgd)));
			}
			
			PageDescriptor *va_to_pgd(void *va) const {
				return (PageDescriptor *)&_page_descriptors[(__host_paging::page_index((uintptr_t)va - 0xffff800000000000ULL))];
			}
			
			PageDescriptor *pfn_to_pgd(hpfn_t pfn) const {
				return &_page_descriptors[pfn];
			}
			
			PageDescriptor *pa_to_pgd(hpa_t pa) const {
				return &_page_descriptors[__host_paging::page_index(pa)];
			}
			
		private:
			PageAllocator *_page_allocator;
			ObjectAllocator *_obj_allocator;
			PageDescriptor *_page_descriptors;
			uint64_t _nr_page_descriptors;
			
			struct PhysicalMemoryBlock
			{
				bool IsValid;
				hpa_t Start;
				hpa_t End;
			};
			
			PhysicalMemoryBlock _physical_memory_blocks[8];
			
			bool reserve_pages(hpa_t base, size_t nr_pages);
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
