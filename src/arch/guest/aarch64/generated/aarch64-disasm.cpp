#include "aarch64-decode.h"
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::arch::guest;
using namespace vrt::arch;
static const char *_map_a64_cond[] = 
{
  "eq","ne","cs","cc","mi","pl","vs","vc","hi","ls","ge","lt","gt","le","al","nv",
}
;
static const char *_map_a64_regsw[] = 
{
  "W0","W1","W2","W3","W4","W5","W6","W7","W8","W9","W10","W11","W12","W13","W14","W15","W16","W17","W18","W19","W20","W21","W22","W23","W24","W25","W26","W27","W28","W29","W30","WSP",
}
;
static const char *_map_a64_regsx[] = 
{
  "X0","X1","X2","X3","X4","X5","X6","X7","X8","X9","X10","X11","X12","X13","X14","X15","X16","X17","X18","X19","X20","X21","X22","X23","X24","X25","X26","X27","X28","X29","X30","SP",
}
;
static const char *_map_a64_regw[] = 
{
  "W0","W1","W2","W3","W4","W5","W6","W7","W8","W9","W10","W11","W12","W13","W14","W15","W16","W17","W18","W19","W20","W21","W22","W23","W24","W25","W26","W27","W28","W29","W30","WZR",
}
;
static const char *_map_a64_regx[] = 
{
  "X0","X1","X2","X3","X4","X5","X6","X7","X8","X9","X10","X11","X12","X13","X14","X15","X16","X17","X18","X19","X20","X21","X22","X23","X24","X25","X26","X27","X28","X29","X30","XZR",
}
;
static const char *_map_a64_shifttype[] = 
{
  "lsl","lsr","asr","ror",
}
;
const char *aarch64_insn_adc::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "adc");
  return buffer;
}
const char *aarch64_insn_add_ereg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "add_ereg");
  return buffer;
}
const char *aarch64_insn_add_sreg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((S == (1)) && (imm6 == (0)) && (sf == (1))) 
  {
    append_str(buffer, "adds");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (1)) && (imm6 == (0)) && (sf == (0))) 
  {
    append_str(buffer, "adds");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (0)) && (imm6 == (0)) && (sf == (1))) 
  {
    append_str(buffer, "add");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (0)) && (imm6 == (0)) && (sf == (0))) 
  {
    append_str(buffer, "add");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (1)) && (sf == (1))) 
  {
    append_str(buffer, "adds");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((S == (1)) && (sf == (0))) 
  {
    append_str(buffer, "adds");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((S == (0)) && (sf == (1))) 
  {
    append_str(buffer, "add");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((S == (0)) && (sf == (0))) 
  {
    append_str(buffer, "add");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_addi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((sf == (1))) 
  {
    append_str(buffer, "add");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    return buffer;
  }
  if ((sf == (0))) 
  {
    append_str(buffer, "add");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_adr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((op == (1))) 
  {
    append_str(buffer, "adrp");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "0");
    append_str(buffer, "x");
    append_hex(buffer, (uint64_t)(pc + (int64_t)(uint64_t)((imms64))));
    return buffer;
  }
  if ((op == (0))) 
  {
    append_str(buffer, "adr");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "0");
    append_str(buffer, "x");
    append_hex(buffer, (uint64_t)(pc + (int64_t)(uint64_t)((imms64))));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_andi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((N == (0)) && (opc == (3)) && (rd == (31)) && (sf == (0))) 
  {
    append_str(buffer, "tst");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_hex(buffer, (uint32_t)((immu32)));
    return buffer;
  }
  if ((opc == (3)) && (rd == (31)) && (sf == (1))) 
  {
    append_str(buffer, "tst");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_hex(buffer, (uint64_t)((immu64)));
    return buffer;
  }
  if ((N == (0)) && (opc == (3)) && (sf == (0))) 
  {
    append_str(buffer, "ands");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_hex(buffer, (uint32_t)((immu32)));
    return buffer;
  }
  if ((opc == (3)) && (sf == (1))) 
  {
    append_str(buffer, "ands");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_hex(buffer, (uint64_t)((immu64)));
    return buffer;
  }
  if ((N == (0)) && (sf == (0))) 
  {
    append_str(buffer, "and");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_hex(buffer, (uint32_t)((immu32)));
    return buffer;
  }
  if ((sf == (1))) 
  {
    append_str(buffer, "and");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_hex(buffer, (uint64_t)((immu64)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_andsr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((imm6 == (0)) && (opc == (3)) && (sf == (1))) 
  {
    append_str(buffer, "tst");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((imm6 == (0)) && (opc == (3)) && (sf == (0))) 
  {
    append_str(buffer, "tst");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((imm6 == (0)) && (opc == (3)) && (sf == (1))) 
  {
    append_str(buffer, "ands");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((imm6 == (0)) && (opc == (3)) && (sf == (0))) 
  {
    append_str(buffer, "ands");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((imm6 == (0)) && (opc == (0)) && (sf == (1))) 
  {
    append_str(buffer, "and");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((imm6 == (0)) && (opc == (0)) && (sf == (0))) 
  {
    append_str(buffer, "and");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((opc == (3)) && (sf == (1))) 
  {
    append_str(buffer, "tst");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((opc == (3)) && (sf == (0))) 
  {
    append_str(buffer, "tst");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((opc == (3)) && (sf == (1))) 
  {
    append_str(buffer, "ands");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((opc == (3)) && (sf == (0))) 
  {
    append_str(buffer, "ands");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((opc == (0)) && (sf == (1))) 
  {
    append_str(buffer, "and");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((opc == (0)) && (sf == (0))) 
  {
    append_str(buffer, "and");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_asrv::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "asrv");
  return buffer;
}
const char *aarch64_insn_b::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((op == (1))) 
  {
    append_str(buffer, "bl");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm26)));
    return buffer;
  }
  if ((op == (0))) 
  {
    append_str(buffer, "b");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm26)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_barrier::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((op2 == (6))) 
  {
    append_str(buffer, "isb");
    return buffer;
  }
  if ((op2 == (5))) 
  {
    append_str(buffer, "dmb");
    return buffer;
  }
  if ((op2 == (4))) 
  {
    append_str(buffer, "dsb");
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_bcond::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "b");
  append_str(buffer, ".");
  map_val = 0 + (cond);
  if (map_val < 16)append_str(buffer, _map_a64_cond[map_val]);
  else append_str(buffer, "???");
  append_str(buffer, " ");
  append_str(buffer, "0");
  append_str(buffer, "x");
  append_hex(buffer, (uint64_t)(pc + (int64_t)(uint64_t)((imms64))));
  return buffer;
  return buffer;
}
const char *aarch64_insn_bfm::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "bfm");
  return buffer;
}
const char *aarch64_insn_bicsr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((imm6 == (0)) && (opc == (3)) && (sf == (1))) 
  {
    append_str(buffer, "bics");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((imm6 == (0)) && (opc == (3)) && (sf == (0))) 
  {
    append_str(buffer, "bics");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((imm6 == (0)) && (opc == (0)) && (sf == (1))) 
  {
    append_str(buffer, "bic");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((imm6 == (0)) && (opc == (0)) && (sf == (0))) 
  {
    append_str(buffer, "bic");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((opc == (3)) && (sf == (1))) 
  {
    append_str(buffer, "bics");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((opc == (3)) && (sf == (0))) 
  {
    append_str(buffer, "bics");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((opc == (0)) && (sf == (1))) 
  {
    append_str(buffer, "bic");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((opc == (0)) && (sf == (0))) 
  {
    append_str(buffer, "bic");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_br::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "br");
  return buffer;
}
const char *aarch64_insn_cbz::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "cbz");
  return buffer;
}
const char *aarch64_insn_ccmni::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ccmni");
  return buffer;
}
const char *aarch64_insn_ccmnr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ccmnr");
  return buffer;
}
const char *aarch64_insn_ccmpi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ccmpi");
  return buffer;
}
const char *aarch64_insn_ccmpr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ccmpr");
  return buffer;
}
const char *aarch64_insn_cls::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "cls");
  return buffer;
}
const char *aarch64_insn_clz::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "clz");
  return buffer;
}
const char *aarch64_insn_crc32::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "crc32");
  return buffer;
}
const char *aarch64_insn_crc32c::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "crc32c");
  return buffer;
}
const char *aarch64_insn_csel::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "csel");
  return buffer;
}
const char *aarch64_insn_csinc::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "csinc");
  return buffer;
}
const char *aarch64_insn_csinv::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "csinv");
  return buffer;
}
const char *aarch64_insn_csneg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "csneg");
  return buffer;
}
const char *aarch64_insn_drps::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "drps");
  return buffer;
}
const char *aarch64_insn_eori::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "eori");
  return buffer;
}
const char *aarch64_insn_eorsr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((N == (1)) && (sf == (1))) 
  {
    append_str(buffer, "eon");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (1)) && (sf == (0))) 
  {
    append_str(buffer, "eon");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (0)) && (sf == (1))) 
  {
    append_str(buffer, "eor");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (0)) && (sf == (0))) 
  {
    append_str(buffer, "eor");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_eret::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "eret");
  return buffer;
}
const char *aarch64_insn_exgen::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "exgen");
  return buffer;
}
const char *aarch64_insn_extr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "extr");
  return buffer;
}
const char *aarch64_insn_hint::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "hint");
  return buffer;
}
const char *aarch64_insn_ldp::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldp");
  return buffer;
}
const char *aarch64_insn_ldpi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldpi");
  return buffer;
}
const char *aarch64_insn_ldpsw::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldpsw");
  return buffer;
}
const char *aarch64_insn_ldpswi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldpswi");
  return buffer;
}
const char *aarch64_insn_ldr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldr");
  return buffer;
}
const char *aarch64_insn_ldr_lit::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldr_lit");
  return buffer;
}
const char *aarch64_insn_ldr_reg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldr_reg");
  return buffer;
}
const char *aarch64_insn_ldrb::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrb");
  return buffer;
}
const char *aarch64_insn_ldrb_reg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrb_reg");
  return buffer;
}
const char *aarch64_insn_ldrbi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrbi");
  return buffer;
}
const char *aarch64_insn_ldrh::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrh");
  return buffer;
}
const char *aarch64_insn_ldrh_reg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrh_reg");
  return buffer;
}
const char *aarch64_insn_ldrhi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrhi");
  return buffer;
}
const char *aarch64_insn_ldri::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldri");
  return buffer;
}
const char *aarch64_insn_ldrsw::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrsw");
  return buffer;
}
const char *aarch64_insn_ldrsw_lit::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrsw_lit");
  return buffer;
}
const char *aarch64_insn_ldrsw_reg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrsw_reg");
  return buffer;
}
const char *aarch64_insn_ldrswi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldrswi");
  return buffer;
}
const char *aarch64_insn_ldtr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldtr");
  return buffer;
}
const char *aarch64_insn_ldtrb::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldtrb");
  return buffer;
}
const char *aarch64_insn_ldtrh::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldtrh");
  return buffer;
}
const char *aarch64_insn_ldtrsw::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldtrsw");
  return buffer;
}
const char *aarch64_insn_ldur::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldur");
  return buffer;
}
const char *aarch64_insn_ldurb::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldurb");
  return buffer;
}
const char *aarch64_insn_ldurh::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldurh");
  return buffer;
}
const char *aarch64_insn_ldursw::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "ldursw");
  return buffer;
}
const char *aarch64_insn_lslv::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((sf == (1))) 
  {
    append_str(buffer, "lslv");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((sf == (0))) 
  {
    append_str(buffer, "lslv");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_lsrv::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "lsrv");
  return buffer;
}
const char *aarch64_insn_madd::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "madd");
  return buffer;
}
const char *aarch64_insn_mov::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((N == (1)) && (sf == (1))) 
  {
    append_str(buffer, "mvn");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (1)) && (sf == (0))) 
  {
    append_str(buffer, "mvn");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (0)) && (sf == (1))) 
  {
    append_str(buffer, "mov");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (0)) && (sf == (0))) 
  {
    append_str(buffer, "mov");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_movk::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "movk");
  return buffer;
}
const char *aarch64_insn_movn::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "movn");
  return buffer;
}
const char *aarch64_insn_movz::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((hw == (0)) && (sf == (1))) 
  {
    append_str(buffer, "movz");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm16)));
    return buffer;
  }
  if ((hw == (0)) && (sf == (0))) 
  {
    append_str(buffer, "movz");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm16)));
    return buffer;
  }
  if ((sf == (1))) 
  {
    append_str(buffer, "movz");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm16)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "LSL");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((shift)));
    return buffer;
  }
  if ((sf == (0))) 
  {
    append_str(buffer, "movz");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm16)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "LSL");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((shift)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_mrs::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "mrs");
  append_str(buffer, " ");
  map_val = 0 + (rt);
  if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
  else append_str(buffer, "???");
  append_str(buffer, ",");
  append_str(buffer, " ");
  append_str(buffer, "S");
  append_dec(buffer, (uint32_t)((op0)));
  append_str(buffer, "_");
  append_dec(buffer, (uint32_t)((op1)));
  append_str(buffer, "_");
  append_str(buffer, "C");
  append_dec(buffer, (uint32_t)((crn)));
  append_str(buffer, "_");
  append_str(buffer, "C");
  append_dec(buffer, (uint32_t)((crm)));
  append_str(buffer, "_");
  append_dec(buffer, (uint32_t)((op2)));
  return buffer;
  return buffer;
}
const char *aarch64_insn_msr_imm::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "msr_imm");
  return buffer;
}
const char *aarch64_insn_msr_reg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "msr");
  append_str(buffer, " ");
  append_str(buffer, "S");
  append_dec(buffer, (uint32_t)((op0)));
  append_str(buffer, "_");
  append_dec(buffer, (uint32_t)((op1)));
  append_str(buffer, "_");
  append_str(buffer, "C");
  append_dec(buffer, (uint32_t)((crn)));
  append_str(buffer, "_");
  append_str(buffer, "C");
  append_dec(buffer, (uint32_t)((crm)));
  append_str(buffer, "_");
  append_dec(buffer, (uint32_t)((op2)));
  append_str(buffer, ",");
  append_str(buffer, " ");
  map_val = 0 + (rt);
  if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
  else append_str(buffer, "???");
  return buffer;
  return buffer;
}
const char *aarch64_insn_msub::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "msub");
  return buffer;
}
const char *aarch64_insn_orri::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((N == (0)) && (sf == (0))) 
  {
    append_str(buffer, "orr");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_hex(buffer, (uint32_t)((immu32)));
    return buffer;
  }
  if ((sf == (1))) 
  {
    append_str(buffer, "orr");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_hex(buffer, (uint64_t)((immu64)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_orrsr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((N == (1)) && (imm6 == (0)) && (sf == (1))) 
  {
    append_str(buffer, "orn");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (1)) && (imm6 == (0)) && (sf == (0))) 
  {
    append_str(buffer, "orn");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (0)) && (imm6 == (0)) && (sf == (1))) 
  {
    append_str(buffer, "orr");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (0)) && (imm6 == (0)) && (sf == (0))) 
  {
    append_str(buffer, "orr");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((N == (1)) && (sf == (1))) 
  {
    append_str(buffer, "orn");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((N == (1)) && (sf == (0))) 
  {
    append_str(buffer, "orn");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((N == (0)) && (sf == (1))) 
  {
    append_str(buffer, "orr");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((N == (0)) && (sf == (0))) 
  {
    append_str(buffer, "orr");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_prfm::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "prfm");
  return buffer;
}
const char *aarch64_insn_rbit::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "rbit");
  return buffer;
}
const char *aarch64_insn_ret::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((rn == (30))) 
  {
    append_str(buffer, "ret");
    return buffer;
  }
  append_str(buffer, "ret");
  append_str(buffer, " ");
  map_val = 0 + (rn);
  if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
  else append_str(buffer, "???");
  return buffer;
  return buffer;
}
const char *aarch64_insn_rev::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "rev");
  return buffer;
}
const char *aarch64_insn_rev16::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "rev16");
  return buffer;
}
const char *aarch64_insn_rev32::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "rev32");
  return buffer;
}
const char *aarch64_insn_rorv::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "rorv");
  return buffer;
}
const char *aarch64_insn_sbc::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sbc");
  return buffer;
}
const char *aarch64_insn_sbfm::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sbfm");
  return buffer;
}
const char *aarch64_insn_sdiv::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sdiv");
  return buffer;
}
const char *aarch64_insn_smaddl::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "smaddl");
  return buffer;
}
const char *aarch64_insn_smsubl::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "smsubl");
  return buffer;
}
const char *aarch64_insn_smulh::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "smulh");
  return buffer;
}
const char *aarch64_insn_stp::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((imm7 == (0)) && (opc == (2))) 
  {
    append_str(buffer, "stp");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt2);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, "]");
    return buffer;
  }
  if ((imm7 == (0)) && (opc == (0))) 
  {
    append_str(buffer, "stp");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt2);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, "]");
    return buffer;
  }
  if ((opc == (2))) 
  {
    append_str(buffer, "stp");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt2);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm7)));
    append_str(buffer, "]");
    return buffer;
  }
  if ((opc == (0))) 
  {
    append_str(buffer, "stp");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt2);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm7)));
    append_str(buffer, "]");
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_stpi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((P == (1)) && (opc == (2))) 
  {
    append_str(buffer, "stp");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt2);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((immu64)));
    append_str(buffer, "]");
    append_str(buffer, "!");
    return buffer;
  }
  if ((P == (1)) && (opc == (0))) 
  {
    append_str(buffer, "stp");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt2);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((immu64)));
    append_str(buffer, "]");
    append_str(buffer, "!");
    return buffer;
  }
  if ((P == (0)) && (opc == (2))) 
  {
    append_str(buffer, "stp");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt2);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, "]");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((immu64)));
    return buffer;
  }
  if ((P == (0)) && (opc == (0))) 
  {
    append_str(buffer, "stp");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt2);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, "]");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((immu64)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_str::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "str");
  return buffer;
}
const char *aarch64_insn_str_reg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "str_reg");
  return buffer;
}
const char *aarch64_insn_strb::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "strb");
  return buffer;
}
const char *aarch64_insn_strb_reg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "strb_reg");
  return buffer;
}
const char *aarch64_insn_strbi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "strbi");
  return buffer;
}
const char *aarch64_insn_strh::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "strh");
  return buffer;
}
const char *aarch64_insn_strh_reg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "strh_reg");
  return buffer;
}
const char *aarch64_insn_strhi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "strhi");
  return buffer;
}
const char *aarch64_insn_stri::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((immu64 == (0)) && (size == (3))) 
  {
    append_str(buffer, "str");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, "]");
    return buffer;
  }
  if ((immu64 == (0)) && (size == (2))) 
  {
    append_str(buffer, "str");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, "]");
    return buffer;
  }
  if ((size == (3))) 
  {
    append_str(buffer, "str");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((immu64)));
    append_str(buffer, "]");
    return buffer;
  }
  if ((size == (2))) 
  {
    append_str(buffer, "str");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "[");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((immu64)));
    append_str(buffer, "]");
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_sttr::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sttr");
  return buffer;
}
const char *aarch64_insn_sttrb::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sttrb");
  return buffer;
}
const char *aarch64_insn_sttrh::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sttrh");
  return buffer;
}
const char *aarch64_insn_stur::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "stur");
  return buffer;
}
const char *aarch64_insn_sturb::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sturb");
  return buffer;
}
const char *aarch64_insn_sturh::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sturh");
  return buffer;
}
const char *aarch64_insn_sub_ereg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "sub_ereg");
  return buffer;
}
const char *aarch64_insn_sub_sreg::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((S == (1)) && (imm6 == (0)) && (rd == (31)) && (sf == (1))) 
  {
    append_str(buffer, "cmp");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (1)) && (imm6 == (0)) && (rd == (31)) && (sf == (0))) 
  {
    append_str(buffer, "cmp");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (1)) && (rd == (31)) && (sf == (1))) 
  {
    append_str(buffer, "cmp");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((S == (1)) && (rd == (31)) && (sf == (0))) 
  {
    append_str(buffer, "cmp");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((S == (1)) && (imm6 == (0)) && (sf == (1))) 
  {
    append_str(buffer, "subs");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (1)) && (imm6 == (0)) && (sf == (0))) 
  {
    append_str(buffer, "subs");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (0)) && (imm6 == (0)) && (sf == (1))) 
  {
    append_str(buffer, "sub");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (0)) && (imm6 == (0)) && (sf == (0))) 
  {
    append_str(buffer, "sub");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((S == (1)) && (sf == (1))) 
  {
    append_str(buffer, "subs");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((S == (1)) && (sf == (0))) 
  {
    append_str(buffer, "subs");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((S == (0)) && (sf == (1))) 
  {
    append_str(buffer, "sub");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  if ((S == (0)) && (sf == (0))) 
  {
    append_str(buffer, "sub");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rm);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    map_val = 0 + (shift);
    if (map_val < 4)append_str(buffer, _map_a64_shifttype[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm6)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_subi::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((S == (1)) && (rd == (31)) && (sf == (1)) && (shift == (1))) 
  {
    append_str(buffer, "cmp");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "lsl");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_str(buffer, "12");
    return buffer;
  }
  if ((S == (1)) && (rd == (31)) && (sf == (1)) && (shift == (0))) 
  {
    append_str(buffer, "cmp");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    return buffer;
  }
  if ((S == (1)) && (rd == (31)) && (sf == (0)) && (shift == (1))) 
  {
    append_str(buffer, "cmp");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "lsl");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_str(buffer, "12");
    return buffer;
  }
  if ((S == (1)) && (rd == (31)) && (sf == (0)) && (shift == (0))) 
  {
    append_str(buffer, "cmp");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    return buffer;
  }
  if ((S == (1)) && (sf == (1)) && (shift == (1))) 
  {
    append_str(buffer, "subs");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "lsl");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_str(buffer, "12");
    return buffer;
  }
  if ((S == (1)) && (sf == (1)) && (shift == (0))) 
  {
    append_str(buffer, "subs");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    return buffer;
  }
  if ((S == (1)) && (sf == (0)) && (shift == (1))) 
  {
    append_str(buffer, "subs");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "lsl");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_str(buffer, "12");
    return buffer;
  }
  if ((S == (1)) && (sf == (0)) && (shift == (0))) 
  {
    append_str(buffer, "subs");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    return buffer;
  }
  if ((S == (0)) && (sf == (1)) && (shift == (1))) 
  {
    append_str(buffer, "sub");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "lsl");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_str(buffer, "12");
    return buffer;
  }
  if ((S == (0)) && (sf == (1)) && (shift == (0))) 
  {
    append_str(buffer, "sub");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    return buffer;
  }
  if ((S == (0)) && (sf == (0)) && (shift == (1))) 
  {
    append_str(buffer, "sub");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "lsl");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_str(buffer, "12");
    return buffer;
  }
  if ((S == (0)) && (sf == (0)) && (shift == (0))) 
  {
    append_str(buffer, "sub");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regsw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imm12)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_sys::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((crm == (14)) && (op1 == (3)) && (op2 == (1))) 
  {
    append_str(buffer, "dc");
    append_str(buffer, " ");
    append_str(buffer, "civac");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((crm == (11)) && (op1 == (3)) && (op2 == (1))) 
  {
    append_str(buffer, "dc");
    append_str(buffer, " ");
    append_str(buffer, "cvau");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((crm == (10)) && (op1 == (3)) && (op2 == (1))) 
  {
    append_str(buffer, "dc");
    append_str(buffer, " ");
    append_str(buffer, "cvac");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((crm == (4)) && (op1 == (3)) && (op2 == (1))) 
  {
    append_str(buffer, "dc");
    append_str(buffer, " ");
    append_str(buffer, "zva");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((crm == (14)) && (op1 == (0)) && (op2 == (2))) 
  {
    append_str(buffer, "dc");
    append_str(buffer, " ");
    append_str(buffer, "cisw");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((crm == (10)) && (op1 == (0)) && (op2 == (2))) 
  {
    append_str(buffer, "dc");
    append_str(buffer, " ");
    append_str(buffer, "csw");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((crm == (6)) && (op1 == (0)) && (op2 == (2))) 
  {
    append_str(buffer, "dc");
    append_str(buffer, " ");
    append_str(buffer, "isw");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  if ((crm == (6)) && (op1 == (0)) && (op2 == (1))) 
  {
    append_str(buffer, "dc");
    append_str(buffer, " ");
    append_str(buffer, "ivac");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rt);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    return buffer;
  }
  append_str(buffer, "sys");
  append_str(buffer, " ");
  append_str(buffer, "#");
  append_dec(buffer, (uint32_t)((op1)));
  append_str(buffer, ",");
  append_str(buffer, " ");
  append_str(buffer, "C");
  append_dec(buffer, (uint32_t)((crn)));
  append_str(buffer, ",");
  append_str(buffer, " ");
  append_str(buffer, "C");
  append_dec(buffer, (uint32_t)((crm)));
  append_str(buffer, ",");
  append_str(buffer, " ");
  append_str(buffer, "#");
  append_dec(buffer, (uint32_t)((op2)));
  append_str(buffer, ",");
  append_str(buffer, " ");
  map_val = 0 + (rt);
  if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
  else append_str(buffer, "???");
  return buffer;
  return buffer;
}
const char *aarch64_insn_tbz::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "tbz");
  return buffer;
}
const char *aarch64_insn_ubfm::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  if ((sf == (1))) 
  {
    append_str(buffer, "ubfm");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regx[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((immr)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imms)));
    return buffer;
  }
  if ((sf == (0))) 
  {
    append_str(buffer, "ubfm");
    append_str(buffer, " ");
    map_val = 0 + (rd);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    map_val = 0 + (rn);
    if (map_val < 32)append_str(buffer, _map_a64_regw[map_val]);
    else append_str(buffer, "???");
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((immr)));
    append_str(buffer, ",");
    append_str(buffer, " ");
    append_str(buffer, "#");
    append_dec(buffer, (uint32_t)((imms)));
    return buffer;
  }
  return buffer;
}
const char *aarch64_insn_udiv::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "udiv");
  return buffer;
}
const char *aarch64_insn_umaddl::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "umaddl");
  return buffer;
}
const char *aarch64_insn_umsubl::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "umsubl");
  return buffer;
}
const char *aarch64_insn_umulh::disassemble(gpa_t pc) const
{
  uint32_t map_val = 0;
  char *buffer = new char[512];
  buffer[0] = 0;
  append_str(buffer, "umulh");
  return buffer;
}
