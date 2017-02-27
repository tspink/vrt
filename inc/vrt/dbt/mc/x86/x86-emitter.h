#pragma once

#include <vrt/dbt/mc/emitter.h>

namespace vrt
{
	namespace dbt
	{
		namespace mc
		{
			namespace x86
			{
				class X86Emitter : public Emitter
				{
				public:
					bool emit_function(ir::Function& fn) override;
				};
			}
		}
	}
}
