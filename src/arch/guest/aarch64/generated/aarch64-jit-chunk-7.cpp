#include "aarch64-jit.h"
#include <vrt/util/list.h>
#include <vrt/util/set.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::dbt::ir;
using namespace vrt::util;
bool aarch64_insn_asrv::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ccmni::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_csel::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_exgen::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldr_lit::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x32a2d60address;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x32a2d60address = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Reg s_b_top_1_0
  uint32 CV_top__Qscope_0x32a0270data;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x32a0270data = &builder.alloc(PrimitiveTypes.u32);
  // Reg s_b_top_1_7
  uint64 CV_write_gpr_b_top_4__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_4__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_2
  // Block b_top_3
  // Reg s_b_top_3_0
  uint64 CV_top__Qscope_0x32a7690data;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x32a7690data = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_4
  // Block b_write_gpr_b_top_4_5
  // Block b_write_gpr_b_top_4_6
  // Block b_top_7
  // Block b_write_gpr_b_top_10_8
  // Block b_write_gpr_b_top_10_9
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x32a2d60address = Alloc uint64 */
    /* D s_b_0_1 = ReadReg 2 (uint64) */
    Statement& s_b_0_1 = builder.ldreg(Operand(PrimitiveTypes.u32, 256));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 256), Operand(s_b_0_1));
    }
    /* F s_b_0_2=top__Qscope_0x32a2b90inst->label(const) */
    /* D s_b_0_3 = (sint64)s_b_0_1 */
    Statement& s_b_0_3 = s_b_0_1;
    /* D s_b_0_4 = s_b_0_3+s_b_0_2 */
    Statement& s_b_0_4 = builder.add(Operand(s_b_0_3), Operand(PrimitiveTypes.s64, label));
    /* D s_b_0_5 = (uint64)s_b_0_4 */
    Statement& s_b_0_5 = s_b_0_4;
    /* D s_b_0_6: top__Qscope_0x32a2d60address = s_b_0_5, dominates: s_b_top_1_1 s_b_top_3_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x32a2d60address), Operand(s_b_0_5));
    /* F s_b_0_7=top__Qscope_0x32a2b90inst->opc(const) */
    /* F s_b_0_8 = (const uint8) 0 (const) */
    /* F s_b_0_9 = s_b_0_7==s_b_0_8 (const) */
    uint8 s_b_0_9 = ((uint8)(opc == (uint8)0ULL));
    /* F s_b_0_10: If s_b_0_9: Jump b_top_1 else b_top_3 (const) */
    if (s_b_0_9) 
    {
      goto block_b_top_1;
    }
    else 
    {
      goto block_b_top_3;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0: &top__Qscope_0x32a0270data = Alloc uint32 */
    /* D s_b_top_1_1 = top__Qscope_0x32a2d60address */
    /* D s_b_top_1_2 = Load 4 s_b_top_1_1 => top__Qscope_0x32a0270data */
    Statement& s_b_top_1_2 = builder.ldmem(Operand(*ir_idx_top__Qscope_0x32a2d60address));
    if (_trace) 
    {
      builder.trace_mem_read(Operand(*ir_idx_top__Qscope_0x32a2d60address), Operand(s_b_top_1_2));
    }
    /* F s_b_top_1_3 = (const uint8) 0 (const) */
    /* F s_b_top_1_4=top__Qscope_0x32a2b90inst->rt(const) */
    /* D s_b_top_1_5 = top__Qscope_0x32a0270data */
    /* D s_b_top_1_6 = (uint64)s_b_top_1_5 */
    Statement& s_b_top_1_6 = builder.zx(Operand(*ir_idx_top__Qscope_0x32a0270data));
    /* F s_b_top_1_7: &write_gpr_b_top_4__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_1_8: write_gpr_b_top_4__Qscope_0x33bbb30value = s_b_top_1_6, dominates: s_b_write_gpr_b_top_4_6_2  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_4__Qscope_0x33bbb30value), Operand(s_b_top_1_6));
    /* F s_b_top_1_9 = (const uint8) 1f (const) */
    /* F s_b_top_1_10 = s_b_top_1_4==s_b_top_1_9 (const) */
    uint8 s_b_top_1_10 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_top_1_11: If s_b_top_1_10: Jump b_write_gpr_b_top_4_5 else b_write_gpr_b_top_4_6 (const) */
    if (s_b_top_1_10) 
    {
      goto block_b_write_gpr_b_top_4_5;
    }
    else 
    {
      goto block_b_write_gpr_b_top_4_6;
    }
  }
  block_b_top_2: 
  {
    /* F s_b_top_2_0: Free &top__Qscope_0x32a2d60address (8) */
    /* F s_b_top_2_1: Return */
    goto fixed_done;
  }
  block_b_top_3: 
  {
    /* F s_b_top_3_0: &top__Qscope_0x32a7690data = Alloc uint64 */
    /* D s_b_top_3_1 = top__Qscope_0x32a2d60address */
    /* D s_b_top_3_2 = Load 8 s_b_top_3_1 => top__Qscope_0x32a7690data */
    Statement& s_b_top_3_2 = builder.ldmem(Operand(*ir_idx_top__Qscope_0x32a2d60address));
    if (_trace) 
    {
      builder.trace_mem_read(Operand(*ir_idx_top__Qscope_0x32a2d60address), Operand(s_b_top_3_2));
    }
    /* F s_b_top_3_3 = (const uint8) 1 (const) */
    /* F s_b_top_3_4=top__Qscope_0x32a2b90inst->rt(const) */
    /* D s_b_top_3_5 = top__Qscope_0x32a7690data */
    /* F s_b_top_3_6 = (const uint8) 1f (const) */
    /* F s_b_top_3_7 = s_b_top_3_4==s_b_top_3_6 (const) */
    uint8 s_b_top_3_7 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_top_3_8: If s_b_top_3_7: Jump b_write_gpr_b_top_10_8 else b_write_gpr_b_top_10_9 (const) */
    if (s_b_top_3_7) 
    {
      goto block_b_write_gpr_b_top_10_8;
    }
    else 
    {
      goto block_b_write_gpr_b_top_10_9;
    }
  }
  block_b_top_4: 
  {
    /* F s_b_top_4_0: Free &write_gpr_b_top_4__Qscope_0x33bbb30value (8) */
    /* F s_b_top_4_1: Free &top__Qscope_0x32a0270data (4) */
    /* F s_b_top_4_2: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_write_gpr_b_top_4_5: 
  {
    /* F s_b_write_gpr_b_top_4_5_0: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_write_gpr_b_top_4_6: 
  {
    /* F s_b_write_gpr_b_top_4_6_0 = (const uint8) 0 (const) */
    /* F s_b_write_gpr_b_top_4_6_1=top__Qscope_0x32a2b90inst->rt(const) */
    /* D s_b_write_gpr_b_top_4_6_2 = write_gpr_b_top_4__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_4_6_3 = (uint32)s_b_write_gpr_b_top_4_6_2 */
    Statement& s_b_write_gpr_b_top_4_6_3 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_4__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_4_6_4 = (uint64)s_b_write_gpr_b_top_4_6_3 */
    Statement& s_b_write_gpr_b_top_4_6_4 = builder.zx(Operand(s_b_write_gpr_b_top_4_6_3));
    /* D s_b_write_gpr_b_top_4_6_5: WriteRegBank 0:s_b_write_gpr_b_top_4_6_1 = s_b_write_gpr_b_top_4_6_4 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_write_gpr_b_top_4_6_4));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_4_6_4), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    /* F s_b_write_gpr_b_top_4_6_6: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_top_7: 
  {
    /* F s_b_top_7_0: Free &top__Qscope_0x32a7690data (8) */
    /* F s_b_top_7_1: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_write_gpr_b_top_10_8: 
  {
    /* F s_b_write_gpr_b_top_10_8_0: Jump b_top_7 (const) */
    goto block_b_top_7;
  }
  block_b_write_gpr_b_top_10_9: 
  {
    /* F s_b_write_gpr_b_top_10_9_0 = (const uint8) 1 (const) */
    /* F s_b_write_gpr_b_top_10_9_1=top__Qscope_0x32a2b90inst->rt(const) */
    /* D s_b_write_gpr_b_top_10_9_2 = top__Qscope_0x32a7690data */
    /* D s_b_write_gpr_b_top_10_9_3: WriteRegBank 0:s_b_write_gpr_b_top_10_9_1 = s_b_write_gpr_b_top_10_9_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(*ir_idx_top__Qscope_0x32a7690data));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x32a7690data), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    /* F s_b_write_gpr_b_top_10_9_4: Jump b_top_7 (const) */
    goto block_b_top_7;
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
bool aarch64_insn_ldri::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldtrsw::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_mov::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Block b_top_1
  // Reg s_b_top_1_4
  uint64 CV_read_gpr_b_top_4_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_4_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_2
  // Block b_top_3
  // Reg s_b_top_3_4
  uint64 CV_read_gpr_b_top_20_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_20_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_4
  // Reg s_b_top_4_5
  uint64 CV_write_gpr_b_top_14__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_14__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_4_5
  // Reg s_b_read_gpr_b_top_4_5_3
  uint64 CV_temp_4;
  vrt::dbt::ir::Statement *ir_idx_temp_4 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_4_6
  // Reg s_b_read_gpr_b_top_4_6_3
  uint64 CV_temp_5;
  vrt::dbt::ir::Statement *ir_idx_temp_5 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_4_7
  // Block b_read_gpr_b_top_4_8
  // Block b_read_gpr_b_top_4_9
  // Block b_read_gpr_b_top_4_10
  // Block b_read_gpr_b_top_4_11
  // Block b_read_gpr_b_top_4_12
  // Block b_top_13
  // Block b_write_gpr_b_top_14_14
  // Block b_write_gpr_b_top_14_15
  // Block b_write_gpr_b_top_14_16
  // Block b_write_gpr_b_top_14_17
  // Block b_write_gpr_b_top_14_18
  // Block b_top_19
  // Block b_read_gpr_b_top_20_20
  // Reg s_b_read_gpr_b_top_20_20_3
  uint64 CV_temp_12;
  vrt::dbt::ir::Statement *ir_idx_temp_12 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_20_21
  // Reg s_b_read_gpr_b_top_20_21_3
  uint64 CV_temp_13;
  vrt::dbt::ir::Statement *ir_idx_temp_13 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_20_22
  // Block b_read_gpr_b_top_20_23
  // Block b_read_gpr_b_top_20_24
  // Block b_read_gpr_b_top_20_25
  // Block b_read_gpr_b_top_20_26
  // Block b_read_gpr_b_top_20_27
  // Block b_top_28
  // Block b_write_gpr_b_top_30_29
  // Block b_write_gpr_b_top_30_30
  // Block b_write_gpr_b_top_30_31
  // Block b_write_gpr_b_top_30_32
  // Block b_write_gpr_b_top_30_33
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x33a4e30inst->N(const) */
    /* F s_b_0_1: If s_b_0_0: Jump b_top_1 else b_top_3 (const) */
    if (N) 
    {
      goto block_b_top_1;
    }
    else 
    {
      goto block_b_top_3;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0=top__Qscope_0x33a4e30inst->sf(const) */
    /* F s_b_top_1_1=top__Qscope_0x33a4e30inst->rd(const) */
    /* F s_b_top_1_2=top__Qscope_0x33a4e30inst->sf(const) */
    /* F s_b_top_1_3=top__Qscope_0x33a4e30inst->rm(const) */
    /* F s_b_top_1_4: &read_gpr_b_top_4_0r = Alloc uint64 */
    /* F s_b_top_1_5: If s_b_top_1_2: Jump b_read_gpr_b_top_4_5 else b_read_gpr_b_top_4_6 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_4_5;
    }
    else 
    {
      goto block_b_read_gpr_b_top_4_6;
    }
  }
  block_b_top_2: 
  {
    /* F s_b_top_2_0: Return */
    goto fixed_done;
  }
  block_b_top_3: 
  {
    /* F s_b_top_3_0=top__Qscope_0x33a4e30inst->sf(const) */
    /* F s_b_top_3_1=top__Qscope_0x33a4e30inst->rd(const) */
    /* F s_b_top_3_2=top__Qscope_0x33a4e30inst->sf(const) */
    /* F s_b_top_3_3=top__Qscope_0x33a4e30inst->rm(const) */
    /* F s_b_top_3_4: &read_gpr_b_top_20_0r = Alloc uint64 */
    /* F s_b_top_3_5: If s_b_top_3_2: Jump b_read_gpr_b_top_20_20 else b_read_gpr_b_top_20_21 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_20_20;
    }
    else 
    {
      goto block_b_read_gpr_b_top_20_21;
    }
  }
  block_b_top_4: 
  {
    /* D s_b_top_4_0 = read_gpr_b_top_4_0r */
    /* F s_b_top_4_1: Free &read_gpr_b_top_4_0r (8) */
    /* D s_b_top_4_2 = ?s_b_top_4_0 */
    Statement& s_b_top_4_2 = builder.bnot(Operand(*ir_idx_read_gpr_b_top_4_0r));
    /* F s_b_top_4_3=top__Qscope_0x33a4e30inst->sf(const) */
    /* F s_b_top_4_4=top__Qscope_0x33a4e30inst->rd(const) */
    /* F s_b_top_4_5: &write_gpr_b_top_14__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_4_6: write_gpr_b_top_14__Qscope_0x33bbb30value = s_b_top_4_2, dominates: s_b_write_gpr_b_top_14_16_1 s_b_write_gpr_b_top_14_18_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_14__Qscope_0x33bbb30value), Operand(s_b_top_4_2));
    /* F s_b_top_4_7 = (const uint8) 1f (const) */
    /* F s_b_top_4_8 = s_b_top_4_4==s_b_top_4_7 (const) */
    uint8 s_b_top_4_8 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_4_9: If s_b_top_4_8: Jump b_write_gpr_b_top_14_14 else b_write_gpr_b_top_14_15 (const) */
    if (s_b_top_4_8) 
    {
      goto block_b_write_gpr_b_top_14_14;
    }
    else 
    {
      goto block_b_write_gpr_b_top_14_15;
    }
  }
  block_b_read_gpr_b_top_4_5: 
  {
    /* F s_b_read_gpr_b_top_4_5_0=top__Qscope_0x33a4e30inst->rm(const) */
    /* F s_b_read_gpr_b_top_4_5_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_4_5_2 = s_b_read_gpr_b_top_4_5_0==s_b_read_gpr_b_top_4_5_1 (const) */
    uint8 s_b_read_gpr_b_top_4_5_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_4_5_3: &temp_4 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_4_5_4: If s_b_read_gpr_b_top_4_5_2: Jump b_read_gpr_b_top_4_7 else b_read_gpr_b_top_4_8 (const) */
    if (s_b_read_gpr_b_top_4_5_2) 
    {
      goto block_b_read_gpr_b_top_4_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_4_8;
    }
  }
  block_b_read_gpr_b_top_4_6: 
  {
    /* F s_b_read_gpr_b_top_4_6_0=top__Qscope_0x33a4e30inst->rm(const) */
    /* F s_b_read_gpr_b_top_4_6_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_4_6_2 = s_b_read_gpr_b_top_4_6_0==s_b_read_gpr_b_top_4_6_1 (const) */
    uint8 s_b_read_gpr_b_top_4_6_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_4_6_3: &temp_5 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_4_6_4: If s_b_read_gpr_b_top_4_6_2: Jump b_read_gpr_b_top_4_10 else b_read_gpr_b_top_4_11 (const) */
    if (s_b_read_gpr_b_top_4_6_2) 
    {
      goto block_b_read_gpr_b_top_4_10;
    }
    else 
    {
      goto block_b_read_gpr_b_top_4_11;
    }
  }
  block_b_read_gpr_b_top_4_7: 
  {
    /* F s_b_read_gpr_b_top_4_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_4_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_4_7_2: temp_4 = s_b_read_gpr_b_top_4_7_1 (const), dominates: s_b_read_gpr_b_top_4_9_0  */
    CV_temp_4 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_4), Operand(PrimitiveTypes.u8, CV_temp_4));
    /* F s_b_read_gpr_b_top_4_7_3: Jump b_read_gpr_b_top_4_9 (const) */
    goto block_b_read_gpr_b_top_4_9;
  }
  block_b_read_gpr_b_top_4_8: 
  {
    /* F s_b_read_gpr_b_top_4_8_0=top__Qscope_0x33a4e30inst->rm(const) */
    /* D s_b_read_gpr_b_top_4_8_1 = ReadRegBank 0:s_b_read_gpr_b_top_4_8_0 (uint64) */
    Statement& s_b_read_gpr_b_top_4_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_top_4_8_1));
    }
    /* D s_b_read_gpr_b_top_4_8_2 = (uint64)s_b_read_gpr_b_top_4_8_1 */
    Statement& s_b_read_gpr_b_top_4_8_2 = s_b_read_gpr_b_top_4_8_1;
    /* D s_b_read_gpr_b_top_4_8_3: temp_4 = s_b_read_gpr_b_top_4_8_2, dominates: s_b_read_gpr_b_top_4_9_0  */
    builder.store(Operand(*ir_idx_temp_4), Operand(s_b_read_gpr_b_top_4_8_2));
    /* F s_b_read_gpr_b_top_4_8_4: Jump b_read_gpr_b_top_4_9 (const) */
    goto block_b_read_gpr_b_top_4_9;
  }
  block_b_read_gpr_b_top_4_9: 
  {
    /* D s_b_read_gpr_b_top_4_9_0 = temp_4 */
    /* F s_b_read_gpr_b_top_4_9_1: Free &temp_4 (8) */
    /* D s_b_read_gpr_b_top_4_9_2: read_gpr_b_top_4_0r = s_b_read_gpr_b_top_4_9_0, dominates: s_b_top_4_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_4_0r), Operand(*ir_idx_temp_4));
    /* F s_b_read_gpr_b_top_4_9_3: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_read_gpr_b_top_4_10: 
  {
    /* F s_b_read_gpr_b_top_4_10_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_4_10_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_4_10_2: temp_5 = s_b_read_gpr_b_top_4_10_1 (const), dominates: s_b_read_gpr_b_top_4_12_0  */
    CV_temp_5 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u8, CV_temp_5));
    /* F s_b_read_gpr_b_top_4_10_3: Jump b_read_gpr_b_top_4_12 (const) */
    goto block_b_read_gpr_b_top_4_12;
  }
  block_b_read_gpr_b_top_4_11: 
  {
    /* F s_b_read_gpr_b_top_4_11_0=top__Qscope_0x33a4e30inst->rm(const) */
    /* D s_b_read_gpr_b_top_4_11_1 = ReadRegBank 1:s_b_read_gpr_b_top_4_11_0 (uint32) */
    Statement& s_b_read_gpr_b_top_4_11_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_top_4_11_1));
    }
    /* D s_b_read_gpr_b_top_4_11_2 = (uint64)s_b_read_gpr_b_top_4_11_1 */
    Statement& s_b_read_gpr_b_top_4_11_2 = builder.zx(Operand(s_b_read_gpr_b_top_4_11_1));
    /* D s_b_read_gpr_b_top_4_11_3: temp_5 = s_b_read_gpr_b_top_4_11_2, dominates: s_b_read_gpr_b_top_4_12_0  */
    builder.store(Operand(*ir_idx_temp_5), Operand(s_b_read_gpr_b_top_4_11_2));
    /* F s_b_read_gpr_b_top_4_11_4: Jump b_read_gpr_b_top_4_12 (const) */
    goto block_b_read_gpr_b_top_4_12;
  }
  block_b_read_gpr_b_top_4_12: 
  {
    /* D s_b_read_gpr_b_top_4_12_0 = temp_5 */
    /* F s_b_read_gpr_b_top_4_12_1: Free &temp_5 (8) */
    /* D s_b_read_gpr_b_top_4_12_2: read_gpr_b_top_4_0r = s_b_read_gpr_b_top_4_12_0, dominates: s_b_top_4_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_4_0r), Operand(*ir_idx_temp_5));
    /* F s_b_read_gpr_b_top_4_12_3: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_top_13: 
  {
    /* F s_b_top_13_0: Free &write_gpr_b_top_14__Qscope_0x33bbb30value (8) */
    /* F s_b_top_13_1: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_write_gpr_b_top_14_14: 
  {
    /* F s_b_write_gpr_b_top_14_14_0: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_write_gpr_b_top_14_15: 
  {
    /* F s_b_write_gpr_b_top_14_15_0=top__Qscope_0x33a4e30inst->sf(const) */
    /* F s_b_write_gpr_b_top_14_15_1: If s_b_write_gpr_b_top_14_15_0: Jump b_write_gpr_b_top_14_16 else b_write_gpr_b_top_14_18 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_14_16;
    }
    else 
    {
      goto block_b_write_gpr_b_top_14_18;
    }
  }
  block_b_write_gpr_b_top_14_16: 
  {
    /* F s_b_write_gpr_b_top_14_16_0=top__Qscope_0x33a4e30inst->rd(const) */
    /* D s_b_write_gpr_b_top_14_16_1 = write_gpr_b_top_14__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_14_16_2: WriteRegBank 0:s_b_write_gpr_b_top_14_16_0 = s_b_write_gpr_b_top_14_16_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_14__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_14__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_14_16_3: Jump b_write_gpr_b_top_14_17 (const) */
    goto block_b_write_gpr_b_top_14_17;
  }
  block_b_write_gpr_b_top_14_17: 
  {
    /* F s_b_write_gpr_b_top_14_17_0: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_write_gpr_b_top_14_18: 
  {
    /* F s_b_write_gpr_b_top_14_18_0=top__Qscope_0x33a4e30inst->rd(const) */
    /* D s_b_write_gpr_b_top_14_18_1 = write_gpr_b_top_14__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_14_18_2 = (uint32)s_b_write_gpr_b_top_14_18_1 */
    Statement& s_b_write_gpr_b_top_14_18_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_14__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_14_18_3 = (uint64)s_b_write_gpr_b_top_14_18_2 */
    Statement& s_b_write_gpr_b_top_14_18_3 = builder.zx(Operand(s_b_write_gpr_b_top_14_18_2));
    /* D s_b_write_gpr_b_top_14_18_4: WriteRegBank 0:s_b_write_gpr_b_top_14_18_0 = s_b_write_gpr_b_top_14_18_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_14_18_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_14_18_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_14_18_5: Jump b_write_gpr_b_top_14_17 (const) */
    goto block_b_write_gpr_b_top_14_17;
  }
  block_b_top_19: 
  {
    /* D s_b_top_19_0 = read_gpr_b_top_20_0r */
    /* F s_b_top_19_1: Free &read_gpr_b_top_20_0r (8) */
    /* F s_b_top_19_2=top__Qscope_0x33a4e30inst->sf(const) */
    /* F s_b_top_19_3=top__Qscope_0x33a4e30inst->rd(const) */
    /* F s_b_top_19_4 = (const uint8) 1f (const) */
    /* F s_b_top_19_5 = s_b_top_19_3==s_b_top_19_4 (const) */
    uint8 s_b_top_19_5 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_19_6: If s_b_top_19_5: Jump b_write_gpr_b_top_30_29 else b_write_gpr_b_top_30_30 (const) */
    if (s_b_top_19_5) 
    {
      goto block_b_write_gpr_b_top_30_29;
    }
    else 
    {
      goto block_b_write_gpr_b_top_30_30;
    }
  }
  block_b_read_gpr_b_top_20_20: 
  {
    /* F s_b_read_gpr_b_top_20_20_0=top__Qscope_0x33a4e30inst->rm(const) */
    /* F s_b_read_gpr_b_top_20_20_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_20_20_2 = s_b_read_gpr_b_top_20_20_0==s_b_read_gpr_b_top_20_20_1 (const) */
    uint8 s_b_read_gpr_b_top_20_20_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_20_20_3: &temp_12 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_20_20_4: If s_b_read_gpr_b_top_20_20_2: Jump b_read_gpr_b_top_20_22 else b_read_gpr_b_top_20_23 (const) */
    if (s_b_read_gpr_b_top_20_20_2) 
    {
      goto block_b_read_gpr_b_top_20_22;
    }
    else 
    {
      goto block_b_read_gpr_b_top_20_23;
    }
  }
  block_b_read_gpr_b_top_20_21: 
  {
    /* F s_b_read_gpr_b_top_20_21_0=top__Qscope_0x33a4e30inst->rm(const) */
    /* F s_b_read_gpr_b_top_20_21_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_20_21_2 = s_b_read_gpr_b_top_20_21_0==s_b_read_gpr_b_top_20_21_1 (const) */
    uint8 s_b_read_gpr_b_top_20_21_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_20_21_3: &temp_13 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_20_21_4: If s_b_read_gpr_b_top_20_21_2: Jump b_read_gpr_b_top_20_25 else b_read_gpr_b_top_20_26 (const) */
    if (s_b_read_gpr_b_top_20_21_2) 
    {
      goto block_b_read_gpr_b_top_20_25;
    }
    else 
    {
      goto block_b_read_gpr_b_top_20_26;
    }
  }
  block_b_read_gpr_b_top_20_22: 
  {
    /* F s_b_read_gpr_b_top_20_22_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_20_22_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_20_22_2: temp_12 = s_b_read_gpr_b_top_20_22_1 (const), dominates: s_b_read_gpr_b_top_20_24_0  */
    CV_temp_12 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_12), Operand(PrimitiveTypes.u8, CV_temp_12));
    /* F s_b_read_gpr_b_top_20_22_3: Jump b_read_gpr_b_top_20_24 (const) */
    goto block_b_read_gpr_b_top_20_24;
  }
  block_b_read_gpr_b_top_20_23: 
  {
    /* F s_b_read_gpr_b_top_20_23_0=top__Qscope_0x33a4e30inst->rm(const) */
    /* D s_b_read_gpr_b_top_20_23_1 = ReadRegBank 0:s_b_read_gpr_b_top_20_23_0 (uint64) */
    Statement& s_b_read_gpr_b_top_20_23_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_top_20_23_1));
    }
    /* D s_b_read_gpr_b_top_20_23_2 = (uint64)s_b_read_gpr_b_top_20_23_1 */
    Statement& s_b_read_gpr_b_top_20_23_2 = s_b_read_gpr_b_top_20_23_1;
    /* D s_b_read_gpr_b_top_20_23_3: temp_12 = s_b_read_gpr_b_top_20_23_2, dominates: s_b_read_gpr_b_top_20_24_0  */
    builder.store(Operand(*ir_idx_temp_12), Operand(s_b_read_gpr_b_top_20_23_2));
    /* F s_b_read_gpr_b_top_20_23_4: Jump b_read_gpr_b_top_20_24 (const) */
    goto block_b_read_gpr_b_top_20_24;
  }
  block_b_read_gpr_b_top_20_24: 
  {
    /* D s_b_read_gpr_b_top_20_24_0 = temp_12 */
    /* F s_b_read_gpr_b_top_20_24_1: Free &temp_12 (8) */
    /* D s_b_read_gpr_b_top_20_24_2: read_gpr_b_top_20_0r = s_b_read_gpr_b_top_20_24_0, dominates: s_b_top_19_0 s_b_write_gpr_b_top_30_31_1 s_b_write_gpr_b_top_30_33_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_20_0r), Operand(*ir_idx_temp_12));
    /* F s_b_read_gpr_b_top_20_24_3: Jump b_top_19 (const) */
    goto block_b_top_19;
  }
  block_b_read_gpr_b_top_20_25: 
  {
    /* F s_b_read_gpr_b_top_20_25_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_20_25_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_20_25_2: temp_13 = s_b_read_gpr_b_top_20_25_1 (const), dominates: s_b_read_gpr_b_top_20_27_0  */
    CV_temp_13 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_13), Operand(PrimitiveTypes.u8, CV_temp_13));
    /* F s_b_read_gpr_b_top_20_25_3: Jump b_read_gpr_b_top_20_27 (const) */
    goto block_b_read_gpr_b_top_20_27;
  }
  block_b_read_gpr_b_top_20_26: 
  {
    /* F s_b_read_gpr_b_top_20_26_0=top__Qscope_0x33a4e30inst->rm(const) */
    /* D s_b_read_gpr_b_top_20_26_1 = ReadRegBank 1:s_b_read_gpr_b_top_20_26_0 (uint32) */
    Statement& s_b_read_gpr_b_top_20_26_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_top_20_26_1));
    }
    /* D s_b_read_gpr_b_top_20_26_2 = (uint64)s_b_read_gpr_b_top_20_26_1 */
    Statement& s_b_read_gpr_b_top_20_26_2 = builder.zx(Operand(s_b_read_gpr_b_top_20_26_1));
    /* D s_b_read_gpr_b_top_20_26_3: temp_13 = s_b_read_gpr_b_top_20_26_2, dominates: s_b_read_gpr_b_top_20_27_0  */
    builder.store(Operand(*ir_idx_temp_13), Operand(s_b_read_gpr_b_top_20_26_2));
    /* F s_b_read_gpr_b_top_20_26_4: Jump b_read_gpr_b_top_20_27 (const) */
    goto block_b_read_gpr_b_top_20_27;
  }
  block_b_read_gpr_b_top_20_27: 
  {
    /* D s_b_read_gpr_b_top_20_27_0 = temp_13 */
    /* F s_b_read_gpr_b_top_20_27_1: Free &temp_13 (8) */
    /* D s_b_read_gpr_b_top_20_27_2: read_gpr_b_top_20_0r = s_b_read_gpr_b_top_20_27_0, dominates: s_b_top_19_0 s_b_write_gpr_b_top_30_31_1 s_b_write_gpr_b_top_30_33_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_20_0r), Operand(*ir_idx_temp_13));
    /* F s_b_read_gpr_b_top_20_27_3: Jump b_top_19 (const) */
    goto block_b_top_19;
  }
  block_b_top_28: 
  {
    /* F s_b_top_28_0: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_write_gpr_b_top_30_29: 
  {
    /* F s_b_write_gpr_b_top_30_29_0: Jump b_top_28 (const) */
    goto block_b_top_28;
  }
  block_b_write_gpr_b_top_30_30: 
  {
    /* F s_b_write_gpr_b_top_30_30_0=top__Qscope_0x33a4e30inst->sf(const) */
    /* F s_b_write_gpr_b_top_30_30_1: If s_b_write_gpr_b_top_30_30_0: Jump b_write_gpr_b_top_30_31 else b_write_gpr_b_top_30_33 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_30_31;
    }
    else 
    {
      goto block_b_write_gpr_b_top_30_33;
    }
  }
  block_b_write_gpr_b_top_30_31: 
  {
    /* F s_b_write_gpr_b_top_30_31_0=top__Qscope_0x33a4e30inst->rd(const) */
    /* D s_b_write_gpr_b_top_30_31_1 = read_gpr_b_top_20_0r */
    /* D s_b_write_gpr_b_top_30_31_2: WriteRegBank 0:s_b_write_gpr_b_top_30_31_0 = s_b_write_gpr_b_top_30_31_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_read_gpr_b_top_20_0r));
    }
    builder.streg(Operand(*ir_idx_read_gpr_b_top_20_0r), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_30_31_3: Jump b_write_gpr_b_top_30_32 (const) */
    goto block_b_write_gpr_b_top_30_32;
  }
  block_b_write_gpr_b_top_30_32: 
  {
    /* F s_b_write_gpr_b_top_30_32_0: Jump b_top_28 (const) */
    goto block_b_top_28;
  }
  block_b_write_gpr_b_top_30_33: 
  {
    /* F s_b_write_gpr_b_top_30_33_0=top__Qscope_0x33a4e30inst->rd(const) */
    /* D s_b_write_gpr_b_top_30_33_1 = read_gpr_b_top_20_0r */
    /* D s_b_write_gpr_b_top_30_33_2 = (uint32)s_b_write_gpr_b_top_30_33_1 */
    Statement& s_b_write_gpr_b_top_30_33_2 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_20_0r));
    /* D s_b_write_gpr_b_top_30_33_3 = (uint64)s_b_write_gpr_b_top_30_33_2 */
    Statement& s_b_write_gpr_b_top_30_33_3 = builder.zx(Operand(s_b_write_gpr_b_top_30_33_2));
    /* D s_b_write_gpr_b_top_30_33_4: WriteRegBank 0:s_b_write_gpr_b_top_30_33_0 = s_b_write_gpr_b_top_30_33_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_30_33_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_30_33_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_30_33_5: Jump b_write_gpr_b_top_30_32 (const) */
    goto block_b_write_gpr_b_top_30_32;
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
bool aarch64_insn_orri::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_2
  uint64 CV_read_gpr_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
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
  // Reg s_b_top_10_5
  uint64 CV_write_gpr_sp_b_top_14__Qscope_0x33c0ff0value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_sp_b_top_14__Qscope_0x33c0ff0value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_11
  // Block b_top_12
  // Reg s_b_top_12_7
  uint64 CV_write_gpr_sp_b_top_20__Qscope_0x33c0ff0value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_sp_b_top_20__Qscope_0x33c0ff0value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_write_gpr_sp_b_top_14_13
  // Block b_write_gpr_sp_b_top_14_14
  // Block b_write_gpr_sp_b_top_14_15
  // Block b_write_gpr_sp_b_top_20_16
  // Block b_write_gpr_sp_b_top_20_17
  // Block b_write_gpr_sp_b_top_20_18
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x323f900inst->sf(const) */
    /* F s_b_0_1=top__Qscope_0x323f900inst->rn(const) */
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
    /* F s_b_top_1_2=top__Qscope_0x323f900inst->sf(const) */
    /* F s_b_top_1_3: If s_b_top_1_2: Jump b_top_10 else b_top_12 (const) */
    if (sf) 
    {
      goto block_b_top_10;
    }
    else 
    {
      goto block_b_top_12;
    }
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x323f900inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rn == (uint8)31ULL));
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
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x323f900inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rn == (uint8)31ULL));
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
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x323f900inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_5_1));
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
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0 s_b_top_10_0 s_b_top_12_0  */
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
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x323f900inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_8_1));
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
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0 s_b_top_10_0 s_b_top_12_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_6));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* D s_b_top_10_0 = read_gpr_b_top_1_0r */
    /* F s_b_top_10_1=top__Qscope_0x323f900inst->immu64(const) */
    /* D s_b_top_10_2 = s_b_top_10_0|s_b_top_10_1 */
    Statement& s_b_top_10_2 = builder.bor(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(PrimitiveTypes.u64, immu64));
    /* F s_b_top_10_3 = (const uint8) 1 (const) */
    /* F s_b_top_10_4=top__Qscope_0x323f900inst->rd(const) */
    /* F s_b_top_10_5: &write_gpr_sp_b_top_14__Qscope_0x33c0ff0value = Alloc uint64 */
    /* D s_b_top_10_6: write_gpr_sp_b_top_14__Qscope_0x33c0ff0value = s_b_top_10_2, dominates: s_b_write_gpr_sp_b_top_14_13_0 s_b_write_gpr_sp_b_top_14_15_1  */
    builder.store(Operand(*ir_idx_write_gpr_sp_b_top_14__Qscope_0x33c0ff0value), Operand(s_b_top_10_2));
    /* F s_b_top_10_7 = (uint8) 0 (const) */
    /* F s_b_top_10_8 = (uint8) 0 (const) */
    /* F s_b_top_10_9=top__Qscope_0x323f900inst->rd(const) */
    /* F s_b_top_10_10 = (const uint8) 1f (const) */
    /* F s_b_top_10_11 = s_b_top_10_9==s_b_top_10_10 (const) */
    uint8 s_b_top_10_11 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_10_12: If s_b_top_10_11: Jump b_write_gpr_sp_b_top_14_13 else b_write_gpr_sp_b_top_14_15 (const) */
    if (s_b_top_10_11) 
    {
      goto block_b_write_gpr_sp_b_top_14_13;
    }
    else 
    {
      goto block_b_write_gpr_sp_b_top_14_15;
    }
  }
  block_b_top_11: 
  {
    /* F s_b_top_11_0: Return */
    goto fixed_done;
  }
  block_b_top_12: 
  {
    /* D s_b_top_12_0 = read_gpr_b_top_1_0r */
    /* D s_b_top_12_1 = (uint32)s_b_top_12_0 */
    Statement& s_b_top_12_1 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_1_0r));
    /* F s_b_top_12_2=top__Qscope_0x323f900inst->immu32(const) */
    /* D s_b_top_12_3 = s_b_top_12_1|s_b_top_12_2 */
    Statement& s_b_top_12_3 = builder.bor(Operand(s_b_top_12_1), Operand(PrimitiveTypes.u32, immu32));
    /* F s_b_top_12_4 = (const uint8) 0 (const) */
    /* F s_b_top_12_5=top__Qscope_0x323f900inst->rd(const) */
    /* D s_b_top_12_6 = (uint64)s_b_top_12_3 */
    Statement& s_b_top_12_6 = builder.zx(Operand(s_b_top_12_3));
    /* F s_b_top_12_7: &write_gpr_sp_b_top_20__Qscope_0x33c0ff0value = Alloc uint64 */
    /* F s_b_top_12_8 = (uint8) 0 (const) */
    /* F s_b_top_12_9 = (uint8) 1 (const) */
    /* F s_b_top_12_10 = (const uint32) ffffffff (const) */
    /* F s_b_top_12_11 = (uint64) ffffffff (const) */
    /* D s_b_top_12_12 = s_b_top_12_6&s_b_top_12_11 */
    Statement& s_b_top_12_12 = builder.band(Operand(s_b_top_12_6), Operand(PrimitiveTypes.u64, (uint64)4294967295ULL));
    /* D s_b_top_12_13: write_gpr_sp_b_top_20__Qscope_0x33c0ff0value = s_b_top_12_12, dominates: s_b_write_gpr_sp_b_top_20_16_0 s_b_write_gpr_sp_b_top_20_18_1  */
    builder.store(Operand(*ir_idx_write_gpr_sp_b_top_20__Qscope_0x33c0ff0value), Operand(s_b_top_12_12));
    /* F s_b_top_12_14=top__Qscope_0x323f900inst->rd(const) */
    /* F s_b_top_12_15 = (const uint8) 1f (const) */
    /* F s_b_top_12_16 = s_b_top_12_14==s_b_top_12_15 (const) */
    uint8 s_b_top_12_16 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_12_17: If s_b_top_12_16: Jump b_write_gpr_sp_b_top_20_16 else b_write_gpr_sp_b_top_20_18 (const) */
    if (s_b_top_12_16) 
    {
      goto block_b_write_gpr_sp_b_top_20_16;
    }
    else 
    {
      goto block_b_write_gpr_sp_b_top_20_18;
    }
  }
  block_b_write_gpr_sp_b_top_14_13: 
  {
    /* D s_b_write_gpr_sp_b_top_14_13_0 = write_gpr_sp_b_top_14__Qscope_0x33c0ff0value */
    /* D s_b_write_gpr_sp_b_top_14_13_1: WriteReg 0 = s_b_write_gpr_sp_b_top_14_13_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 248), Operand(*ir_idx_write_gpr_sp_b_top_14__Qscope_0x33c0ff0value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_sp_b_top_14__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u32, 248));
    /* F s_b_write_gpr_sp_b_top_14_13_2: Jump b_write_gpr_sp_b_top_14_14 (const) */
    goto block_b_write_gpr_sp_b_top_14_14;
  }
  block_b_write_gpr_sp_b_top_14_14: 
  {
    /* F s_b_write_gpr_sp_b_top_14_14_0: Free &write_gpr_sp_b_top_14__Qscope_0x33c0ff0value (8) */
    /* F s_b_write_gpr_sp_b_top_14_14_1: Jump b_top_11 (const) */
    goto block_b_top_11;
  }
  block_b_write_gpr_sp_b_top_14_15: 
  {
    /* F s_b_write_gpr_sp_b_top_14_15_0=top__Qscope_0x323f900inst->rd(const) */
    /* D s_b_write_gpr_sp_b_top_14_15_1 = write_gpr_sp_b_top_14__Qscope_0x33c0ff0value */
    /* D s_b_write_gpr_sp_b_top_14_15_2: WriteRegBank 0:s_b_write_gpr_sp_b_top_14_15_0 = s_b_write_gpr_sp_b_top_14_15_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_sp_b_top_14__Qscope_0x33c0ff0value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_sp_b_top_14__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_sp_b_top_14_15_3: Jump b_write_gpr_sp_b_top_14_14 (const) */
    goto block_b_write_gpr_sp_b_top_14_14;
  }
  block_b_write_gpr_sp_b_top_20_16: 
  {
    /* D s_b_write_gpr_sp_b_top_20_16_0 = write_gpr_sp_b_top_20__Qscope_0x33c0ff0value */
    /* D s_b_write_gpr_sp_b_top_20_16_1: WriteReg 0 = s_b_write_gpr_sp_b_top_20_16_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 248), Operand(*ir_idx_write_gpr_sp_b_top_20__Qscope_0x33c0ff0value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_sp_b_top_20__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u32, 248));
    /* F s_b_write_gpr_sp_b_top_20_16_2: Jump b_write_gpr_sp_b_top_20_17 (const) */
    goto block_b_write_gpr_sp_b_top_20_17;
  }
  block_b_write_gpr_sp_b_top_20_17: 
  {
    /* F s_b_write_gpr_sp_b_top_20_17_0: Free &write_gpr_sp_b_top_20__Qscope_0x33c0ff0value (8) */
    /* F s_b_write_gpr_sp_b_top_20_17_1: Jump b_top_11 (const) */
    goto block_b_top_11;
  }
  block_b_write_gpr_sp_b_top_20_18: 
  {
    /* F s_b_write_gpr_sp_b_top_20_18_0=top__Qscope_0x323f900inst->rd(const) */
    /* D s_b_write_gpr_sp_b_top_20_18_1 = write_gpr_sp_b_top_20__Qscope_0x33c0ff0value */
    /* D s_b_write_gpr_sp_b_top_20_18_2: WriteRegBank 0:s_b_write_gpr_sp_b_top_20_18_0 = s_b_write_gpr_sp_b_top_20_18_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_sp_b_top_20__Qscope_0x33c0ff0value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_sp_b_top_20__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_sp_b_top_20_18_3: Jump b_write_gpr_sp_b_top_20_17 (const) */
    goto block_b_write_gpr_sp_b_top_20_17;
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
bool aarch64_insn_rorv::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_stpi::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x331d9d0address;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x331d9d0address = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_6
  uint64 CV_temp_7;
  vrt::dbt::ir::Statement *ir_idx_temp_7 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_1
  // Block b_read_gpr_b_top_1_2
  // Block b_read_gpr_b_top_1_3
  // Block b_top_4
  // Block b_top_5
  // Reg s_b_top_5_5
  uint64 CV_temp_12;
  vrt::dbt::ir::Statement *ir_idx_temp_12 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_13_6
  // Block b_read_gpr_b_top_13_7
  // Block b_read_gpr_b_top_13_8
  // Reg s_b_read_gpr_b_top_13_8_7
  uint64 CV_temp_17;
  vrt::dbt::ir::Statement *ir_idx_temp_17 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_23_9
  // Block b_read_gpr_b_top_23_10
  // Block b_read_gpr_b_top_23_11
  // Block b_top_12
  // Block b_top_13
  // Block b_top_14
  // Block b_top_15
  // Block b_top_16
  // Block b_top_17
  // Block b_top_18
  // Block b_top_19
  // Block b_write_gpr_b_top_40_20
  // Block b_write_gpr_b_top_40_21
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x331d9d0address = Alloc uint64 */
    /* F s_b_0_1 = (const uint8) 1 (const) */
    /* F s_b_0_2=top__Qscope_0x331a670inst->rn(const) */
    /* F s_b_0_3=top__Qscope_0x331a670inst->rn(const) */
    /* F s_b_0_4 = (const uint8) 1f (const) */
    /* F s_b_0_5 = s_b_0_3==s_b_0_4 (const) */
    uint8 s_b_0_5 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_0_6: &temp_7 = Alloc uint64 */
    /* F s_b_0_7: If s_b_0_5: Jump b_read_gpr_b_top_1_1 else b_read_gpr_b_top_1_2 (const) */
    if (s_b_0_5) 
    {
      goto block_b_read_gpr_b_top_1_1;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_2;
    }
  }
  block_b_read_gpr_b_top_1_1: 
  {
    /* F s_b_read_gpr_b_top_1_1_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_1_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_1_2: temp_7 = s_b_read_gpr_b_top_1_1_1 (const), dominates: s_b_read_gpr_b_top_1_3_0  */
    CV_temp_7 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_7), Operand(PrimitiveTypes.u8, CV_temp_7));
    /* F s_b_read_gpr_b_top_1_1_3: Jump b_read_gpr_b_top_1_3 (const) */
    goto block_b_read_gpr_b_top_1_3;
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x331a670inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_2_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_2_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_2_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_2_1));
    }
    /* D s_b_read_gpr_b_top_1_2_2 = (uint64)s_b_read_gpr_b_top_1_2_1 */
    Statement& s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_1;
    /* D s_b_read_gpr_b_top_1_2_3: temp_7 = s_b_read_gpr_b_top_1_2_2, dominates: s_b_read_gpr_b_top_1_3_0  */
    builder.store(Operand(*ir_idx_temp_7), Operand(s_b_read_gpr_b_top_1_2_2));
    /* F s_b_read_gpr_b_top_1_2_4: Jump b_read_gpr_b_top_1_3 (const) */
    goto block_b_read_gpr_b_top_1_3;
  }
  block_b_read_gpr_b_top_1_3: 
  {
    /* D s_b_read_gpr_b_top_1_3_0 = temp_7 */
    /* F s_b_read_gpr_b_top_1_3_1: Free &temp_7 (8) */
    /* D s_b_read_gpr_b_top_1_3_2: top__Qscope_0x331d9d0address = s_b_read_gpr_b_top_1_3_0, dominates: s_b_top_4_0 s_b_top_12_0 s_b_top_17_0 s_b_top_18_2 s_b_write_gpr_b_top_40_21_2 s_b_top_15_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(*ir_idx_temp_7));
    /* F s_b_read_gpr_b_top_1_3_3=top__Qscope_0x331a670inst->P(const) */
    /* F s_b_read_gpr_b_top_1_3_4: If s_b_read_gpr_b_top_1_3_3: Jump b_top_4 else b_top_5 (const) */
    if (P) 
    {
      goto block_b_top_4;
    }
    else 
    {
      goto block_b_top_5;
    }
  }
  block_b_top_4: 
  {
    /* D s_b_top_4_0 = top__Qscope_0x331d9d0address */
    /* F s_b_top_4_1=top__Qscope_0x331a670inst->immu64(const) */
    /* D s_b_top_4_2 = s_b_top_4_0+s_b_top_4_1 */
    Statement& s_b_top_4_2 = builder.add(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(PrimitiveTypes.u64, immu64));
    /* D s_b_top_4_3: top__Qscope_0x331d9d0address = s_b_top_4_2, dominates: s_b_top_12_0 s_b_top_17_0 s_b_top_18_2 s_b_write_gpr_b_top_40_21_2 s_b_top_15_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(s_b_top_4_2));
    /* F s_b_top_4_4: Jump b_top_5 (const) */
    goto block_b_top_5;
  }
  block_b_top_5: 
  {
    /* F s_b_top_5_0 = (const uint8) 1 (const) */
    /* F s_b_top_5_1=top__Qscope_0x331a670inst->rt(const) */
    /* F s_b_top_5_2=top__Qscope_0x331a670inst->rt(const) */
    /* F s_b_top_5_3 = (const uint8) 1f (const) */
    /* F s_b_top_5_4 = s_b_top_5_2==s_b_top_5_3 (const) */
    uint8 s_b_top_5_4 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_top_5_5: &temp_12 = Alloc uint64 */
    /* F s_b_top_5_6: If s_b_top_5_4: Jump b_read_gpr_b_top_13_6 else b_read_gpr_b_top_13_7 (const) */
    if (s_b_top_5_4) 
    {
      goto block_b_read_gpr_b_top_13_6;
    }
    else 
    {
      goto block_b_read_gpr_b_top_13_7;
    }
  }
  block_b_read_gpr_b_top_13_6: 
  {
    /* F s_b_read_gpr_b_top_13_6_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_13_6_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_13_6_2: temp_12 = s_b_read_gpr_b_top_13_6_1 (const), dominates: s_b_read_gpr_b_top_13_8_0 s_b_top_12_1 s_b_top_15_1  */
    CV_temp_12 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_12), Operand(PrimitiveTypes.u8, CV_temp_12));
    /* F s_b_read_gpr_b_top_13_6_3: Jump b_read_gpr_b_top_13_8 (const) */
    goto block_b_read_gpr_b_top_13_8;
  }
  block_b_read_gpr_b_top_13_7: 
  {
    /* F s_b_read_gpr_b_top_13_7_0=top__Qscope_0x331a670inst->rt(const) */
    /* D s_b_read_gpr_b_top_13_7_1 = ReadRegBank 0:s_b_read_gpr_b_top_13_7_0 (uint64) */
    Statement& s_b_read_gpr_b_top_13_7_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_13_7_1));
    }
    /* D s_b_read_gpr_b_top_13_7_2 = (uint64)s_b_read_gpr_b_top_13_7_1 */
    Statement& s_b_read_gpr_b_top_13_7_2 = s_b_read_gpr_b_top_13_7_1;
    /* D s_b_read_gpr_b_top_13_7_3: temp_12 = s_b_read_gpr_b_top_13_7_2, dominates: s_b_read_gpr_b_top_13_8_0 s_b_top_12_1 s_b_top_15_1  */
    builder.store(Operand(*ir_idx_temp_12), Operand(s_b_read_gpr_b_top_13_7_2));
    /* F s_b_read_gpr_b_top_13_7_4: Jump b_read_gpr_b_top_13_8 (const) */
    goto block_b_read_gpr_b_top_13_8;
  }
  block_b_read_gpr_b_top_13_8: 
  {
    /* D s_b_read_gpr_b_top_13_8_0 = temp_12 */
    /* F s_b_read_gpr_b_top_13_8_1: Free &temp_12 (8) */
    /* F s_b_read_gpr_b_top_13_8_2 = (const uint8) 1 (const) */
    /* F s_b_read_gpr_b_top_13_8_3=top__Qscope_0x331a670inst->rt2(const) */
    /* F s_b_read_gpr_b_top_13_8_4=top__Qscope_0x331a670inst->rt2(const) */
    /* F s_b_read_gpr_b_top_13_8_5 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_13_8_6 = s_b_read_gpr_b_top_13_8_4==s_b_read_gpr_b_top_13_8_5 (const) */
    uint8 s_b_read_gpr_b_top_13_8_6 = ((uint8)(rt2 == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_13_8_7: &temp_17 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_13_8_8: If s_b_read_gpr_b_top_13_8_6: Jump b_read_gpr_b_top_23_9 else b_read_gpr_b_top_23_10 (const) */
    if (s_b_read_gpr_b_top_13_8_6) 
    {
      goto block_b_read_gpr_b_top_23_9;
    }
    else 
    {
      goto block_b_read_gpr_b_top_23_10;
    }
  }
  block_b_read_gpr_b_top_23_9: 
  {
    /* F s_b_read_gpr_b_top_23_9_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_23_9_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_23_9_2: temp_17 = s_b_read_gpr_b_top_23_9_1 (const), dominates: s_b_read_gpr_b_top_23_11_0 s_b_top_12_7 s_b_top_15_6  */
    CV_temp_17 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_17), Operand(PrimitiveTypes.u8, CV_temp_17));
    /* F s_b_read_gpr_b_top_23_9_3: Jump b_read_gpr_b_top_23_11 (const) */
    goto block_b_read_gpr_b_top_23_11;
  }
  block_b_read_gpr_b_top_23_10: 
  {
    /* F s_b_read_gpr_b_top_23_10_0=top__Qscope_0x331a670inst->rt2(const) */
    /* D s_b_read_gpr_b_top_23_10_1 = ReadRegBank 0:s_b_read_gpr_b_top_23_10_0 (uint64) */
    Statement& s_b_read_gpr_b_top_23_10_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt2))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt2))),Operand(s_b_read_gpr_b_top_23_10_1));
    }
    /* D s_b_read_gpr_b_top_23_10_2 = (uint64)s_b_read_gpr_b_top_23_10_1 */
    Statement& s_b_read_gpr_b_top_23_10_2 = s_b_read_gpr_b_top_23_10_1;
    /* D s_b_read_gpr_b_top_23_10_3: temp_17 = s_b_read_gpr_b_top_23_10_2, dominates: s_b_read_gpr_b_top_23_11_0 s_b_top_12_7 s_b_top_15_6  */
    builder.store(Operand(*ir_idx_temp_17), Operand(s_b_read_gpr_b_top_23_10_2));
    /* F s_b_read_gpr_b_top_23_10_4: Jump b_read_gpr_b_top_23_11 (const) */
    goto block_b_read_gpr_b_top_23_11;
  }
  block_b_read_gpr_b_top_23_11: 
  {
    /* D s_b_read_gpr_b_top_23_11_0 = temp_17 */
    /* F s_b_read_gpr_b_top_23_11_1: Free &temp_17 (8) */
    /* F s_b_read_gpr_b_top_23_11_2=top__Qscope_0x331a670inst->opc(const) */
    /* F s_b_read_gpr_b_top_23_11_3 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_23_11_4 = s_b_read_gpr_b_top_23_11_2==s_b_read_gpr_b_top_23_11_3 (const) */
    uint8 s_b_read_gpr_b_top_23_11_4 = ((uint8)(opc == (uint8)0ULL));
    /* F s_b_read_gpr_b_top_23_11_5: If s_b_read_gpr_b_top_23_11_4: Jump b_top_12 else b_top_14 (const) */
    if (s_b_read_gpr_b_top_23_11_4) 
    {
      goto block_b_top_12;
    }
    else 
    {
      goto block_b_top_14;
    }
  }
  block_b_top_12: 
  {
    /* D s_b_top_12_0 = top__Qscope_0x331d9d0address */
    /* D s_b_top_12_1 = temp_12 */
    /* D s_b_top_12_2 = (uint32)s_b_top_12_1 */
    Statement& s_b_top_12_2 = builder.trunc(Operand(*ir_idx_temp_12));
    /* D s_b_top_12_3: Store 4 s_b_top_12_0 <= s_b_top_12_2 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(s_b_top_12_2));
    }
    Statement& s_b_top_12_3 = builder.stmem(Operand(s_b_top_12_2), Operand(*ir_idx_top__Qscope_0x331d9d0address));
    /* F s_b_top_12_4 = (const uint8) 4 (const) */
    /* F s_b_top_12_5 = (uint64) 4 (const) */
    /* D s_b_top_12_6 = s_b_top_12_0+s_b_top_12_5 */
    Statement& s_b_top_12_6 = builder.add(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(PrimitiveTypes.u64, (uint64)4ULL));
    /* D s_b_top_12_7 = temp_17 */
    /* D s_b_top_12_8 = (uint32)s_b_top_12_7 */
    Statement& s_b_top_12_8 = builder.trunc(Operand(*ir_idx_temp_17));
    /* D s_b_top_12_9: Store 4 s_b_top_12_6 <= s_b_top_12_8 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(s_b_top_12_6), Operand(s_b_top_12_8));
    }
    Statement& s_b_top_12_9 = builder.stmem(Operand(s_b_top_12_8), Operand(s_b_top_12_6));
    /* F s_b_top_12_10: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_top_13: 
  {
    /* F s_b_top_13_0=top__Qscope_0x331a670inst->P(const) */
    /* F s_b_top_13_1 = (const uint8) 0 (const) */
    /* F s_b_top_13_2 = s_b_top_13_1==s_b_top_13_0 (const) */
    uint8 s_b_top_13_2 = ((uint8)((uint8)0ULL == P));
    /* F s_b_top_13_3: If s_b_top_13_2: Jump b_top_17 else b_top_18 (const) */
    if (s_b_top_13_2) 
    {
      goto block_b_top_17;
    }
    else 
    {
      goto block_b_top_18;
    }
  }
  block_b_top_14: 
  {
    /* F s_b_top_14_0=top__Qscope_0x331a670inst->opc(const) */
    /* F s_b_top_14_1 = (const uint8) 2 (const) */
    /* F s_b_top_14_2 = s_b_top_14_0==s_b_top_14_1 (const) */
    uint8 s_b_top_14_2 = ((uint8)(opc == (uint8)2ULL));
    /* F s_b_top_14_3: If s_b_top_14_2: Jump b_top_15 else b_top_16 (const) */
    if (s_b_top_14_2) 
    {
      goto block_b_top_15;
    }
    else 
    {
      goto block_b_top_16;
    }
  }
  block_b_top_15: 
  {
    /* D s_b_top_15_0 = top__Qscope_0x331d9d0address */
    /* D s_b_top_15_1 = temp_12 */
    /* D s_b_top_15_2: Store 8 s_b_top_15_0 <= s_b_top_15_1 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(*ir_idx_temp_12));
    }
    Statement& s_b_top_15_2 = builder.stmem(Operand(*ir_idx_temp_12), Operand(*ir_idx_top__Qscope_0x331d9d0address));
    /* F s_b_top_15_3 = (const uint8) 8 (const) */
    /* F s_b_top_15_4 = (uint64) 8 (const) */
    /* D s_b_top_15_5 = s_b_top_15_0+s_b_top_15_4 */
    Statement& s_b_top_15_5 = builder.add(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(PrimitiveTypes.u64, (uint64)8ULL));
    /* D s_b_top_15_6 = temp_17 */
    /* D s_b_top_15_7: Store 8 s_b_top_15_5 <= s_b_top_15_6 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(s_b_top_15_5), Operand(*ir_idx_temp_17));
    }
    Statement& s_b_top_15_7 = builder.stmem(Operand(*ir_idx_temp_17), Operand(s_b_top_15_5));
    /* F s_b_top_15_8: Jump b_top_16 (const) */
    goto block_b_top_16;
  }
  block_b_top_16: 
  {
    /* F s_b_top_16_0: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_top_17: 
  {
    /* D s_b_top_17_0 = top__Qscope_0x331d9d0address */
    /* F s_b_top_17_1=top__Qscope_0x331a670inst->immu64(const) */
    /* D s_b_top_17_2 = s_b_top_17_0+s_b_top_17_1 */
    Statement& s_b_top_17_2 = builder.add(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(PrimitiveTypes.u64, immu64));
    /* D s_b_top_17_3: top__Qscope_0x331d9d0address = s_b_top_17_2, dominates: s_b_top_18_2 s_b_write_gpr_b_top_40_21_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(s_b_top_17_2));
    /* F s_b_top_17_4: Jump b_top_18 (const) */
    goto block_b_top_18;
  }
  block_b_top_18: 
  {
    /* F s_b_top_18_0 = (const uint8) 1 (const) */
    /* F s_b_top_18_1=top__Qscope_0x331a670inst->rn(const) */
    /* D s_b_top_18_2 = top__Qscope_0x331d9d0address */
    /* F s_b_top_18_3 = (const uint8) 1f (const) */
    /* F s_b_top_18_4 = s_b_top_18_1==s_b_top_18_3 (const) */
    uint8 s_b_top_18_4 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_top_18_5: If s_b_top_18_4: Jump b_write_gpr_b_top_40_20 else b_write_gpr_b_top_40_21 (const) */
    if (s_b_top_18_4) 
    {
      goto block_b_write_gpr_b_top_40_20;
    }
    else 
    {
      goto block_b_write_gpr_b_top_40_21;
    }
  }
  block_b_top_19: 
  {
    /* F s_b_top_19_0: Free &top__Qscope_0x331d9d0address (8) */
    /* F s_b_top_19_1: Return */
    goto fixed_done;
  }
  block_b_write_gpr_b_top_40_20: 
  {
    /* F s_b_write_gpr_b_top_40_20_0: Jump b_top_19 (const) */
    goto block_b_top_19;
  }
  block_b_write_gpr_b_top_40_21: 
  {
    /* F s_b_write_gpr_b_top_40_21_0 = (const uint8) 1 (const) */
    /* F s_b_write_gpr_b_top_40_21_1=top__Qscope_0x331a670inst->rn(const) */
    /* D s_b_write_gpr_b_top_40_21_2 = top__Qscope_0x331d9d0address */
    /* D s_b_write_gpr_b_top_40_21_3: WriteRegBank 0:s_b_write_gpr_b_top_40_21_1 = s_b_write_gpr_b_top_40_21_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(*ir_idx_top__Qscope_0x331d9d0address));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x331d9d0address), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    /* F s_b_write_gpr_b_top_40_21_4: Jump b_top_19 (const) */
    goto block_b_top_19;
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
bool aarch64_insn_strhi::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_sub_ereg::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_umsubl::translate(vrt::dbt::ir::Builder& builder) const
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
