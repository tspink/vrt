#pragma once

#include <vrt/define.h>

namespace vrt {
	namespace dbt {
		namespace OutputEndianness {
			enum OutputEndianness {
				LITTLE_ENDIAN,
				BIG_ENDIAN
			};
		}

		class TranslationBuffer {
		public:
			TranslationBuffer();
			~TranslationBuffer();

			off_t current_offset() const { return _current_offset; }
			
			off_t emit(const uint8_t *ptr, size_t length);
			
			inline off_t emit8(uint8_t v) { return emit(&v, 1); }
			inline off_t emit16(uint8_t v) { return emit(&v, 2); }
			inline off_t emit32(uint8_t v) { return emit(&v, 4); }
			inline off_t emit64(uint8_t v) { return emit(&v, 8); }
			
			OutputEndianness::OutputEndianness endianness() const {
				return _endianness;
			}

			void endianness(OutputEndianness::OutputEndianness e) {
				_endianness = e;
			}

			void compress();
			
			void *raw_buffer() const { return _raw_buffer; }
			
		private:
			OutputEndianness::OutputEndianness _endianness;
			
			bool ensure_extra_space(size_t amount);
			
			void *_raw_buffer;
			size_t _raw_buffer_capacity;
			size_t _raw_buffer_length;
			off_t _current_offset;
		};
	}
}
