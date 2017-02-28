#pragma once

#include <vrt/define.h>

namespace vrt {
	namespace dbt {
		namespace ir {

			class Type {
			public:

				Type(uint8_t size) : _size(size) {
				}

			private:
				uint8_t _size;
			};

			struct PrimitiveTypesStruct
			{
				Type u1, u8, u16, u32, u64;
				Type s8, s16, s32, s64;
				Type vd;
			};
			
			extern PrimitiveTypesStruct PrimitiveTypes;
		}
	}
}
