#include "aarch64-processor.h"
#include <vrt/util/debug.h>
using namespace vrt::arch::guest::aarch64;
using namespace vrt::runtime;
using namespace vrt::util;
aarch64_processor::aarch64_processor(Environment& env) : Processor(env, _mmu)
{
  uint8_t *reg_file = (uint8_t *)allocate_register_file(4096);
  RegisterOffsets.RBX = (uint64_t *)&reg_file[0];
  add_reg_name(0, 8, "RBX(0)");
  add_reg_name(8, 8, "RBX(1)");
  add_reg_name(16, 8, "RBX(2)");
  add_reg_name(24, 8, "RBX(3)");
  add_reg_name(32, 8, "RBX(4)");
  add_reg_name(40, 8, "RBX(5)");
  add_reg_name(48, 8, "RBX(6)");
  add_reg_name(56, 8, "RBX(7)");
  add_reg_name(64, 8, "RBX(8)");
  add_reg_name(72, 8, "RBX(9)");
  add_reg_name(80, 8, "RBX(10)");
  add_reg_name(88, 8, "RBX(11)");
  add_reg_name(96, 8, "RBX(12)");
  add_reg_name(104, 8, "RBX(13)");
  add_reg_name(112, 8, "RBX(14)");
  add_reg_name(120, 8, "RBX(15)");
  add_reg_name(128, 8, "RBX(16)");
  add_reg_name(136, 8, "RBX(17)");
  add_reg_name(144, 8, "RBX(18)");
  add_reg_name(152, 8, "RBX(19)");
  add_reg_name(160, 8, "RBX(20)");
  add_reg_name(168, 8, "RBX(21)");
  add_reg_name(176, 8, "RBX(22)");
  add_reg_name(184, 8, "RBX(23)");
  add_reg_name(192, 8, "RBX(24)");
  add_reg_name(200, 8, "RBX(25)");
  add_reg_name(208, 8, "RBX(26)");
  add_reg_name(216, 8, "RBX(27)");
  add_reg_name(224, 8, "RBX(28)");
  add_reg_name(232, 8, "RBX(29)");
  add_reg_name(240, 8, "RBX(30)");
  RegisterOffsets.RBW = (uint64_t *)&reg_file[0];
  add_reg_name(0, 8, "RBW(0)");
  add_reg_name(8, 8, "RBW(1)");
  add_reg_name(16, 8, "RBW(2)");
  add_reg_name(24, 8, "RBW(3)");
  add_reg_name(32, 8, "RBW(4)");
  add_reg_name(40, 8, "RBW(5)");
  add_reg_name(48, 8, "RBW(6)");
  add_reg_name(56, 8, "RBW(7)");
  add_reg_name(64, 8, "RBW(8)");
  add_reg_name(72, 8, "RBW(9)");
  add_reg_name(80, 8, "RBW(10)");
  add_reg_name(88, 8, "RBW(11)");
  add_reg_name(96, 8, "RBW(12)");
  add_reg_name(104, 8, "RBW(13)");
  add_reg_name(112, 8, "RBW(14)");
  add_reg_name(120, 8, "RBW(15)");
  add_reg_name(128, 8, "RBW(16)");
  add_reg_name(136, 8, "RBW(17)");
  add_reg_name(144, 8, "RBW(18)");
  add_reg_name(152, 8, "RBW(19)");
  add_reg_name(160, 8, "RBW(20)");
  add_reg_name(168, 8, "RBW(21)");
  add_reg_name(176, 8, "RBW(22)");
  add_reg_name(184, 8, "RBW(23)");
  add_reg_name(192, 8, "RBW(24)");
  add_reg_name(200, 8, "RBW(25)");
  add_reg_name(208, 8, "RBW(26)");
  add_reg_name(216, 8, "RBW(27)");
  add_reg_name(224, 8, "RBW(28)");
  add_reg_name(232, 8, "RBW(29)");
  add_reg_name(240, 8, "RBW(30)");
  RegisterOffsets.SP = (uint64_t *)&reg_file[248];
  TaggedRegisterOffsets.SP = RegisterOffsets.SP;
  add_reg_name(248, 8, "SP");
  RegisterOffsets.WSP = (uint32_t *)&reg_file[248];
  add_reg_name(248, 4, "WSP");
  RegisterOffsets.PC = (uint64_t *)&reg_file[256];
  TaggedRegisterOffsets.PC = RegisterOffsets.PC;
  add_reg_name(256, 8, "PC");
  RegisterOffsets.N = (uint8_t *)&reg_file[264];
  TaggedRegisterOffsets.N = RegisterOffsets.N;
  add_reg_name(264, 1, "N");
  RegisterOffsets.Z = (uint8_t *)&reg_file[265];
  TaggedRegisterOffsets.Z = RegisterOffsets.Z;
  add_reg_name(265, 1, "Z");
  RegisterOffsets.C = (uint8_t *)&reg_file[266];
  TaggedRegisterOffsets.C = RegisterOffsets.C;
  add_reg_name(266, 1, "C");
  RegisterOffsets.V = (uint8_t *)&reg_file[267];
  TaggedRegisterOffsets.V = RegisterOffsets.V;
  add_reg_name(267, 1, "V");
  RegisterOffsets.D = (uint8_t *)&reg_file[268];
  add_reg_name(268, 1, "D");
  RegisterOffsets.A = (uint8_t *)&reg_file[269];
  add_reg_name(269, 1, "A");
  RegisterOffsets.I = (uint8_t *)&reg_file[270];
  add_reg_name(270, 1, "I");
  RegisterOffsets.F = (uint8_t *)&reg_file[271];
  add_reg_name(271, 1, "F");
  RegisterOffsets.EL = (uint8_t *)&reg_file[272];
  add_reg_name(272, 1, "EL");
  RegisterOffsets.TTBR0 = (uint64_t *)&reg_file[273];
  add_reg_name(273, 8, "TTBR0");
  RegisterOffsets.TTBR1 = (uint64_t *)&reg_file[281];
  add_reg_name(281, 8, "TTBR1");
  RegisterOffsets.FPCR = (uint64_t *)&reg_file[289];
  add_reg_name(289, 8, "FPCR");
  RegisterOffsets.FPSR = (uint64_t *)&reg_file[297];
  add_reg_name(297, 8, "FPSR");
}
aarch64_processor::~aarch64_processor() 
{
}
void aarch64_processor::dump_state(bool show_hidden) const
{
  dprintf(DebugLevel::DEBUG, "*** CPU STATE\n");
  dprintf(DebugLevel::DEBUG, "Register Bank RBX:\n");
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 0, RegisterOffsets.RBX[0]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 1, RegisterOffsets.RBX[1]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 2, RegisterOffsets.RBX[2]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 3, RegisterOffsets.RBX[3]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 4, RegisterOffsets.RBX[4]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 5, RegisterOffsets.RBX[5]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 6, RegisterOffsets.RBX[6]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 7, RegisterOffsets.RBX[7]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 8, RegisterOffsets.RBX[8]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 9, RegisterOffsets.RBX[9]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 10, RegisterOffsets.RBX[10]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 11, RegisterOffsets.RBX[11]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 12, RegisterOffsets.RBX[12]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 13, RegisterOffsets.RBX[13]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 14, RegisterOffsets.RBX[14]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 15, RegisterOffsets.RBX[15]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 16, RegisterOffsets.RBX[16]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 17, RegisterOffsets.RBX[17]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 18, RegisterOffsets.RBX[18]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 19, RegisterOffsets.RBX[19]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 20, RegisterOffsets.RBX[20]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 21, RegisterOffsets.RBX[21]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 22, RegisterOffsets.RBX[22]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 23, RegisterOffsets.RBX[23]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 24, RegisterOffsets.RBX[24]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 25, RegisterOffsets.RBX[25]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 26, RegisterOffsets.RBX[26]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 27, RegisterOffsets.RBX[27]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 28, RegisterOffsets.RBX[28]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 29, RegisterOffsets.RBX[29]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 30, RegisterOffsets.RBX[30]);
  dprintf(DebugLevel::DEBUG, "Register Bank RBW:\n");
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 0, RegisterOffsets.RBW[0]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 1, RegisterOffsets.RBW[1]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 2, RegisterOffsets.RBW[2]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 3, RegisterOffsets.RBW[3]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 4, RegisterOffsets.RBW[4]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 5, RegisterOffsets.RBW[5]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 6, RegisterOffsets.RBW[6]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 7, RegisterOffsets.RBW[7]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 8, RegisterOffsets.RBW[8]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 9, RegisterOffsets.RBW[9]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 10, RegisterOffsets.RBW[10]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 11, RegisterOffsets.RBW[11]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 12, RegisterOffsets.RBW[12]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 13, RegisterOffsets.RBW[13]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 14, RegisterOffsets.RBW[14]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 15, RegisterOffsets.RBW[15]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 16, RegisterOffsets.RBW[16]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 17, RegisterOffsets.RBW[17]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 18, RegisterOffsets.RBW[18]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 19, RegisterOffsets.RBW[19]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 20, RegisterOffsets.RBW[20]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 21, RegisterOffsets.RBW[21]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 22, RegisterOffsets.RBW[22]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 23, RegisterOffsets.RBW[23]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 24, RegisterOffsets.RBW[24]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 25, RegisterOffsets.RBW[25]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 26, RegisterOffsets.RBW[26]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 27, RegisterOffsets.RBW[27]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 28, RegisterOffsets.RBW[28]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 29, RegisterOffsets.RBW[29]);
  dprintf(DebugLevel::DEBUG, "  r%02d = %016x\n", 30, RegisterOffsets.RBW[30]);
  dprintf(DebugLevel::DEBUG, "SP = %08x\n", *RegisterOffsets.SP);
  dprintf(DebugLevel::DEBUG, "WSP = %08x\n", *RegisterOffsets.WSP);
  dprintf(DebugLevel::DEBUG, "PC = %08x\n", *RegisterOffsets.PC);
  dprintf(DebugLevel::DEBUG, "N = %08x\n", *RegisterOffsets.N);
  dprintf(DebugLevel::DEBUG, "Z = %08x\n", *RegisterOffsets.Z);
  dprintf(DebugLevel::DEBUG, "C = %08x\n", *RegisterOffsets.C);
  dprintf(DebugLevel::DEBUG, "V = %08x\n", *RegisterOffsets.V);
  dprintf(DebugLevel::DEBUG, "D = %08x\n", *RegisterOffsets.D);
  dprintf(DebugLevel::DEBUG, "A = %08x\n", *RegisterOffsets.A);
  dprintf(DebugLevel::DEBUG, "I = %08x\n", *RegisterOffsets.I);
  dprintf(DebugLevel::DEBUG, "F = %08x\n", *RegisterOffsets.F);
  dprintf(DebugLevel::DEBUG, "EL = %08x\n", *RegisterOffsets.EL);
  dprintf(DebugLevel::DEBUG, "TTBR0 = %08x\n", *RegisterOffsets.TTBR0);
  dprintf(DebugLevel::DEBUG, "TTBR1 = %08x\n", *RegisterOffsets.TTBR1);
  dprintf(DebugLevel::DEBUG, "FPCR = %08x\n", *RegisterOffsets.FPCR);
  dprintf(DebugLevel::DEBUG, "FPSR = %08x\n", *RegisterOffsets.FPSR);
}
#define read_register(__REG) (*RegisterOffsets.__REG)
#define read_register_bank(__RB, __REG) (RegisterOffsets.__RB[__REG])
#define write_register(__REG, __VAL) (*RegisterOffsets.__REG) = (__VAL)
#define write_register_bank(__RB, __REG, __VAL) RegisterOffsets.__RB[__REG] = (__VAL)
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;
typedef int32_t sint32;
typedef int16_t sint16;
typedef int8_t sint8;
bool aarch64_processor::handle_irq(uint8_t irq)
{
  {
    trap();
    return false;
  }
}
bool aarch64_processor::handle_page_fault()
{
  return false;
  {
    trap();
    return false;
  }
}
bool aarch64_processor::handle_undefined_instruction()
{
  {
    trap();
    return false;
  }
}
