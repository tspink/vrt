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

void GuestInstruction::append_dec(char* buffer, uint64_t val) const
{
	append_str(buffer, "D");
}

void GuestInstruction::append_hex(char* buffer, uint64_t val) const
{
	append_str(buffer, "X");
}
