#pragma once

namespace vrt
{
	namespace dbt
	{
		class TranslationBuffer;
		
		namespace ir
		{
			class Function;
		}
		
		namespace mc
		{
			class Emitter
			{
			public:
				Emitter(TranslationBuffer& buffer) : _buffer(buffer) { }
				
				virtual bool emit_function(const ir::Function& fn) = 0;
				
				TranslationBuffer& buffer() const { return _buffer; }
				
			private:
				TranslationBuffer& _buffer;
			};
		}
	}
}
