#pragma once

#include <vrt/dbt/translation-buffer.h>

namespace vrt
{
	namespace dbt
	{
		class Translation
		{
		public:
			Translation();
			~Translation();
			
			bool prepare();
			bool execute();
			TranslationBuffer& buffer() { return _buffer; }
			
		private:
			TranslationBuffer _buffer;
			void *_raw_buffer;
		};
	}
}
