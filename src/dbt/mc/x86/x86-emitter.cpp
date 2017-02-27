#include <vrt/dbt/mc/x86/x86-emitter.h>
#include <vrt/dbt/translation-buffer.h>

using namespace vrt::dbt::mc::x86;

X86Emitter::X86Emitter(TranslationBuffer& buffer) : Emitter(buffer)
{

}

bool X86Emitter::emit_function(ir::Function& fn)
{
	buffer().emit8(0xc3);
	return true;
}
