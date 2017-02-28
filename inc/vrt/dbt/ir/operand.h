#pragma once

namespace vrt {
	namespace dbt {
		namespace ir {
			class Statement;
			class Type;
			
			class Operand {
				friend class Statement;
				
			public:
				Operand(const Type& type) : _type(type) 
				{
				}

			private:
				const Type& _type;
				Statement *_owner;
			};
		}
	}
}
