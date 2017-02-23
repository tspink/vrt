#pragma once

namespace vrt
{
	namespace arch
	{
		namespace host
		{
			namespace x86
			{
				class IRQManager
				{
				public:
					IRQManager();
					bool init();
				};
			}
		}
	}
}
