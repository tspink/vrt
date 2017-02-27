#pragma once

#include <vrt/define.h>
#include <vrt/util/map.h>

namespace vrt
{
	namespace dbt
	{
		class Translation;
		
		template<typename TKey = uint64_t, uint64_t PAGE_BITS = 12>
		class TranslationCache
		{
		private:
			typedef TKey TPFN;
			typedef TKey TIDX;
			
			typedef util::Map<TIDX, Translation *> L2MAP;
			typedef util::Map<TPFN, L2MAP> L1MAP;
			typedef util::Map<TKey, Translation *> XMAP;
			
			static __pure constexpr TPFN pfn_of(TKey key) {
				return key >> PAGE_BITS;
			}
			
			static __pure constexpr TPFN idx_of(TKey key) {
				return key & ((1<<PAGE_BITS) - 1);
			}

		public:
			Translation *get(TKey key) { 
				/*L2MAP l2 = _cache[pfn_of(key)];
				
				Translation *txln;
				if (!l2.try_get_value(idx_of(key), txln)) { return nullptr; }
				
				return txln; */
				
				Translation *txln;
				if (!_xx.try_get_value(key, txln)) return nullptr;
				return txln;
			}
			
			void put(TKey key, Translation *txln) { 
				/*L2MAP l2 = _cache[pfn_of(key)];
				l2[idx_of(key)] = txln;*/
				_xx.add(key, txln);
			}
			
			void invalidate_one(TKey key) { }
			void invalidate_page(TKey key) { }
			
		private:
			//L1MAP _cache;
			XMAP _xx;
		};
	}
}
