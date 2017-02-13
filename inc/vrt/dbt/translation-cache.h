#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace dbt
	{
		class Translation;
		
		template<typename TKey = guest_phys_addr_t, uint64_t PAGE_BITS = 12>
		class TranslationCache
		{
		private:
			static __pure constexpr uint64_t pfn_of(TKey key) {
				return key >> PAGE_BITS;
			}

		public:
			Translation *get(TKey key) { return nullptr; }
			void put(TKey key, Translation *txln) { }
			
			void invalidate_one(TKey key) { }
			void invalidate_page(TKey key) { }
			
		private:
			//
		};
	}
}
