#pragma once

namespace vrt
{
	namespace arch
	{
		namespace host
		{
			namespace x86
			{
				class IDT;
				
				class IRQManager
				{
				public:
					IRQManager();
					bool init();
					
				private:
					IDT *_idt;
				};
			}
		}
	}
}
