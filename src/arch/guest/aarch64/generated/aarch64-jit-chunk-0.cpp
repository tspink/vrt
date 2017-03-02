#include "aarch64-jit.h"
#include <vrt/util/list.h>
#include <vrt/util/set.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::dbt::ir;
using namespace vrt::util;
bool aarch64_insn_adc::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_b::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Block b_top_1
  // Block b_top_2
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x3292ca0inst->op(const) */
    /* F s_b_0_1: If s_b_0_0: Jump b_top_1 else b_top_2 (const) */
    if (op) 
    {
      goto block_b_top_1;
    }
    else 
    {
      goto block_b_top_2;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0 = (const uint8) 1 (const) */
    /* F s_b_top_1_1 = (const uint8) 1e (const) */
    /* D s_b_top_1_2 = ReadReg 2 (uint64) */
    Statement& s_b_top_1_2 = builder.ldreg(Operand(PrimitiveTypes.u32, 256));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 256), Operand(s_b_top_1_2));
    }
    /* F s_b_top_1_3 = (const uint8) 4 (const) */
    /* F s_b_top_1_4 = (uint64) 4 (const) */
    /* D s_b_top_1_5 = s_b_top_1_2+s_b_top_1_4 */
    Statement& s_b_top_1_5 = builder.add(Operand(s_b_top_1_2), Operand(PrimitiveTypes.u64, (uint64)4ULL));
    /* F s_b_top_1_6 = (const uint8) 1f (const) */
    /* F s_b_top_1_7 = (uint8) 0 (const) */
    /* F s_b_top_1_8 = (const uint8) 1 (const) */
    /* F s_b_top_1_9 = (const uint8) 1e (const) */
    /* D s_b_top_1_10: WriteRegBank 0:s_b_top_1_9 = s_b_top_1_5 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * (uint8)30ULL))),Operand(s_b_top_1_5));
    }
    builder.streg(Operand(s_b_top_1_5), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * (uint8)30ULL))));
    /* F s_b_top_1_11: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_top_2: 
  {
    /* D s_b_top_2_0 = ReadReg 2 (uint64) */
    Statement& s_b_top_2_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 256));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 256), Operand(s_b_top_2_0));
    }
    /* D s_b_top_2_1 = (sint64)s_b_top_2_0 */
    Statement& s_b_top_2_1 = s_b_top_2_0;
    /* F s_b_top_2_2=top__Qscope_0x3292ca0inst->imms64(const) */
    /* D s_b_top_2_3 = s_b_top_2_1+s_b_top_2_2 */
    Statement& s_b_top_2_3 = builder.add(Operand(s_b_top_2_1), Operand(PrimitiveTypes.s64, imms64));
    /* D s_b_top_2_4 = (uint64)s_b_top_2_3 */
    Statement& s_b_top_2_4 = s_b_top_2_3;
    /* D s_b_top_2_5: WriteReg 2 = s_b_top_2_4 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 256), Operand(s_b_top_2_4));
    }
    builder.streg(Operand(s_b_top_2_4), Operand(PrimitiveTypes.u32, 256));
    /* F s_b_top_2_6: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_ccmnr::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_csinc::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_extr::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_ldr_reg::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_ldrsw::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_ldur::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_movk::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_2
  uint64 CV_read_gpr_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Reg s_b_top_1_20
  uint64 CV_write_gpr_b_top_11__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_11__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_2
  // Reg s_b_read_gpr_b_top_1_2_3
  uint64 CV_temp_5;
  vrt::dbt::ir::Statement *ir_idx_temp_5 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_3
  uint64 CV_temp_6;
  vrt::dbt::ir::Statement *ir_idx_temp_6 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_4
  // Block b_read_gpr_b_top_1_5
  // Block b_read_gpr_b_top_1_6
  // Block b_read_gpr_b_top_1_7
  // Block b_read_gpr_b_top_1_8
  // Block b_read_gpr_b_top_1_9
  // Block b_top_10
  // Block b_write_gpr_b_top_11_11
  // Block b_write_gpr_b_top_11_12
  // Block b_write_gpr_b_top_11_13
  // Block b_write_gpr_b_top_11_14
  // Block b_write_gpr_b_top_11_15
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x324dae0inst->sf(const) */
    /* F s_b_0_1=top__Qscope_0x324dae0inst->rd(const) */
    /* F s_b_0_2: &read_gpr_b_top_1_0r = Alloc uint64 */
    /* F s_b_0_3: If s_b_0_0: Jump b_read_gpr_b_top_1_2 else b_read_gpr_b_top_1_3 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_1_2;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_3;
    }
  }
  block_b_top_1: 
  {
    /* D s_b_top_1_0 = read_gpr_b_top_1_0r */
    /* F s_b_top_1_1: Free &read_gpr_b_top_1_0r (8) */
    /* F s_b_top_1_2 = (const uint8) 1 (const) */
    /* F s_b_top_1_3 = (uint64) 1 (const) */
    /* F s_b_top_1_4=top__Qscope_0x324dae0inst->shift(const) */
    /* F s_b_top_1_5 = (uint64)s_b_top_1_4 (const) */
    /* F s_b_top_1_6 = s_b_top_1_3<<s_b_top_1_5 (const) */
    uint64 s_b_top_1_6 = ((uint64)((uint64)1ULL << ((uint64)shift)));
    /* F s_b_top_1_7 = (const uint8) 1 (const) */
    /* F s_b_top_1_8 = (uint64) 1 (const) */
    /* F s_b_top_1_9 = s_b_top_1_6-s_b_top_1_8 (const) */
    uint64 s_b_top_1_9 = ((uint64)(s_b_top_1_6 - (uint64)1ULL));
    /* F s_b_top_1_10 = ?s_b_top_1_9 (const) */
    uint64 s_b_top_1_10 = ~s_b_top_1_9;
    /* D s_b_top_1_11 = s_b_top_1_0&s_b_top_1_10 */
    Statement& s_b_top_1_11 = builder.band(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(PrimitiveTypes.u64, s_b_top_1_10));
    /* F s_b_top_1_12=top__Qscope_0x324dae0inst->imm16(const) */
    /* F s_b_top_1_13 = (uint64)s_b_top_1_12 (const) */
    /* F s_b_top_1_14=top__Qscope_0x324dae0inst->shift(const) */
    /* F s_b_top_1_15 = (uint64)s_b_top_1_14 (const) */
    /* F s_b_top_1_16 = s_b_top_1_13<<s_b_top_1_15 (const) */
    uint64 s_b_top_1_16 = ((uint64)(((uint64)imm16) << ((uint64)shift)));
    /* D s_b_top_1_17 = s_b_top_1_11|s_b_top_1_16 */
    Statement& s_b_top_1_17 = builder.bor(Operand(s_b_top_1_11), Operand(PrimitiveTypes.u64, s_b_top_1_16));
    /* F s_b_top_1_18=top__Qscope_0x324dae0inst->sf(const) */
    /* F s_b_top_1_19=top__Qscope_0x324dae0inst->rd(const) */
    /* F s_b_top_1_20: &write_gpr_b_top_11__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_1_21: write_gpr_b_top_11__Qscope_0x33bbb30value = s_b_top_1_17, dominates: s_b_write_gpr_b_top_11_13_1 s_b_write_gpr_b_top_11_15_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_11__Qscope_0x33bbb30value), Operand(s_b_top_1_17));
    /* F s_b_top_1_22 = (const uint8) 1f (const) */
    /* F s_b_top_1_23 = s_b_top_1_19==s_b_top_1_22 (const) */
    uint8 s_b_top_1_23 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_1_24: If s_b_top_1_23: Jump b_write_gpr_b_top_11_11 else b_write_gpr_b_top_11_12 (const) */
    if (s_b_top_1_23) 
    {
      goto block_b_write_gpr_b_top_11_11;
    }
    else 
    {
      goto block_b_write_gpr_b_top_11_12;
    }
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x324dae0inst->rd(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_2_3: &temp_5 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_2_4: If s_b_read_gpr_b_top_1_2_2: Jump b_read_gpr_b_top_1_4 else b_read_gpr_b_top_1_5 (const) */
    if (s_b_read_gpr_b_top_1_2_2) 
    {
      goto block_b_read_gpr_b_top_1_4;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_5;
    }
  }
  block_b_read_gpr_b_top_1_3: 
  {
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x324dae0inst->rd(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_3_3: &temp_6 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_3_4: If s_b_read_gpr_b_top_1_3_2: Jump b_read_gpr_b_top_1_7 else b_read_gpr_b_top_1_8 (const) */
    if (s_b_read_gpr_b_top_1_3_2) 
    {
      goto block_b_read_gpr_b_top_1_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_8;
    }
  }
  block_b_read_gpr_b_top_1_4: 
  {
    /* F s_b_read_gpr_b_top_1_4_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_2: temp_5 = s_b_read_gpr_b_top_1_4_1 (const), dominates: s_b_read_gpr_b_top_1_6_0  */
    CV_temp_5 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u8, CV_temp_5));
    /* F s_b_read_gpr_b_top_1_4_3: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_5: 
  {
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x324dae0inst->rd(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_read_gpr_b_top_1_5_1));
    }
    /* D s_b_read_gpr_b_top_1_5_2 = (uint64)s_b_read_gpr_b_top_1_5_1 */
    Statement& s_b_read_gpr_b_top_1_5_2 = s_b_read_gpr_b_top_1_5_1;
    /* D s_b_read_gpr_b_top_1_5_3: temp_5 = s_b_read_gpr_b_top_1_5_2, dominates: s_b_read_gpr_b_top_1_6_0  */
    builder.store(Operand(*ir_idx_temp_5), Operand(s_b_read_gpr_b_top_1_5_2));
    /* F s_b_read_gpr_b_top_1_5_4: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_6: 
  {
    /* D s_b_read_gpr_b_top_1_6_0 = temp_5 */
    /* F s_b_read_gpr_b_top_1_6_1: Free &temp_5 (8) */
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_5));
    /* F s_b_read_gpr_b_top_1_6_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_b_top_1_7: 
  {
    /* F s_b_read_gpr_b_top_1_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_2: temp_6 = s_b_read_gpr_b_top_1_7_1 (const), dominates: s_b_read_gpr_b_top_1_9_0  */
    CV_temp_6 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_6), Operand(PrimitiveTypes.u8, CV_temp_6));
    /* F s_b_read_gpr_b_top_1_7_3: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_8: 
  {
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x324dae0inst->rd(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_read_gpr_b_top_1_8_1));
    }
    /* D s_b_read_gpr_b_top_1_8_2 = (uint64)s_b_read_gpr_b_top_1_8_1 */
    Statement& s_b_read_gpr_b_top_1_8_2 = builder.zx(Operand(s_b_read_gpr_b_top_1_8_1));
    /* D s_b_read_gpr_b_top_1_8_3: temp_6 = s_b_read_gpr_b_top_1_8_2, dominates: s_b_read_gpr_b_top_1_9_0  */
    builder.store(Operand(*ir_idx_temp_6), Operand(s_b_read_gpr_b_top_1_8_2));
    /* F s_b_read_gpr_b_top_1_8_4: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_9: 
  {
    /* D s_b_read_gpr_b_top_1_9_0 = temp_6 */
    /* F s_b_read_gpr_b_top_1_9_1: Free &temp_6 (8) */
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_6));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* F s_b_top_10_0: Free &write_gpr_b_top_11__Qscope_0x33bbb30value (8) */
    /* F s_b_top_10_1: Return */
    goto fixed_done;
  }
  block_b_write_gpr_b_top_11_11: 
  {
    /* F s_b_write_gpr_b_top_11_11_0: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_write_gpr_b_top_11_12: 
  {
    /* F s_b_write_gpr_b_top_11_12_0=top__Qscope_0x324dae0inst->sf(const) */
    /* F s_b_write_gpr_b_top_11_12_1: If s_b_write_gpr_b_top_11_12_0: Jump b_write_gpr_b_top_11_13 else b_write_gpr_b_top_11_15 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_11_13;
    }
    else 
    {
      goto block_b_write_gpr_b_top_11_15;
    }
  }
  block_b_write_gpr_b_top_11_13: 
  {
    /* F s_b_write_gpr_b_top_11_13_0=top__Qscope_0x324dae0inst->rd(const) */
    /* D s_b_write_gpr_b_top_11_13_1 = write_gpr_b_top_11__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_11_13_2: WriteRegBank 0:s_b_write_gpr_b_top_11_13_0 = s_b_write_gpr_b_top_11_13_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_11__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_11__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_11_13_3: Jump b_write_gpr_b_top_11_14 (const) */
    goto block_b_write_gpr_b_top_11_14;
  }
  block_b_write_gpr_b_top_11_14: 
  {
    /* F s_b_write_gpr_b_top_11_14_0: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_write_gpr_b_top_11_15: 
  {
    /* F s_b_write_gpr_b_top_11_15_0=top__Qscope_0x324dae0inst->rd(const) */
    /* D s_b_write_gpr_b_top_11_15_1 = write_gpr_b_top_11__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_11_15_2 = (uint32)s_b_write_gpr_b_top_11_15_1 */
    Statement& s_b_write_gpr_b_top_11_15_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_11__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_11_15_3 = (uint64)s_b_write_gpr_b_top_11_15_2 */
    Statement& s_b_write_gpr_b_top_11_15_3 = builder.zx(Operand(s_b_write_gpr_b_top_11_15_2));
    /* D s_b_write_gpr_b_top_11_15_4: WriteRegBank 0:s_b_write_gpr_b_top_11_15_0 = s_b_write_gpr_b_top_11_15_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_11_15_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_11_15_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_11_15_5: Jump b_write_gpr_b_top_11_14 (const) */
    goto block_b_write_gpr_b_top_11_14;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_orrsr::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x339edc0op2;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x339edc0op2 = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_3
  uint64 CV_read_gpr_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Reg s_b_top_1_6
  uint64 CV_shift_reg_b_top_11_0r;
  vrt::dbt::ir::Statement *ir_idx_shift_reg_b_top_11_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_2
  // Reg s_b_read_gpr_b_top_1_2_3
  uint64 CV_temp_7;
  vrt::dbt::ir::Statement *ir_idx_temp_7 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_3
  uint64 CV_temp_8;
  vrt::dbt::ir::Statement *ir_idx_temp_8 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_4
  // Block b_read_gpr_b_top_1_5
  // Block b_read_gpr_b_top_1_6
  // Block b_read_gpr_b_top_1_7
  // Block b_read_gpr_b_top_1_8
  // Block b_read_gpr_b_top_1_9
  // Block b_top_10
  // Block b_shift_reg_b_top_11_11
  // Reg s_b_shift_reg_b_top_11_11_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_14_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_12
  // Block b_shift_reg_b_top_11_13
  // Block b_read_gpr_b_shift_reg_b_top_11_14_14
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_14_14_3
  uint64 CV_temp_17;
  vrt::dbt::ir::Statement *ir_idx_temp_17 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_14_15
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_14_15_3
  uint64 CV_temp_18;
  vrt::dbt::ir::Statement *ir_idx_temp_18 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_14_16
  // Block b_read_gpr_b_shift_reg_b_top_11_14_17
  // Block b_read_gpr_b_shift_reg_b_top_11_14_18
  // Block b_read_gpr_b_shift_reg_b_top_11_14_19
  // Block b_read_gpr_b_shift_reg_b_top_11_14_20
  // Block b_read_gpr_b_shift_reg_b_top_11_14_21
  // Block b_shift_reg_b_top_11_22
  // Block b_shift_reg_b_top_11_23
  // Reg s_b_shift_reg_b_top_11_23_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_26_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_24
  // Block b_read_gpr_b_shift_reg_b_top_11_26_25
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_26_25_3
  uint64 CV_temp_22;
  vrt::dbt::ir::Statement *ir_idx_temp_22 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_26_26
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_26_26_3
  uint64 CV_temp_23;
  vrt::dbt::ir::Statement *ir_idx_temp_23 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_26_27
  // Block b_read_gpr_b_shift_reg_b_top_11_26_28
  // Block b_read_gpr_b_shift_reg_b_top_11_26_29
  // Block b_read_gpr_b_shift_reg_b_top_11_26_30
  // Block b_read_gpr_b_shift_reg_b_top_11_26_31
  // Block b_read_gpr_b_shift_reg_b_top_11_26_32
  // Block b_shift_reg_b_top_11_33
  // Reg s_b_shift_reg_b_top_11_33_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_37_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_34
  // Block b_read_gpr_b_shift_reg_b_top_11_37_35
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_37_35_3
  uint64 CV_temp_27;
  vrt::dbt::ir::Statement *ir_idx_temp_27 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_37_36
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_37_36_3
  uint64 CV_temp_28;
  vrt::dbt::ir::Statement *ir_idx_temp_28 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_37_37
  // Block b_read_gpr_b_shift_reg_b_top_11_37_38
  // Block b_read_gpr_b_shift_reg_b_top_11_37_39
  // Block b_read_gpr_b_shift_reg_b_top_11_37_40
  // Block b_read_gpr_b_shift_reg_b_top_11_37_41
  // Block b_read_gpr_b_shift_reg_b_top_11_37_42
  // Block b_shift_reg_b_top_11_43
  // Reg s_b_shift_reg_b_top_11_43_2
  sint64 CV_read_gpr_sx_b_shift_reg_b_top_11_48_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_44
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_45
  // Reg s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_3
  sint64 CV_temp_32;
  vrt::dbt::ir::Statement *ir_idx_temp_32 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_46
  // Reg s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_3
  sint64 CV_temp_33;
  vrt::dbt::ir::Statement *ir_idx_temp_33 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_47
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_48
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_49
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_50
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_51
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_52
  // Block b_shift_reg_b_top_11_53
  // Reg s_b_shift_reg_b_top_11_53_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_59_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_54
  // Block b_read_gpr_b_shift_reg_b_top_11_59_55
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_59_55_3
  uint64 CV_temp_37;
  vrt::dbt::ir::Statement *ir_idx_temp_37 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_59_56
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_59_56_3
  uint64 CV_temp_38;
  vrt::dbt::ir::Statement *ir_idx_temp_38 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_59_57
  // Block b_read_gpr_b_shift_reg_b_top_11_59_58
  // Block b_read_gpr_b_shift_reg_b_top_11_59_59
  // Block b_read_gpr_b_shift_reg_b_top_11_59_60
  // Block b_read_gpr_b_shift_reg_b_top_11_59_61
  // Block b_read_gpr_b_shift_reg_b_top_11_59_62
  // Block b_top_63
  // Block b_top_64
  // Reg s_b_top_64_5
  uint64 CV_write_gpr_b_top_71__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_71__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_65
  // Block b_write_gpr_b_top_71_66
  // Block b_write_gpr_b_top_71_67
  // Block b_write_gpr_b_top_71_68
  // Block b_write_gpr_b_top_71_69
  // Block b_write_gpr_b_top_71_70
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x339edc0op2 = Alloc uint64 */
    /* F s_b_0_1=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_0_2=top__Qscope_0x339ebd0inst->rn(const) */
    /* F s_b_0_3: &read_gpr_b_top_1_0r = Alloc uint64 */
    /* F s_b_0_4: If s_b_0_1: Jump b_read_gpr_b_top_1_2 else b_read_gpr_b_top_1_3 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_1_2;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_3;
    }
  }
  block_b_top_1: 
  {
    /* D s_b_top_1_0 = read_gpr_b_top_1_0r */
    /* F s_b_top_1_1: Free &read_gpr_b_top_1_0r (8) */
    /* F s_b_top_1_2=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_top_1_3=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_top_1_4=top__Qscope_0x339ebd0inst->shift(const) */
    /* F s_b_top_1_5=top__Qscope_0x339ebd0inst->imm6(const) */
    /* F s_b_top_1_6: &shift_reg_b_top_11_0r = Alloc uint64 */
    /* F s_b_top_1_7 = (const uint8) 0 (const) */
    /* F s_b_top_1_8 = s_b_top_1_5==s_b_top_1_7 (const) */
    uint8 s_b_top_1_8 = ((uint8)(imm6 == (uint8)0ULL));
    /* F s_b_top_1_9: If s_b_top_1_8: Jump b_shift_reg_b_top_11_11 else b_shift_reg_b_top_11_12 (const) */
    if (s_b_top_1_8) 
    {
      goto block_b_shift_reg_b_top_11_11;
    }
    else 
    {
      goto block_b_shift_reg_b_top_11_12;
    }
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x339ebd0inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_2_3: &temp_7 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_2_4: If s_b_read_gpr_b_top_1_2_2: Jump b_read_gpr_b_top_1_4 else b_read_gpr_b_top_1_5 (const) */
    if (s_b_read_gpr_b_top_1_2_2) 
    {
      goto block_b_read_gpr_b_top_1_4;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_5;
    }
  }
  block_b_read_gpr_b_top_1_3: 
  {
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x339ebd0inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_3_3: &temp_8 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_3_4: If s_b_read_gpr_b_top_1_3_2: Jump b_read_gpr_b_top_1_7 else b_read_gpr_b_top_1_8 (const) */
    if (s_b_read_gpr_b_top_1_3_2) 
    {
      goto block_b_read_gpr_b_top_1_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_8;
    }
  }
  block_b_read_gpr_b_top_1_4: 
  {
    /* F s_b_read_gpr_b_top_1_4_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_2: temp_7 = s_b_read_gpr_b_top_1_4_1 (const), dominates: s_b_read_gpr_b_top_1_6_0  */
    CV_temp_7 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_7), Operand(PrimitiveTypes.u8, CV_temp_7));
    /* F s_b_read_gpr_b_top_1_4_3: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_5: 
  {
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x339ebd0inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_5_1));
    }
    /* D s_b_read_gpr_b_top_1_5_2 = (uint64)s_b_read_gpr_b_top_1_5_1 */
    Statement& s_b_read_gpr_b_top_1_5_2 = s_b_read_gpr_b_top_1_5_1;
    /* D s_b_read_gpr_b_top_1_5_3: temp_7 = s_b_read_gpr_b_top_1_5_2, dominates: s_b_read_gpr_b_top_1_6_0  */
    builder.store(Operand(*ir_idx_temp_7), Operand(s_b_read_gpr_b_top_1_5_2));
    /* F s_b_read_gpr_b_top_1_5_4: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_6: 
  {
    /* D s_b_read_gpr_b_top_1_6_0 = temp_7 */
    /* F s_b_read_gpr_b_top_1_6_1: Free &temp_7 (8) */
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0 s_b_top_64_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_7));
    /* F s_b_read_gpr_b_top_1_6_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_b_top_1_7: 
  {
    /* F s_b_read_gpr_b_top_1_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_2: temp_8 = s_b_read_gpr_b_top_1_7_1 (const), dominates: s_b_read_gpr_b_top_1_9_0  */
    CV_temp_8 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_8), Operand(PrimitiveTypes.u8, CV_temp_8));
    /* F s_b_read_gpr_b_top_1_7_3: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_8: 
  {
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x339ebd0inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_8_1));
    }
    /* D s_b_read_gpr_b_top_1_8_2 = (uint64)s_b_read_gpr_b_top_1_8_1 */
    Statement& s_b_read_gpr_b_top_1_8_2 = builder.zx(Operand(s_b_read_gpr_b_top_1_8_1));
    /* D s_b_read_gpr_b_top_1_8_3: temp_8 = s_b_read_gpr_b_top_1_8_2, dominates: s_b_read_gpr_b_top_1_9_0  */
    builder.store(Operand(*ir_idx_temp_8), Operand(s_b_read_gpr_b_top_1_8_2));
    /* F s_b_read_gpr_b_top_1_8_4: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_9: 
  {
    /* D s_b_read_gpr_b_top_1_9_0 = temp_8 */
    /* F s_b_read_gpr_b_top_1_9_1: Free &temp_8 (8) */
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0 s_b_top_64_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_8));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* D s_b_top_10_0 = shift_reg_b_top_11_0r */
    /* F s_b_top_10_1: Free &shift_reg_b_top_11_0r (8) */
    /* D s_b_top_10_2: top__Qscope_0x339edc0op2 = s_b_top_10_0, dominates: s_b_top_63_0 s_b_top_64_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x339edc0op2), Operand(*ir_idx_shift_reg_b_top_11_0r));
    /* F s_b_top_10_3=top__Qscope_0x339ebd0inst->N(const) */
    /* F s_b_top_10_4: If s_b_top_10_3: Jump b_top_63 else b_top_64 (const) */
    if (N) 
    {
      goto block_b_top_63;
    }
    else 
    {
      goto block_b_top_64;
    }
  }
  block_b_shift_reg_b_top_11_11: 
  {
    /* F s_b_shift_reg_b_top_11_11_0=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_11_1=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_11_2: &read_gpr_b_shift_reg_b_top_11_14_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_11_3: If s_b_shift_reg_b_top_11_11_0: Jump b_read_gpr_b_shift_reg_b_top_11_14_14 else b_read_gpr_b_shift_reg_b_top_11_14_15 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_14;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_15;
    }
  }
  block_b_shift_reg_b_top_11_12: 
  {
    /* F s_b_shift_reg_b_top_11_12_0=top__Qscope_0x339ebd0inst->shift(const) */
    /* F s_b_shift_reg_b_top_11_12_1 = (const uint8) 0 (const) */
    /* F s_b_shift_reg_b_top_11_12_2 = (const uint8) 1 (const) */
    /* F s_b_shift_reg_b_top_11_12_3 = (const uint8) 2 (const) */
    /* F s_b_shift_reg_b_top_11_12_4 = (const uint8) 3 (const) */
    /* F s_b_shift_reg_b_top_11_12_5: Switch s_b_shift_reg_b_top_11_12_0: [s_b_shift_reg_b_top_11_12_1: b_shift_reg_b_top_11_23][s_b_shift_reg_b_top_11_12_2: b_shift_reg_b_top_11_33][s_b_shift_reg_b_top_11_12_3: b_shift_reg_b_top_11_43][s_b_shift_reg_b_top_11_12_4: b_shift_reg_b_top_11_53] def b_shift_reg_b_top_11_22 (const) -> b_shift_reg_b_top_11_22, b_shift_reg_b_top_11_23, b_shift_reg_b_top_11_33, b_shift_reg_b_top_11_43, b_shift_reg_b_top_11_53,  */
    switch (shift) 
    {
    case (uint8)0ULL:
      goto block_b_shift_reg_b_top_11_23;
      break;
    case (uint8)1ULL:
      goto block_b_shift_reg_b_top_11_33;
      break;
    case (uint8)2ULL:
      goto block_b_shift_reg_b_top_11_43;
      break;
    case (uint8)3ULL:
      goto block_b_shift_reg_b_top_11_53;
      break;
    default:
      goto block_b_shift_reg_b_top_11_22;
    }
  }
  block_b_shift_reg_b_top_11_13: 
  {
    /* D s_b_shift_reg_b_top_11_13_0 = read_gpr_b_shift_reg_b_top_11_14_0r */
    /* F s_b_shift_reg_b_top_11_13_1: Free &read_gpr_b_shift_reg_b_top_11_14_0r (8) */
    /* D s_b_shift_reg_b_top_11_13_2: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_13_0, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r));
    /* F s_b_shift_reg_b_top_11_13_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_14: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_14_0==s_b_read_gpr_b_shift_reg_b_top_11_14_14_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_14_14_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_3: &temp_17 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_4: If s_b_read_gpr_b_shift_reg_b_top_11_14_14_2: Jump b_read_gpr_b_shift_reg_b_top_11_14_16 else b_read_gpr_b_shift_reg_b_top_11_14_17 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_14_14_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_16;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_17;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_15: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_15_0==s_b_read_gpr_b_shift_reg_b_top_11_14_15_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_14_15_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_3: &temp_18 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_4: If s_b_read_gpr_b_shift_reg_b_top_11_14_15_2: Jump b_read_gpr_b_shift_reg_b_top_11_14_19 else b_read_gpr_b_shift_reg_b_top_11_14_20 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_14_15_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_19;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_20;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_16: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_2: temp_17 = s_b_read_gpr_b_shift_reg_b_top_11_14_16_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_18_0  */
    CV_temp_17 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_17), Operand(PrimitiveTypes.u8, CV_temp_17));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_3: Jump b_read_gpr_b_shift_reg_b_top_11_14_18 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_18;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_17: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_17_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_14_17_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_17_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_17_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_17_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_3: temp_17 = s_b_read_gpr_b_shift_reg_b_top_11_14_17_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_18_0  */
    builder.store(Operand(*ir_idx_temp_17), Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_17_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_17_4: Jump b_read_gpr_b_shift_reg_b_top_11_14_18 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_18;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_18: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_18_0 = temp_17 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_18_1: Free &temp_17 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_18_2: read_gpr_b_shift_reg_b_top_11_14_0r = s_b_read_gpr_b_shift_reg_b_top_11_14_18_0, dominates: s_b_shift_reg_b_top_11_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r), Operand(*ir_idx_temp_17));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_18_3: Jump b_shift_reg_b_top_11_13 (const) */
    goto block_b_shift_reg_b_top_11_13;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_19: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_2: temp_18 = s_b_read_gpr_b_shift_reg_b_top_11_14_19_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_21_0  */
    CV_temp_18 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_18), Operand(PrimitiveTypes.u8, CV_temp_18));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_3: Jump b_read_gpr_b_shift_reg_b_top_11_14_21 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_21;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_20: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_20_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_14_20_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_20_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_3: temp_18 = s_b_read_gpr_b_shift_reg_b_top_11_14_20_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_21_0  */
    builder.store(Operand(*ir_idx_temp_18), Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_20_4: Jump b_read_gpr_b_shift_reg_b_top_11_14_21 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_21;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_21: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_21_0 = temp_18 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_21_1: Free &temp_18 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_21_2: read_gpr_b_shift_reg_b_top_11_14_0r = s_b_read_gpr_b_shift_reg_b_top_11_14_21_0, dominates: s_b_shift_reg_b_top_11_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r), Operand(*ir_idx_temp_18));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_21_3: Jump b_shift_reg_b_top_11_13 (const) */
    goto block_b_shift_reg_b_top_11_13;
  }
  block_b_shift_reg_b_top_11_22: 
  {
    /* F s_b_shift_reg_b_top_11_22_0 = (const uint8) 0 (const) */
    /* F s_b_shift_reg_b_top_11_22_1 = (uint64) 0 (const) */
    /* F s_b_shift_reg_b_top_11_22_2: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_22_1 (const), dominates: s_b_top_10_0  */
    CV_shift_reg_b_top_11_0r = (uint64)0ULL;
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(PrimitiveTypes.u8, CV_shift_reg_b_top_11_0r));
    /* F s_b_shift_reg_b_top_11_22_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_shift_reg_b_top_11_23: 
  {
    /* F s_b_shift_reg_b_top_11_23_0=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_23_1=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_23_2: &read_gpr_b_shift_reg_b_top_11_26_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_23_3: If s_b_shift_reg_b_top_11_23_0: Jump b_read_gpr_b_shift_reg_b_top_11_26_25 else b_read_gpr_b_shift_reg_b_top_11_26_26 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_25;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_26;
    }
  }
  block_b_shift_reg_b_top_11_24: 
  {
    /* D s_b_shift_reg_b_top_11_24_0 = read_gpr_b_shift_reg_b_top_11_26_0r */
    /* F s_b_shift_reg_b_top_11_24_1: Free &read_gpr_b_shift_reg_b_top_11_26_0r (8) */
    /* F s_b_shift_reg_b_top_11_24_2=top__Qscope_0x339ebd0inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_24_3 = (uint64)s_b_shift_reg_b_top_11_24_2 (const) */
    /* D s_b_shift_reg_b_top_11_24_4 = s_b_shift_reg_b_top_11_24_0<<s_b_shift_reg_b_top_11_24_3 */
    Statement& s_b_shift_reg_b_top_11_24_4 = builder.shl(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_24_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_24_4, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_24_4));
    /* F s_b_shift_reg_b_top_11_24_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_25: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_25_0==s_b_read_gpr_b_shift_reg_b_top_11_26_25_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_26_25_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_3: &temp_22 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_4: If s_b_read_gpr_b_shift_reg_b_top_11_26_25_2: Jump b_read_gpr_b_shift_reg_b_top_11_26_27 else b_read_gpr_b_shift_reg_b_top_11_26_28 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_26_25_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_27;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_28;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_26: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_26_0==s_b_read_gpr_b_shift_reg_b_top_11_26_26_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_26_26_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_3: &temp_23 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_4: If s_b_read_gpr_b_shift_reg_b_top_11_26_26_2: Jump b_read_gpr_b_shift_reg_b_top_11_26_30 else b_read_gpr_b_shift_reg_b_top_11_26_31 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_26_26_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_30;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_31;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_27: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_2: temp_22 = s_b_read_gpr_b_shift_reg_b_top_11_26_27_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_29_0  */
    CV_temp_22 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_22), Operand(PrimitiveTypes.u8, CV_temp_22));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_3: Jump b_read_gpr_b_shift_reg_b_top_11_26_29 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_29;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_28: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_28_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_26_28_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_28_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_28_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_28_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_3: temp_22 = s_b_read_gpr_b_shift_reg_b_top_11_26_28_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_29_0  */
    builder.store(Operand(*ir_idx_temp_22), Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_28_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_28_4: Jump b_read_gpr_b_shift_reg_b_top_11_26_29 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_29;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_29: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_29_0 = temp_22 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_29_1: Free &temp_22 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_29_2: read_gpr_b_shift_reg_b_top_11_26_0r = s_b_read_gpr_b_shift_reg_b_top_11_26_29_0, dominates: s_b_shift_reg_b_top_11_24_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(*ir_idx_temp_22));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_29_3: Jump b_shift_reg_b_top_11_24 (const) */
    goto block_b_shift_reg_b_top_11_24;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_30: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_2: temp_23 = s_b_read_gpr_b_shift_reg_b_top_11_26_30_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_32_0  */
    CV_temp_23 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_23), Operand(PrimitiveTypes.u8, CV_temp_23));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_3: Jump b_read_gpr_b_shift_reg_b_top_11_26_32 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_32;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_31: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_31_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_26_31_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_31_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_3: temp_23 = s_b_read_gpr_b_shift_reg_b_top_11_26_31_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_32_0  */
    builder.store(Operand(*ir_idx_temp_23), Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_31_4: Jump b_read_gpr_b_shift_reg_b_top_11_26_32 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_32;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_32: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_32_0 = temp_23 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_32_1: Free &temp_23 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_32_2: read_gpr_b_shift_reg_b_top_11_26_0r = s_b_read_gpr_b_shift_reg_b_top_11_26_32_0, dominates: s_b_shift_reg_b_top_11_24_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(*ir_idx_temp_23));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_32_3: Jump b_shift_reg_b_top_11_24 (const) */
    goto block_b_shift_reg_b_top_11_24;
  }
  block_b_shift_reg_b_top_11_33: 
  {
    /* F s_b_shift_reg_b_top_11_33_0=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_33_1=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_33_2: &read_gpr_b_shift_reg_b_top_11_37_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_33_3: If s_b_shift_reg_b_top_11_33_0: Jump b_read_gpr_b_shift_reg_b_top_11_37_35 else b_read_gpr_b_shift_reg_b_top_11_37_36 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_35;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_36;
    }
  }
  block_b_shift_reg_b_top_11_34: 
  {
    /* D s_b_shift_reg_b_top_11_34_0 = read_gpr_b_shift_reg_b_top_11_37_0r */
    /* F s_b_shift_reg_b_top_11_34_1: Free &read_gpr_b_shift_reg_b_top_11_37_0r (8) */
    /* F s_b_shift_reg_b_top_11_34_2=top__Qscope_0x339ebd0inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_34_3 = (uint64)s_b_shift_reg_b_top_11_34_2 (const) */
    /* D s_b_shift_reg_b_top_11_34_4 = s_b_shift_reg_b_top_11_34_0>>s_b_shift_reg_b_top_11_34_3 */
    Statement& s_b_shift_reg_b_top_11_34_4 = builder.shr(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_34_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_34_4, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_34_4));
    /* F s_b_shift_reg_b_top_11_34_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_35: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_35_0==s_b_read_gpr_b_shift_reg_b_top_11_37_35_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_37_35_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_3: &temp_27 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_4: If s_b_read_gpr_b_shift_reg_b_top_11_37_35_2: Jump b_read_gpr_b_shift_reg_b_top_11_37_37 else b_read_gpr_b_shift_reg_b_top_11_37_38 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_37_35_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_37;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_38;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_36: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_36_0==s_b_read_gpr_b_shift_reg_b_top_11_37_36_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_37_36_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_3: &temp_28 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_4: If s_b_read_gpr_b_shift_reg_b_top_11_37_36_2: Jump b_read_gpr_b_shift_reg_b_top_11_37_40 else b_read_gpr_b_shift_reg_b_top_11_37_41 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_37_36_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_40;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_41;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_37: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_2: temp_27 = s_b_read_gpr_b_shift_reg_b_top_11_37_37_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_39_0  */
    CV_temp_27 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_27), Operand(PrimitiveTypes.u8, CV_temp_27));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_3: Jump b_read_gpr_b_shift_reg_b_top_11_37_39 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_39;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_38: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_38_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_37_38_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_38_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_38_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_38_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_3: temp_27 = s_b_read_gpr_b_shift_reg_b_top_11_37_38_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_39_0  */
    builder.store(Operand(*ir_idx_temp_27), Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_38_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_38_4: Jump b_read_gpr_b_shift_reg_b_top_11_37_39 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_39;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_39: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_39_0 = temp_27 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_39_1: Free &temp_27 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_39_2: read_gpr_b_shift_reg_b_top_11_37_0r = s_b_read_gpr_b_shift_reg_b_top_11_37_39_0, dominates: s_b_shift_reg_b_top_11_34_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(*ir_idx_temp_27));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_39_3: Jump b_shift_reg_b_top_11_34 (const) */
    goto block_b_shift_reg_b_top_11_34;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_40: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_2: temp_28 = s_b_read_gpr_b_shift_reg_b_top_11_37_40_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_42_0  */
    CV_temp_28 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_28), Operand(PrimitiveTypes.u8, CV_temp_28));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_3: Jump b_read_gpr_b_shift_reg_b_top_11_37_42 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_42;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_41: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_41_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_37_41_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_41_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_3: temp_28 = s_b_read_gpr_b_shift_reg_b_top_11_37_41_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_42_0  */
    builder.store(Operand(*ir_idx_temp_28), Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_41_4: Jump b_read_gpr_b_shift_reg_b_top_11_37_42 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_42;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_42: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_42_0 = temp_28 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_42_1: Free &temp_28 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_42_2: read_gpr_b_shift_reg_b_top_11_37_0r = s_b_read_gpr_b_shift_reg_b_top_11_37_42_0, dominates: s_b_shift_reg_b_top_11_34_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(*ir_idx_temp_28));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_42_3: Jump b_shift_reg_b_top_11_34 (const) */
    goto block_b_shift_reg_b_top_11_34;
  }
  block_b_shift_reg_b_top_11_43: 
  {
    /* F s_b_shift_reg_b_top_11_43_0=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_43_1=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_43_2: &read_gpr_sx_b_shift_reg_b_top_11_48_0r = Alloc sint64 */
    /* F s_b_shift_reg_b_top_11_43_3: If s_b_shift_reg_b_top_11_43_0: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_45 else b_read_gpr_sx_b_shift_reg_b_top_11_48_46 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_45;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_46;
    }
  }
  block_b_shift_reg_b_top_11_44: 
  {
    /* D s_b_shift_reg_b_top_11_44_0 = read_gpr_sx_b_shift_reg_b_top_11_48_0r */
    /* F s_b_shift_reg_b_top_11_44_1: Free &read_gpr_sx_b_shift_reg_b_top_11_48_0r (8) */
    /* F s_b_shift_reg_b_top_11_44_2=top__Qscope_0x339ebd0inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_44_3 = (sint64)s_b_shift_reg_b_top_11_44_2 (const) */
    /* D s_b_shift_reg_b_top_11_44_4 = s_b_shift_reg_b_top_11_44_0>>s_b_shift_reg_b_top_11_44_3 */
    Statement& s_b_shift_reg_b_top_11_44_4 = builder.sar(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(PrimitiveTypes.s64, ((sint64)imm6)));
    /* D s_b_shift_reg_b_top_11_44_5 = (uint64)s_b_shift_reg_b_top_11_44_4 */
    Statement& s_b_shift_reg_b_top_11_44_5 = s_b_shift_reg_b_top_11_44_4;
    /* D s_b_shift_reg_b_top_11_44_6: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_44_5, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_44_5));
    /* F s_b_shift_reg_b_top_11_44_7: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_45: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_0==s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_1 (const) */
    uint8 s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_3: &temp_32 = Alloc sint64 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_4: If s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_47 else b_read_gpr_sx_b_shift_reg_b_top_11_48_48 (const) */
    if (s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_47;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_48;
    }
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_46: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_0==s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_1 (const) */
    uint8 s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_3: &temp_33 = Alloc sint64 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_4: If s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_50 else b_read_gpr_sx_b_shift_reg_b_top_11_48_51 (const) */
    if (s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_50;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_51;
    }
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_47: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_1 = (sint64) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_2: temp_32 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_1 (const), dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0  */
    CV_temp_32 = (sint64)0ULL;
    builder.store(Operand(*ir_idx_temp_32), Operand(PrimitiveTypes.u8, CV_temp_32));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_3: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_49 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_48: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 = ReadRegBank 0:s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_0 (uint64) */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1));
    }
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2 = (sint64)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1;
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_3: temp_32 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2, dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0  */
    builder.store(Operand(*ir_idx_temp_32), Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_4: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_49 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49: 
  {
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0 = temp_32 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_1: Free &temp_32 (8) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_2: read_gpr_sx_b_shift_reg_b_top_11_48_0r = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0, dominates: s_b_shift_reg_b_top_11_44_0  */
    builder.store(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(*ir_idx_temp_32));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_3: Jump b_shift_reg_b_top_11_44 (const) */
    goto block_b_shift_reg_b_top_11_44;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_50: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_1 = (sint64) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_2: temp_33 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_1 (const), dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0  */
    CV_temp_33 = (sint64)0ULL;
    builder.store(Operand(*ir_idx_temp_33), Operand(PrimitiveTypes.u8, CV_temp_33));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_3: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_52 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_51: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 = ReadRegBank 1:s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_0 (uint32) */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1));
    }
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 = (sint32)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1;
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3 = (sint64)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3 = builder.sx(Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2));
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_4: temp_33 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3, dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0  */
    builder.store(Operand(*ir_idx_temp_33), Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_5: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_52 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52: 
  {
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0 = temp_33 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_1: Free &temp_33 (8) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_2: read_gpr_sx_b_shift_reg_b_top_11_48_0r = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0, dominates: s_b_shift_reg_b_top_11_44_0  */
    builder.store(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(*ir_idx_temp_33));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_3: Jump b_shift_reg_b_top_11_44 (const) */
    goto block_b_shift_reg_b_top_11_44;
  }
  block_b_shift_reg_b_top_11_53: 
  {
    /* F s_b_shift_reg_b_top_11_53_0=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_53_1=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_53_2: &read_gpr_b_shift_reg_b_top_11_59_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_53_3: If s_b_shift_reg_b_top_11_53_0: Jump b_read_gpr_b_shift_reg_b_top_11_59_55 else b_read_gpr_b_shift_reg_b_top_11_59_56 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_55;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_56;
    }
  }
  block_b_shift_reg_b_top_11_54: 
  {
    /* D s_b_shift_reg_b_top_11_54_0 = read_gpr_b_shift_reg_b_top_11_59_0r */
    /* F s_b_shift_reg_b_top_11_54_1: Free &read_gpr_b_shift_reg_b_top_11_59_0r (8) */
    /* F s_b_shift_reg_b_top_11_54_2=top__Qscope_0x339ebd0inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_54_3 = (uint64)s_b_shift_reg_b_top_11_54_2 (const) */
    /* D s_b_shift_reg_b_top_11_54_4 = s_b_shift_reg_b_top_11_54_0>>>s_b_shift_reg_b_top_11_54_3 */
    Statement& s_b_shift_reg_b_top_11_54_4 = builder.ror(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_54_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_54_4, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_54_4));
    /* F s_b_shift_reg_b_top_11_54_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_55: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_55_0==s_b_read_gpr_b_shift_reg_b_top_11_59_55_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_59_55_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_3: &temp_37 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_4: If s_b_read_gpr_b_shift_reg_b_top_11_59_55_2: Jump b_read_gpr_b_shift_reg_b_top_11_59_57 else b_read_gpr_b_shift_reg_b_top_11_59_58 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_59_55_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_57;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_58;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_56: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_56_0==s_b_read_gpr_b_shift_reg_b_top_11_59_56_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_59_56_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_3: &temp_38 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_4: If s_b_read_gpr_b_shift_reg_b_top_11_59_56_2: Jump b_read_gpr_b_shift_reg_b_top_11_59_60 else b_read_gpr_b_shift_reg_b_top_11_59_61 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_59_56_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_60;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_61;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_57: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_2: temp_37 = s_b_read_gpr_b_shift_reg_b_top_11_59_57_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_59_0  */
    CV_temp_37 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_37), Operand(PrimitiveTypes.u8, CV_temp_37));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_3: Jump b_read_gpr_b_shift_reg_b_top_11_59_59 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_59;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_58: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_58_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_59_58_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_58_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_58_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_58_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_3: temp_37 = s_b_read_gpr_b_shift_reg_b_top_11_59_58_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_59_0  */
    builder.store(Operand(*ir_idx_temp_37), Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_58_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_58_4: Jump b_read_gpr_b_shift_reg_b_top_11_59_59 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_59;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_59: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_59_0 = temp_37 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_59_1: Free &temp_37 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_59_2: read_gpr_b_shift_reg_b_top_11_59_0r = s_b_read_gpr_b_shift_reg_b_top_11_59_59_0, dominates: s_b_shift_reg_b_top_11_54_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(*ir_idx_temp_37));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_59_3: Jump b_shift_reg_b_top_11_54 (const) */
    goto block_b_shift_reg_b_top_11_54;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_60: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_2: temp_38 = s_b_read_gpr_b_shift_reg_b_top_11_59_60_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_62_0  */
    CV_temp_38 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_38), Operand(PrimitiveTypes.u8, CV_temp_38));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_3: Jump b_read_gpr_b_shift_reg_b_top_11_59_62 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_62;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_61: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_61_0=top__Qscope_0x339ebd0inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_59_61_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_61_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_3: temp_38 = s_b_read_gpr_b_shift_reg_b_top_11_59_61_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_62_0  */
    builder.store(Operand(*ir_idx_temp_38), Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_61_4: Jump b_read_gpr_b_shift_reg_b_top_11_59_62 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_62;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_62: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_62_0 = temp_38 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_62_1: Free &temp_38 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_62_2: read_gpr_b_shift_reg_b_top_11_59_0r = s_b_read_gpr_b_shift_reg_b_top_11_59_62_0, dominates: s_b_shift_reg_b_top_11_54_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(*ir_idx_temp_38));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_62_3: Jump b_shift_reg_b_top_11_54 (const) */
    goto block_b_shift_reg_b_top_11_54;
  }
  block_b_top_63: 
  {
    /* D s_b_top_63_0 = top__Qscope_0x339edc0op2 */
    /* D s_b_top_63_1 = ?s_b_top_63_0 */
    Statement& s_b_top_63_1 = builder.bnot(Operand(*ir_idx_top__Qscope_0x339edc0op2));
    /* D s_b_top_63_2: top__Qscope_0x339edc0op2 = s_b_top_63_1, dominates: s_b_top_64_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x339edc0op2), Operand(s_b_top_63_1));
    /* F s_b_top_63_3: Jump b_top_64 (const) */
    goto block_b_top_64;
  }
  block_b_top_64: 
  {
    /* D s_b_top_64_0 = read_gpr_b_top_1_0r */
    /* D s_b_top_64_1 = top__Qscope_0x339edc0op2 */
    /* D s_b_top_64_2 = s_b_top_64_0|s_b_top_64_1 */
    Statement& s_b_top_64_2 = builder.bor(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_top__Qscope_0x339edc0op2));
    /* F s_b_top_64_3=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_top_64_4=top__Qscope_0x339ebd0inst->rd(const) */
    /* F s_b_top_64_5: &write_gpr_b_top_71__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_64_6: write_gpr_b_top_71__Qscope_0x33bbb30value = s_b_top_64_2, dominates: s_b_write_gpr_b_top_71_68_1 s_b_write_gpr_b_top_71_70_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_71__Qscope_0x33bbb30value), Operand(s_b_top_64_2));
    /* F s_b_top_64_7 = (const uint8) 1f (const) */
    /* F s_b_top_64_8 = s_b_top_64_4==s_b_top_64_7 (const) */
    uint8 s_b_top_64_8 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_64_9: If s_b_top_64_8: Jump b_write_gpr_b_top_71_66 else b_write_gpr_b_top_71_67 (const) */
    if (s_b_top_64_8) 
    {
      goto block_b_write_gpr_b_top_71_66;
    }
    else 
    {
      goto block_b_write_gpr_b_top_71_67;
    }
  }
  block_b_top_65: 
  {
    /* F s_b_top_65_0: Free &write_gpr_b_top_71__Qscope_0x33bbb30value (8) */
    /* F s_b_top_65_1: Free &top__Qscope_0x339edc0op2 (8) */
    /* F s_b_top_65_2: Return */
    goto fixed_done;
  }
  block_b_write_gpr_b_top_71_66: 
  {
    /* F s_b_write_gpr_b_top_71_66_0: Jump b_top_65 (const) */
    goto block_b_top_65;
  }
  block_b_write_gpr_b_top_71_67: 
  {
    /* F s_b_write_gpr_b_top_71_67_0=top__Qscope_0x339ebd0inst->sf(const) */
    /* F s_b_write_gpr_b_top_71_67_1: If s_b_write_gpr_b_top_71_67_0: Jump b_write_gpr_b_top_71_68 else b_write_gpr_b_top_71_70 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_71_68;
    }
    else 
    {
      goto block_b_write_gpr_b_top_71_70;
    }
  }
  block_b_write_gpr_b_top_71_68: 
  {
    /* F s_b_write_gpr_b_top_71_68_0=top__Qscope_0x339ebd0inst->rd(const) */
    /* D s_b_write_gpr_b_top_71_68_1 = write_gpr_b_top_71__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_71_68_2: WriteRegBank 0:s_b_write_gpr_b_top_71_68_0 = s_b_write_gpr_b_top_71_68_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_71__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_71__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_71_68_3: Jump b_write_gpr_b_top_71_69 (const) */
    goto block_b_write_gpr_b_top_71_69;
  }
  block_b_write_gpr_b_top_71_69: 
  {
    /* F s_b_write_gpr_b_top_71_69_0: Jump b_top_65 (const) */
    goto block_b_top_65;
  }
  block_b_write_gpr_b_top_71_70: 
  {
    /* F s_b_write_gpr_b_top_71_70_0=top__Qscope_0x339ebd0inst->rd(const) */
    /* D s_b_write_gpr_b_top_71_70_1 = write_gpr_b_top_71__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_71_70_2 = (uint32)s_b_write_gpr_b_top_71_70_1 */
    Statement& s_b_write_gpr_b_top_71_70_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_71__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_71_70_3 = (uint64)s_b_write_gpr_b_top_71_70_2 */
    Statement& s_b_write_gpr_b_top_71_70_3 = builder.zx(Operand(s_b_write_gpr_b_top_71_70_2));
    /* D s_b_write_gpr_b_top_71_70_4: WriteRegBank 0:s_b_write_gpr_b_top_71_70_0 = s_b_write_gpr_b_top_71_70_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_71_70_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_71_70_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_71_70_5: Jump b_write_gpr_b_top_71_69 (const) */
    goto block_b_write_gpr_b_top_71_69;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_sbc::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_str::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_stri::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x32fdf80addr;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x32fdf80addr = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_5
  uint64 CV_read_gpr_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Reg s_b_top_1_7
  uint64 CV_temp_11;
  vrt::dbt::ir::Statement *ir_idx_temp_11 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_2
  // Reg s_b_read_gpr_b_top_1_2_3
  uint64 CV_temp_6;
  vrt::dbt::ir::Statement *ir_idx_temp_6 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_3
  uint64 CV_temp_7;
  vrt::dbt::ir::Statement *ir_idx_temp_7 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_4
  // Block b_read_gpr_b_top_1_5
  // Block b_read_gpr_b_top_1_6
  // Block b_read_gpr_b_top_1_7
  // Block b_read_gpr_b_top_1_8
  // Block b_read_gpr_b_top_1_9
  // Block b_read_gpr_sp_b_top_11_10
  // Block b_read_gpr_sp_b_top_11_11
  // Block b_read_gpr_sp_b_top_11_12
  // Block b_top_13
  // Block b_top_14
  // Block b_top_15
  // Block b_top_16
  // Block b_top_17
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x32fdf80addr = Alloc uint64 */
    /* F s_b_0_1=top__Qscope_0x32fa520inst->size(const) */
    /* F s_b_0_2 = (const uint8) 3 (const) */
    /* F s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8 s_b_0_3 = ((uint8)(size == (uint8)3ULL));
    /* F s_b_0_4=top__Qscope_0x32fa520inst->rt(const) */
    /* F s_b_0_5: &read_gpr_b_top_1_0r = Alloc uint64 */
    /* F s_b_0_6: If s_b_0_3: Jump b_read_gpr_b_top_1_2 else b_read_gpr_b_top_1_3 (const) */
    if (s_b_0_3) 
    {
      goto block_b_read_gpr_b_top_1_2;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_3;
    }
  }
  block_b_top_1: 
  {
    /* D s_b_top_1_0 = read_gpr_b_top_1_0r */
    /* F s_b_top_1_1: Free &read_gpr_b_top_1_0r (8) */
    /* F s_b_top_1_2 = (const uint8) 1 (const) */
    /* F s_b_top_1_3=top__Qscope_0x32fa520inst->rn(const) */
    /* F s_b_top_1_4=top__Qscope_0x32fa520inst->rn(const) */
    /* F s_b_top_1_5 = (const uint8) 1f (const) */
    /* F s_b_top_1_6 = s_b_top_1_4==s_b_top_1_5 (const) */
    uint8 s_b_top_1_6 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_top_1_7: &temp_11 = Alloc uint64 */
    /* F s_b_top_1_8: If s_b_top_1_6: Jump b_read_gpr_sp_b_top_11_10 else b_read_gpr_sp_b_top_11_11 (const) */
    if (s_b_top_1_6) 
    {
      goto block_b_read_gpr_sp_b_top_11_10;
    }
    else 
    {
      goto block_b_read_gpr_sp_b_top_11_11;
    }
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x32fa520inst->rt(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_2_3: &temp_6 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_2_4: If s_b_read_gpr_b_top_1_2_2: Jump b_read_gpr_b_top_1_4 else b_read_gpr_b_top_1_5 (const) */
    if (s_b_read_gpr_b_top_1_2_2) 
    {
      goto block_b_read_gpr_b_top_1_4;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_5;
    }
  }
  block_b_read_gpr_b_top_1_3: 
  {
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x32fa520inst->rt(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_3_3: &temp_7 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_3_4: If s_b_read_gpr_b_top_1_3_2: Jump b_read_gpr_b_top_1_7 else b_read_gpr_b_top_1_8 (const) */
    if (s_b_read_gpr_b_top_1_3_2) 
    {
      goto block_b_read_gpr_b_top_1_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_8;
    }
  }
  block_b_read_gpr_b_top_1_4: 
  {
    /* F s_b_read_gpr_b_top_1_4_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_2: temp_6 = s_b_read_gpr_b_top_1_4_1 (const), dominates: s_b_read_gpr_b_top_1_6_0  */
    CV_temp_6 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_6), Operand(PrimitiveTypes.u8, CV_temp_6));
    /* F s_b_read_gpr_b_top_1_4_3: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_5: 
  {
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x32fa520inst->rt(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_1_5_1));
    }
    /* D s_b_read_gpr_b_top_1_5_2 = (uint64)s_b_read_gpr_b_top_1_5_1 */
    Statement& s_b_read_gpr_b_top_1_5_2 = s_b_read_gpr_b_top_1_5_1;
    /* D s_b_read_gpr_b_top_1_5_3: temp_6 = s_b_read_gpr_b_top_1_5_2, dominates: s_b_read_gpr_b_top_1_6_0  */
    builder.store(Operand(*ir_idx_temp_6), Operand(s_b_read_gpr_b_top_1_5_2));
    /* F s_b_read_gpr_b_top_1_5_4: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_6: 
  {
    /* D s_b_read_gpr_b_top_1_6_0 = temp_6 */
    /* F s_b_read_gpr_b_top_1_6_1: Free &temp_6 (8) */
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0 s_b_top_13_1 s_b_top_16_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_6));
    /* F s_b_read_gpr_b_top_1_6_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_b_top_1_7: 
  {
    /* F s_b_read_gpr_b_top_1_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_2: temp_7 = s_b_read_gpr_b_top_1_7_1 (const), dominates: s_b_read_gpr_b_top_1_9_0  */
    CV_temp_7 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_7), Operand(PrimitiveTypes.u8, CV_temp_7));
    /* F s_b_read_gpr_b_top_1_7_3: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_8: 
  {
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x32fa520inst->rt(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_1_8_1));
    }
    /* D s_b_read_gpr_b_top_1_8_2 = (uint64)s_b_read_gpr_b_top_1_8_1 */
    Statement& s_b_read_gpr_b_top_1_8_2 = builder.zx(Operand(s_b_read_gpr_b_top_1_8_1));
    /* D s_b_read_gpr_b_top_1_8_3: temp_7 = s_b_read_gpr_b_top_1_8_2, dominates: s_b_read_gpr_b_top_1_9_0  */
    builder.store(Operand(*ir_idx_temp_7), Operand(s_b_read_gpr_b_top_1_8_2));
    /* F s_b_read_gpr_b_top_1_8_4: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_9: 
  {
    /* D s_b_read_gpr_b_top_1_9_0 = temp_7 */
    /* F s_b_read_gpr_b_top_1_9_1: Free &temp_7 (8) */
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0 s_b_top_13_1 s_b_top_16_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_7));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_sp_b_top_11_10: 
  {
    /* D s_b_read_gpr_sp_b_top_11_10_0 = ReadReg 0 (uint64) */
    Statement& s_b_read_gpr_sp_b_top_11_10_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 248));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 248), Operand(s_b_read_gpr_sp_b_top_11_10_0));
    }
    /* D s_b_read_gpr_sp_b_top_11_10_1: temp_11 = s_b_read_gpr_sp_b_top_11_10_0, dominates: s_b_read_gpr_sp_b_top_11_12_0  */
    builder.store(Operand(*ir_idx_temp_11), Operand(s_b_read_gpr_sp_b_top_11_10_0));
    /* F s_b_read_gpr_sp_b_top_11_10_2: Jump b_read_gpr_sp_b_top_11_12 (const) */
    goto block_b_read_gpr_sp_b_top_11_12;
  }
  block_b_read_gpr_sp_b_top_11_11: 
  {
    /* F s_b_read_gpr_sp_b_top_11_11_0=top__Qscope_0x32fa520inst->rn(const) */
    /* D s_b_read_gpr_sp_b_top_11_11_1 = ReadRegBank 0:s_b_read_gpr_sp_b_top_11_11_0 (uint64) */
    Statement& s_b_read_gpr_sp_b_top_11_11_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_sp_b_top_11_11_1));
    }
    /* D s_b_read_gpr_sp_b_top_11_11_2: temp_11 = s_b_read_gpr_sp_b_top_11_11_1, dominates: s_b_read_gpr_sp_b_top_11_12_0  */
    builder.store(Operand(*ir_idx_temp_11), Operand(s_b_read_gpr_sp_b_top_11_11_1));
    /* F s_b_read_gpr_sp_b_top_11_11_3: Jump b_read_gpr_sp_b_top_11_12 (const) */
    goto block_b_read_gpr_sp_b_top_11_12;
  }
  block_b_read_gpr_sp_b_top_11_12: 
  {
    /* D s_b_read_gpr_sp_b_top_11_12_0 = temp_11 */
    /* F s_b_read_gpr_sp_b_top_11_12_1: Free &temp_11 (8) */
    /* F s_b_read_gpr_sp_b_top_11_12_2=top__Qscope_0x32fa520inst->immu64(const) */
    /* D s_b_read_gpr_sp_b_top_11_12_3 = s_b_read_gpr_sp_b_top_11_12_0+s_b_read_gpr_sp_b_top_11_12_2 */
    Statement& s_b_read_gpr_sp_b_top_11_12_3 = builder.add(Operand(*ir_idx_temp_11), Operand(PrimitiveTypes.u64, immu64));
    /* D s_b_read_gpr_sp_b_top_11_12_4: top__Qscope_0x32fdf80addr = s_b_read_gpr_sp_b_top_11_12_3, dominates: s_b_top_13_0 s_b_top_16_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x32fdf80addr), Operand(s_b_read_gpr_sp_b_top_11_12_3));
    /* F s_b_read_gpr_sp_b_top_11_12_5=top__Qscope_0x32fa520inst->size(const) */
    /* F s_b_read_gpr_sp_b_top_11_12_6 = (const uint8) 3 (const) */
    /* F s_b_read_gpr_sp_b_top_11_12_7 = s_b_read_gpr_sp_b_top_11_12_5==s_b_read_gpr_sp_b_top_11_12_6 (const) */
    uint8 s_b_read_gpr_sp_b_top_11_12_7 = ((uint8)(size == (uint8)3ULL));
    /* F s_b_read_gpr_sp_b_top_11_12_8: If s_b_read_gpr_sp_b_top_11_12_7: Jump b_top_13 else b_top_15 (const) */
    if (s_b_read_gpr_sp_b_top_11_12_7) 
    {
      goto block_b_top_13;
    }
    else 
    {
      goto block_b_top_15;
    }
  }
  block_b_top_13: 
  {
    /* D s_b_top_13_0 = top__Qscope_0x32fdf80addr */
    /* D s_b_top_13_1 = read_gpr_b_top_1_0r */
    /* D s_b_top_13_2: Store 8 s_b_top_13_0 <= s_b_top_13_1 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(*ir_idx_top__Qscope_0x32fdf80addr), Operand(*ir_idx_read_gpr_b_top_1_0r));
    }
    Statement& s_b_top_13_2 = builder.stmem(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_top__Qscope_0x32fdf80addr));
    /* F s_b_top_13_3: Jump b_top_14 (const) */
    goto block_b_top_14;
  }
  block_b_top_14: 
  {
    /* F s_b_top_14_0: Free &top__Qscope_0x32fdf80addr (8) */
    /* F s_b_top_14_1: Return */
    goto fixed_done;
  }
  block_b_top_15: 
  {
    /* F s_b_top_15_0=top__Qscope_0x32fa520inst->size(const) */
    /* F s_b_top_15_1 = (const uint8) 2 (const) */
    /* F s_b_top_15_2 = s_b_top_15_0==s_b_top_15_1 (const) */
    uint8 s_b_top_15_2 = ((uint8)(size == (uint8)2ULL));
    /* F s_b_top_15_3: If s_b_top_15_2: Jump b_top_16 else b_top_17 (const) */
    if (s_b_top_15_2) 
    {
      goto block_b_top_16;
    }
    else 
    {
      goto block_b_top_17;
    }
  }
  block_b_top_16: 
  {
    /* D s_b_top_16_0 = top__Qscope_0x32fdf80addr */
    /* D s_b_top_16_1 = read_gpr_b_top_1_0r */
    /* D s_b_top_16_2 = (uint32)s_b_top_16_1 */
    Statement& s_b_top_16_2 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_1_0r));
    /* D s_b_top_16_3: Store 4 s_b_top_16_0 <= s_b_top_16_2 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(*ir_idx_top__Qscope_0x32fdf80addr), Operand(s_b_top_16_2));
    }
    Statement& s_b_top_16_3 = builder.stmem(Operand(s_b_top_16_2), Operand(*ir_idx_top__Qscope_0x32fdf80addr));
    /* F s_b_top_16_4: Jump b_top_17 (const) */
    goto block_b_top_17;
  }
  block_b_top_17: 
  {
    /* F s_b_top_17_0: Jump b_top_14 (const) */
    goto block_b_top_14;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_sub_sreg::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_2
  uint64 CV_read_gpr_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Reg s_b_top_1_6
  uint64 CV_shift_reg_b_top_11_0r;
  vrt::dbt::ir::Statement *ir_idx_shift_reg_b_top_11_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_2
  // Reg s_b_read_gpr_b_top_1_2_3
  uint64 CV_temp_6;
  vrt::dbt::ir::Statement *ir_idx_temp_6 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_3
  uint64 CV_temp_7;
  vrt::dbt::ir::Statement *ir_idx_temp_7 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_4
  // Block b_read_gpr_b_top_1_5
  // Block b_read_gpr_b_top_1_6
  // Block b_read_gpr_b_top_1_7
  // Block b_read_gpr_b_top_1_8
  // Block b_read_gpr_b_top_1_9
  // Block b_top_10
  // Block b_shift_reg_b_top_11_11
  // Reg s_b_shift_reg_b_top_11_11_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_14_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_12
  // Block b_shift_reg_b_top_11_13
  // Block b_read_gpr_b_shift_reg_b_top_11_14_14
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_14_14_3
  uint64 CV_temp_16;
  vrt::dbt::ir::Statement *ir_idx_temp_16 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_14_15
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_14_15_3
  uint64 CV_temp_17;
  vrt::dbt::ir::Statement *ir_idx_temp_17 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_14_16
  // Block b_read_gpr_b_shift_reg_b_top_11_14_17
  // Block b_read_gpr_b_shift_reg_b_top_11_14_18
  // Block b_read_gpr_b_shift_reg_b_top_11_14_19
  // Block b_read_gpr_b_shift_reg_b_top_11_14_20
  // Block b_read_gpr_b_shift_reg_b_top_11_14_21
  // Block b_shift_reg_b_top_11_22
  // Block b_shift_reg_b_top_11_23
  // Reg s_b_shift_reg_b_top_11_23_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_26_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_24
  // Block b_read_gpr_b_shift_reg_b_top_11_26_25
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_26_25_3
  uint64 CV_temp_21;
  vrt::dbt::ir::Statement *ir_idx_temp_21 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_26_26
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_26_26_3
  uint64 CV_temp_22;
  vrt::dbt::ir::Statement *ir_idx_temp_22 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_26_27
  // Block b_read_gpr_b_shift_reg_b_top_11_26_28
  // Block b_read_gpr_b_shift_reg_b_top_11_26_29
  // Block b_read_gpr_b_shift_reg_b_top_11_26_30
  // Block b_read_gpr_b_shift_reg_b_top_11_26_31
  // Block b_read_gpr_b_shift_reg_b_top_11_26_32
  // Block b_shift_reg_b_top_11_33
  // Reg s_b_shift_reg_b_top_11_33_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_37_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_34
  // Block b_read_gpr_b_shift_reg_b_top_11_37_35
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_37_35_3
  uint64 CV_temp_26;
  vrt::dbt::ir::Statement *ir_idx_temp_26 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_37_36
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_37_36_3
  uint64 CV_temp_27;
  vrt::dbt::ir::Statement *ir_idx_temp_27 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_37_37
  // Block b_read_gpr_b_shift_reg_b_top_11_37_38
  // Block b_read_gpr_b_shift_reg_b_top_11_37_39
  // Block b_read_gpr_b_shift_reg_b_top_11_37_40
  // Block b_read_gpr_b_shift_reg_b_top_11_37_41
  // Block b_read_gpr_b_shift_reg_b_top_11_37_42
  // Block b_shift_reg_b_top_11_43
  // Reg s_b_shift_reg_b_top_11_43_2
  sint64 CV_read_gpr_sx_b_shift_reg_b_top_11_48_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_44
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_45
  // Reg s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_3
  sint64 CV_temp_31;
  vrt::dbt::ir::Statement *ir_idx_temp_31 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_46
  // Reg s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_3
  sint64 CV_temp_32;
  vrt::dbt::ir::Statement *ir_idx_temp_32 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_47
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_48
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_49
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_50
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_51
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_52
  // Block b_shift_reg_b_top_11_53
  // Reg s_b_shift_reg_b_top_11_53_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_59_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_54
  // Block b_read_gpr_b_shift_reg_b_top_11_59_55
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_59_55_3
  uint64 CV_temp_36;
  vrt::dbt::ir::Statement *ir_idx_temp_36 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_59_56
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_59_56_3
  uint64 CV_temp_37;
  vrt::dbt::ir::Statement *ir_idx_temp_37 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_59_57
  // Block b_read_gpr_b_shift_reg_b_top_11_59_58
  // Block b_read_gpr_b_shift_reg_b_top_11_59_59
  // Block b_read_gpr_b_shift_reg_b_top_11_59_60
  // Block b_read_gpr_b_shift_reg_b_top_11_59_61
  // Block b_read_gpr_b_shift_reg_b_top_11_59_62
  // Block b_top_63
  // Reg s_b_top_63_0
  uint64 CV_top__Qscope_0x333bde0result;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x333bde0result = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_64
  // Block b_top_65
  // Reg s_b_top_65_0
  uint32 CV_top__Qscope_0x333e230result;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x333e230result = &builder.alloc(PrimitiveTypes.u32);
  // Block b_top_66
  // Block b_top_67
  // Block b_top_68
  // Block b_top_69
  // Block b_write_gpr_b_top_75_70
  // Block b_write_gpr_b_top_75_71
  // Block b_top_72
  // Block b_top_73
  // Reg s_b_top_73_4
  uint64 CV_write_gpr_b_top_84__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_84__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_74
  // Block b_top_75
  // Block b_write_gpr_b_top_84_76
  // Block b_write_gpr_b_top_84_77
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x3337800inst->sf(const) */
    /* F s_b_0_1=top__Qscope_0x3337800inst->rn(const) */
    /* F s_b_0_2: &read_gpr_b_top_1_0r = Alloc uint64 */
    /* F s_b_0_3: If s_b_0_0: Jump b_read_gpr_b_top_1_2 else b_read_gpr_b_top_1_3 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_1_2;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_3;
    }
  }
  block_b_top_1: 
  {
    /* D s_b_top_1_0 = read_gpr_b_top_1_0r */
    /* F s_b_top_1_1: Free &read_gpr_b_top_1_0r (8) */
    /* F s_b_top_1_2=top__Qscope_0x3337800inst->sf(const) */
    /* F s_b_top_1_3=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_top_1_4=top__Qscope_0x3337800inst->shift(const) */
    /* F s_b_top_1_5=top__Qscope_0x3337800inst->imm6(const) */
    /* F s_b_top_1_6: &shift_reg_b_top_11_0r = Alloc uint64 */
    /* F s_b_top_1_7 = (const uint8) 0 (const) */
    /* F s_b_top_1_8 = s_b_top_1_5==s_b_top_1_7 (const) */
    uint8 s_b_top_1_8 = ((uint8)(imm6 == (uint8)0ULL));
    /* F s_b_top_1_9: If s_b_top_1_8: Jump b_shift_reg_b_top_11_11 else b_shift_reg_b_top_11_12 (const) */
    if (s_b_top_1_8) 
    {
      goto block_b_shift_reg_b_top_11_11;
    }
    else 
    {
      goto block_b_shift_reg_b_top_11_12;
    }
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x3337800inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_2_3: &temp_6 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_2_4: If s_b_read_gpr_b_top_1_2_2: Jump b_read_gpr_b_top_1_4 else b_read_gpr_b_top_1_5 (const) */
    if (s_b_read_gpr_b_top_1_2_2) 
    {
      goto block_b_read_gpr_b_top_1_4;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_5;
    }
  }
  block_b_read_gpr_b_top_1_3: 
  {
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x3337800inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_3_3: &temp_7 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_3_4: If s_b_read_gpr_b_top_1_3_2: Jump b_read_gpr_b_top_1_7 else b_read_gpr_b_top_1_8 (const) */
    if (s_b_read_gpr_b_top_1_3_2) 
    {
      goto block_b_read_gpr_b_top_1_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_8;
    }
  }
  block_b_read_gpr_b_top_1_4: 
  {
    /* F s_b_read_gpr_b_top_1_4_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_2: temp_6 = s_b_read_gpr_b_top_1_4_1 (const), dominates: s_b_read_gpr_b_top_1_6_0  */
    CV_temp_6 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_6), Operand(PrimitiveTypes.u8, CV_temp_6));
    /* F s_b_read_gpr_b_top_1_4_3: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_5: 
  {
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x3337800inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_5_1));
    }
    /* D s_b_read_gpr_b_top_1_5_2 = (uint64)s_b_read_gpr_b_top_1_5_1 */
    Statement& s_b_read_gpr_b_top_1_5_2 = s_b_read_gpr_b_top_1_5_1;
    /* D s_b_read_gpr_b_top_1_5_3: temp_6 = s_b_read_gpr_b_top_1_5_2, dominates: s_b_read_gpr_b_top_1_6_0  */
    builder.store(Operand(*ir_idx_temp_6), Operand(s_b_read_gpr_b_top_1_5_2));
    /* F s_b_read_gpr_b_top_1_5_4: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_6: 
  {
    /* D s_b_read_gpr_b_top_1_6_0 = temp_6 */
    /* F s_b_read_gpr_b_top_1_6_1: Free &temp_6 (8) */
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0 s_b_top_66_0 s_b_top_68_0 s_b_top_72_0 s_b_top_74_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_6));
    /* F s_b_read_gpr_b_top_1_6_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_b_top_1_7: 
  {
    /* F s_b_read_gpr_b_top_1_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_2: temp_7 = s_b_read_gpr_b_top_1_7_1 (const), dominates: s_b_read_gpr_b_top_1_9_0  */
    CV_temp_7 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_7), Operand(PrimitiveTypes.u8, CV_temp_7));
    /* F s_b_read_gpr_b_top_1_7_3: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_8: 
  {
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x3337800inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_8_1));
    }
    /* D s_b_read_gpr_b_top_1_8_2 = (uint64)s_b_read_gpr_b_top_1_8_1 */
    Statement& s_b_read_gpr_b_top_1_8_2 = builder.zx(Operand(s_b_read_gpr_b_top_1_8_1));
    /* D s_b_read_gpr_b_top_1_8_3: temp_7 = s_b_read_gpr_b_top_1_8_2, dominates: s_b_read_gpr_b_top_1_9_0  */
    builder.store(Operand(*ir_idx_temp_7), Operand(s_b_read_gpr_b_top_1_8_2));
    /* F s_b_read_gpr_b_top_1_8_4: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_9: 
  {
    /* D s_b_read_gpr_b_top_1_9_0 = temp_7 */
    /* F s_b_read_gpr_b_top_1_9_1: Free &temp_7 (8) */
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0 s_b_top_66_0 s_b_top_68_0 s_b_top_72_0 s_b_top_74_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_7));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* D s_b_top_10_0 = shift_reg_b_top_11_0r */
    /* F s_b_top_10_1: Free &shift_reg_b_top_11_0r (8) */
    /* F s_b_top_10_2=top__Qscope_0x3337800inst->sf(const) */
    /* F s_b_top_10_3: If s_b_top_10_2: Jump b_top_63 else b_top_65 (const) */
    if (sf) 
    {
      goto block_b_top_63;
    }
    else 
    {
      goto block_b_top_65;
    }
  }
  block_b_shift_reg_b_top_11_11: 
  {
    /* F s_b_shift_reg_b_top_11_11_0=top__Qscope_0x3337800inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_11_1=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_11_2: &read_gpr_b_shift_reg_b_top_11_14_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_11_3: If s_b_shift_reg_b_top_11_11_0: Jump b_read_gpr_b_shift_reg_b_top_11_14_14 else b_read_gpr_b_shift_reg_b_top_11_14_15 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_14;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_15;
    }
  }
  block_b_shift_reg_b_top_11_12: 
  {
    /* F s_b_shift_reg_b_top_11_12_0=top__Qscope_0x3337800inst->shift(const) */
    /* F s_b_shift_reg_b_top_11_12_1 = (const uint8) 0 (const) */
    /* F s_b_shift_reg_b_top_11_12_2 = (const uint8) 1 (const) */
    /* F s_b_shift_reg_b_top_11_12_3 = (const uint8) 2 (const) */
    /* F s_b_shift_reg_b_top_11_12_4 = (const uint8) 3 (const) */
    /* F s_b_shift_reg_b_top_11_12_5: Switch s_b_shift_reg_b_top_11_12_0: [s_b_shift_reg_b_top_11_12_1: b_shift_reg_b_top_11_23][s_b_shift_reg_b_top_11_12_2: b_shift_reg_b_top_11_33][s_b_shift_reg_b_top_11_12_3: b_shift_reg_b_top_11_43][s_b_shift_reg_b_top_11_12_4: b_shift_reg_b_top_11_53] def b_shift_reg_b_top_11_22 (const) -> b_shift_reg_b_top_11_22, b_shift_reg_b_top_11_23, b_shift_reg_b_top_11_33, b_shift_reg_b_top_11_43, b_shift_reg_b_top_11_53,  */
    switch (shift) 
    {
    case (uint8)0ULL:
      goto block_b_shift_reg_b_top_11_23;
      break;
    case (uint8)1ULL:
      goto block_b_shift_reg_b_top_11_33;
      break;
    case (uint8)2ULL:
      goto block_b_shift_reg_b_top_11_43;
      break;
    case (uint8)3ULL:
      goto block_b_shift_reg_b_top_11_53;
      break;
    default:
      goto block_b_shift_reg_b_top_11_22;
    }
  }
  block_b_shift_reg_b_top_11_13: 
  {
    /* D s_b_shift_reg_b_top_11_13_0 = read_gpr_b_shift_reg_b_top_11_14_0r */
    /* F s_b_shift_reg_b_top_11_13_1: Free &read_gpr_b_shift_reg_b_top_11_14_0r (8) */
    /* D s_b_shift_reg_b_top_11_13_2: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_13_0, dominates: s_b_top_10_0 s_b_top_66_1 s_b_top_68_1 s_b_top_72_2 s_b_top_74_2  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r));
    /* F s_b_shift_reg_b_top_11_13_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_14: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_14_0==s_b_read_gpr_b_shift_reg_b_top_11_14_14_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_14_14_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_3: &temp_16 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_4: If s_b_read_gpr_b_shift_reg_b_top_11_14_14_2: Jump b_read_gpr_b_shift_reg_b_top_11_14_16 else b_read_gpr_b_shift_reg_b_top_11_14_17 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_14_14_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_16;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_17;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_15: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_15_0==s_b_read_gpr_b_shift_reg_b_top_11_14_15_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_14_15_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_3: &temp_17 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_4: If s_b_read_gpr_b_shift_reg_b_top_11_14_15_2: Jump b_read_gpr_b_shift_reg_b_top_11_14_19 else b_read_gpr_b_shift_reg_b_top_11_14_20 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_14_15_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_19;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_20;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_16: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_2: temp_16 = s_b_read_gpr_b_shift_reg_b_top_11_14_16_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_18_0  */
    CV_temp_16 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_16), Operand(PrimitiveTypes.u8, CV_temp_16));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_3: Jump b_read_gpr_b_shift_reg_b_top_11_14_18 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_18;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_17: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_17_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_14_17_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_17_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_17_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_17_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_3: temp_16 = s_b_read_gpr_b_shift_reg_b_top_11_14_17_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_18_0  */
    builder.store(Operand(*ir_idx_temp_16), Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_17_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_17_4: Jump b_read_gpr_b_shift_reg_b_top_11_14_18 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_18;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_18: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_18_0 = temp_16 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_18_1: Free &temp_16 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_18_2: read_gpr_b_shift_reg_b_top_11_14_0r = s_b_read_gpr_b_shift_reg_b_top_11_14_18_0, dominates: s_b_shift_reg_b_top_11_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r), Operand(*ir_idx_temp_16));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_18_3: Jump b_shift_reg_b_top_11_13 (const) */
    goto block_b_shift_reg_b_top_11_13;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_19: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_2: temp_17 = s_b_read_gpr_b_shift_reg_b_top_11_14_19_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_21_0  */
    CV_temp_17 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_17), Operand(PrimitiveTypes.u8, CV_temp_17));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_3: Jump b_read_gpr_b_shift_reg_b_top_11_14_21 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_21;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_20: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_20_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_14_20_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_20_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_3: temp_17 = s_b_read_gpr_b_shift_reg_b_top_11_14_20_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_21_0  */
    builder.store(Operand(*ir_idx_temp_17), Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_20_4: Jump b_read_gpr_b_shift_reg_b_top_11_14_21 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_21;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_21: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_21_0 = temp_17 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_21_1: Free &temp_17 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_21_2: read_gpr_b_shift_reg_b_top_11_14_0r = s_b_read_gpr_b_shift_reg_b_top_11_14_21_0, dominates: s_b_shift_reg_b_top_11_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r), Operand(*ir_idx_temp_17));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_21_3: Jump b_shift_reg_b_top_11_13 (const) */
    goto block_b_shift_reg_b_top_11_13;
  }
  block_b_shift_reg_b_top_11_22: 
  {
    /* F s_b_shift_reg_b_top_11_22_0 = (const uint8) 0 (const) */
    /* F s_b_shift_reg_b_top_11_22_1 = (uint64) 0 (const) */
    /* F s_b_shift_reg_b_top_11_22_2: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_22_1 (const), dominates: s_b_top_10_0 s_b_top_66_1 s_b_top_68_1 s_b_top_72_2 s_b_top_74_2  */
    CV_shift_reg_b_top_11_0r = (uint64)0ULL;
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(PrimitiveTypes.u8, CV_shift_reg_b_top_11_0r));
    /* F s_b_shift_reg_b_top_11_22_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_shift_reg_b_top_11_23: 
  {
    /* F s_b_shift_reg_b_top_11_23_0=top__Qscope_0x3337800inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_23_1=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_23_2: &read_gpr_b_shift_reg_b_top_11_26_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_23_3: If s_b_shift_reg_b_top_11_23_0: Jump b_read_gpr_b_shift_reg_b_top_11_26_25 else b_read_gpr_b_shift_reg_b_top_11_26_26 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_25;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_26;
    }
  }
  block_b_shift_reg_b_top_11_24: 
  {
    /* D s_b_shift_reg_b_top_11_24_0 = read_gpr_b_shift_reg_b_top_11_26_0r */
    /* F s_b_shift_reg_b_top_11_24_1: Free &read_gpr_b_shift_reg_b_top_11_26_0r (8) */
    /* F s_b_shift_reg_b_top_11_24_2=top__Qscope_0x3337800inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_24_3 = (uint64)s_b_shift_reg_b_top_11_24_2 (const) */
    /* D s_b_shift_reg_b_top_11_24_4 = s_b_shift_reg_b_top_11_24_0<<s_b_shift_reg_b_top_11_24_3 */
    Statement& s_b_shift_reg_b_top_11_24_4 = builder.shl(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_24_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_24_4, dominates: s_b_top_10_0 s_b_top_66_1 s_b_top_68_1 s_b_top_72_2 s_b_top_74_2  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_24_4));
    /* F s_b_shift_reg_b_top_11_24_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_25: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_25_0==s_b_read_gpr_b_shift_reg_b_top_11_26_25_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_26_25_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_3: &temp_21 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_4: If s_b_read_gpr_b_shift_reg_b_top_11_26_25_2: Jump b_read_gpr_b_shift_reg_b_top_11_26_27 else b_read_gpr_b_shift_reg_b_top_11_26_28 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_26_25_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_27;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_28;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_26: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_26_0==s_b_read_gpr_b_shift_reg_b_top_11_26_26_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_26_26_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_3: &temp_22 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_4: If s_b_read_gpr_b_shift_reg_b_top_11_26_26_2: Jump b_read_gpr_b_shift_reg_b_top_11_26_30 else b_read_gpr_b_shift_reg_b_top_11_26_31 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_26_26_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_30;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_31;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_27: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_2: temp_21 = s_b_read_gpr_b_shift_reg_b_top_11_26_27_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_29_0  */
    CV_temp_21 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_21), Operand(PrimitiveTypes.u8, CV_temp_21));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_3: Jump b_read_gpr_b_shift_reg_b_top_11_26_29 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_29;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_28: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_28_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_26_28_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_28_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_28_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_28_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_3: temp_21 = s_b_read_gpr_b_shift_reg_b_top_11_26_28_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_29_0  */
    builder.store(Operand(*ir_idx_temp_21), Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_28_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_28_4: Jump b_read_gpr_b_shift_reg_b_top_11_26_29 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_29;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_29: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_29_0 = temp_21 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_29_1: Free &temp_21 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_29_2: read_gpr_b_shift_reg_b_top_11_26_0r = s_b_read_gpr_b_shift_reg_b_top_11_26_29_0, dominates: s_b_shift_reg_b_top_11_24_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(*ir_idx_temp_21));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_29_3: Jump b_shift_reg_b_top_11_24 (const) */
    goto block_b_shift_reg_b_top_11_24;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_30: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_2: temp_22 = s_b_read_gpr_b_shift_reg_b_top_11_26_30_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_32_0  */
    CV_temp_22 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_22), Operand(PrimitiveTypes.u8, CV_temp_22));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_3: Jump b_read_gpr_b_shift_reg_b_top_11_26_32 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_32;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_31: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_31_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_26_31_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_31_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_3: temp_22 = s_b_read_gpr_b_shift_reg_b_top_11_26_31_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_32_0  */
    builder.store(Operand(*ir_idx_temp_22), Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_31_4: Jump b_read_gpr_b_shift_reg_b_top_11_26_32 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_32;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_32: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_32_0 = temp_22 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_32_1: Free &temp_22 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_32_2: read_gpr_b_shift_reg_b_top_11_26_0r = s_b_read_gpr_b_shift_reg_b_top_11_26_32_0, dominates: s_b_shift_reg_b_top_11_24_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(*ir_idx_temp_22));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_32_3: Jump b_shift_reg_b_top_11_24 (const) */
    goto block_b_shift_reg_b_top_11_24;
  }
  block_b_shift_reg_b_top_11_33: 
  {
    /* F s_b_shift_reg_b_top_11_33_0=top__Qscope_0x3337800inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_33_1=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_33_2: &read_gpr_b_shift_reg_b_top_11_37_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_33_3: If s_b_shift_reg_b_top_11_33_0: Jump b_read_gpr_b_shift_reg_b_top_11_37_35 else b_read_gpr_b_shift_reg_b_top_11_37_36 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_35;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_36;
    }
  }
  block_b_shift_reg_b_top_11_34: 
  {
    /* D s_b_shift_reg_b_top_11_34_0 = read_gpr_b_shift_reg_b_top_11_37_0r */
    /* F s_b_shift_reg_b_top_11_34_1: Free &read_gpr_b_shift_reg_b_top_11_37_0r (8) */
    /* F s_b_shift_reg_b_top_11_34_2=top__Qscope_0x3337800inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_34_3 = (uint64)s_b_shift_reg_b_top_11_34_2 (const) */
    /* D s_b_shift_reg_b_top_11_34_4 = s_b_shift_reg_b_top_11_34_0>>s_b_shift_reg_b_top_11_34_3 */
    Statement& s_b_shift_reg_b_top_11_34_4 = builder.shr(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_34_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_34_4, dominates: s_b_top_10_0 s_b_top_66_1 s_b_top_68_1 s_b_top_72_2 s_b_top_74_2  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_34_4));
    /* F s_b_shift_reg_b_top_11_34_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_35: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_35_0==s_b_read_gpr_b_shift_reg_b_top_11_37_35_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_37_35_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_3: &temp_26 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_4: If s_b_read_gpr_b_shift_reg_b_top_11_37_35_2: Jump b_read_gpr_b_shift_reg_b_top_11_37_37 else b_read_gpr_b_shift_reg_b_top_11_37_38 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_37_35_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_37;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_38;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_36: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_36_0==s_b_read_gpr_b_shift_reg_b_top_11_37_36_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_37_36_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_3: &temp_27 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_4: If s_b_read_gpr_b_shift_reg_b_top_11_37_36_2: Jump b_read_gpr_b_shift_reg_b_top_11_37_40 else b_read_gpr_b_shift_reg_b_top_11_37_41 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_37_36_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_40;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_41;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_37: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_2: temp_26 = s_b_read_gpr_b_shift_reg_b_top_11_37_37_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_39_0  */
    CV_temp_26 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_26), Operand(PrimitiveTypes.u8, CV_temp_26));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_3: Jump b_read_gpr_b_shift_reg_b_top_11_37_39 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_39;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_38: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_38_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_37_38_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_38_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_38_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_38_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_3: temp_26 = s_b_read_gpr_b_shift_reg_b_top_11_37_38_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_39_0  */
    builder.store(Operand(*ir_idx_temp_26), Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_38_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_38_4: Jump b_read_gpr_b_shift_reg_b_top_11_37_39 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_39;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_39: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_39_0 = temp_26 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_39_1: Free &temp_26 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_39_2: read_gpr_b_shift_reg_b_top_11_37_0r = s_b_read_gpr_b_shift_reg_b_top_11_37_39_0, dominates: s_b_shift_reg_b_top_11_34_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(*ir_idx_temp_26));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_39_3: Jump b_shift_reg_b_top_11_34 (const) */
    goto block_b_shift_reg_b_top_11_34;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_40: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_2: temp_27 = s_b_read_gpr_b_shift_reg_b_top_11_37_40_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_42_0  */
    CV_temp_27 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_27), Operand(PrimitiveTypes.u8, CV_temp_27));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_3: Jump b_read_gpr_b_shift_reg_b_top_11_37_42 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_42;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_41: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_41_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_37_41_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_41_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_3: temp_27 = s_b_read_gpr_b_shift_reg_b_top_11_37_41_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_42_0  */
    builder.store(Operand(*ir_idx_temp_27), Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_41_4: Jump b_read_gpr_b_shift_reg_b_top_11_37_42 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_42;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_42: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_42_0 = temp_27 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_42_1: Free &temp_27 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_42_2: read_gpr_b_shift_reg_b_top_11_37_0r = s_b_read_gpr_b_shift_reg_b_top_11_37_42_0, dominates: s_b_shift_reg_b_top_11_34_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(*ir_idx_temp_27));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_42_3: Jump b_shift_reg_b_top_11_34 (const) */
    goto block_b_shift_reg_b_top_11_34;
  }
  block_b_shift_reg_b_top_11_43: 
  {
    /* F s_b_shift_reg_b_top_11_43_0=top__Qscope_0x3337800inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_43_1=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_43_2: &read_gpr_sx_b_shift_reg_b_top_11_48_0r = Alloc sint64 */
    /* F s_b_shift_reg_b_top_11_43_3: If s_b_shift_reg_b_top_11_43_0: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_45 else b_read_gpr_sx_b_shift_reg_b_top_11_48_46 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_45;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_46;
    }
  }
  block_b_shift_reg_b_top_11_44: 
  {
    /* D s_b_shift_reg_b_top_11_44_0 = read_gpr_sx_b_shift_reg_b_top_11_48_0r */
    /* F s_b_shift_reg_b_top_11_44_1: Free &read_gpr_sx_b_shift_reg_b_top_11_48_0r (8) */
    /* F s_b_shift_reg_b_top_11_44_2=top__Qscope_0x3337800inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_44_3 = (sint64)s_b_shift_reg_b_top_11_44_2 (const) */
    /* D s_b_shift_reg_b_top_11_44_4 = s_b_shift_reg_b_top_11_44_0>>s_b_shift_reg_b_top_11_44_3 */
    Statement& s_b_shift_reg_b_top_11_44_4 = builder.sar(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(PrimitiveTypes.s64, ((sint64)imm6)));
    /* D s_b_shift_reg_b_top_11_44_5 = (uint64)s_b_shift_reg_b_top_11_44_4 */
    Statement& s_b_shift_reg_b_top_11_44_5 = s_b_shift_reg_b_top_11_44_4;
    /* D s_b_shift_reg_b_top_11_44_6: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_44_5, dominates: s_b_top_10_0 s_b_top_66_1 s_b_top_68_1 s_b_top_72_2 s_b_top_74_2  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_44_5));
    /* F s_b_shift_reg_b_top_11_44_7: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_45: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_0==s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_1 (const) */
    uint8 s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_3: &temp_31 = Alloc sint64 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_4: If s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_47 else b_read_gpr_sx_b_shift_reg_b_top_11_48_48 (const) */
    if (s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_47;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_48;
    }
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_46: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_0==s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_1 (const) */
    uint8 s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_3: &temp_32 = Alloc sint64 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_4: If s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_50 else b_read_gpr_sx_b_shift_reg_b_top_11_48_51 (const) */
    if (s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_50;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_51;
    }
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_47: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_1 = (sint64) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_2: temp_31 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_1 (const), dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0  */
    CV_temp_31 = (sint64)0ULL;
    builder.store(Operand(*ir_idx_temp_31), Operand(PrimitiveTypes.u8, CV_temp_31));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_3: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_49 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_48: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 = ReadRegBank 0:s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_0 (uint64) */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1));
    }
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2 = (sint64)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1;
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_3: temp_31 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2, dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0  */
    builder.store(Operand(*ir_idx_temp_31), Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_4: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_49 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49: 
  {
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0 = temp_31 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_1: Free &temp_31 (8) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_2: read_gpr_sx_b_shift_reg_b_top_11_48_0r = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0, dominates: s_b_shift_reg_b_top_11_44_0  */
    builder.store(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(*ir_idx_temp_31));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_3: Jump b_shift_reg_b_top_11_44 (const) */
    goto block_b_shift_reg_b_top_11_44;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_50: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_1 = (sint64) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_2: temp_32 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_1 (const), dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0  */
    CV_temp_32 = (sint64)0ULL;
    builder.store(Operand(*ir_idx_temp_32), Operand(PrimitiveTypes.u8, CV_temp_32));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_3: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_52 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_51: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 = ReadRegBank 1:s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_0 (uint32) */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1));
    }
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 = (sint32)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1;
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3 = (sint64)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3 = builder.sx(Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2));
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_4: temp_32 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3, dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0  */
    builder.store(Operand(*ir_idx_temp_32), Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_5: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_52 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52: 
  {
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0 = temp_32 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_1: Free &temp_32 (8) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_2: read_gpr_sx_b_shift_reg_b_top_11_48_0r = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0, dominates: s_b_shift_reg_b_top_11_44_0  */
    builder.store(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(*ir_idx_temp_32));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_3: Jump b_shift_reg_b_top_11_44 (const) */
    goto block_b_shift_reg_b_top_11_44;
  }
  block_b_shift_reg_b_top_11_53: 
  {
    /* F s_b_shift_reg_b_top_11_53_0=top__Qscope_0x3337800inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_53_1=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_53_2: &read_gpr_b_shift_reg_b_top_11_59_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_53_3: If s_b_shift_reg_b_top_11_53_0: Jump b_read_gpr_b_shift_reg_b_top_11_59_55 else b_read_gpr_b_shift_reg_b_top_11_59_56 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_55;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_56;
    }
  }
  block_b_shift_reg_b_top_11_54: 
  {
    /* D s_b_shift_reg_b_top_11_54_0 = read_gpr_b_shift_reg_b_top_11_59_0r */
    /* F s_b_shift_reg_b_top_11_54_1: Free &read_gpr_b_shift_reg_b_top_11_59_0r (8) */
    /* F s_b_shift_reg_b_top_11_54_2=top__Qscope_0x3337800inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_54_3 = (uint64)s_b_shift_reg_b_top_11_54_2 (const) */
    /* D s_b_shift_reg_b_top_11_54_4 = s_b_shift_reg_b_top_11_54_0>>>s_b_shift_reg_b_top_11_54_3 */
    Statement& s_b_shift_reg_b_top_11_54_4 = builder.ror(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_54_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_54_4, dominates: s_b_top_10_0 s_b_top_66_1 s_b_top_68_1 s_b_top_72_2 s_b_top_74_2  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_54_4));
    /* F s_b_shift_reg_b_top_11_54_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_55: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_55_0==s_b_read_gpr_b_shift_reg_b_top_11_59_55_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_59_55_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_3: &temp_36 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_4: If s_b_read_gpr_b_shift_reg_b_top_11_59_55_2: Jump b_read_gpr_b_shift_reg_b_top_11_59_57 else b_read_gpr_b_shift_reg_b_top_11_59_58 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_59_55_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_57;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_58;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_56: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_0=top__Qscope_0x3337800inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_56_0==s_b_read_gpr_b_shift_reg_b_top_11_59_56_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_59_56_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_3: &temp_37 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_4: If s_b_read_gpr_b_shift_reg_b_top_11_59_56_2: Jump b_read_gpr_b_shift_reg_b_top_11_59_60 else b_read_gpr_b_shift_reg_b_top_11_59_61 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_59_56_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_60;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_61;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_57: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_2: temp_36 = s_b_read_gpr_b_shift_reg_b_top_11_59_57_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_59_0  */
    CV_temp_36 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_36), Operand(PrimitiveTypes.u8, CV_temp_36));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_3: Jump b_read_gpr_b_shift_reg_b_top_11_59_59 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_59;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_58: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_58_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_59_58_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_58_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_58_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_58_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_3: temp_36 = s_b_read_gpr_b_shift_reg_b_top_11_59_58_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_59_0  */
    builder.store(Operand(*ir_idx_temp_36), Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_58_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_58_4: Jump b_read_gpr_b_shift_reg_b_top_11_59_59 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_59;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_59: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_59_0 = temp_36 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_59_1: Free &temp_36 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_59_2: read_gpr_b_shift_reg_b_top_11_59_0r = s_b_read_gpr_b_shift_reg_b_top_11_59_59_0, dominates: s_b_shift_reg_b_top_11_54_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(*ir_idx_temp_36));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_59_3: Jump b_shift_reg_b_top_11_54 (const) */
    goto block_b_shift_reg_b_top_11_54;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_60: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_2: temp_37 = s_b_read_gpr_b_shift_reg_b_top_11_59_60_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_62_0  */
    CV_temp_37 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_37), Operand(PrimitiveTypes.u8, CV_temp_37));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_3: Jump b_read_gpr_b_shift_reg_b_top_11_59_62 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_62;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_61: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_61_0=top__Qscope_0x3337800inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_59_61_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_61_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_3: temp_37 = s_b_read_gpr_b_shift_reg_b_top_11_59_61_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_62_0  */
    builder.store(Operand(*ir_idx_temp_37), Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_61_4: Jump b_read_gpr_b_shift_reg_b_top_11_59_62 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_62;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_62: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_62_0 = temp_37 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_62_1: Free &temp_37 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_62_2: read_gpr_b_shift_reg_b_top_11_59_0r = s_b_read_gpr_b_shift_reg_b_top_11_59_62_0, dominates: s_b_shift_reg_b_top_11_54_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(*ir_idx_temp_37));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_62_3: Jump b_shift_reg_b_top_11_54 (const) */
    goto block_b_shift_reg_b_top_11_54;
  }
  block_b_top_63: 
  {
    /* F s_b_top_63_0: &top__Qscope_0x333bde0result = Alloc uint64 */
    /* F s_b_top_63_1=top__Qscope_0x3337800inst->S(const) */
    /* F s_b_top_63_2: If s_b_top_63_1: Jump b_top_66 else b_top_68 (const) */
    if (S) 
    {
      goto block_b_top_66;
    }
    else 
    {
      goto block_b_top_68;
    }
  }
  block_b_top_64: 
  {
    /* F s_b_top_64_0: Return */
    goto fixed_done;
  }
  block_b_top_65: 
  {
    /* F s_b_top_65_0: &top__Qscope_0x333e230result = Alloc uint32 */
    /* F s_b_top_65_1=top__Qscope_0x3337800inst->S(const) */
    /* F s_b_top_65_2: If s_b_top_65_1: Jump b_top_72 else b_top_74 (const) */
    if (S) 
    {
      goto block_b_top_72;
    }
    else 
    {
      goto block_b_top_74;
    }
  }
  block_b_top_66: 
  {
    /* D s_b_top_66_0 = read_gpr_b_top_1_0r */
    /* D s_b_top_66_1 = shift_reg_b_top_11_0r */
    /* F s_b_top_66_2 = (const uint8) 0 (const) */
    /* D s_b_top_66_3 = [unknown intrinsic 36] */
    Statement& s_b_top_66_3 = builder.sbc_with_flags(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    /* D s_b_top_66_4: top__Qscope_0x333bde0result = s_b_top_66_3, dominates: s_b_top_67_2 s_b_write_gpr_b_top_75_71_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x333bde0result), Operand(s_b_top_66_3));
    /* F s_b_top_66_5: Jump b_top_67 (const) */
    goto block_b_top_67;
  }
  block_b_top_67: 
  {
    /* F s_b_top_67_0 = (const uint8) 1 (const) */
    /* F s_b_top_67_1=top__Qscope_0x3337800inst->rd(const) */
    /* D s_b_top_67_2 = top__Qscope_0x333bde0result */
    /* F s_b_top_67_3 = (const uint8) 1f (const) */
    /* F s_b_top_67_4 = s_b_top_67_1==s_b_top_67_3 (const) */
    uint8 s_b_top_67_4 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_67_5: If s_b_top_67_4: Jump b_write_gpr_b_top_75_70 else b_write_gpr_b_top_75_71 (const) */
    if (s_b_top_67_4) 
    {
      goto block_b_write_gpr_b_top_75_70;
    }
    else 
    {
      goto block_b_write_gpr_b_top_75_71;
    }
  }
  block_b_top_68: 
  {
    /* D s_b_top_68_0 = read_gpr_b_top_1_0r */
    /* D s_b_top_68_1 = shift_reg_b_top_11_0r */
    /* D s_b_top_68_2 = s_b_top_68_0-s_b_top_68_1 */
    Statement& s_b_top_68_2 = builder.sub(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_shift_reg_b_top_11_0r));
    /* D s_b_top_68_3: top__Qscope_0x333bde0result = s_b_top_68_2, dominates: s_b_top_67_2 s_b_write_gpr_b_top_75_71_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x333bde0result), Operand(s_b_top_68_2));
    /* F s_b_top_68_4: Jump b_top_67 (const) */
    goto block_b_top_67;
  }
  block_b_top_69: 
  {
    /* F s_b_top_69_0: Free &top__Qscope_0x333bde0result (8) */
    /* F s_b_top_69_1: Jump b_top_64 (const) */
    goto block_b_top_64;
  }
  block_b_write_gpr_b_top_75_70: 
  {
    /* F s_b_write_gpr_b_top_75_70_0: Jump b_top_69 (const) */
    goto block_b_top_69;
  }
  block_b_write_gpr_b_top_75_71: 
  {
    /* F s_b_write_gpr_b_top_75_71_0 = (const uint8) 1 (const) */
    /* F s_b_write_gpr_b_top_75_71_1=top__Qscope_0x3337800inst->rd(const) */
    /* D s_b_write_gpr_b_top_75_71_2 = top__Qscope_0x333bde0result */
    /* D s_b_write_gpr_b_top_75_71_3: WriteRegBank 0:s_b_write_gpr_b_top_75_71_1 = s_b_write_gpr_b_top_75_71_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_top__Qscope_0x333bde0result));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x333bde0result), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_75_71_4: Jump b_top_69 (const) */
    goto block_b_top_69;
  }
  block_b_top_72: 
  {
    /* D s_b_top_72_0 = read_gpr_b_top_1_0r */
    /* D s_b_top_72_1 = (uint32)s_b_top_72_0 */
    Statement& s_b_top_72_1 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_1_0r));
    /* D s_b_top_72_2 = shift_reg_b_top_11_0r */
    /* D s_b_top_72_3 = (uint32)s_b_top_72_2 */
    Statement& s_b_top_72_3 = builder.trunc(Operand(*ir_idx_shift_reg_b_top_11_0r));
    /* F s_b_top_72_4 = (const uint8) 0 (const) */
    /* D s_b_top_72_5 = [unknown intrinsic 36] */
    Statement& s_b_top_72_5 = builder.sbc_with_flags(Operand(s_b_top_72_1), Operand(s_b_top_72_3), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    /* D s_b_top_72_6 = (uint32)s_b_top_72_5 */
    Statement& s_b_top_72_6 = builder.trunc(Operand(s_b_top_72_5));
    /* D s_b_top_72_7: top__Qscope_0x333e230result = s_b_top_72_6, dominates: s_b_top_73_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x333e230result), Operand(s_b_top_72_6));
    /* F s_b_top_72_8: Jump b_top_73 (const) */
    goto block_b_top_73;
  }
  block_b_top_73: 
  {
    /* F s_b_top_73_0 = (const uint8) 0 (const) */
    /* F s_b_top_73_1=top__Qscope_0x3337800inst->rd(const) */
    /* D s_b_top_73_2 = top__Qscope_0x333e230result */
    /* D s_b_top_73_3 = (uint64)s_b_top_73_2 */
    Statement& s_b_top_73_3 = builder.zx(Operand(*ir_idx_top__Qscope_0x333e230result));
    /* F s_b_top_73_4: &write_gpr_b_top_84__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_73_5: write_gpr_b_top_84__Qscope_0x33bbb30value = s_b_top_73_3, dominates: s_b_write_gpr_b_top_84_77_2  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_84__Qscope_0x33bbb30value), Operand(s_b_top_73_3));
    /* F s_b_top_73_6 = (const uint8) 1f (const) */
    /* F s_b_top_73_7 = s_b_top_73_1==s_b_top_73_6 (const) */
    uint8 s_b_top_73_7 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_73_8: If s_b_top_73_7: Jump b_write_gpr_b_top_84_76 else b_write_gpr_b_top_84_77 (const) */
    if (s_b_top_73_7) 
    {
      goto block_b_write_gpr_b_top_84_76;
    }
    else 
    {
      goto block_b_write_gpr_b_top_84_77;
    }
  }
  block_b_top_74: 
  {
    /* D s_b_top_74_0 = read_gpr_b_top_1_0r */
    /* D s_b_top_74_1 = (uint32)s_b_top_74_0 */
    Statement& s_b_top_74_1 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_1_0r));
    /* D s_b_top_74_2 = shift_reg_b_top_11_0r */
    /* D s_b_top_74_3 = (uint32)s_b_top_74_2 */
    Statement& s_b_top_74_3 = builder.trunc(Operand(*ir_idx_shift_reg_b_top_11_0r));
    /* D s_b_top_74_4 = s_b_top_74_1-s_b_top_74_3 */
    Statement& s_b_top_74_4 = builder.sub(Operand(s_b_top_74_1), Operand(s_b_top_74_3));
    /* D s_b_top_74_5: top__Qscope_0x333e230result = s_b_top_74_4, dominates: s_b_top_73_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x333e230result), Operand(s_b_top_74_4));
    /* F s_b_top_74_6: Jump b_top_73 (const) */
    goto block_b_top_73;
  }
  block_b_top_75: 
  {
    /* F s_b_top_75_0: Free &write_gpr_b_top_84__Qscope_0x33bbb30value (8) */
    /* F s_b_top_75_1: Free &top__Qscope_0x333e230result (4) */
    /* F s_b_top_75_2: Jump b_top_64 (const) */
    goto block_b_top_64;
  }
  block_b_write_gpr_b_top_84_76: 
  {
    /* F s_b_write_gpr_b_top_84_76_0: Jump b_top_75 (const) */
    goto block_b_top_75;
  }
  block_b_write_gpr_b_top_84_77: 
  {
    /* F s_b_write_gpr_b_top_84_77_0 = (const uint8) 0 (const) */
    /* F s_b_write_gpr_b_top_84_77_1=top__Qscope_0x3337800inst->rd(const) */
    /* D s_b_write_gpr_b_top_84_77_2 = write_gpr_b_top_84__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_84_77_3 = (uint32)s_b_write_gpr_b_top_84_77_2 */
    Statement& s_b_write_gpr_b_top_84_77_3 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_84__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_84_77_4 = (uint64)s_b_write_gpr_b_top_84_77_3 */
    Statement& s_b_write_gpr_b_top_84_77_4 = builder.zx(Operand(s_b_write_gpr_b_top_84_77_3));
    /* D s_b_write_gpr_b_top_84_77_5: WriteRegBank 0:s_b_write_gpr_b_top_84_77_1 = s_b_write_gpr_b_top_84_77_4 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_84_77_4));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_84_77_4), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_84_77_6: Jump b_top_75 (const) */
    goto block_b_top_75;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_umulh::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
