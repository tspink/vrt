#include <vrt/dbt/translation-buffer.h>
#include <vrt/mem/mem.h>
#include <vrt/util/debug.h>
#include <vrt/util/memops.h>

using namespace vrt::dbt;
using namespace vrt::mem;
using namespace vrt::util;

TranslationBuffer::TranslationBuffer() : _endianness(OutputEndianness::LITTLE_ENDIAN), _raw_buffer(nullptr), _raw_buffer_capacity(0), _raw_buffer_length(0), _current_offset(0)
{
}

TranslationBuffer::~TranslationBuffer()
{
	mm.objalloc().free(_raw_buffer);
}

off_t TranslationBuffer::emit(const uint8_t* ptr, size_t length)
{
	if (length == 0) return _current_offset;
	
	if (!ensure_extra_space(length)) {
		fatal("out of memory");
	}
	
	off_t starting_offset = _current_offset;
	uint8_t *output = (uint8_t *)((uintptr_t)_raw_buffer + starting_offset);
	
	memcpy(output, ptr, length);

	_current_offset += length;
	return starting_offset;
}

bool TranslationBuffer::ensure_extra_space(size_t amount)
{
	if (_raw_buffer_capacity == 0) {
		_raw_buffer_capacity = 0x100;
		_raw_buffer = mm.objalloc().alloc(_raw_buffer_capacity);
		if (!_raw_buffer) return false;
	} else if (_current_offset + amount > _raw_buffer_capacity) {
		_raw_buffer_capacity *= 2;
		_raw_buffer = mm.objalloc().realloc(_raw_buffer, _raw_buffer_capacity);
		if (!_raw_buffer) return false;
	}
	
	return true;
}

void TranslationBuffer::compress()
{
	_raw_buffer = mm.objalloc().realloc(_raw_buffer, _raw_buffer_length);
}
