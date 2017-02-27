#pragma once

namespace vrt
{
	namespace dbt
	{
		class TranslationContext;
		
		namespace opt
		{
			class Optimiser
			{
			public:
				bool optimise(TranslationContext& ctx);
			};
		}
	}
}
