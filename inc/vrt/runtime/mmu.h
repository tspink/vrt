#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace runtime
	{
		struct MMUTranslationRequest
		{
			guest_virt_addr_t va;
		};

		struct MMUTranslationResponse
		{
			guest_phys_addr_t pa;
		};
		
		class MMU
		{
		public:
			MMU(); 
			
			MMUTranslationResponse translate(const MMUTranslationRequest& tr);
			
			void enable() { _enabled = true; }
			void disable() { _enabled = false; }
			
			bool enabled() const { return _enabled; }
			
		protected:
			virtual MMUTranslationResponse translate_raw(const MMUTranslationRequest& tr) = 0;
			
		private:
			bool _enabled;
		};
	}
}
