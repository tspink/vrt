#pragma once

#include <vrt/mem/mem.h>

namespace vrt
{
	namespace mem
	{
#define MAX_ORDER	16
		
		class BuddyPageAllocator : public PageAllocator
		{
		public:
			bool init() override;
			
			PageDescriptor* alloc_pages(order_t order) override;
			void free_pages(PageDescriptor* p, order_t order) override;
			void reserve_page(PageDescriptor* pgd) override;
			
			void dump();
			void print_statistics();
			
		private:
			PageDescriptor *_free_areas[MAX_ORDER+1];
			uint64_t _total_pages, _free_pages;
			
			PageDescriptor *buddy_of(PageDescriptor *pgd, order_t order);
			PageDescriptor **insert_block(PageDescriptor *pgd, order_t order);
			void remove_block(PageDescriptor *pgd, order_t order);
			PageDescriptor *split_block(PageDescriptor **block_pointer, order_t source_order);
			PageDescriptor **merge_block(PageDescriptor **block_pointer, order_t source_order);
			
			static inline constexpr uint64_t pages_per_block(order_t order)
			{
				return (1 << order);
			}
			
			static inline bool is_correct_alignment_for_order(const PageDescriptor *pgd, order_t order)
			{
				return (mm.page_descriptor_to_pfn(pgd) % pages_per_block(order)) == 0;
			}
		};
	}
}