#include <arch/guest/guest-instruction.h>
#include <vrt/util/memops.h>

using namespace vrt::arch::guest;
using namespace vrt::util;

void GuestInstruction::append_str(char* buffer, const char* str) const
{
	unsigned int pos = strlen(buffer);
	
	while (*str) {
		buffer[pos++] = *str++;
	}
	
	buffer[pos] = 0;
}

void GuestInstruction::append_num(char* buffer, uint64_t val, uint8_t base) const
{
	if (val == 0) {
		append_str(buffer, "0");
		return;
	}

	char number[17] = {0};
	int digit_pos = 15;
	
	while (digit_pos > 0 && val > 0) {
		uint8_t digit = val % base;
		char digit_char;
		if (digit < 10) {
			digit_char = '0' + digit;
		} else {
			digit_char = 'a' + (digit - 10);
		}
		
		number[digit_pos--] = digit_char;
		val /= base;
	}
	
	append_str(buffer, &number[digit_pos+1]);
}

void GuestInstruction::append_dec(char* buffer, uint64_t val) const
{
	append_num(buffer, val, 10);
}

void GuestInstruction::append_hex(char* buffer, uint64_t val) const
{
	append_num(buffer, val, 16);
}
