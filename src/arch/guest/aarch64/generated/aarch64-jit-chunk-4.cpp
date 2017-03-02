#include "aarch64-jit.h"
#include <vrt/util/list.h>
#include <vrt/util/set.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::dbt::ir;
using namespace vrt::util;
bool aarch64_insn_adr::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  sint64 CV_top__Qscope_0x3253220base;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3253220base = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Block b_top_2
  // Reg s_b_top_2_6
  uint64 CV_write_gpr_b_top_3__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_3__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_3
  // Block b_write_gpr_b_top_3_4
  // Block b_write_gpr_b_top_3_5
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x3253220base = Alloc sint64 */
    /* D s_b_0_1 = ReadReg 2 (uint64) */
    Statement& s_b_0_1 = builder.ldreg(Operand(PrimitiveTypes.u32, 256));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 256), Operand(s_b_0_1));
    }
    /* D s_b_0_2 = (sint64)s_b_0_1 */
    Statement& s_b_0_2 = s_b_0_1;
    /* D s_b_0_3: top__Qscope_0x3253220base = s_b_0_2, dominates: s_b_top_1_0 s_b_top_2_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3253220base), Operand(s_b_0_2));
    /* F s_b_0_4=top__Qscope_0x3253030inst->op(const) */
    /* F s_b_0_5 = (const uint8) 1 (const) */
    /* F s_b_0_6 = s_b_0_4==s_b_0_5 (const) */
    uint8 s_b_0_6 = ((uint8)(op == (uint8)1ULL));
    /* F s_b_0_7: If s_b_0_6: Jump b_top_1 else b_top_2 (const) */
    if (s_b_0_6) 
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
    /* D s_b_top_1_0 = top__Qscope_0x3253220base */
    /* F s_b_top_1_1 = (const uint16) fff (const) */
    /* F s_b_top_1_2 = (uint64) fff (const) */
    /* F s_b_top_1_3 = ?s_b_top_1_2 (const) */
    uint64 s_b_top_1_3 = ~(uint64)4095ULL;
    /* F s_b_top_1_4 = (sint64)s_b_top_1_3 (const) */
    /* D s_b_top_1_5 = s_b_top_1_0&s_b_top_1_4 */
    Statement& s_b_top_1_5 = builder.band(Operand(*ir_idx_top__Qscope_0x3253220base), Operand(PrimitiveTypes.s64, ((sint64)s_b_top_1_3)));
    /* D s_b_top_1_6: top__Qscope_0x3253220base = s_b_top_1_5, dominates: s_b_top_2_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3253220base), Operand(s_b_top_1_5));
    /* F s_b_top_1_7: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_top_2: 
  {
    /* F s_b_top_2_0 = (const uint8) 1 (const) */
    /* F s_b_top_2_1=top__Qscope_0x3253030inst->rd(const) */
    /* D s_b_top_2_2 = top__Qscope_0x3253220base */
    /* F s_b_top_2_3=top__Qscope_0x3253030inst->imms64(const) */
    /* D s_b_top_2_4 = s_b_top_2_2+s_b_top_2_3 */
    Statement& s_b_top_2_4 = builder.add(Operand(*ir_idx_top__Qscope_0x3253220base), Operand(PrimitiveTypes.s64, imms64));
    /* D s_b_top_2_5 = (uint64)s_b_top_2_4 */
    Statement& s_b_top_2_5 = s_b_top_2_4;
    /* F s_b_top_2_6: &write_gpr_b_top_3__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_2_7: write_gpr_b_top_3__Qscope_0x33bbb30value = s_b_top_2_5, dominates: s_b_write_gpr_b_top_3_5_2  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_3__Qscope_0x33bbb30value), Operand(s_b_top_2_5));
    /* F s_b_top_2_8 = (const uint8) 1f (const) */
    /* F s_b_top_2_9 = s_b_top_2_1==s_b_top_2_8 (const) */
    uint8 s_b_top_2_9 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_2_10: If s_b_top_2_9: Jump b_write_gpr_b_top_3_4 else b_write_gpr_b_top_3_5 (const) */
    if (s_b_top_2_9) 
    {
      goto block_b_write_gpr_b_top_3_4;
    }
    else 
    {
      goto block_b_write_gpr_b_top_3_5;
    }
  }
  block_b_top_3: 
  {
    /* F s_b_top_3_0: Free &write_gpr_b_top_3__Qscope_0x33bbb30value (8) */
    /* F s_b_top_3_1: Free &top__Qscope_0x3253220base (8) */
    /* F s_b_top_3_2: Return */
    goto fixed_done;
  }
  block_b_write_gpr_b_top_3_4: 
  {
    /* F s_b_write_gpr_b_top_3_4_0: Jump b_top_3 (const) */
    goto block_b_top_3;
  }
  block_b_write_gpr_b_top_3_5: 
  {
    /* F s_b_write_gpr_b_top_3_5_0 = (const uint8) 1 (const) */
    /* F s_b_write_gpr_b_top_3_5_1=top__Qscope_0x3253030inst->rd(const) */
    /* D s_b_write_gpr_b_top_3_5_2 = write_gpr_b_top_3__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_3_5_3: WriteRegBank 0:s_b_write_gpr_b_top_3_5_1 = s_b_write_gpr_b_top_3_5_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_3__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_3__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_3_5_4: Jump b_top_3 (const) */
    goto block_b_top_3;
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
bool aarch64_insn_bicsr::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x3397e80result;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3397e80result = &builder.alloc(PrimitiveTypes.u64);
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
  // Reg s_b_top_10_8
  uint64 CV_write_gpr_b_top_69__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
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
  // Block b_write_gpr_b_top_69_64
  // Block b_write_gpr_b_top_69_65
  // Block b_write_gpr_b_top_69_66
  // Block b_write_gpr_b_top_69_67
  // Block b_write_gpr_b_top_69_68
  // Block b_top_69
  // Block b_top_70
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x3397e80result = Alloc uint64 */
    /* F s_b_0_1=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_0_2=top__Qscope_0x3397c90inst->rn(const) */
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
    /* F s_b_top_1_2=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_top_1_3=top__Qscope_0x3397c90inst->rm(const) */
    /* F s_b_top_1_4=top__Qscope_0x3397c90inst->shift(const) */
    /* F s_b_top_1_5=top__Qscope_0x3397c90inst->imm6(const) */
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
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x3397c90inst->rn(const) */
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
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x3397c90inst->rn(const) */
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
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x3397c90inst->rn(const) */
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
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0 s_b_top_10_2  */
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
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x3397c90inst->rn(const) */
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
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0 s_b_top_10_2  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_8));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* D s_b_top_10_0 = shift_reg_b_top_11_0r */
    /* F s_b_top_10_1: Free &shift_reg_b_top_11_0r (8) */
    /* D s_b_top_10_2 = read_gpr_b_top_1_0r */
    /* D s_b_top_10_3 = ?s_b_top_10_0 */
    Statement& s_b_top_10_3 = builder.bnot(Operand(*ir_idx_shift_reg_b_top_11_0r));
    /* D s_b_top_10_4 = s_b_top_10_2&s_b_top_10_3 */
    Statement& s_b_top_10_4 = builder.band(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(s_b_top_10_3));
    /* D s_b_top_10_5: top__Qscope_0x3397e80result = s_b_top_10_4, dominates: s_b_top_69_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3397e80result), Operand(s_b_top_10_4));
    /* F s_b_top_10_6=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_top_10_7=top__Qscope_0x3397c90inst->rd(const) */
    /* F s_b_top_10_8: &write_gpr_b_top_69__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_10_9: write_gpr_b_top_69__Qscope_0x33bbb30value = s_b_top_10_4, dominates: s_b_write_gpr_b_top_69_66_1 s_b_write_gpr_b_top_69_68_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value), Operand(s_b_top_10_4));
    /* F s_b_top_10_10 = (const uint8) 1f (const) */
    /* F s_b_top_10_11 = s_b_top_10_7==s_b_top_10_10 (const) */
    uint8 s_b_top_10_11 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_10_12: If s_b_top_10_11: Jump b_write_gpr_b_top_69_64 else b_write_gpr_b_top_69_65 (const) */
    if (s_b_top_10_11) 
    {
      goto block_b_write_gpr_b_top_69_64;
    }
    else 
    {
      goto block_b_write_gpr_b_top_69_65;
    }
  }
  block_b_shift_reg_b_top_11_11: 
  {
    /* F s_b_shift_reg_b_top_11_11_0=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_11_1=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_12_0=top__Qscope_0x3397c90inst->shift(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_17_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_20_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_23_0=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_23_1=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_24_2=top__Qscope_0x3397c90inst->imm6(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_28_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_31_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_33_0=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_33_1=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_34_2=top__Qscope_0x3397c90inst->imm6(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_38_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_41_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_43_0=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_43_1=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_44_2=top__Qscope_0x3397c90inst->imm6(const) */
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
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_53_0=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_53_1=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_shift_reg_b_top_11_54_2=top__Qscope_0x3397c90inst->imm6(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_58_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_61_0=top__Qscope_0x3397c90inst->rm(const) */
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
    /* F s_b_top_63_0: Free &write_gpr_b_top_69__Qscope_0x33bbb30value (8) */
    /* F s_b_top_63_1=top__Qscope_0x3397c90inst->opc(const) */
    /* F s_b_top_63_2 = (const uint8) 3 (const) */
    /* F s_b_top_63_3 = s_b_top_63_1==s_b_top_63_2 (const) */
    uint8 s_b_top_63_3 = ((uint8)(opc == (uint8)3ULL));
    /* F s_b_top_63_4: If s_b_top_63_3: Jump b_top_69 else b_top_70 (const) */
    if (s_b_top_63_3) 
    {
      goto block_b_top_69;
    }
    else 
    {
      goto block_b_top_70;
    }
  }
  block_b_write_gpr_b_top_69_64: 
  {
    /* F s_b_write_gpr_b_top_69_64_0: Jump b_top_63 (const) */
    goto block_b_top_63;
  }
  block_b_write_gpr_b_top_69_65: 
  {
    /* F s_b_write_gpr_b_top_69_65_0=top__Qscope_0x3397c90inst->sf(const) */
    /* F s_b_write_gpr_b_top_69_65_1: If s_b_write_gpr_b_top_69_65_0: Jump b_write_gpr_b_top_69_66 else b_write_gpr_b_top_69_68 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_69_66;
    }
    else 
    {
      goto block_b_write_gpr_b_top_69_68;
    }
  }
  block_b_write_gpr_b_top_69_66: 
  {
    /* F s_b_write_gpr_b_top_69_66_0=top__Qscope_0x3397c90inst->rd(const) */
    /* D s_b_write_gpr_b_top_69_66_1 = write_gpr_b_top_69__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_69_66_2: WriteRegBank 0:s_b_write_gpr_b_top_69_66_0 = s_b_write_gpr_b_top_69_66_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_69_66_3: Jump b_write_gpr_b_top_69_67 (const) */
    goto block_b_write_gpr_b_top_69_67;
  }
  block_b_write_gpr_b_top_69_67: 
  {
    /* F s_b_write_gpr_b_top_69_67_0: Jump b_top_63 (const) */
    goto block_b_top_63;
  }
  block_b_write_gpr_b_top_69_68: 
  {
    /* F s_b_write_gpr_b_top_69_68_0=top__Qscope_0x3397c90inst->rd(const) */
    /* D s_b_write_gpr_b_top_69_68_1 = write_gpr_b_top_69__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_69_68_2 = (uint32)s_b_write_gpr_b_top_69_68_1 */
    Statement& s_b_write_gpr_b_top_69_68_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_69_68_3 = (uint64)s_b_write_gpr_b_top_69_68_2 */
    Statement& s_b_write_gpr_b_top_69_68_3 = builder.zx(Operand(s_b_write_gpr_b_top_69_68_2));
    /* D s_b_write_gpr_b_top_69_68_4: WriteRegBank 0:s_b_write_gpr_b_top_69_68_0 = s_b_write_gpr_b_top_69_68_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_69_68_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_69_68_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_69_68_5: Jump b_write_gpr_b_top_69_67 (const) */
    goto block_b_write_gpr_b_top_69_67;
  }
  block_b_top_69: 
  {
    /* D s_b_top_69_0 = top__Qscope_0x3397e80result */
    /* D s_b_top_69_1 = [unknown intrinsic 39] */
    Statement& s_b_top_69_1 = builder.update_zn(Operand(*ir_idx_top__Qscope_0x3397e80result));
    /* F s_b_top_69_2 = (const uint8) 0 (const) */
    /* F s_b_top_69_3: WriteReg 5 = s_b_top_69_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 266), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    }
    builder.streg(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(PrimitiveTypes.u32, 266));
    /* F s_b_top_69_4 = (const uint8) 0 (const) */
    /* F s_b_top_69_5: WriteReg 6 = s_b_top_69_4 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 267), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    }
    builder.streg(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(PrimitiveTypes.u32, 267));
    /* F s_b_top_69_6: Jump b_top_70 (const) */
    goto block_b_top_70;
  }
  block_b_top_70: 
  {
    /* F s_b_top_70_0: Free &top__Qscope_0x3397e80result (8) */
    /* F s_b_top_70_1: Return */
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
bool aarch64_insn_clz::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_eori::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldpsw::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldrh::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldtr::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_lslv::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_4
  uint64 CV_read_gpr_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Reg s_b_top_1_4
  uint64 CV_read_gpr_b_top_11_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_11_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_2
  // Reg s_b_read_gpr_b_top_1_2_3
  uint64 CV_temp_4;
  vrt::dbt::ir::Statement *ir_idx_temp_4 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_3
  uint64 CV_temp_5;
  vrt::dbt::ir::Statement *ir_idx_temp_5 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_4
  // Block b_read_gpr_b_top_1_5
  // Block b_read_gpr_b_top_1_6
  // Block b_read_gpr_b_top_1_7
  // Block b_read_gpr_b_top_1_8
  // Block b_read_gpr_b_top_1_9
  // Block b_top_10
  // Reg s_b_top_10_9
  uint64 CV_write_gpr_b_top_21__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_11
  // Reg s_b_read_gpr_b_top_11_11_3
  uint64 CV_temp_9;
  vrt::dbt::ir::Statement *ir_idx_temp_9 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_12
  // Reg s_b_read_gpr_b_top_11_12_3
  uint64 CV_temp_10;
  vrt::dbt::ir::Statement *ir_idx_temp_10 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_13
  // Block b_read_gpr_b_top_11_14
  // Block b_read_gpr_b_top_11_15
  // Block b_read_gpr_b_top_11_16
  // Block b_read_gpr_b_top_11_17
  // Block b_read_gpr_b_top_11_18
  // Block b_top_19
  // Block b_write_gpr_b_top_21_20
  // Block b_write_gpr_b_top_21_21
  // Block b_write_gpr_b_top_21_22
  // Block b_write_gpr_b_top_21_23
  // Block b_write_gpr_b_top_21_24
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x3368030inst->sf(const) */
    /* F s_b_0_1=top__Qscope_0x3368030inst->rd(const) */
    /* F s_b_0_2=top__Qscope_0x3368030inst->sf(const) */
    /* F s_b_0_3=top__Qscope_0x3368030inst->rn(const) */
    /* F s_b_0_4: &read_gpr_b_top_1_0r = Alloc uint64 */
    /* F s_b_0_5: If s_b_0_2: Jump b_read_gpr_b_top_1_2 else b_read_gpr_b_top_1_3 (const) */
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
    /* F s_b_top_1_2=top__Qscope_0x3368030inst->sf(const) */
    /* F s_b_top_1_3=top__Qscope_0x3368030inst->rm(const) */
    /* F s_b_top_1_4: &read_gpr_b_top_11_0r = Alloc uint64 */
    /* F s_b_top_1_5: If s_b_top_1_2: Jump b_read_gpr_b_top_11_11 else b_read_gpr_b_top_11_12 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_11_11;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_12;
    }
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x3368030inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_2_3: &temp_4 = Alloc uint64 */
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
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x3368030inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_3_3: &temp_5 = Alloc uint64 */
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
    /* F s_b_read_gpr_b_top_1_4_2: temp_4 = s_b_read_gpr_b_top_1_4_1 (const), dominates: s_b_read_gpr_b_top_1_6_0  */
    CV_temp_4 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_4), Operand(PrimitiveTypes.u8, CV_temp_4));
    /* F s_b_read_gpr_b_top_1_4_3: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_5: 
  {
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x3368030inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_5_1));
    }
    /* D s_b_read_gpr_b_top_1_5_2 = (uint64)s_b_read_gpr_b_top_1_5_1 */
    Statement& s_b_read_gpr_b_top_1_5_2 = s_b_read_gpr_b_top_1_5_1;
    /* D s_b_read_gpr_b_top_1_5_3: temp_4 = s_b_read_gpr_b_top_1_5_2, dominates: s_b_read_gpr_b_top_1_6_0  */
    builder.store(Operand(*ir_idx_temp_4), Operand(s_b_read_gpr_b_top_1_5_2));
    /* F s_b_read_gpr_b_top_1_5_4: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_6: 
  {
    /* D s_b_read_gpr_b_top_1_6_0 = temp_4 */
    /* F s_b_read_gpr_b_top_1_6_1: Free &temp_4 (8) */
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0 s_b_top_10_5  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_4));
    /* F s_b_read_gpr_b_top_1_6_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_b_top_1_7: 
  {
    /* F s_b_read_gpr_b_top_1_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_2: temp_5 = s_b_read_gpr_b_top_1_7_1 (const), dominates: s_b_read_gpr_b_top_1_9_0  */
    CV_temp_5 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u8, CV_temp_5));
    /* F s_b_read_gpr_b_top_1_7_3: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_8: 
  {
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x3368030inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_8_1));
    }
    /* D s_b_read_gpr_b_top_1_8_2 = (uint64)s_b_read_gpr_b_top_1_8_1 */
    Statement& s_b_read_gpr_b_top_1_8_2 = builder.zx(Operand(s_b_read_gpr_b_top_1_8_1));
    /* D s_b_read_gpr_b_top_1_8_3: temp_5 = s_b_read_gpr_b_top_1_8_2, dominates: s_b_read_gpr_b_top_1_9_0  */
    builder.store(Operand(*ir_idx_temp_5), Operand(s_b_read_gpr_b_top_1_8_2));
    /* F s_b_read_gpr_b_top_1_8_4: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_9: 
  {
    /* D s_b_read_gpr_b_top_1_9_0 = temp_5 */
    /* F s_b_read_gpr_b_top_1_9_1: Free &temp_5 (8) */
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0 s_b_top_10_5  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_5));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* D s_b_top_10_0 = read_gpr_b_top_11_0r */
    /* F s_b_top_10_1: Free &read_gpr_b_top_11_0r (8) */
    /* F s_b_top_10_2 = (const uint8) 3f (const) */
    /* F s_b_top_10_3 = (uint64) 3f (const) */
    /* D s_b_top_10_4 = s_b_top_10_0&s_b_top_10_3 */
    Statement& s_b_top_10_4 = builder.band(Operand(*ir_idx_read_gpr_b_top_11_0r), Operand(PrimitiveTypes.u64, (uint64)63ULL));
    /* D s_b_top_10_5 = read_gpr_b_top_1_0r */
    /* D s_b_top_10_6 = s_b_top_10_5<<s_b_top_10_4 */
    Statement& s_b_top_10_6 = builder.shl(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(s_b_top_10_4));
    /* F s_b_top_10_7=top__Qscope_0x3368030inst->sf(const) */
    /* F s_b_top_10_8=top__Qscope_0x3368030inst->rd(const) */
    /* F s_b_top_10_9: &write_gpr_b_top_21__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_10_10: write_gpr_b_top_21__Qscope_0x33bbb30value = s_b_top_10_6, dominates: s_b_write_gpr_b_top_21_22_1 s_b_write_gpr_b_top_21_24_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value), Operand(s_b_top_10_6));
    /* F s_b_top_10_11 = (const uint8) 1f (const) */
    /* F s_b_top_10_12 = s_b_top_10_8==s_b_top_10_11 (const) */
    uint8 s_b_top_10_12 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_10_13: If s_b_top_10_12: Jump b_write_gpr_b_top_21_20 else b_write_gpr_b_top_21_21 (const) */
    if (s_b_top_10_12) 
    {
      goto block_b_write_gpr_b_top_21_20;
    }
    else 
    {
      goto block_b_write_gpr_b_top_21_21;
    }
  }
  block_b_read_gpr_b_top_11_11: 
  {
    /* F s_b_read_gpr_b_top_11_11_0=top__Qscope_0x3368030inst->rm(const) */
    /* F s_b_read_gpr_b_top_11_11_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_11_11_2 = s_b_read_gpr_b_top_11_11_0==s_b_read_gpr_b_top_11_11_1 (const) */
    uint8 s_b_read_gpr_b_top_11_11_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_11_11_3: &temp_9 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_11_11_4: If s_b_read_gpr_b_top_11_11_2: Jump b_read_gpr_b_top_11_13 else b_read_gpr_b_top_11_14 (const) */
    if (s_b_read_gpr_b_top_11_11_2) 
    {
      goto block_b_read_gpr_b_top_11_13;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_14;
    }
  }
  block_b_read_gpr_b_top_11_12: 
  {
    /* F s_b_read_gpr_b_top_11_12_0=top__Qscope_0x3368030inst->rm(const) */
    /* F s_b_read_gpr_b_top_11_12_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_11_12_2 = s_b_read_gpr_b_top_11_12_0==s_b_read_gpr_b_top_11_12_1 (const) */
    uint8 s_b_read_gpr_b_top_11_12_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_11_12_3: &temp_10 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_11_12_4: If s_b_read_gpr_b_top_11_12_2: Jump b_read_gpr_b_top_11_16 else b_read_gpr_b_top_11_17 (const) */
    if (s_b_read_gpr_b_top_11_12_2) 
    {
      goto block_b_read_gpr_b_top_11_16;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_17;
    }
  }
  block_b_read_gpr_b_top_11_13: 
  {
    /* F s_b_read_gpr_b_top_11_13_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_11_13_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_11_13_2: temp_9 = s_b_read_gpr_b_top_11_13_1 (const), dominates: s_b_read_gpr_b_top_11_15_0  */
    CV_temp_9 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_9), Operand(PrimitiveTypes.u8, CV_temp_9));
    /* F s_b_read_gpr_b_top_11_13_3: Jump b_read_gpr_b_top_11_15 (const) */
    goto block_b_read_gpr_b_top_11_15;
  }
  block_b_read_gpr_b_top_11_14: 
  {
    /* F s_b_read_gpr_b_top_11_14_0=top__Qscope_0x3368030inst->rm(const) */
    /* D s_b_read_gpr_b_top_11_14_1 = ReadRegBank 0:s_b_read_gpr_b_top_11_14_0 (uint64) */
    Statement& s_b_read_gpr_b_top_11_14_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_top_11_14_1));
    }
    /* D s_b_read_gpr_b_top_11_14_2 = (uint64)s_b_read_gpr_b_top_11_14_1 */
    Statement& s_b_read_gpr_b_top_11_14_2 = s_b_read_gpr_b_top_11_14_1;
    /* D s_b_read_gpr_b_top_11_14_3: temp_9 = s_b_read_gpr_b_top_11_14_2, dominates: s_b_read_gpr_b_top_11_15_0  */
    builder.store(Operand(*ir_idx_temp_9), Operand(s_b_read_gpr_b_top_11_14_2));
    /* F s_b_read_gpr_b_top_11_14_4: Jump b_read_gpr_b_top_11_15 (const) */
    goto block_b_read_gpr_b_top_11_15;
  }
  block_b_read_gpr_b_top_11_15: 
  {
    /* D s_b_read_gpr_b_top_11_15_0 = temp_9 */
    /* F s_b_read_gpr_b_top_11_15_1: Free &temp_9 (8) */
    /* D s_b_read_gpr_b_top_11_15_2: read_gpr_b_top_11_0r = s_b_read_gpr_b_top_11_15_0, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_11_0r), Operand(*ir_idx_temp_9));
    /* F s_b_read_gpr_b_top_11_15_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_top_11_16: 
  {
    /* F s_b_read_gpr_b_top_11_16_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_11_16_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_11_16_2: temp_10 = s_b_read_gpr_b_top_11_16_1 (const), dominates: s_b_read_gpr_b_top_11_18_0  */
    CV_temp_10 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_10), Operand(PrimitiveTypes.u8, CV_temp_10));
    /* F s_b_read_gpr_b_top_11_16_3: Jump b_read_gpr_b_top_11_18 (const) */
    goto block_b_read_gpr_b_top_11_18;
  }
  block_b_read_gpr_b_top_11_17: 
  {
    /* F s_b_read_gpr_b_top_11_17_0=top__Qscope_0x3368030inst->rm(const) */
    /* D s_b_read_gpr_b_top_11_17_1 = ReadRegBank 1:s_b_read_gpr_b_top_11_17_0 (uint32) */
    Statement& s_b_read_gpr_b_top_11_17_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_top_11_17_1));
    }
    /* D s_b_read_gpr_b_top_11_17_2 = (uint64)s_b_read_gpr_b_top_11_17_1 */
    Statement& s_b_read_gpr_b_top_11_17_2 = builder.zx(Operand(s_b_read_gpr_b_top_11_17_1));
    /* D s_b_read_gpr_b_top_11_17_3: temp_10 = s_b_read_gpr_b_top_11_17_2, dominates: s_b_read_gpr_b_top_11_18_0  */
    builder.store(Operand(*ir_idx_temp_10), Operand(s_b_read_gpr_b_top_11_17_2));
    /* F s_b_read_gpr_b_top_11_17_4: Jump b_read_gpr_b_top_11_18 (const) */
    goto block_b_read_gpr_b_top_11_18;
  }
  block_b_read_gpr_b_top_11_18: 
  {
    /* D s_b_read_gpr_b_top_11_18_0 = temp_10 */
    /* F s_b_read_gpr_b_top_11_18_1: Free &temp_10 (8) */
    /* D s_b_read_gpr_b_top_11_18_2: read_gpr_b_top_11_0r = s_b_read_gpr_b_top_11_18_0, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_11_0r), Operand(*ir_idx_temp_10));
    /* F s_b_read_gpr_b_top_11_18_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_top_19: 
  {
    /* F s_b_top_19_0: Free &write_gpr_b_top_21__Qscope_0x33bbb30value (8) */
    /* F s_b_top_19_1: Return */
    goto fixed_done;
  }
  block_b_write_gpr_b_top_21_20: 
  {
    /* F s_b_write_gpr_b_top_21_20_0: Jump b_top_19 (const) */
    goto block_b_top_19;
  }
  block_b_write_gpr_b_top_21_21: 
  {
    /* F s_b_write_gpr_b_top_21_21_0=top__Qscope_0x3368030inst->sf(const) */
    /* F s_b_write_gpr_b_top_21_21_1: If s_b_write_gpr_b_top_21_21_0: Jump b_write_gpr_b_top_21_22 else b_write_gpr_b_top_21_24 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_21_22;
    }
    else 
    {
      goto block_b_write_gpr_b_top_21_24;
    }
  }
  block_b_write_gpr_b_top_21_22: 
  {
    /* F s_b_write_gpr_b_top_21_22_0=top__Qscope_0x3368030inst->rd(const) */
    /* D s_b_write_gpr_b_top_21_22_1 = write_gpr_b_top_21__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_21_22_2: WriteRegBank 0:s_b_write_gpr_b_top_21_22_0 = s_b_write_gpr_b_top_21_22_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_21_22_3: Jump b_write_gpr_b_top_21_23 (const) */
    goto block_b_write_gpr_b_top_21_23;
  }
  block_b_write_gpr_b_top_21_23: 
  {
    /* F s_b_write_gpr_b_top_21_23_0: Jump b_top_19 (const) */
    goto block_b_top_19;
  }
  block_b_write_gpr_b_top_21_24: 
  {
    /* F s_b_write_gpr_b_top_21_24_0=top__Qscope_0x3368030inst->rd(const) */
    /* D s_b_write_gpr_b_top_21_24_1 = write_gpr_b_top_21__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_21_24_2 = (uint32)s_b_write_gpr_b_top_21_24_1 */
    Statement& s_b_write_gpr_b_top_21_24_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_21_24_3 = (uint64)s_b_write_gpr_b_top_21_24_2 */
    Statement& s_b_write_gpr_b_top_21_24_3 = builder.zx(Operand(s_b_write_gpr_b_top_21_24_2));
    /* D s_b_write_gpr_b_top_21_24_4: WriteRegBank 0:s_b_write_gpr_b_top_21_24_0 = s_b_write_gpr_b_top_21_24_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_21_24_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_21_24_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_21_24_5: Jump b_write_gpr_b_top_21_23 (const) */
    goto block_b_write_gpr_b_top_21_23;
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
bool aarch64_insn_msr_imm::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_3
  uint8 CV_temp_1;
  vrt::dbt::ir::Statement *ir_idx_temp_1 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_1
  // Block b_top_2
  // Block b_top_3
  // Block b_top_4
  // Block b_top_5
  // Reg s_b_top_5_3
  uint8 CV_temp_2;
  vrt::dbt::ir::Statement *ir_idx_temp_2 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_6
  // Block b_top_7
  // Block b_top_8
  // Block b_top_9
  // Block b_top_10
  // Reg s_b_top_10_3
  uint8 CV_temp_3;
  vrt::dbt::ir::Statement *ir_idx_temp_3 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_11
  // Block b_top_12
  // Block b_top_13
  // Block b_top_14
  // Block b_top_15
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x325dce0inst->op1(const) */
    /* F s_b_0_1 = (const uint8) 0 (const) */
    /* F s_b_0_2 = s_b_0_0==s_b_0_1 (const) */
    uint8 s_b_0_2 = ((uint8)(op1 == (uint8)0ULL));
    /* F s_b_0_3: &temp_1 = Alloc uint8 */
    /* F s_b_0_4: temp_1 = s_b_0_2 (const), dominates: s_b_top_1_0  */
    CV_temp_1 = s_b_0_2;
    /* F s_b_0_5: If s_b_0_2: Jump b_top_2 else b_top_1 (const) */
    if (s_b_0_2) 
    {
      goto block_b_top_2;
    }
    else 
    {
      goto block_b_top_1;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0 = temp_1 (const) */
    /* F s_b_top_1_1: Free &temp_1 (1) */
    /* F s_b_top_1_2: If s_b_top_1_0: Jump b_top_3 else b_top_5 (const) */
    if (CV_temp_1) 
    {
      goto block_b_top_3;
    }
    else 
    {
      goto block_b_top_5;
    }
  }
  block_b_top_2: 
  {
    /* F s_b_top_2_0=top__Qscope_0x325dce0inst->op2(const) */
    /* F s_b_top_2_1 = (const uint8) 5 (const) */
    /* F s_b_top_2_2 = s_b_top_2_0==s_b_top_2_1 (const) */
    uint8 s_b_top_2_2 = ((uint8)(op2 == (uint8)5ULL));
    /* F s_b_top_2_3: temp_1 = s_b_top_2_2 (const), dominates: s_b_top_1_0  */
    CV_temp_1 = s_b_top_2_2;
    /* F s_b_top_2_4: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_3: 
  {
    /* F s_b_top_3_0: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_top_4: 
  {
    /* F s_b_top_4_0: Return */
    goto fixed_done;
  }
  block_b_top_5: 
  {
    /* F s_b_top_5_0=top__Qscope_0x325dce0inst->op1(const) */
    /* F s_b_top_5_1 = (const uint8) 3 (const) */
    /* F s_b_top_5_2 = s_b_top_5_0==s_b_top_5_1 (const) */
    uint8 s_b_top_5_2 = ((uint8)(op1 == (uint8)3ULL));
    /* F s_b_top_5_3: &temp_2 = Alloc uint8 */
    /* F s_b_top_5_4: temp_2 = s_b_top_5_2 (const), dominates: s_b_top_6_0  */
    CV_temp_2 = s_b_top_5_2;
    /* F s_b_top_5_5: If s_b_top_5_2: Jump b_top_7 else b_top_6 (const) */
    if (s_b_top_5_2) 
    {
      goto block_b_top_7;
    }
    else 
    {
      goto block_b_top_6;
    }
  }
  block_b_top_6: 
  {
    /* F s_b_top_6_0 = temp_2 (const) */
    /* F s_b_top_6_1: Free &temp_2 (1) */
    /* F s_b_top_6_2: If s_b_top_6_0: Jump b_top_8 else b_top_10 (const) */
    if (CV_temp_2) 
    {
      goto block_b_top_8;
    }
    else 
    {
      goto block_b_top_10;
    }
  }
  block_b_top_7: 
  {
    /* F s_b_top_7_0=top__Qscope_0x325dce0inst->op2(const) */
    /* F s_b_top_7_1 = (const uint8) 6 (const) */
    /* F s_b_top_7_2 = s_b_top_7_0==s_b_top_7_1 (const) */
    uint8 s_b_top_7_2 = ((uint8)(op2 == (uint8)6ULL));
    /* F s_b_top_7_3: temp_2 = s_b_top_7_2 (const), dominates: s_b_top_6_0  */
    CV_temp_2 = s_b_top_7_2;
    /* F s_b_top_7_4: Jump b_top_6 (const) */
    goto block_b_top_6;
  }
  block_b_top_8: 
  {
    /* D s_b_top_8_0 = ReadReg 7 (uint8) */
    Statement& s_b_top_8_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 268));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 268), Operand(s_b_top_8_0));
    }
    /* F s_b_top_8_1=top__Qscope_0x325dce0inst->crm(const) */
    /* F s_b_top_8_2 = (const uint8) 8 (const) */
    /* F s_b_top_8_3 = s_b_top_8_1&s_b_top_8_2 (const) */
    uint8 s_b_top_8_3 = ((uint8)(crm & (uint8)8ULL));
    /* F s_b_top_8_4 = (const uint8) 8 (const) */
    /* F s_b_top_8_5 = s_b_top_8_3==s_b_top_8_4 (const) */
    uint8 s_b_top_8_5 = ((uint8)(s_b_top_8_3 == (uint8)8ULL));
    /* D s_b_top_8_6 = s_b_top_8_0|s_b_top_8_5 */
    Statement& s_b_top_8_6 = builder.bor(Operand(s_b_top_8_0), Operand(PrimitiveTypes.u8, s_b_top_8_5));
    /* D s_b_top_8_7: WriteReg 7 = s_b_top_8_6 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 268), Operand(s_b_top_8_6));
    }
    builder.streg(Operand(s_b_top_8_6), Operand(PrimitiveTypes.u32, 268));
    /* D s_b_top_8_8 = ReadReg 8 (uint8) */
    Statement& s_b_top_8_8 = builder.ldreg(Operand(PrimitiveTypes.u32, 269));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 269), Operand(s_b_top_8_8));
    }
    /* F s_b_top_8_9=top__Qscope_0x325dce0inst->crm(const) */
    /* F s_b_top_8_10 = (const uint8) 4 (const) */
    /* F s_b_top_8_11 = s_b_top_8_9&s_b_top_8_10 (const) */
    uint8 s_b_top_8_11 = ((uint8)(crm & (uint8)4ULL));
    /* F s_b_top_8_12 = (const uint8) 4 (const) */
    /* F s_b_top_8_13 = s_b_top_8_11==s_b_top_8_12 (const) */
    uint8 s_b_top_8_13 = ((uint8)(s_b_top_8_11 == (uint8)4ULL));
    /* D s_b_top_8_14 = s_b_top_8_8|s_b_top_8_13 */
    Statement& s_b_top_8_14 = builder.bor(Operand(s_b_top_8_8), Operand(PrimitiveTypes.u8, s_b_top_8_13));
    /* D s_b_top_8_15: WriteReg 8 = s_b_top_8_14 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 269), Operand(s_b_top_8_14));
    }
    builder.streg(Operand(s_b_top_8_14), Operand(PrimitiveTypes.u32, 269));
    /* D s_b_top_8_16 = ReadReg 9 (uint8) */
    Statement& s_b_top_8_16 = builder.ldreg(Operand(PrimitiveTypes.u32, 270));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 270), Operand(s_b_top_8_16));
    }
    /* F s_b_top_8_17=top__Qscope_0x325dce0inst->crm(const) */
    /* F s_b_top_8_18 = (const uint8) 2 (const) */
    /* F s_b_top_8_19 = s_b_top_8_17&s_b_top_8_18 (const) */
    uint8 s_b_top_8_19 = ((uint8)(crm & (uint8)2ULL));
    /* F s_b_top_8_20 = (const uint8) 2 (const) */
    /* F s_b_top_8_21 = s_b_top_8_19==s_b_top_8_20 (const) */
    uint8 s_b_top_8_21 = ((uint8)(s_b_top_8_19 == (uint8)2ULL));
    /* D s_b_top_8_22 = s_b_top_8_16|s_b_top_8_21 */
    Statement& s_b_top_8_22 = builder.bor(Operand(s_b_top_8_16), Operand(PrimitiveTypes.u8, s_b_top_8_21));
    /* D s_b_top_8_23: WriteReg 9 = s_b_top_8_22 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 270), Operand(s_b_top_8_22));
    }
    builder.streg(Operand(s_b_top_8_22), Operand(PrimitiveTypes.u32, 270));
    /* D s_b_top_8_24 = ReadReg 10 (uint8) */
    Statement& s_b_top_8_24 = builder.ldreg(Operand(PrimitiveTypes.u32, 271));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 271), Operand(s_b_top_8_24));
    }
    /* F s_b_top_8_25=top__Qscope_0x325dce0inst->crm(const) */
    /* F s_b_top_8_26 = (const uint8) 1 (const) */
    /* F s_b_top_8_27 = s_b_top_8_25&s_b_top_8_26 (const) */
    uint8 s_b_top_8_27 = ((uint8)(crm & (uint8)1ULL));
    /* F s_b_top_8_28 = (const uint8) 1 (const) */
    /* F s_b_top_8_29 = s_b_top_8_27==s_b_top_8_28 (const) */
    uint8 s_b_top_8_29 = ((uint8)(s_b_top_8_27 == (uint8)1ULL));
    /* D s_b_top_8_30 = s_b_top_8_24|s_b_top_8_29 */
    Statement& s_b_top_8_30 = builder.bor(Operand(s_b_top_8_24), Operand(PrimitiveTypes.u8, s_b_top_8_29));
    /* D s_b_top_8_31: WriteReg 10 = s_b_top_8_30 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 271), Operand(s_b_top_8_30));
    }
    builder.streg(Operand(s_b_top_8_30), Operand(PrimitiveTypes.u32, 271));
    /* F s_b_top_8_32: Jump b_top_9 (const) */
    goto block_b_top_9;
  }
  block_b_top_9: 
  {
    /* F s_b_top_9_0: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_top_10: 
  {
    /* F s_b_top_10_0=top__Qscope_0x325dce0inst->op1(const) */
    /* F s_b_top_10_1 = (const uint8) 3 (const) */
    /* F s_b_top_10_2 = s_b_top_10_0==s_b_top_10_1 (const) */
    uint8 s_b_top_10_2 = ((uint8)(op1 == (uint8)3ULL));
    /* F s_b_top_10_3: &temp_3 = Alloc uint8 */
    /* F s_b_top_10_4: temp_3 = s_b_top_10_2 (const), dominates: s_b_top_11_0  */
    CV_temp_3 = s_b_top_10_2;
    /* F s_b_top_10_5: If s_b_top_10_2: Jump b_top_12 else b_top_11 (const) */
    if (s_b_top_10_2) 
    {
      goto block_b_top_12;
    }
    else 
    {
      goto block_b_top_11;
    }
  }
  block_b_top_11: 
  {
    /* F s_b_top_11_0 = temp_3 (const) */
    /* F s_b_top_11_1: Free &temp_3 (1) */
    /* F s_b_top_11_2: If s_b_top_11_0: Jump b_top_13 else b_top_15 (const) */
    if (CV_temp_3) 
    {
      goto block_b_top_13;
    }
    else 
    {
      goto block_b_top_15;
    }
  }
  block_b_top_12: 
  {
    /* F s_b_top_12_0=top__Qscope_0x325dce0inst->op2(const) */
    /* F s_b_top_12_1 = (const uint8) 7 (const) */
    /* F s_b_top_12_2 = s_b_top_12_0==s_b_top_12_1 (const) */
    uint8 s_b_top_12_2 = ((uint8)(op2 == (uint8)7ULL));
    /* F s_b_top_12_3: temp_3 = s_b_top_12_2 (const), dominates: s_b_top_11_0  */
    CV_temp_3 = s_b_top_12_2;
    /* F s_b_top_12_4: Jump b_top_11 (const) */
    goto block_b_top_11;
  }
  block_b_top_13: 
  {
    /* D s_b_top_13_0 = ReadReg 7 (uint8) */
    Statement& s_b_top_13_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 268));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 268), Operand(s_b_top_13_0));
    }
    /* F s_b_top_13_1=top__Qscope_0x325dce0inst->crm(const) */
    /* F s_b_top_13_2 = (const uint8) 8 (const) */
    /* F s_b_top_13_3 = s_b_top_13_1&s_b_top_13_2 (const) */
    uint8 s_b_top_13_3 = ((uint8)(crm & (uint8)8ULL));
    /* F s_b_top_13_4 = (const uint8) 8 (const) */
    /* F s_b_top_13_5 = s_b_top_13_3!=s_b_top_13_4 (const) */
    uint8 s_b_top_13_5 = ((uint8)(s_b_top_13_3 != (uint8)8ULL));
    /* D s_b_top_13_6 = s_b_top_13_0&s_b_top_13_5 */
    Statement& s_b_top_13_6 = builder.band(Operand(s_b_top_13_0), Operand(PrimitiveTypes.u8, s_b_top_13_5));
    /* D s_b_top_13_7: WriteReg 7 = s_b_top_13_6 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 268), Operand(s_b_top_13_6));
    }
    builder.streg(Operand(s_b_top_13_6), Operand(PrimitiveTypes.u32, 268));
    /* D s_b_top_13_8 = ReadReg 8 (uint8) */
    Statement& s_b_top_13_8 = builder.ldreg(Operand(PrimitiveTypes.u32, 269));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 269), Operand(s_b_top_13_8));
    }
    /* F s_b_top_13_9=top__Qscope_0x325dce0inst->crm(const) */
    /* F s_b_top_13_10 = (const uint8) 4 (const) */
    /* F s_b_top_13_11 = s_b_top_13_9&s_b_top_13_10 (const) */
    uint8 s_b_top_13_11 = ((uint8)(crm & (uint8)4ULL));
    /* F s_b_top_13_12 = (const uint8) 4 (const) */
    /* F s_b_top_13_13 = s_b_top_13_11!=s_b_top_13_12 (const) */
    uint8 s_b_top_13_13 = ((uint8)(s_b_top_13_11 != (uint8)4ULL));
    /* D s_b_top_13_14 = s_b_top_13_8&s_b_top_13_13 */
    Statement& s_b_top_13_14 = builder.band(Operand(s_b_top_13_8), Operand(PrimitiveTypes.u8, s_b_top_13_13));
    /* D s_b_top_13_15: WriteReg 8 = s_b_top_13_14 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 269), Operand(s_b_top_13_14));
    }
    builder.streg(Operand(s_b_top_13_14), Operand(PrimitiveTypes.u32, 269));
    /* D s_b_top_13_16 = ReadReg 9 (uint8) */
    Statement& s_b_top_13_16 = builder.ldreg(Operand(PrimitiveTypes.u32, 270));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 270), Operand(s_b_top_13_16));
    }
    /* F s_b_top_13_17=top__Qscope_0x325dce0inst->crm(const) */
    /* F s_b_top_13_18 = (const uint8) 2 (const) */
    /* F s_b_top_13_19 = s_b_top_13_17&s_b_top_13_18 (const) */
    uint8 s_b_top_13_19 = ((uint8)(crm & (uint8)2ULL));
    /* F s_b_top_13_20 = (const uint8) 2 (const) */
    /* F s_b_top_13_21 = s_b_top_13_19!=s_b_top_13_20 (const) */
    uint8 s_b_top_13_21 = ((uint8)(s_b_top_13_19 != (uint8)2ULL));
    /* D s_b_top_13_22 = s_b_top_13_16&s_b_top_13_21 */
    Statement& s_b_top_13_22 = builder.band(Operand(s_b_top_13_16), Operand(PrimitiveTypes.u8, s_b_top_13_21));
    /* D s_b_top_13_23: WriteReg 9 = s_b_top_13_22 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 270), Operand(s_b_top_13_22));
    }
    builder.streg(Operand(s_b_top_13_22), Operand(PrimitiveTypes.u32, 270));
    /* D s_b_top_13_24 = ReadReg 10 (uint8) */
    Statement& s_b_top_13_24 = builder.ldreg(Operand(PrimitiveTypes.u32, 271));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 271), Operand(s_b_top_13_24));
    }
    /* F s_b_top_13_25=top__Qscope_0x325dce0inst->crm(const) */
    /* F s_b_top_13_26 = (const uint8) 1 (const) */
    /* F s_b_top_13_27 = s_b_top_13_25&s_b_top_13_26 (const) */
    uint8 s_b_top_13_27 = ((uint8)(crm & (uint8)1ULL));
    /* F s_b_top_13_28 = (const uint8) 1 (const) */
    /* F s_b_top_13_29 = s_b_top_13_27!=s_b_top_13_28 (const) */
    uint8 s_b_top_13_29 = ((uint8)(s_b_top_13_27 != (uint8)1ULL));
    /* D s_b_top_13_30 = s_b_top_13_24&s_b_top_13_29 */
    Statement& s_b_top_13_30 = builder.band(Operand(s_b_top_13_24), Operand(PrimitiveTypes.u8, s_b_top_13_29));
    /* D s_b_top_13_31: WriteReg 10 = s_b_top_13_30 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 271), Operand(s_b_top_13_30));
    }
    builder.streg(Operand(s_b_top_13_30), Operand(PrimitiveTypes.u32, 271));
    /* F s_b_top_13_32: Jump b_top_14 (const) */
    goto block_b_top_14;
  }
  block_b_top_14: 
  {
    /* F s_b_top_14_0: Jump b_top_9 (const) */
    goto block_b_top_9;
  }
  block_b_top_15: 
  {
    /* D s_b_top_15_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_top_15_1: Jump b_top_14 (const) */
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
bool aarch64_insn_rev::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_smsubl::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_strbi::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_stur::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ubfm::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_3
  uint8 CV_temp_1;
  vrt::dbt::ir::Statement *ir_idx_temp_1 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_1
  // Reg s_b_top_1_5
  uint8 CV_temp_2;
  vrt::dbt::ir::Statement *ir_idx_temp_2 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_2
  // Block b_top_3
  // Reg s_b_top_3_4
  uint8 CV_temp_3;
  vrt::dbt::ir::Statement *ir_idx_temp_3 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_4
  // Block b_top_5
  // Block b_top_6
  // Block b_top_7
  // Reg s_b_top_7_0
  uint8 CV_top__Qscope_0x3223130amount;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3223130amount = &builder.alloc(PrimitiveTypes.u8);
  // Reg s_b_top_7_14
  uint64 CV_read_gpr_b_top_10_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_10_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_8
  // Block b_top_9
  // Reg s_b_top_9_3
  uint8 CV_temp_13;
  vrt::dbt::ir::Statement *ir_idx_temp_13 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_10
  // Reg s_b_top_10_7
  uint64 CV_write_gpr_b_top_20__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_20__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_10_11
  // Reg s_b_read_gpr_b_top_10_11_3
  uint64 CV_temp_8;
  vrt::dbt::ir::Statement *ir_idx_temp_8 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_10_12
  // Reg s_b_read_gpr_b_top_10_12_3
  uint64 CV_temp_9;
  vrt::dbt::ir::Statement *ir_idx_temp_9 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_10_13
  // Block b_read_gpr_b_top_10_14
  // Block b_read_gpr_b_top_10_15
  // Block b_read_gpr_b_top_10_16
  // Block b_read_gpr_b_top_10_17
  // Block b_read_gpr_b_top_10_18
  // Block b_top_19
  // Block b_write_gpr_b_top_20_20
  // Block b_write_gpr_b_top_20_21
  // Block b_write_gpr_b_top_20_22
  // Block b_write_gpr_b_top_20_23
  // Block b_write_gpr_b_top_20_24
  // Block b_top_25
  // Reg s_b_top_25_5
  uint8 CV_temp_14;
  vrt::dbt::ir::Statement *ir_idx_temp_14 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_26
  // Block b_top_27
  // Block b_top_28
  // Block b_top_29
  // Reg s_b_top_29_5
  uint64 CV_read_gpr_b_top_33_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_33_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_30
  // Block b_top_31
  // Reg s_b_top_31_0
  uint64 CV_top__Qscope_0x322b980value;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x322b980value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_32
  // Reg s_b_top_32_7
  uint64 CV_write_gpr_b_top_43__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_43__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_33_33
  // Reg s_b_read_gpr_b_top_33_33_3
  uint64 CV_temp_19;
  vrt::dbt::ir::Statement *ir_idx_temp_19 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_33_34
  // Reg s_b_read_gpr_b_top_33_34_3
  uint64 CV_temp_20;
  vrt::dbt::ir::Statement *ir_idx_temp_20 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_33_35
  // Block b_read_gpr_b_top_33_36
  // Block b_read_gpr_b_top_33_37
  // Block b_read_gpr_b_top_33_38
  // Block b_read_gpr_b_top_33_39
  // Block b_read_gpr_b_top_33_40
  // Block b_top_41
  // Block b_write_gpr_b_top_43_42
  // Block b_write_gpr_b_top_43_43
  // Block b_write_gpr_b_top_43_44
  // Block b_write_gpr_b_top_43_45
  // Block b_write_gpr_b_top_43_46
  // Block b_top_47
  // Reg s_b_top_47_2
  uint64 CV_read_gpr_b_top_52_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_52_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_48
  // Block b_top_49
  // Reg s_b_top_49_0
  uint64 CV_top__Qscope_0x322e590bits;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x322e590bits = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_top_49_3
  uint64 CV_read_gpr_b_top_63_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_63_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_50
  // Block b_read_gpr_b_top_52_51
  // Reg s_b_read_gpr_b_top_52_51_3
  uint64 CV_temp_28;
  vrt::dbt::ir::Statement *ir_idx_temp_28 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_52_52
  // Reg s_b_read_gpr_b_top_52_52_3
  uint64 CV_temp_29;
  vrt::dbt::ir::Statement *ir_idx_temp_29 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_52_53
  // Block b_read_gpr_b_top_52_54
  // Block b_read_gpr_b_top_52_55
  // Block b_read_gpr_b_top_52_56
  // Block b_read_gpr_b_top_52_57
  // Block b_read_gpr_b_top_52_58
  // Block b_top_59
  // Block b_read_gpr_b_top_63_60
  // Reg s_b_read_gpr_b_top_63_60_3
  uint64 CV_temp_38;
  vrt::dbt::ir::Statement *ir_idx_temp_38 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_63_61
  // Reg s_b_read_gpr_b_top_63_61_3
  uint64 CV_temp_39;
  vrt::dbt::ir::Statement *ir_idx_temp_39 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_63_62
  // Block b_read_gpr_b_top_63_63
  // Block b_read_gpr_b_top_63_64
  // Block b_read_gpr_b_top_63_65
  // Block b_read_gpr_b_top_63_66
  // Block b_read_gpr_b_top_63_67
  // Block b_top_68
  // Block b_top_69
  // Block b_top_70
  // Block b_top_71
  // Block b_write_gpr_b_top_77_72
  // Block b_write_gpr_b_top_77_73
  // Block b_write_gpr_b_top_77_74
  // Block b_write_gpr_b_top_77_75
  // Block b_write_gpr_b_top_77_76
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_0_1 = (const uint8) 0 (const) */
    /* F s_b_0_2 = s_b_0_0==s_b_0_1 (const) */
    uint8 s_b_0_2 = ((uint8)(sf == (uint8)0ULL));
    /* F s_b_0_3: &temp_1 = Alloc uint8 */
    /* F s_b_0_4: temp_1 = s_b_0_2 (const), dominates: s_b_top_1_0 s_b_top_3_2  */
    CV_temp_1 = s_b_0_2;
    /* F s_b_0_5: If s_b_0_2: Jump b_top_2 else b_top_1 (const) */
    if (s_b_0_2) 
    {
      goto block_b_top_2;
    }
    else 
    {
      goto block_b_top_1;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0 = temp_1 (const) */
    /* F s_b_top_1_1: Free &temp_1 (1) */
    /* F s_b_top_1_2=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_1_3 = (const uint8) 1 (const) */
    /* F s_b_top_1_4 = s_b_top_1_2==s_b_top_1_3 (const) */
    uint8 s_b_top_1_4 = ((uint8)(sf == (uint8)1ULL));
    /* F s_b_top_1_5: &temp_2 = Alloc uint8 */
    /* F s_b_top_1_6: temp_2 = s_b_top_1_4 (const), dominates: s_b_top_3_0  */
    CV_temp_2 = s_b_top_1_4;
    /* F s_b_top_1_7: If s_b_top_1_4: Jump b_top_4 else b_top_3 (const) */
    if (s_b_top_1_4) 
    {
      goto block_b_top_4;
    }
    else 
    {
      goto block_b_top_3;
    }
  }
  block_b_top_2: 
  {
    /* F s_b_top_2_0=top__Qscope_0x321e620inst->imms(const) */
    /* F s_b_top_2_1 = (const uint8) 1f (const) */
    /* F s_b_top_2_2 = s_b_top_2_0!=s_b_top_2_1 (const) */
    uint8 s_b_top_2_2 = ((uint8)(imms != (uint8)31ULL));
    /* F s_b_top_2_3: temp_1 = s_b_top_2_2 (const), dominates: s_b_top_1_0 s_b_top_3_2  */
    CV_temp_1 = s_b_top_2_2;
    /* F s_b_top_2_4: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_3: 
  {
    /* F s_b_top_3_0 = temp_2 (const) */
    /* F s_b_top_3_1: Free &temp_2 (1) */
    /* F s_b_top_3_2 = temp_1 (const) */
    /* F s_b_top_3_3 = s_b_top_3_2|s_b_top_3_0 (const) */
    uint8 s_b_top_3_3 = ((uint8)(CV_temp_1 | CV_temp_2));
    /* F s_b_top_3_4: &temp_3 = Alloc uint8 */
    /* F s_b_top_3_5: temp_3 = s_b_top_3_3 (const), dominates: s_b_top_5_0  */
    CV_temp_3 = s_b_top_3_3;
    /* F s_b_top_3_6: If s_b_top_3_3: Jump b_top_6 else b_top_5 (const) */
    if (s_b_top_3_3) 
    {
      goto block_b_top_6;
    }
    else 
    {
      goto block_b_top_5;
    }
  }
  block_b_top_4: 
  {
    /* F s_b_top_4_0=top__Qscope_0x321e620inst->imms(const) */
    /* F s_b_top_4_1 = (const uint8) 3f (const) */
    /* F s_b_top_4_2 = s_b_top_4_0!=s_b_top_4_1 (const) */
    uint8 s_b_top_4_2 = ((uint8)(imms != (uint8)63ULL));
    /* F s_b_top_4_3: temp_2 = s_b_top_4_2 (const), dominates: s_b_top_3_0  */
    CV_temp_2 = s_b_top_4_2;
    /* F s_b_top_4_4: Jump b_top_3 (const) */
    goto block_b_top_3;
  }
  block_b_top_5: 
  {
    /* F s_b_top_5_0 = temp_3 (const) */
    /* F s_b_top_5_1: Free &temp_3 (1) */
    /* F s_b_top_5_2: If s_b_top_5_0: Jump b_top_7 else b_top_9 (const) */
    if (CV_temp_3) 
    {
      goto block_b_top_7;
    }
    else 
    {
      goto block_b_top_9;
    }
  }
  block_b_top_6: 
  {
    /* F s_b_top_6_0=top__Qscope_0x321e620inst->imms(const) */
    /* F s_b_top_6_1 = (const uint8) 1 (const) */
    /* F s_b_top_6_2 = s_b_top_6_0+s_b_top_6_1 (const) */
    uint8 s_b_top_6_2 = ((uint8)(imms + (uint8)1ULL));
    /* F s_b_top_6_3=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_6_4 = s_b_top_6_2==s_b_top_6_3 (const) */
    uint8 s_b_top_6_4 = ((uint8)(s_b_top_6_2 == immr));
    /* F s_b_top_6_5: temp_3 = s_b_top_6_4 (const), dominates: s_b_top_5_0  */
    CV_temp_3 = s_b_top_6_4;
    /* F s_b_top_6_6: Jump b_top_5 (const) */
    goto block_b_top_5;
  }
  block_b_top_7: 
  {
    /* F s_b_top_7_0: &top__Qscope_0x3223130amount = Alloc uint8 */
    /* F s_b_top_7_1=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_7_2 = (const uint8) 0 (const) */
    /* F s_b_top_7_3 = s_b_top_7_1==s_b_top_7_2 (const) */
    uint8 s_b_top_7_3 = ((uint8)(sf == (uint8)0ULL));
    /* F s_b_top_7_4 = (const uint8) 20 (const) */
    /* F s_b_top_7_5 = (const uint8) 40 (const) */
    /* F s_b_top_7_6: Select s_b_top_7_3 ? s_b_top_7_4 : s_b_top_7_5 (const) */
    uint8 s_b_top_7_6 = ((uint8)(s_b_top_7_3 ? ((uint8)32ULL) : ((uint8)64ULL)));
    /* F s_b_top_7_7=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_7_8 = s_b_top_7_6-s_b_top_7_7 (const) */
    uint8 s_b_top_7_8 = ((uint8)(s_b_top_7_6 - immr));
    /* F s_b_top_7_9: top__Qscope_0x3223130amount = s_b_top_7_8 (const), dominates: s_b_top_10_2  */
    CV_top__Qscope_0x3223130amount = s_b_top_7_8;
    /* F s_b_top_7_10=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_7_11=top__Qscope_0x321e620inst->rd(const) */
    /* F s_b_top_7_12=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_7_13=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_top_7_14: &read_gpr_b_top_10_0r = Alloc uint64 */
    /* F s_b_top_7_15: If s_b_top_7_12: Jump b_read_gpr_b_top_10_11 else b_read_gpr_b_top_10_12 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_10_11;
    }
    else 
    {
      goto block_b_read_gpr_b_top_10_12;
    }
  }
  block_b_top_8: 
  {
    /* F s_b_top_8_0: Return */
    goto fixed_done;
  }
  block_b_top_9: 
  {
    /* F s_b_top_9_0=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_9_1 = (const uint8) 0 (const) */
    /* F s_b_top_9_2 = s_b_top_9_0==s_b_top_9_1 (const) */
    uint8 s_b_top_9_2 = ((uint8)(sf == (uint8)0ULL));
    /* F s_b_top_9_3: &temp_13 = Alloc uint8 */
    /* F s_b_top_9_4: temp_13 = s_b_top_9_2 (const), dominates: s_b_top_25_0 s_b_top_27_2  */
    CV_temp_13 = s_b_top_9_2;
    /* F s_b_top_9_5: If s_b_top_9_2: Jump b_top_26 else b_top_25 (const) */
    if (s_b_top_9_2) 
    {
      goto block_b_top_26;
    }
    else 
    {
      goto block_b_top_25;
    }
  }
  block_b_top_10: 
  {
    /* D s_b_top_10_0 = read_gpr_b_top_10_0r */
    /* F s_b_top_10_1: Free &read_gpr_b_top_10_0r (8) */
    /* F s_b_top_10_2 = top__Qscope_0x3223130amount (const) */
    /* F s_b_top_10_3 = (uint64)s_b_top_10_2 (const) */
    /* D s_b_top_10_4 = s_b_top_10_0<<s_b_top_10_3 */
    Statement& s_b_top_10_4 = builder.shl(Operand(*ir_idx_read_gpr_b_top_10_0r), Operand(PrimitiveTypes.u64, ((uint64)CV_top__Qscope_0x3223130amount)));
    /* F s_b_top_10_5=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_10_6=top__Qscope_0x321e620inst->rd(const) */
    /* F s_b_top_10_7: &write_gpr_b_top_20__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_10_8: write_gpr_b_top_20__Qscope_0x33bbb30value = s_b_top_10_4, dominates: s_b_write_gpr_b_top_20_22_1 s_b_write_gpr_b_top_20_24_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_20__Qscope_0x33bbb30value), Operand(s_b_top_10_4));
    /* F s_b_top_10_9 = (const uint8) 1f (const) */
    /* F s_b_top_10_10 = s_b_top_10_6==s_b_top_10_9 (const) */
    uint8 s_b_top_10_10 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_10_11: If s_b_top_10_10: Jump b_write_gpr_b_top_20_20 else b_write_gpr_b_top_20_21 (const) */
    if (s_b_top_10_10) 
    {
      goto block_b_write_gpr_b_top_20_20;
    }
    else 
    {
      goto block_b_write_gpr_b_top_20_21;
    }
  }
  block_b_read_gpr_b_top_10_11: 
  {
    /* F s_b_read_gpr_b_top_10_11_0=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_read_gpr_b_top_10_11_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_10_11_2 = s_b_read_gpr_b_top_10_11_0==s_b_read_gpr_b_top_10_11_1 (const) */
    uint8 s_b_read_gpr_b_top_10_11_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_10_11_3: &temp_8 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_10_11_4: If s_b_read_gpr_b_top_10_11_2: Jump b_read_gpr_b_top_10_13 else b_read_gpr_b_top_10_14 (const) */
    if (s_b_read_gpr_b_top_10_11_2) 
    {
      goto block_b_read_gpr_b_top_10_13;
    }
    else 
    {
      goto block_b_read_gpr_b_top_10_14;
    }
  }
  block_b_read_gpr_b_top_10_12: 
  {
    /* F s_b_read_gpr_b_top_10_12_0=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_read_gpr_b_top_10_12_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_10_12_2 = s_b_read_gpr_b_top_10_12_0==s_b_read_gpr_b_top_10_12_1 (const) */
    uint8 s_b_read_gpr_b_top_10_12_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_10_12_3: &temp_9 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_10_12_4: If s_b_read_gpr_b_top_10_12_2: Jump b_read_gpr_b_top_10_16 else b_read_gpr_b_top_10_17 (const) */
    if (s_b_read_gpr_b_top_10_12_2) 
    {
      goto block_b_read_gpr_b_top_10_16;
    }
    else 
    {
      goto block_b_read_gpr_b_top_10_17;
    }
  }
  block_b_read_gpr_b_top_10_13: 
  {
    /* F s_b_read_gpr_b_top_10_13_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_10_13_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_10_13_2: temp_8 = s_b_read_gpr_b_top_10_13_1 (const), dominates: s_b_read_gpr_b_top_10_15_0  */
    CV_temp_8 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_8), Operand(PrimitiveTypes.u8, CV_temp_8));
    /* F s_b_read_gpr_b_top_10_13_3: Jump b_read_gpr_b_top_10_15 (const) */
    goto block_b_read_gpr_b_top_10_15;
  }
  block_b_read_gpr_b_top_10_14: 
  {
    /* F s_b_read_gpr_b_top_10_14_0=top__Qscope_0x321e620inst->rn(const) */
    /* D s_b_read_gpr_b_top_10_14_1 = ReadRegBank 0:s_b_read_gpr_b_top_10_14_0 (uint64) */
    Statement& s_b_read_gpr_b_top_10_14_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_10_14_1));
    }
    /* D s_b_read_gpr_b_top_10_14_2 = (uint64)s_b_read_gpr_b_top_10_14_1 */
    Statement& s_b_read_gpr_b_top_10_14_2 = s_b_read_gpr_b_top_10_14_1;
    /* D s_b_read_gpr_b_top_10_14_3: temp_8 = s_b_read_gpr_b_top_10_14_2, dominates: s_b_read_gpr_b_top_10_15_0  */
    builder.store(Operand(*ir_idx_temp_8), Operand(s_b_read_gpr_b_top_10_14_2));
    /* F s_b_read_gpr_b_top_10_14_4: Jump b_read_gpr_b_top_10_15 (const) */
    goto block_b_read_gpr_b_top_10_15;
  }
  block_b_read_gpr_b_top_10_15: 
  {
    /* D s_b_read_gpr_b_top_10_15_0 = temp_8 */
    /* F s_b_read_gpr_b_top_10_15_1: Free &temp_8 (8) */
    /* D s_b_read_gpr_b_top_10_15_2: read_gpr_b_top_10_0r = s_b_read_gpr_b_top_10_15_0, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_10_0r), Operand(*ir_idx_temp_8));
    /* F s_b_read_gpr_b_top_10_15_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_top_10_16: 
  {
    /* F s_b_read_gpr_b_top_10_16_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_10_16_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_10_16_2: temp_9 = s_b_read_gpr_b_top_10_16_1 (const), dominates: s_b_read_gpr_b_top_10_18_0  */
    CV_temp_9 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_9), Operand(PrimitiveTypes.u8, CV_temp_9));
    /* F s_b_read_gpr_b_top_10_16_3: Jump b_read_gpr_b_top_10_18 (const) */
    goto block_b_read_gpr_b_top_10_18;
  }
  block_b_read_gpr_b_top_10_17: 
  {
    /* F s_b_read_gpr_b_top_10_17_0=top__Qscope_0x321e620inst->rn(const) */
    /* D s_b_read_gpr_b_top_10_17_1 = ReadRegBank 1:s_b_read_gpr_b_top_10_17_0 (uint32) */
    Statement& s_b_read_gpr_b_top_10_17_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_10_17_1));
    }
    /* D s_b_read_gpr_b_top_10_17_2 = (uint64)s_b_read_gpr_b_top_10_17_1 */
    Statement& s_b_read_gpr_b_top_10_17_2 = builder.zx(Operand(s_b_read_gpr_b_top_10_17_1));
    /* D s_b_read_gpr_b_top_10_17_3: temp_9 = s_b_read_gpr_b_top_10_17_2, dominates: s_b_read_gpr_b_top_10_18_0  */
    builder.store(Operand(*ir_idx_temp_9), Operand(s_b_read_gpr_b_top_10_17_2));
    /* F s_b_read_gpr_b_top_10_17_4: Jump b_read_gpr_b_top_10_18 (const) */
    goto block_b_read_gpr_b_top_10_18;
  }
  block_b_read_gpr_b_top_10_18: 
  {
    /* D s_b_read_gpr_b_top_10_18_0 = temp_9 */
    /* F s_b_read_gpr_b_top_10_18_1: Free &temp_9 (8) */
    /* D s_b_read_gpr_b_top_10_18_2: read_gpr_b_top_10_0r = s_b_read_gpr_b_top_10_18_0, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_10_0r), Operand(*ir_idx_temp_9));
    /* F s_b_read_gpr_b_top_10_18_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_top_19: 
  {
    /* F s_b_top_19_0: Free &write_gpr_b_top_20__Qscope_0x33bbb30value (8) */
    /* F s_b_top_19_1: Free &top__Qscope_0x3223130amount (1) */
    /* F s_b_top_19_2: Jump b_top_8 (const) */
    goto block_b_top_8;
  }
  block_b_write_gpr_b_top_20_20: 
  {
    /* F s_b_write_gpr_b_top_20_20_0: Jump b_top_19 (const) */
    goto block_b_top_19;
  }
  block_b_write_gpr_b_top_20_21: 
  {
    /* F s_b_write_gpr_b_top_20_21_0=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_write_gpr_b_top_20_21_1: If s_b_write_gpr_b_top_20_21_0: Jump b_write_gpr_b_top_20_22 else b_write_gpr_b_top_20_24 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_20_22;
    }
    else 
    {
      goto block_b_write_gpr_b_top_20_24;
    }
  }
  block_b_write_gpr_b_top_20_22: 
  {
    /* F s_b_write_gpr_b_top_20_22_0=top__Qscope_0x321e620inst->rd(const) */
    /* D s_b_write_gpr_b_top_20_22_1 = write_gpr_b_top_20__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_20_22_2: WriteRegBank 0:s_b_write_gpr_b_top_20_22_0 = s_b_write_gpr_b_top_20_22_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_20__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_20__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_20_22_3: Jump b_write_gpr_b_top_20_23 (const) */
    goto block_b_write_gpr_b_top_20_23;
  }
  block_b_write_gpr_b_top_20_23: 
  {
    /* F s_b_write_gpr_b_top_20_23_0: Jump b_top_19 (const) */
    goto block_b_top_19;
  }
  block_b_write_gpr_b_top_20_24: 
  {
    /* F s_b_write_gpr_b_top_20_24_0=top__Qscope_0x321e620inst->rd(const) */
    /* D s_b_write_gpr_b_top_20_24_1 = write_gpr_b_top_20__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_20_24_2 = (uint32)s_b_write_gpr_b_top_20_24_1 */
    Statement& s_b_write_gpr_b_top_20_24_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_20__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_20_24_3 = (uint64)s_b_write_gpr_b_top_20_24_2 */
    Statement& s_b_write_gpr_b_top_20_24_3 = builder.zx(Operand(s_b_write_gpr_b_top_20_24_2));
    /* D s_b_write_gpr_b_top_20_24_4: WriteRegBank 0:s_b_write_gpr_b_top_20_24_0 = s_b_write_gpr_b_top_20_24_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_20_24_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_20_24_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_20_24_5: Jump b_write_gpr_b_top_20_23 (const) */
    goto block_b_write_gpr_b_top_20_23;
  }
  block_b_top_25: 
  {
    /* F s_b_top_25_0 = temp_13 (const) */
    /* F s_b_top_25_1: Free &temp_13 (1) */
    /* F s_b_top_25_2=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_25_3 = (const uint8) 1 (const) */
    /* F s_b_top_25_4 = s_b_top_25_2==s_b_top_25_3 (const) */
    uint8 s_b_top_25_4 = ((uint8)(sf == (uint8)1ULL));
    /* F s_b_top_25_5: &temp_14 = Alloc uint8 */
    /* F s_b_top_25_6: temp_14 = s_b_top_25_4 (const), dominates: s_b_top_27_0  */
    CV_temp_14 = s_b_top_25_4;
    /* F s_b_top_25_7: If s_b_top_25_4: Jump b_top_28 else b_top_27 (const) */
    if (s_b_top_25_4) 
    {
      goto block_b_top_28;
    }
    else 
    {
      goto block_b_top_27;
    }
  }
  block_b_top_26: 
  {
    /* F s_b_top_26_0=top__Qscope_0x321e620inst->imms(const) */
    /* F s_b_top_26_1 = (const uint8) 1f (const) */
    /* F s_b_top_26_2 = s_b_top_26_0==s_b_top_26_1 (const) */
    uint8 s_b_top_26_2 = ((uint8)(imms == (uint8)31ULL));
    /* F s_b_top_26_3: temp_13 = s_b_top_26_2 (const), dominates: s_b_top_25_0 s_b_top_27_2  */
    CV_temp_13 = s_b_top_26_2;
    /* F s_b_top_26_4: Jump b_top_25 (const) */
    goto block_b_top_25;
  }
  block_b_top_27: 
  {
    /* F s_b_top_27_0 = temp_14 (const) */
    /* F s_b_top_27_1: Free &temp_14 (1) */
    /* F s_b_top_27_2 = temp_13 (const) */
    /* F s_b_top_27_3 = s_b_top_27_2|s_b_top_27_0 (const) */
    uint8 s_b_top_27_3 = ((uint8)(CV_temp_13 | CV_temp_14));
    /* F s_b_top_27_4: If s_b_top_27_3: Jump b_top_29 else b_top_31 (const) */
    if (s_b_top_27_3) 
    {
      goto block_b_top_29;
    }
    else 
    {
      goto block_b_top_31;
    }
  }
  block_b_top_28: 
  {
    /* F s_b_top_28_0=top__Qscope_0x321e620inst->imms(const) */
    /* F s_b_top_28_1 = (const uint8) 3f (const) */
    /* F s_b_top_28_2 = s_b_top_28_0==s_b_top_28_1 (const) */
    uint8 s_b_top_28_2 = ((uint8)(imms == (uint8)63ULL));
    /* F s_b_top_28_3: temp_14 = s_b_top_28_2 (const), dominates: s_b_top_27_0  */
    CV_temp_14 = s_b_top_28_2;
    /* F s_b_top_28_4: Jump b_top_27 (const) */
    goto block_b_top_27;
  }
  block_b_top_29: 
  {
    /* F s_b_top_29_0=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_29_1=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_29_2=top__Qscope_0x321e620inst->rd(const) */
    /* F s_b_top_29_3=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_29_4=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_top_29_5: &read_gpr_b_top_33_0r = Alloc uint64 */
    /* F s_b_top_29_6: If s_b_top_29_3: Jump b_read_gpr_b_top_33_33 else b_read_gpr_b_top_33_34 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_33_33;
    }
    else 
    {
      goto block_b_read_gpr_b_top_33_34;
    }
  }
  block_b_top_30: 
  {
    /* F s_b_top_30_0: Jump b_top_8 (const) */
    goto block_b_top_8;
  }
  block_b_top_31: 
  {
    /* F s_b_top_31_0: &top__Qscope_0x322b980value = Alloc uint64 */
    /* F s_b_top_31_1=top__Qscope_0x321e620inst->imms(const) */
    /* F s_b_top_31_2=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_31_3 = s_b_top_31_1>=s_b_top_31_2 (const) */
    uint8 s_b_top_31_3 = ((uint8)(imms >= immr));
    /* F s_b_top_31_4: If s_b_top_31_3: Jump b_top_47 else b_top_49 (const) */
    if (s_b_top_31_3) 
    {
      goto block_b_top_47;
    }
    else 
    {
      goto block_b_top_49;
    }
  }
  block_b_top_32: 
  {
    /* D s_b_top_32_0 = read_gpr_b_top_33_0r */
    /* F s_b_top_32_1: Free &read_gpr_b_top_33_0r (8) */
    /* F s_b_top_32_2=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_32_3 = (uint64)s_b_top_32_2 (const) */
    /* D s_b_top_32_4 = s_b_top_32_0>>s_b_top_32_3 */
    Statement& s_b_top_32_4 = builder.shr(Operand(*ir_idx_read_gpr_b_top_33_0r), Operand(PrimitiveTypes.u64, ((uint64)immr)));
    /* F s_b_top_32_5=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_32_6=top__Qscope_0x321e620inst->rd(const) */
    /* F s_b_top_32_7: &write_gpr_b_top_43__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_32_8: write_gpr_b_top_43__Qscope_0x33bbb30value = s_b_top_32_4, dominates: s_b_write_gpr_b_top_43_44_1 s_b_write_gpr_b_top_43_46_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_43__Qscope_0x33bbb30value), Operand(s_b_top_32_4));
    /* F s_b_top_32_9 = (const uint8) 1f (const) */
    /* F s_b_top_32_10 = s_b_top_32_6==s_b_top_32_9 (const) */
    uint8 s_b_top_32_10 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_32_11: If s_b_top_32_10: Jump b_write_gpr_b_top_43_42 else b_write_gpr_b_top_43_43 (const) */
    if (s_b_top_32_10) 
    {
      goto block_b_write_gpr_b_top_43_42;
    }
    else 
    {
      goto block_b_write_gpr_b_top_43_43;
    }
  }
  block_b_read_gpr_b_top_33_33: 
  {
    /* F s_b_read_gpr_b_top_33_33_0=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_read_gpr_b_top_33_33_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_33_33_2 = s_b_read_gpr_b_top_33_33_0==s_b_read_gpr_b_top_33_33_1 (const) */
    uint8 s_b_read_gpr_b_top_33_33_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_33_33_3: &temp_19 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_33_33_4: If s_b_read_gpr_b_top_33_33_2: Jump b_read_gpr_b_top_33_35 else b_read_gpr_b_top_33_36 (const) */
    if (s_b_read_gpr_b_top_33_33_2) 
    {
      goto block_b_read_gpr_b_top_33_35;
    }
    else 
    {
      goto block_b_read_gpr_b_top_33_36;
    }
  }
  block_b_read_gpr_b_top_33_34: 
  {
    /* F s_b_read_gpr_b_top_33_34_0=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_read_gpr_b_top_33_34_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_33_34_2 = s_b_read_gpr_b_top_33_34_0==s_b_read_gpr_b_top_33_34_1 (const) */
    uint8 s_b_read_gpr_b_top_33_34_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_33_34_3: &temp_20 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_33_34_4: If s_b_read_gpr_b_top_33_34_2: Jump b_read_gpr_b_top_33_38 else b_read_gpr_b_top_33_39 (const) */
    if (s_b_read_gpr_b_top_33_34_2) 
    {
      goto block_b_read_gpr_b_top_33_38;
    }
    else 
    {
      goto block_b_read_gpr_b_top_33_39;
    }
  }
  block_b_read_gpr_b_top_33_35: 
  {
    /* F s_b_read_gpr_b_top_33_35_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_33_35_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_33_35_2: temp_19 = s_b_read_gpr_b_top_33_35_1 (const), dominates: s_b_read_gpr_b_top_33_37_0  */
    CV_temp_19 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_19), Operand(PrimitiveTypes.u8, CV_temp_19));
    /* F s_b_read_gpr_b_top_33_35_3: Jump b_read_gpr_b_top_33_37 (const) */
    goto block_b_read_gpr_b_top_33_37;
  }
  block_b_read_gpr_b_top_33_36: 
  {
    /* F s_b_read_gpr_b_top_33_36_0=top__Qscope_0x321e620inst->rn(const) */
    /* D s_b_read_gpr_b_top_33_36_1 = ReadRegBank 0:s_b_read_gpr_b_top_33_36_0 (uint64) */
    Statement& s_b_read_gpr_b_top_33_36_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_33_36_1));
    }
    /* D s_b_read_gpr_b_top_33_36_2 = (uint64)s_b_read_gpr_b_top_33_36_1 */
    Statement& s_b_read_gpr_b_top_33_36_2 = s_b_read_gpr_b_top_33_36_1;
    /* D s_b_read_gpr_b_top_33_36_3: temp_19 = s_b_read_gpr_b_top_33_36_2, dominates: s_b_read_gpr_b_top_33_37_0  */
    builder.store(Operand(*ir_idx_temp_19), Operand(s_b_read_gpr_b_top_33_36_2));
    /* F s_b_read_gpr_b_top_33_36_4: Jump b_read_gpr_b_top_33_37 (const) */
    goto block_b_read_gpr_b_top_33_37;
  }
  block_b_read_gpr_b_top_33_37: 
  {
    /* D s_b_read_gpr_b_top_33_37_0 = temp_19 */
    /* F s_b_read_gpr_b_top_33_37_1: Free &temp_19 (8) */
    /* D s_b_read_gpr_b_top_33_37_2: read_gpr_b_top_33_0r = s_b_read_gpr_b_top_33_37_0, dominates: s_b_top_32_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_33_0r), Operand(*ir_idx_temp_19));
    /* F s_b_read_gpr_b_top_33_37_3: Jump b_top_32 (const) */
    goto block_b_top_32;
  }
  block_b_read_gpr_b_top_33_38: 
  {
    /* F s_b_read_gpr_b_top_33_38_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_33_38_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_33_38_2: temp_20 = s_b_read_gpr_b_top_33_38_1 (const), dominates: s_b_read_gpr_b_top_33_40_0  */
    CV_temp_20 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_20), Operand(PrimitiveTypes.u8, CV_temp_20));
    /* F s_b_read_gpr_b_top_33_38_3: Jump b_read_gpr_b_top_33_40 (const) */
    goto block_b_read_gpr_b_top_33_40;
  }
  block_b_read_gpr_b_top_33_39: 
  {
    /* F s_b_read_gpr_b_top_33_39_0=top__Qscope_0x321e620inst->rn(const) */
    /* D s_b_read_gpr_b_top_33_39_1 = ReadRegBank 1:s_b_read_gpr_b_top_33_39_0 (uint32) */
    Statement& s_b_read_gpr_b_top_33_39_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_33_39_1));
    }
    /* D s_b_read_gpr_b_top_33_39_2 = (uint64)s_b_read_gpr_b_top_33_39_1 */
    Statement& s_b_read_gpr_b_top_33_39_2 = builder.zx(Operand(s_b_read_gpr_b_top_33_39_1));
    /* D s_b_read_gpr_b_top_33_39_3: temp_20 = s_b_read_gpr_b_top_33_39_2, dominates: s_b_read_gpr_b_top_33_40_0  */
    builder.store(Operand(*ir_idx_temp_20), Operand(s_b_read_gpr_b_top_33_39_2));
    /* F s_b_read_gpr_b_top_33_39_4: Jump b_read_gpr_b_top_33_40 (const) */
    goto block_b_read_gpr_b_top_33_40;
  }
  block_b_read_gpr_b_top_33_40: 
  {
    /* D s_b_read_gpr_b_top_33_40_0 = temp_20 */
    /* F s_b_read_gpr_b_top_33_40_1: Free &temp_20 (8) */
    /* D s_b_read_gpr_b_top_33_40_2: read_gpr_b_top_33_0r = s_b_read_gpr_b_top_33_40_0, dominates: s_b_top_32_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_33_0r), Operand(*ir_idx_temp_20));
    /* F s_b_read_gpr_b_top_33_40_3: Jump b_top_32 (const) */
    goto block_b_top_32;
  }
  block_b_top_41: 
  {
    /* F s_b_top_41_0: Free &write_gpr_b_top_43__Qscope_0x33bbb30value (8) */
    /* F s_b_top_41_1: Jump b_top_30 (const) */
    goto block_b_top_30;
  }
  block_b_write_gpr_b_top_43_42: 
  {
    /* F s_b_write_gpr_b_top_43_42_0: Jump b_top_41 (const) */
    goto block_b_top_41;
  }
  block_b_write_gpr_b_top_43_43: 
  {
    /* F s_b_write_gpr_b_top_43_43_0=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_write_gpr_b_top_43_43_1: If s_b_write_gpr_b_top_43_43_0: Jump b_write_gpr_b_top_43_44 else b_write_gpr_b_top_43_46 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_43_44;
    }
    else 
    {
      goto block_b_write_gpr_b_top_43_46;
    }
  }
  block_b_write_gpr_b_top_43_44: 
  {
    /* F s_b_write_gpr_b_top_43_44_0=top__Qscope_0x321e620inst->rd(const) */
    /* D s_b_write_gpr_b_top_43_44_1 = write_gpr_b_top_43__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_43_44_2: WriteRegBank 0:s_b_write_gpr_b_top_43_44_0 = s_b_write_gpr_b_top_43_44_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_43__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_43__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_43_44_3: Jump b_write_gpr_b_top_43_45 (const) */
    goto block_b_write_gpr_b_top_43_45;
  }
  block_b_write_gpr_b_top_43_45: 
  {
    /* F s_b_write_gpr_b_top_43_45_0: Jump b_top_41 (const) */
    goto block_b_top_41;
  }
  block_b_write_gpr_b_top_43_46: 
  {
    /* F s_b_write_gpr_b_top_43_46_0=top__Qscope_0x321e620inst->rd(const) */
    /* D s_b_write_gpr_b_top_43_46_1 = write_gpr_b_top_43__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_43_46_2 = (uint32)s_b_write_gpr_b_top_43_46_1 */
    Statement& s_b_write_gpr_b_top_43_46_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_43__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_43_46_3 = (uint64)s_b_write_gpr_b_top_43_46_2 */
    Statement& s_b_write_gpr_b_top_43_46_3 = builder.zx(Operand(s_b_write_gpr_b_top_43_46_2));
    /* D s_b_write_gpr_b_top_43_46_4: WriteRegBank 0:s_b_write_gpr_b_top_43_46_0 = s_b_write_gpr_b_top_43_46_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_43_46_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_43_46_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_43_46_5: Jump b_write_gpr_b_top_43_45 (const) */
    goto block_b_write_gpr_b_top_43_45;
  }
  block_b_top_47: 
  {
    /* F s_b_top_47_0=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_47_1=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_top_47_2: &read_gpr_b_top_52_0r = Alloc uint64 */
    /* F s_b_top_47_3: If s_b_top_47_0: Jump b_read_gpr_b_top_52_51 else b_read_gpr_b_top_52_52 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_52_51;
    }
    else 
    {
      goto block_b_read_gpr_b_top_52_52;
    }
  }
  block_b_top_48: 
  {
    /* F s_b_top_48_0=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_48_1=top__Qscope_0x321e620inst->rd(const) */
    /* D s_b_top_48_2 = top__Qscope_0x322b980value */
    /* F s_b_top_48_3 = (const uint8) 1f (const) */
    /* F s_b_top_48_4 = s_b_top_48_1==s_b_top_48_3 (const) */
    uint8 s_b_top_48_4 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_48_5: If s_b_top_48_4: Jump b_write_gpr_b_top_77_72 else b_write_gpr_b_top_77_73 (const) */
    if (s_b_top_48_4) 
    {
      goto block_b_write_gpr_b_top_77_72;
    }
    else 
    {
      goto block_b_write_gpr_b_top_77_73;
    }
  }
  block_b_top_49: 
  {
    /* F s_b_top_49_0: &top__Qscope_0x322e590bits = Alloc uint64 */
    /* F s_b_top_49_1=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_49_2=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_top_49_3: &read_gpr_b_top_63_0r = Alloc uint64 */
    /* F s_b_top_49_4: If s_b_top_49_1: Jump b_read_gpr_b_top_63_60 else b_read_gpr_b_top_63_61 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_63_60;
    }
    else 
    {
      goto block_b_read_gpr_b_top_63_61;
    }
  }
  block_b_top_50: 
  {
    /* D s_b_top_50_0 = read_gpr_b_top_52_0r */
    /* F s_b_top_50_1: Free &read_gpr_b_top_52_0r (8) */
    /* F s_b_top_50_2=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_50_3=top__Qscope_0x321e620inst->imms(const) */
    /* F s_b_top_50_4=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_50_5 = s_b_top_50_3-s_b_top_50_4 (const) */
    uint8 s_b_top_50_5 = ((uint8)(imms - immr));
    /* F s_b_top_50_6 = (const uint8) 1 (const) */
    /* F s_b_top_50_7 = s_b_top_50_5+s_b_top_50_6 (const) */
    uint8 s_b_top_50_7 = ((uint8)(s_b_top_50_5 + (uint8)1ULL));
    /* F s_b_top_50_8 = (uint64)s_b_top_50_2 (const) */
    /* D s_b_top_50_9 = s_b_top_50_0>>s_b_top_50_8 */
    Statement& s_b_top_50_9 = builder.shr(Operand(*ir_idx_read_gpr_b_top_52_0r), Operand(PrimitiveTypes.u64, ((uint64)immr)));
    /* F s_b_top_50_10 = (const uint8) 1 (const) */
    /* F s_b_top_50_11 = (uint64) 1 (const) */
    /* F s_b_top_50_12 = (uint64)s_b_top_50_7 (const) */
    /* F s_b_top_50_13 = s_b_top_50_11<<s_b_top_50_12 (const) */
    uint64 s_b_top_50_13 = ((uint64)((uint64)1ULL << ((uint64)s_b_top_50_7)));
    /* F s_b_top_50_14 = (const uint8) 1 (const) */
    /* F s_b_top_50_15 = (uint64) 1 (const) */
    /* F s_b_top_50_16 = s_b_top_50_13-s_b_top_50_15 (const) */
    uint64 s_b_top_50_16 = ((uint64)(s_b_top_50_13 - (uint64)1ULL));
    /* D s_b_top_50_17 = s_b_top_50_9&s_b_top_50_16 */
    Statement& s_b_top_50_17 = builder.band(Operand(s_b_top_50_9), Operand(PrimitiveTypes.u64, s_b_top_50_16));
    /* D s_b_top_50_18: top__Qscope_0x322b980value = s_b_top_50_17, dominates: s_b_top_48_2 s_b_write_gpr_b_top_77_74_1 s_b_write_gpr_b_top_77_76_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x322b980value), Operand(s_b_top_50_17));
    /* F s_b_top_50_19: Jump b_top_48 (const) */
    goto block_b_top_48;
  }
  block_b_read_gpr_b_top_52_51: 
  {
    /* F s_b_read_gpr_b_top_52_51_0=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_read_gpr_b_top_52_51_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_52_51_2 = s_b_read_gpr_b_top_52_51_0==s_b_read_gpr_b_top_52_51_1 (const) */
    uint8 s_b_read_gpr_b_top_52_51_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_52_51_3: &temp_28 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_52_51_4: If s_b_read_gpr_b_top_52_51_2: Jump b_read_gpr_b_top_52_53 else b_read_gpr_b_top_52_54 (const) */
    if (s_b_read_gpr_b_top_52_51_2) 
    {
      goto block_b_read_gpr_b_top_52_53;
    }
    else 
    {
      goto block_b_read_gpr_b_top_52_54;
    }
  }
  block_b_read_gpr_b_top_52_52: 
  {
    /* F s_b_read_gpr_b_top_52_52_0=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_read_gpr_b_top_52_52_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_52_52_2 = s_b_read_gpr_b_top_52_52_0==s_b_read_gpr_b_top_52_52_1 (const) */
    uint8 s_b_read_gpr_b_top_52_52_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_52_52_3: &temp_29 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_52_52_4: If s_b_read_gpr_b_top_52_52_2: Jump b_read_gpr_b_top_52_56 else b_read_gpr_b_top_52_57 (const) */
    if (s_b_read_gpr_b_top_52_52_2) 
    {
      goto block_b_read_gpr_b_top_52_56;
    }
    else 
    {
      goto block_b_read_gpr_b_top_52_57;
    }
  }
  block_b_read_gpr_b_top_52_53: 
  {
    /* F s_b_read_gpr_b_top_52_53_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_52_53_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_52_53_2: temp_28 = s_b_read_gpr_b_top_52_53_1 (const), dominates: s_b_read_gpr_b_top_52_55_0  */
    CV_temp_28 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_28), Operand(PrimitiveTypes.u8, CV_temp_28));
    /* F s_b_read_gpr_b_top_52_53_3: Jump b_read_gpr_b_top_52_55 (const) */
    goto block_b_read_gpr_b_top_52_55;
  }
  block_b_read_gpr_b_top_52_54: 
  {
    /* F s_b_read_gpr_b_top_52_54_0=top__Qscope_0x321e620inst->rn(const) */
    /* D s_b_read_gpr_b_top_52_54_1 = ReadRegBank 0:s_b_read_gpr_b_top_52_54_0 (uint64) */
    Statement& s_b_read_gpr_b_top_52_54_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_52_54_1));
    }
    /* D s_b_read_gpr_b_top_52_54_2 = (uint64)s_b_read_gpr_b_top_52_54_1 */
    Statement& s_b_read_gpr_b_top_52_54_2 = s_b_read_gpr_b_top_52_54_1;
    /* D s_b_read_gpr_b_top_52_54_3: temp_28 = s_b_read_gpr_b_top_52_54_2, dominates: s_b_read_gpr_b_top_52_55_0  */
    builder.store(Operand(*ir_idx_temp_28), Operand(s_b_read_gpr_b_top_52_54_2));
    /* F s_b_read_gpr_b_top_52_54_4: Jump b_read_gpr_b_top_52_55 (const) */
    goto block_b_read_gpr_b_top_52_55;
  }
  block_b_read_gpr_b_top_52_55: 
  {
    /* D s_b_read_gpr_b_top_52_55_0 = temp_28 */
    /* F s_b_read_gpr_b_top_52_55_1: Free &temp_28 (8) */
    /* D s_b_read_gpr_b_top_52_55_2: read_gpr_b_top_52_0r = s_b_read_gpr_b_top_52_55_0, dominates: s_b_top_50_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_52_0r), Operand(*ir_idx_temp_28));
    /* F s_b_read_gpr_b_top_52_55_3: Jump b_top_50 (const) */
    goto block_b_top_50;
  }
  block_b_read_gpr_b_top_52_56: 
  {
    /* F s_b_read_gpr_b_top_52_56_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_52_56_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_52_56_2: temp_29 = s_b_read_gpr_b_top_52_56_1 (const), dominates: s_b_read_gpr_b_top_52_58_0  */
    CV_temp_29 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_29), Operand(PrimitiveTypes.u8, CV_temp_29));
    /* F s_b_read_gpr_b_top_52_56_3: Jump b_read_gpr_b_top_52_58 (const) */
    goto block_b_read_gpr_b_top_52_58;
  }
  block_b_read_gpr_b_top_52_57: 
  {
    /* F s_b_read_gpr_b_top_52_57_0=top__Qscope_0x321e620inst->rn(const) */
    /* D s_b_read_gpr_b_top_52_57_1 = ReadRegBank 1:s_b_read_gpr_b_top_52_57_0 (uint32) */
    Statement& s_b_read_gpr_b_top_52_57_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_52_57_1));
    }
    /* D s_b_read_gpr_b_top_52_57_2 = (uint64)s_b_read_gpr_b_top_52_57_1 */
    Statement& s_b_read_gpr_b_top_52_57_2 = builder.zx(Operand(s_b_read_gpr_b_top_52_57_1));
    /* D s_b_read_gpr_b_top_52_57_3: temp_29 = s_b_read_gpr_b_top_52_57_2, dominates: s_b_read_gpr_b_top_52_58_0  */
    builder.store(Operand(*ir_idx_temp_29), Operand(s_b_read_gpr_b_top_52_57_2));
    /* F s_b_read_gpr_b_top_52_57_4: Jump b_read_gpr_b_top_52_58 (const) */
    goto block_b_read_gpr_b_top_52_58;
  }
  block_b_read_gpr_b_top_52_58: 
  {
    /* D s_b_read_gpr_b_top_52_58_0 = temp_29 */
    /* F s_b_read_gpr_b_top_52_58_1: Free &temp_29 (8) */
    /* D s_b_read_gpr_b_top_52_58_2: read_gpr_b_top_52_0r = s_b_read_gpr_b_top_52_58_0, dominates: s_b_top_50_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_52_0r), Operand(*ir_idx_temp_29));
    /* F s_b_read_gpr_b_top_52_58_3: Jump b_top_50 (const) */
    goto block_b_top_50;
  }
  block_b_top_59: 
  {
    /* D s_b_top_59_0 = read_gpr_b_top_63_0r */
    /* F s_b_top_59_1: Free &read_gpr_b_top_63_0r (8) */
    /* F s_b_top_59_2 = (const uint8) 0 (const) */
    /* F s_b_top_59_3=top__Qscope_0x321e620inst->imms(const) */
    /* F s_b_top_59_4 = (uint8)s_b_top_59_3 (const) */
    /* F s_b_top_59_5 = (const uint8) 1 (const) */
    /* F s_b_top_59_6 = (uint8) 1 (const) */
    /* F s_b_top_59_7 = s_b_top_59_4+s_b_top_59_6 (const) */
    uint8 s_b_top_59_7 = ((uint8)(((uint8)imms) + (uint8)1ULL));
    /* F s_b_top_59_8 = (uint64) 0 (const) */
    /* D s_b_top_59_9 = s_b_top_59_0>>s_b_top_59_8 */
    Statement& s_b_top_59_9 = builder.shr(Operand(*ir_idx_read_gpr_b_top_63_0r), Operand(PrimitiveTypes.u64, (uint64)0ULL));
    /* F s_b_top_59_10 = (const uint8) 1 (const) */
    /* F s_b_top_59_11 = (uint64) 1 (const) */
    /* F s_b_top_59_12 = (uint64)s_b_top_59_7 (const) */
    /* F s_b_top_59_13 = s_b_top_59_11<<s_b_top_59_12 (const) */
    uint64 s_b_top_59_13 = ((uint64)((uint64)1ULL << ((uint64)s_b_top_59_7)));
    /* F s_b_top_59_14 = (const uint8) 1 (const) */
    /* F s_b_top_59_15 = (uint64) 1 (const) */
    /* F s_b_top_59_16 = s_b_top_59_13-s_b_top_59_15 (const) */
    uint64 s_b_top_59_16 = ((uint64)(s_b_top_59_13 - (uint64)1ULL));
    /* D s_b_top_59_17 = s_b_top_59_9&s_b_top_59_16 */
    Statement& s_b_top_59_17 = builder.band(Operand(s_b_top_59_9), Operand(PrimitiveTypes.u64, s_b_top_59_16));
    /* D s_b_top_59_18: top__Qscope_0x322e590bits = s_b_top_59_17, dominates: s_b_top_68_0 s_b_top_70_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x322e590bits), Operand(s_b_top_59_17));
    /* F s_b_top_59_19=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_top_59_20: If s_b_top_59_19: Jump b_top_68 else b_top_70 (const) */
    if (sf) 
    {
      goto block_b_top_68;
    }
    else 
    {
      goto block_b_top_70;
    }
  }
  block_b_read_gpr_b_top_63_60: 
  {
    /* F s_b_read_gpr_b_top_63_60_0=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_read_gpr_b_top_63_60_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_63_60_2 = s_b_read_gpr_b_top_63_60_0==s_b_read_gpr_b_top_63_60_1 (const) */
    uint8 s_b_read_gpr_b_top_63_60_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_63_60_3: &temp_38 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_63_60_4: If s_b_read_gpr_b_top_63_60_2: Jump b_read_gpr_b_top_63_62 else b_read_gpr_b_top_63_63 (const) */
    if (s_b_read_gpr_b_top_63_60_2) 
    {
      goto block_b_read_gpr_b_top_63_62;
    }
    else 
    {
      goto block_b_read_gpr_b_top_63_63;
    }
  }
  block_b_read_gpr_b_top_63_61: 
  {
    /* F s_b_read_gpr_b_top_63_61_0=top__Qscope_0x321e620inst->rn(const) */
    /* F s_b_read_gpr_b_top_63_61_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_63_61_2 = s_b_read_gpr_b_top_63_61_0==s_b_read_gpr_b_top_63_61_1 (const) */
    uint8 s_b_read_gpr_b_top_63_61_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_63_61_3: &temp_39 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_63_61_4: If s_b_read_gpr_b_top_63_61_2: Jump b_read_gpr_b_top_63_65 else b_read_gpr_b_top_63_66 (const) */
    if (s_b_read_gpr_b_top_63_61_2) 
    {
      goto block_b_read_gpr_b_top_63_65;
    }
    else 
    {
      goto block_b_read_gpr_b_top_63_66;
    }
  }
  block_b_read_gpr_b_top_63_62: 
  {
    /* F s_b_read_gpr_b_top_63_62_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_63_62_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_63_62_2: temp_38 = s_b_read_gpr_b_top_63_62_1 (const), dominates: s_b_read_gpr_b_top_63_64_0  */
    CV_temp_38 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_38), Operand(PrimitiveTypes.u8, CV_temp_38));
    /* F s_b_read_gpr_b_top_63_62_3: Jump b_read_gpr_b_top_63_64 (const) */
    goto block_b_read_gpr_b_top_63_64;
  }
  block_b_read_gpr_b_top_63_63: 
  {
    /* F s_b_read_gpr_b_top_63_63_0=top__Qscope_0x321e620inst->rn(const) */
    /* D s_b_read_gpr_b_top_63_63_1 = ReadRegBank 0:s_b_read_gpr_b_top_63_63_0 (uint64) */
    Statement& s_b_read_gpr_b_top_63_63_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_63_63_1));
    }
    /* D s_b_read_gpr_b_top_63_63_2 = (uint64)s_b_read_gpr_b_top_63_63_1 */
    Statement& s_b_read_gpr_b_top_63_63_2 = s_b_read_gpr_b_top_63_63_1;
    /* D s_b_read_gpr_b_top_63_63_3: temp_38 = s_b_read_gpr_b_top_63_63_2, dominates: s_b_read_gpr_b_top_63_64_0  */
    builder.store(Operand(*ir_idx_temp_38), Operand(s_b_read_gpr_b_top_63_63_2));
    /* F s_b_read_gpr_b_top_63_63_4: Jump b_read_gpr_b_top_63_64 (const) */
    goto block_b_read_gpr_b_top_63_64;
  }
  block_b_read_gpr_b_top_63_64: 
  {
    /* D s_b_read_gpr_b_top_63_64_0 = temp_38 */
    /* F s_b_read_gpr_b_top_63_64_1: Free &temp_38 (8) */
    /* D s_b_read_gpr_b_top_63_64_2: read_gpr_b_top_63_0r = s_b_read_gpr_b_top_63_64_0, dominates: s_b_top_59_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_63_0r), Operand(*ir_idx_temp_38));
    /* F s_b_read_gpr_b_top_63_64_3: Jump b_top_59 (const) */
    goto block_b_top_59;
  }
  block_b_read_gpr_b_top_63_65: 
  {
    /* F s_b_read_gpr_b_top_63_65_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_63_65_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_63_65_2: temp_39 = s_b_read_gpr_b_top_63_65_1 (const), dominates: s_b_read_gpr_b_top_63_67_0  */
    CV_temp_39 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_39), Operand(PrimitiveTypes.u8, CV_temp_39));
    /* F s_b_read_gpr_b_top_63_65_3: Jump b_read_gpr_b_top_63_67 (const) */
    goto block_b_read_gpr_b_top_63_67;
  }
  block_b_read_gpr_b_top_63_66: 
  {
    /* F s_b_read_gpr_b_top_63_66_0=top__Qscope_0x321e620inst->rn(const) */
    /* D s_b_read_gpr_b_top_63_66_1 = ReadRegBank 1:s_b_read_gpr_b_top_63_66_0 (uint32) */
    Statement& s_b_read_gpr_b_top_63_66_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_63_66_1));
    }
    /* D s_b_read_gpr_b_top_63_66_2 = (uint64)s_b_read_gpr_b_top_63_66_1 */
    Statement& s_b_read_gpr_b_top_63_66_2 = builder.zx(Operand(s_b_read_gpr_b_top_63_66_1));
    /* D s_b_read_gpr_b_top_63_66_3: temp_39 = s_b_read_gpr_b_top_63_66_2, dominates: s_b_read_gpr_b_top_63_67_0  */
    builder.store(Operand(*ir_idx_temp_39), Operand(s_b_read_gpr_b_top_63_66_2));
    /* F s_b_read_gpr_b_top_63_66_4: Jump b_read_gpr_b_top_63_67 (const) */
    goto block_b_read_gpr_b_top_63_67;
  }
  block_b_read_gpr_b_top_63_67: 
  {
    /* D s_b_read_gpr_b_top_63_67_0 = temp_39 */
    /* F s_b_read_gpr_b_top_63_67_1: Free &temp_39 (8) */
    /* D s_b_read_gpr_b_top_63_67_2: read_gpr_b_top_63_0r = s_b_read_gpr_b_top_63_67_0, dominates: s_b_top_59_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_63_0r), Operand(*ir_idx_temp_39));
    /* F s_b_read_gpr_b_top_63_67_3: Jump b_top_59 (const) */
    goto block_b_top_59;
  }
  block_b_top_68: 
  {
    /* D s_b_top_68_0 = top__Qscope_0x322e590bits */
    /* D s_b_top_68_1 = (uint64)s_b_top_68_0 */
    Statement& s_b_top_68_1 = *ir_idx_top__Qscope_0x322e590bits;
    /* F s_b_top_68_2 = (const uint8) 40 (const) */
    /* F s_b_top_68_3 = (uint8) 40 (const) */
    /* F s_b_top_68_4=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_68_5 = (uint8)s_b_top_68_4 (const) */
    /* F s_b_top_68_6 = s_b_top_68_3-s_b_top_68_5 (const) */
    uint8 s_b_top_68_6 = ((uint8)((uint8)64ULL - ((uint8)immr)));
    /* F s_b_top_68_7 = (uint64)s_b_top_68_6 (const) */
    /* D s_b_top_68_8 = s_b_top_68_1<<s_b_top_68_7 */
    Statement& s_b_top_68_8 = builder.shl(Operand(s_b_top_68_1), Operand(PrimitiveTypes.u64, ((uint64)s_b_top_68_6)));
    /* D s_b_top_68_9: top__Qscope_0x322b980value = s_b_top_68_8, dominates: s_b_top_48_2 s_b_write_gpr_b_top_77_74_1 s_b_write_gpr_b_top_77_76_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x322b980value), Operand(s_b_top_68_8));
    /* F s_b_top_68_10: Jump b_top_69 (const) */
    goto block_b_top_69;
  }
  block_b_top_69: 
  {
    /* F s_b_top_69_0: Free &top__Qscope_0x322e590bits (8) */
    /* F s_b_top_69_1: Jump b_top_48 (const) */
    goto block_b_top_48;
  }
  block_b_top_70: 
  {
    /* D s_b_top_70_0 = top__Qscope_0x322e590bits */
    /* D s_b_top_70_1 = (uint64)s_b_top_70_0 */
    Statement& s_b_top_70_1 = *ir_idx_top__Qscope_0x322e590bits;
    /* F s_b_top_70_2 = (const uint8) 20 (const) */
    /* F s_b_top_70_3 = (uint8) 20 (const) */
    /* F s_b_top_70_4=top__Qscope_0x321e620inst->immr(const) */
    /* F s_b_top_70_5 = (uint8)s_b_top_70_4 (const) */
    /* F s_b_top_70_6 = s_b_top_70_3-s_b_top_70_5 (const) */
    uint8 s_b_top_70_6 = ((uint8)((uint8)32ULL - ((uint8)immr)));
    /* F s_b_top_70_7 = (uint64)s_b_top_70_6 (const) */
    /* D s_b_top_70_8 = s_b_top_70_1<<s_b_top_70_7 */
    Statement& s_b_top_70_8 = builder.shl(Operand(s_b_top_70_1), Operand(PrimitiveTypes.u64, ((uint64)s_b_top_70_6)));
    /* D s_b_top_70_9: top__Qscope_0x322b980value = s_b_top_70_8, dominates: s_b_top_48_2 s_b_write_gpr_b_top_77_74_1 s_b_write_gpr_b_top_77_76_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x322b980value), Operand(s_b_top_70_8));
    /* F s_b_top_70_10: Jump b_top_69 (const) */
    goto block_b_top_69;
  }
  block_b_top_71: 
  {
    /* F s_b_top_71_0: Free &top__Qscope_0x322b980value (8) */
    /* F s_b_top_71_1: Jump b_top_30 (const) */
    goto block_b_top_30;
  }
  block_b_write_gpr_b_top_77_72: 
  {
    /* F s_b_write_gpr_b_top_77_72_0: Jump b_top_71 (const) */
    goto block_b_top_71;
  }
  block_b_write_gpr_b_top_77_73: 
  {
    /* F s_b_write_gpr_b_top_77_73_0=top__Qscope_0x321e620inst->sf(const) */
    /* F s_b_write_gpr_b_top_77_73_1: If s_b_write_gpr_b_top_77_73_0: Jump b_write_gpr_b_top_77_74 else b_write_gpr_b_top_77_76 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_77_74;
    }
    else 
    {
      goto block_b_write_gpr_b_top_77_76;
    }
  }
  block_b_write_gpr_b_top_77_74: 
  {
    /* F s_b_write_gpr_b_top_77_74_0=top__Qscope_0x321e620inst->rd(const) */
    /* D s_b_write_gpr_b_top_77_74_1 = top__Qscope_0x322b980value */
    /* D s_b_write_gpr_b_top_77_74_2: WriteRegBank 0:s_b_write_gpr_b_top_77_74_0 = s_b_write_gpr_b_top_77_74_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_top__Qscope_0x322b980value));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x322b980value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_77_74_3: Jump b_write_gpr_b_top_77_75 (const) */
    goto block_b_write_gpr_b_top_77_75;
  }
  block_b_write_gpr_b_top_77_75: 
  {
    /* F s_b_write_gpr_b_top_77_75_0: Jump b_top_71 (const) */
    goto block_b_top_71;
  }
  block_b_write_gpr_b_top_77_76: 
  {
    /* F s_b_write_gpr_b_top_77_76_0=top__Qscope_0x321e620inst->rd(const) */
    /* D s_b_write_gpr_b_top_77_76_1 = top__Qscope_0x322b980value */
    /* D s_b_write_gpr_b_top_77_76_2 = (uint32)s_b_write_gpr_b_top_77_76_1 */
    Statement& s_b_write_gpr_b_top_77_76_2 = builder.trunc(Operand(*ir_idx_top__Qscope_0x322b980value));
    /* D s_b_write_gpr_b_top_77_76_3 = (uint64)s_b_write_gpr_b_top_77_76_2 */
    Statement& s_b_write_gpr_b_top_77_76_3 = builder.zx(Operand(s_b_write_gpr_b_top_77_76_2));
    /* D s_b_write_gpr_b_top_77_76_4: WriteRegBank 0:s_b_write_gpr_b_top_77_76_0 = s_b_write_gpr_b_top_77_76_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_77_76_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_77_76_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_77_76_5: Jump b_write_gpr_b_top_77_75 (const) */
    goto block_b_write_gpr_b_top_77_75;
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
