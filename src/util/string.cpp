#include <vrt/util/string.h>

using namespace vrt::util;

String vrt::util::ToString(void *v)
{
	return "(PTR)";
}

String vrt::util::ToString(unsigned int v)
{
#define BUFFER_SIZE	16
	char buffer[BUFFER_SIZE + 1];
	buffer[BUFFER_SIZE] = 0;
	
	int i = BUFFER_SIZE;
	if (v == 0) {
		buffer[--i] = '0';
	} else {
		while (v > 0 && i >= 0) {
			buffer[--i] = '0' + (v % 10);
			v /= 10;
		}
	}
	
	return String(&buffer[i]);
}

List<String> String::split(char delim, bool remove_empty)
{
	List<String> r;
	
	const char *start = _data;
	String current_part;
	
	while (start < (_data + _size)) {
		if (*start == delim) {
			if (current_part.length() == 0 && remove_empty) {
				continue;
			}
			
			r.push(current_part);
			current_part = "";
		} else {
			current_part = current_part + *start;
		}

		start++;
	}
	
	if (current_part.length() > 0 || !remove_empty) {
		r.append(current_part);
	}
	
	return r;
}
